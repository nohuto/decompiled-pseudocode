/*
 * XREFs of ?watch_errors@?$tip_test@U_tip_ControlCenterShowTest@@@tip@@QEAA?AV?$test_watcher@U_tip_ControlCenterShowTest@@@2@XZ @ 0x180427610
 * Callers:
 *     CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DFD20 (CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?ensure_data@?$tip_test@U_tip_ControlCenterShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ControlCenterShowTest@@@details@tip@@@std@@XZ @ 0x180426B14 (-ensure_data@-$tip_test@U_tip_ControlCenterShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_d.c)
 */

__int64 __fastcall tip::tip_test<_tip_ControlCenterShowTest>::watch_errors(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbx

  v3 = tip::tip_test<_tip_ControlCenterShowTest>::ensure_data(a1);
  *(_QWORD *)a2 = &tip::test_watcher<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *v3 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    (_QWORD *)(a2 + 48),
    v3);
  return a2;
}
