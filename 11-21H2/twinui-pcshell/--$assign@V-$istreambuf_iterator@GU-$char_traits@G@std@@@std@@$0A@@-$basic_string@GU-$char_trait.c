/*
 * XREFs of ??$assign@V?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@V?$istreambuf_iterator@GU?$char_traits@G@std@@@1@0@Z @ 0x1805DCC9C
 * Callers:
 *     ?ReadFileToString@stringutils@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x1805DDE68 (-ReadFileToString@stringutils@@YA-AV-$optional@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$_Construct@V?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$istreambuf_iterator@GU?$char_traits@G@std@@@1@V21@Uinput_iterator_tag@1@@Z @ 0x1805DCAFC (--$_Construct@V-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@-$basic_string@GU-$char_trait.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall std::wstring::assign<std::istreambuf_iterator<unsigned short>,0>(char *a1, __int128 *a2, __int128 *a3)
{
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __int128 *v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-50h] BYREF
  __int128 v9; // [rsp+30h] [rbp-40h] BYREF
  __int128 v10; // [rsp+40h] [rbp-30h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h]

  *(_QWORD *)&v11 = 0LL;
  *((_QWORD *)&v11 + 1) = 7LL;
  LOWORD(v10) = 0;
  v8 = *a3;
  v9 = *a2;
  std::wstring::_Construct<std::istreambuf_iterator<unsigned short>>((void **)&v10, (__int64 *)&v9, (__int64)&v8);
  if ( *((_QWORD *)a1 + 3) >= *((_QWORD *)&v11 + 1) )
  {
    v6 = &v10;
    if ( *((_QWORD *)&v11 + 1) >= 8uLL )
      v6 = (__int128 *)v10;
    a1 = std::wstring::assign(a1, v6, v11);
  }
  else
  {
    v4 = *(_OWORD *)a1;
    v5 = *((_OWORD *)a1 + 1);
    *(_OWORD *)a1 = v10;
    *((_OWORD *)a1 + 1) = v11;
    v10 = v4;
    v11 = v5;
  }
  std::wstring::_Tidy_deallocate((__int64)&v10);
  return a1;
}
