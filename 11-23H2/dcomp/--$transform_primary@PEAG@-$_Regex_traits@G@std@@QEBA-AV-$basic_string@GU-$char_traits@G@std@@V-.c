/*
 * XREFs of ??$transform_primary@PEAG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEAG0@Z @ 0x18014EA40
 * Callers:
 *     ?_Add_equiv@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z @ 0x1801501D0 (-_Add_equiv@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180022CC4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Construct_n@PEAGPEAG@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K$$QEAPEAG1@Z @ 0x18014E410 (--$_Construct_n@PEAGPEAG@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K$$QEAPEAG1@Z.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x180150858 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Regex_traits<unsigned short>::transform_primary<unsigned short *>(
        _QWORD *a1,
        __int64 a2,
        _BYTE *a3,
        _BYTE *a4)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int128 v8; // xmm0
  __m128i v9; // xmm1
  _BYTE *v11; // [rsp+30h] [rbp-29h] BYREF
  const void *v12; // [rsp+38h] [rbp-21h] BYREF
  __int128 v13; // [rsp+40h] [rbp-19h] BYREF
  __int64 v14; // [rsp+50h] [rbp-9h]
  __int128 v15; // [rsp+58h] [rbp-1h] BYREF
  __m128i si128; // [rsp+68h] [rbp+Fh]

  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( a3 != a4 )
  {
    v11 = a4;
    v12 = a3;
    v14 = 0LL;
    v13 = 0LL;
    std::vector<unsigned short>::_Construct_n<unsigned short *,unsigned short *>(
      (void **)&v13,
      (a4 - a3) >> 1,
      &v12,
      &v11);
    v6 = v13;
    v7 = v13 + 2 * ((__int64)(*((_QWORD *)&v13 + 1) - v13) >> 1);
    std::ctype<unsigned short>::tolower(a1[1], v13, v7);
    (*(void (__fastcall **)(_QWORD, __int128 *, __int64, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, &v15, v6, v7);
    if ( (__int128 *)a2 != &v15 )
    {
      std::wstring::_Tidy_deallocate(a2);
      v8 = v15;
      LOWORD(v15) = 0;
      v9 = si128;
      *(_OWORD *)a2 = v8;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      *(__m128i *)(a2 + 16) = v9;
    }
    std::wstring::_Tidy_deallocate((__int64)&v15);
    std::vector<unsigned short>::_Tidy(&v13);
  }
  return a2;
}
