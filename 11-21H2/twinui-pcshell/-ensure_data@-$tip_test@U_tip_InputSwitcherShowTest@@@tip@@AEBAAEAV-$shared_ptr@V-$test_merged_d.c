/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_InputSwitcherShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputSwitcherShowTest@@@details@tip@@@std@@XZ @ 0x1805E28D0
 * Callers:
 *     ??R_lambda_26f44cd4480ca991a21fc760d40b2af7_@@QEBAXXZ @ 0x180038A64 (--R_lambda_26f44cd4480ca991a21fc760d40b2af7_@@QEBAXXZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_InputSwitcherShowTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_InputSwitcherShowTest@@@0@XZ @ 0x1805E0974 (--$start_and_watch_errors@V-$tip_test@U_tip_InputSwitcherShowTest@@@tip@@@tip@@YA-AV-$test_watch.c)
 *     ?CompleteShowAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805E1070 (-CompleteShowAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x1805E1934 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 *     ?ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1805E22BC (-ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_InputSwitcherShowTest@@@details@tip@@@std@@QEAA@XZ @ 0x1805DF170 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_InputSwitcherShowTest@@@details@tip@@@std@@.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_InputSwitcherShowTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xB8uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_InputSwitcherShowTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_InputSwitcherShowTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
