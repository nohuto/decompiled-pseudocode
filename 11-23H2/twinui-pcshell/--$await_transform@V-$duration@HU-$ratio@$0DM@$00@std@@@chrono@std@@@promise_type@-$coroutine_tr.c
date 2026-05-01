/*
 * XREFs of ??$await_transform@V?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@QEAA?A_P$$QEAV?$duration@HU?$ratio@$0DM@$00@std@@@chrono@3@@Z @ 0x18019AD9C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x180245F00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_180245F00.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1 @ 0x1802590C0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Res.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type::await_transform<std::chrono::duration<int,std::ratio<60,1>>>(
        __int64 a1,
        __int64 a2,
        int *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *a3;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 600000000 * v3;
  result = a2;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_DWORD *)(a2 + 32) = 0;
  return result;
}
