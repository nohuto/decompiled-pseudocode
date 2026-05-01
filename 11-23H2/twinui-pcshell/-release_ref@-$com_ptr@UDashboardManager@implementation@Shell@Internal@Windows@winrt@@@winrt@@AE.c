/*
 * XREFs of ?release_ref@?$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801995CC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1802389D0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_ResumeCoro$1 @ 0x180240B20 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RaiseStartUpEvent$_ResumeCoro.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180242E90 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x180243DB0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x180244470 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_180244470.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettingsAsync$_ResumeCoro$1 @ 0x180245CB0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--TryUpdatePrelaun_ea_180245CB0.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x180245F00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_180245F00.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
  return result;
}
