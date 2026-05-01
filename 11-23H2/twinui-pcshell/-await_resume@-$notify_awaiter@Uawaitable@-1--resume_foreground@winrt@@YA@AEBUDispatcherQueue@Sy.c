/*
 * XREFs of ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA@XZ @ 0x1801BEC14
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x180225EC0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180227620 (SnapFlyoutHost--InternalShutdownAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1 @ 0x180228430 (SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1 @ 0x180228800 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1 @ 0x18027C8F0 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_ResumeCoro$1 @ 0x18027CCF0 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAllW_ea_18027CCF0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall _await_resume___notify_awaiter_Uawaitable__1__resume_foreground_winrt__YA_AEBUDispatcherQueue_System_Windows_3_W4DispatcherQueuePriority_563__Z__impl_winrt__QEAA_XZ(
        __int64 a1)
{
  if ( winrt_resume_handler )
    winrt_resume_handler();
  return *(_BYTE *)(*(_QWORD *)a1 + 12LL);
}
