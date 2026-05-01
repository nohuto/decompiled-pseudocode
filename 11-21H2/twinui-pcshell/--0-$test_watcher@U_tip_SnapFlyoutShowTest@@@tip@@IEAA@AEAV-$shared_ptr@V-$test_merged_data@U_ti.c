/*
 * XREFs of ??0?$test_watcher@U_tip_SnapFlyoutShowTest@@@tip@@IEAA@AEAV?$shared_ptr@V?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@@std@@@Z @ 0x1805AE504
 * Callers:
 *     ?InternalShow@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AF4BC (-InternalShow@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_storag.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_SnapFlyoutShowTest@@@0@XZ @ 0x1805B8048 (--$open_and_watch_errors@V-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@tip@@YA-AV-$test_watcher@U.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_SwipeDashboard@@@0@XZ @ 0x1805BC838 (--$start_and_watch_errors@V-$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA-AV-$test_watcher@U_ti.c)
 *     ?open_and_watch_errors@?$tip_test@U_tip_SwipeDashboard@@@tip@@QEAA?AV?$test_watcher@U_tip_SwipeDashboard@@@2@XZ @ 0x1805BE5FC (-open_and_watch_errors@-$tip_test@U_tip_SwipeDashboard@@@tip@@QEAA-AV-$test_watcher@U_tip_SwipeD.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 */

struct wil::details::IFailureCallback *__fastcall tip::test_watcher<_tip_SnapFlyoutShowTest>::test_watcher<_tip_SnapFlyoutShowTest>(
        struct wil::details::IFailureCallback *a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = &tip::test_watcher<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    *a2 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    (_QWORD *)a1 + 6,
    a2);
  return a1;
}
