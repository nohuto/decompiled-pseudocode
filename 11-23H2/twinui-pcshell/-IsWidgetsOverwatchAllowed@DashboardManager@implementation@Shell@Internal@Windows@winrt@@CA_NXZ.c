/*
 * XREFs of ?IsWidgetsOverwatchAllowed@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180240008
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x180243DB0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::IsWidgetsOverwatchAllowed(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  LOBYTE(a4) = 1;
  return anonymous_namespace_::IsRegistryFlagSet(
           -2147483646LL,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
           L"AllowWidgetsOverwatch",
           a4);
}
