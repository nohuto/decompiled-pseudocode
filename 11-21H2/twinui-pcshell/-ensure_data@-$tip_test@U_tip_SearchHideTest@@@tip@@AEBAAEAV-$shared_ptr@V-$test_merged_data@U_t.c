/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_SearchHideTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SearchHideTest@@@details@tip@@@std@@XZ @ 0x1801A2680
 * Callers:
 *     ?data@?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchHideTest@@@2@XZ @ 0x18019C1A0 (-data@-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchHideTest@@@2.c)
 *     ?StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x1801A1900 (-StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z.c)
 *     ?watch_errors@?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA?AV?$test_watcher@U_tip_SearchHideTest@@@2@XZ @ 0x1801A3488 (-watch_errors@-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA-AV-$test_watcher@U_tip_SearchHideTest@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_SearchHideTest@@@details@tip@@@std@@QEAA@XZ @ 0x1801987A0 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_SearchHideTest@@@details@tip@@@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_SearchHideTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xC8uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_SearchHideTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_SearchHideTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
