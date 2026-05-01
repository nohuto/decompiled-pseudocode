/*
 * XREFs of ?watch_errors@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAA?AV?$test_watcher@U_tip_NotificationCenterShowTest@@@2@XZ @ 0x1800401AC
 * Callers:
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DCA70 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?ensure_data@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@@std@@XZ @ 0x180040350 (-ensure_data@-$tip_test@U_tip_NotificationCenterShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_mer.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 */

__int64 __fastcall tip::tip_test<_tip_NotificationCenterShowTest>::watch_errors(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx

  v3 = (_QWORD *)tip::tip_test<_tip_NotificationCenterShowTest>::ensure_data(a1);
  *(_QWORD *)a2 = &tip::test_watcher<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *v3 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    a2 + 48,
    v3);
  return a2;
}
