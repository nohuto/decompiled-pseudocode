/*
 * XREFs of ??$assign@V?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@V?$istreambuf_iterator@GU?$char_traits@G@std@@@1@0@Z @ 0x1806E0B6C
 * Callers:
 *     ?ReadFileToString@stringutils@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x1806E3388 (-ReadFileToString@stringutils@@YA-AV-$optional@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$_Construct@V?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$istreambuf_iterator@GU?$char_traits@G@std@@@1@V21@Uinput_iterator_tag@1@@Z @ 0x1806E0744 (--$_Construct@V-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@-$basic_string@GU-$char_trait.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall std::wstring::assign<std::istreambuf_iterator<unsigned short>,0>(char *a1, __int128 *a2, __int128 *a3)
{
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  void **v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-50h] BYREF
  __int128 v9; // [rsp+30h] [rbp-40h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h]

  Src[0] = 0LL;
  *(_QWORD *)&v11 = 0LL;
  *((_QWORD *)&v11 + 1) = 7LL;
  v8 = *a3;
  v9 = *a2;
  std::wstring::_Construct<std::istreambuf_iterator<unsigned short>>(Src, (__int64)&v9, (__int64)&v8);
  if ( *((_QWORD *)a1 + 3) >= *((_QWORD *)&v11 + 1) )
  {
    v6 = Src;
    if ( *((_QWORD *)&v11 + 1) >= 8uLL )
      v6 = (void **)Src[0];
    a1 = std::wstring::assign(a1, v6, v11);
  }
  else
  {
    v4 = *(_OWORD *)a1;
    v5 = *((_OWORD *)a1 + 1);
    *(_OWORD *)a1 = *(_OWORD *)Src;
    *((_OWORD *)a1 + 1) = v11;
    *(_OWORD *)Src = v4;
    v11 = v5;
  }
  std::wstring::_Tidy_deallocate((__int64)Src);
  return a1;
}
