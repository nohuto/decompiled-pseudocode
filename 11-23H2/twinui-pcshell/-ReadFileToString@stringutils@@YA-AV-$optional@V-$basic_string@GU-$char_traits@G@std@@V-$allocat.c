/*
 * XREFs of ?ReadFileToString@stringutils@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x1806E3388
 * Callers:
 *     api_alchemy_config::_anonymous_namespace_::GetDataForID @ 0x1806E2584 (api_alchemy_config--_anonymous_namespace_--GetDataForID.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?reserve@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x18044A5B0 (-reserve@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 *     ??$assign@V?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@V?$istreambuf_iterator@GU?$char_traits@G@std@@@1@0@Z @ 0x1806E0B6C (--$assign@V-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_trait.c)
 *     ??0?$basic_ifstream@GU?$char_traits@G@std@@@std@@QEAA@PEBGHH@Z @ 0x1806E1274 (--0-$basic_ifstream@GU-$char_traits@G@std@@@std@@QEAA@PEBGHH@Z.c)
 *     ??1?$basic_ifstream@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1806E1988 (--1-$basic_ifstream@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall stringutils::ReadFileToString(__int64 a1, const unsigned __int16 *a2)
{
  _QWORD *v3; // rax
  __int128 v5; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v6[3]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v7[22]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v8[96]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v9; // [rsp+180h] [rbp+80h] BYREF
  __m128i si128; // [rsp+190h] [rbp+90h]

  *(_QWORD *)&v5 = a1;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    a2 = *(const unsigned __int16 **)a2;
  std::basic_ifstream<unsigned short>::basic_ifstream<unsigned short>(v7, a2);
  *(_QWORD *)((char *)v7 + *(int *)(v7[0] + 4LL)) = &std::basic_ifstream<unsigned short>::`vftable';
  *(_DWORD *)((char *)&v6[2] + *(int *)(v7[0] + 4LL) + 12) = *(_DWORD *)(v7[0] + 4LL) - 176;
  if ( std::ios_base::fail((std::ios_base *)((char *)v7 + *(int *)(v7[0] + 4LL))) )
  {
    *(_BYTE *)(a1 + 32) = 0;
  }
  else
  {
    *(_QWORD *)&v9 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    std::basic_istream<unsigned short>::seekg(v7, 0LL, 2LL);
    v3 = (_QWORD *)std::basic_istream<unsigned short>::tellg(v7, v6);
    std::wstring::reserve((void **)&v9, *v3 + v3[1]);
    std::basic_istream<unsigned short>::seekg(v7, 0LL, 0LL);
    *(_QWORD *)&v5 = 0LL;
    BYTE8(v5) = 1;
    WORD5(v5) = 0;
    *(_QWORD *)&v6[0] = std::basic_ios<unsigned short>::rdbuf((char *)v7 + *(int *)(v7[0] + 4LL));
    BYTE8(v6[0]) = *(_QWORD *)&v6[0] == 0LL;
    WORD5(v6[0]) = 0;
    std::wstring::assign<std::istreambuf_iterator<unsigned short>,0>((char *)&v9, v6, &v5);
    *(_OWORD *)a1 = v9;
    *(__m128i *)(a1 + 16) = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v9) = 0;
    *(_BYTE *)(a1 + 32) = 1;
    std::wstring::_Tidy_deallocate((__int64)&v9);
  }
  std::basic_ifstream<unsigned short>::~basic_ifstream<unsigned short,std::char_traits<unsigned short>>((__int64)v8);
  std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v8);
  return a1;
}
