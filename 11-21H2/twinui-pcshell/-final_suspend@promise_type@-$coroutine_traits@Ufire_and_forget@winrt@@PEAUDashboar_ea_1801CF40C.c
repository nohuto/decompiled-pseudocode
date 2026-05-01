/*
 * XREFs of ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@W4TaskbarSettingChangedEvent@Dashboard@5UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1801CF40C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_ResumeCoro$1 @ 0x1801C93E0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--OnTaskbarSettingChanged$_Resu.c)
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x1801DA2F0 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_BYTE *__fastcall std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *,enum winrt::WindowsUdk::UI::Shell::Dashboard::TaskbarSettingChangedEvent>::promise_type::final_suspend(
        __int64 a1,
        _BYTE *a2)
{
  if ( winrt_suspend_handler )
    winrt_suspend_handler();
  *a2 = 0;
  return a2;
}
