/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_WinXMenuEnumerationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@@std@@XZ @ 0x1801E7EB8
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_WinXMenuEnumerationTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_WinXMenuEnumerationTest@@@0@XZ @ 0x1801D7310 (--$start_and_watch_errors@V-$tip_test@U_tip_WinXMenuEnumerationTest@@@tip@@@tip@@YA-AV-$test_wat.c)
 *     ??C?$tip_test@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA?AV?$test_data_control@U_tip_WinXMenuEnumerationTest@@@1@XZ @ 0x1801D78C4 (--C-$tip_test@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA-AV-$test_data_control@U_tip_WinXMenuEnum.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@@std@@QEAA@XZ @ 0x1801D6C40 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@@std.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_WinXMenuEnumerationTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xB0uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_WinXMenuEnumerationTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_WinXMenuEnumerationTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
