/*
 * XREFs of ??$transform_primary@PEBG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEBG0@Z @ 0x18014EB6C
 * Callers:
 *     ?_Add_equiv@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z @ 0x1801501D0 (-_Add_equiv@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180022CC4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0PEBG$0A@@?$vector@GV?$allocator@G@std@@@std@@QEAA@PEBG0AEBV?$allocator@G@1@@Z @ 0x18014DF48 (--$-0PEBG$0A@@-$vector@GV-$allocator@G@std@@@std@@QEAA@PEBG0AEBV-$allocator@G@1@@Z.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x180150858 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Regex_traits<unsigned short>::transform_primary<unsigned short const *>(
        _QWORD *a1,
        __int64 a2,
        const void *a3,
        __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int128 v8; // xmm0
  __m128i v9; // xmm1
  __int64 v11[3]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v12; // [rsp+48h] [rbp-50h] BYREF
  __m128i si128; // [rsp+58h] [rbp-40h]

  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( a3 != (const void *)a4 )
  {
    std::vector<unsigned short>::vector<unsigned short>(v11, a3, a4);
    v6 = v11[0];
    v7 = v11[0] + 2 * ((v11[1] - v11[0]) >> 1);
    std::ctype<unsigned short>::tolower(a1[1], v11[0], v7);
    (*(void (__fastcall **)(_QWORD, __int128 *, __int64, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, &v12, v6, v7);
    if ( (__int128 *)a2 != &v12 )
    {
      std::wstring::_Tidy_deallocate(a2);
      v8 = v12;
      LOWORD(v12) = 0;
      v9 = si128;
      *(_OWORD *)a2 = v8;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      *(__m128i *)(a2 + 16) = v9;
    }
    std::wstring::_Tidy_deallocate((__int64)&v12);
    std::vector<unsigned short>::_Tidy(v11);
  }
  return a2;
}
