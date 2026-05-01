/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_InputSwitcherShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputSwitcherShowTest@@@details@tip@@@std@@XZ @ 0x180700778
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_InputSwitcherShowTest@@@tip@@@tip@@YA?A_PXZ @ 0x1806FF644 (--$start_and_watch_errors@V-$tip_test@U_tip_InputSwitcherShowTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x1806FFDB8 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 *     ?ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1807003EC (-ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_InputSwitcherShowTest@@@details@tip@@@std@@QEAA@XZ @ 0x1806FE68C (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_InputSwitcherShowTest@@@details@tip@@@std@@.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_InputSwitcherShowTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xD8uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_InputSwitcherShowTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_InputSwitcherShowTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
