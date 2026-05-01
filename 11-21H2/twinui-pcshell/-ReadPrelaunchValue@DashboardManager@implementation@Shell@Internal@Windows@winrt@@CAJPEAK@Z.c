/*
 * XREFs of ?ReadPrelaunchValue@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJPEAK@Z @ 0x18017F5EC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1801CC700 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1801CC700.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ReadPrelaunchValue(
        unsigned int *a1)
{
  DWORD v2; // [rsp+58h] [rbp+10h] BYREF

  v2 = 8;
  return RegGetValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
           L"IsPrelaunchEnabled",
           0x18u,
           0LL,
           a1,
           &v2);
}
