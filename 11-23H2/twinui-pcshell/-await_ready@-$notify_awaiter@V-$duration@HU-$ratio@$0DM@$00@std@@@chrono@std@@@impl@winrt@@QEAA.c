/*
 * XREFs of ?await_ready@?$notify_awaiter@V?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@impl@winrt@@QEAA_NXZ @ 0x1801BCE34
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x180245F00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_180245F00.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x180247380 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1 @ 0x1802590C0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Res.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall winrt::impl::notify_awaiter<std::chrono::duration<int,std::ratio<60,1>>>::await_ready(__int64 a1)
{
  if ( winrt_suspend_handler )
    winrt_suspend_handler();
  return *(_QWORD *)(a1 + 16) <= 0LL;
}
