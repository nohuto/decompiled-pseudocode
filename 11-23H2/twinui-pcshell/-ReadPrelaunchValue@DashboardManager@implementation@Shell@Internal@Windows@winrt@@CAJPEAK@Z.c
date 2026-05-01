/*
 * XREFs of ?ReadPrelaunchValue@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJPEAK@Z @ 0x1801BCA98
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x180245F00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_180245F00.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
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
