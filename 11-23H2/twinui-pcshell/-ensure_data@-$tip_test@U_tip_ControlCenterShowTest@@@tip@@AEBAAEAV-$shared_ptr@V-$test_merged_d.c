/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_ControlCenterShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ControlCenterShowTest@@@details@tip@@@std@@XZ @ 0x180426B14
 * Callers:
 *     ?CompleteHide@CControlCenterExperienceManager@@AEAAJXZ @ 0x18041E478 (-CompleteHide@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18041F830 (-HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Wind.c)
 *     ?ShowExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x1804236E4 (-ShowExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartControlCenterShowTest@CControlCenterExperienceManager@@AEAAXW4InvokeMethod@ControlCenterUITelemetry@@W4InputType@3@@Z @ 0x180424000 (-StartControlCenterShowTest@CControlCenterExperienceManager@@AEAAXW4InvokeMethod@ControlCenterUI.c)
 *     ?watch_errors@?$tip_test@U_tip_ControlCenterShowTest@@@tip@@QEAA?AV?$test_watcher@U_tip_ControlCenterShowTest@@@2@XZ @ 0x180427610 (-watch_errors@-$tip_test@U_tip_ControlCenterShowTest@@@tip@@QEAA-AV-$test_watcher@U_tip_ControlC.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_ControlCenterShowTest@@@details@tip@@@std@@QEAA@XZ @ 0x18041B4FC (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_ControlCenterShowTest@@@details@tip@@@std@@.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_ControlCenterShowTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xE0uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_ControlCenterShowTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_ControlCenterShowTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
