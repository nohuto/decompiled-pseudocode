/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@@std@@XZ @ 0x1801A2634
 * Callers:
 *     ?data@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchFullActivationTest@@@2@XZ @ 0x18019C174 (-data@-$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchFu.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1801A168C (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     ?watch_errors@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA?AV?$test_watcher@U_tip_SearchFullActivationTest@@@2@XZ @ 0x1801A3430 (-watch_errors@-$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA-AV-$test_watcher@U_tip_Searc.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@@std@@QEAA@XZ @ 0x1801986D4 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@@st.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_SearchFullActivationTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xE8uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_SearchFullActivationTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_SearchFullActivationTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
