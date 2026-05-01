/*
 * XREFs of api_alchemy_config::_anonymous_namespace_::specifiers::specifiers_0 @ 0x1806E1524
 * Callers:
 *     api_alchemy_config::_anonymous_namespace_::GetSpecsForID @ 0x1806E28C0 (api_alchemy_config--_anonymous_namespace_--GetSpecsForID.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x1801AF188 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??$_Emplace@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV12@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@_N@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x1806E0800 (--$_Emplace@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV12@@-$_Tree@V-$.c)
 *     ?safeSplitPair@stringutils@@YA?AV?$optional@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1806E47A4 (-safeSplitPair@stringutils@@YA-AV-$optional@U-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?split@stringutils@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1806E4BF8 (-split@stringutils@@YA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall api_alchemy_config::_anonymous_namespace_::specifiers::specifiers_0(__int64 a1, __int64 a2)
{
  __int128 *v4; // rdi
  __int64 *v5; // r14
  _QWORD *v6; // rax
  _WORD *v7; // rdx
  char v8; // al
  __int64 v9; // rdi
  __int64 v10; // rsi
  char v11; // al
  __int128 v13; // [rsp+20h] [rbp-E0h] BYREF
  __m128i si128; // [rsp+30h] [rbp-D0h]
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  __m128i v16; // [rsp+50h] [rbp-B0h]
  char v17; // [rsp+60h] [rbp-A0h]
  _QWORD v18[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v19[4]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v20[32]; // [rsp+B0h] [rbp-50h] BYREF
  char v21; // [rsp+D0h] [rbp-30h]
  __int64 v22; // [rsp+E0h] [rbp-20h]
  char v23[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v24[32]; // [rsp+110h] [rbp+10h] BYREF
  char v25; // [rsp+130h] [rbp+30h]
  __int64 v26; // [rsp+140h] [rbp+40h]
  _QWORD v27[4]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v28[4]; // [rsp+168h] [rbp+68h] BYREF

  v22 = a1;
  v26 = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  v4 = (__int128 *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_WORD *)(a1 + 32) = 0;
  v5 = (__int64 *)(a1 + 64);
  v27[0] = a1 + 64;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *v5 = (__int64)v6;
  stringutils::safeSplitPair(v19, a2, 59LL);
  if ( v21 )
  {
    v7 = v19;
    if ( v19[3] >= 8uLL )
      v7 = (_WORD *)v19[0];
    std::wstring::wstring(v27, v7);
    stringutils::safeSplitPair(&v13, v27, 44LL);
    std::wstring::_Tidy_deallocate((__int64)v27);
    v8 = v17;
    if ( v17 )
    {
      if ( (__int128 *)a1 != &v13 )
      {
        std::wstring::_Tidy_deallocate(a1);
        *(_OWORD *)a1 = v13;
        *(__m128i *)(a1 + 16) = si128;
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        LOWORD(v13) = 0;
        v8 = v17;
      }
      if ( !v8 )
        goto LABEL_24;
      if ( v4 != &v15 )
      {
        std::wstring::_Tidy_deallocate((__int64)v4);
        *v4 = v15;
        v4[1] = (__int128)v16;
        v16 = _mm_load_si128((const __m128i *)&_xmm);
        LOWORD(v15) = 0;
      }
      if ( !v21 )
LABEL_24:
        std::_Throw_bad_optional_access();
      stringutils::split(v18, v20, 44LL);
      v9 = v18[0];
      v10 = v18[1];
      while ( v9 != v10 )
      {
        std::wstring::wstring(v28, v9);
        stringutils::safeSplitPair(v23, v28, 58LL);
        v11 = v25;
        if ( v25 )
        {
          std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Emplace<std::wstring &,std::wstring &>(
            v5,
            (__int64)v27,
            v23,
            (__int64)v24);
          v11 = v25;
        }
        if ( v11 )
        {
          std::wstring::_Tidy_deallocate((__int64)v24);
          std::wstring::_Tidy_deallocate((__int64)v23);
        }
        std::wstring::_Tidy_deallocate((__int64)v28);
        v9 += 32LL;
      }
      std::vector<std::wstring>::_Tidy((__int64)v18);
      v8 = v17;
    }
    if ( v8 )
    {
      std::wstring::_Tidy_deallocate((__int64)&v15);
      std::wstring::_Tidy_deallocate((__int64)&v13);
    }
  }
  if ( v21 )
  {
    std::wstring::_Tidy_deallocate((__int64)v20);
    std::wstring::_Tidy_deallocate((__int64)v19);
  }
  std::wstring::_Tidy_deallocate(a2);
  return a1;
}
