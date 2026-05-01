/*
 * XREFs of _anonymous_namespace_::IsRegistryFlagSet @ 0x180697274
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     ?IsWidgetsOverwatchAllowed@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180240008 (-IsWidgetsOverwatchAllowed@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ.c)
 *     _anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1 @ 0x180241670 (_anonymous_namespace_--RepairWebExperiencePackage$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x180245F00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_180245F00.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     _anonymous_namespace_::IsAppInstallAllowedByPolicy @ 0x180696F7C (_anonymous_namespace_--IsAppInstallAllowedByPolicy.c)
 *     _anonymous_namespace_::IsAppInstallOnMeteredNetworkAllowed @ 0x18069701C (_anonymous_namespace_--IsAppInstallOnMeteredNetworkAllowed.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::IsRegistryFlagSet(HKEY a1, const WCHAR *a2, const WCHAR *a3, char a4)
{
  DWORD v6; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v7[5]; // [rsp+44h] [rbp-14h] BYREF

  v6 = 4;
  if ( RegGetValueW(a1, a2, a3, 0x18u, 0LL, v7, &v6) )
    return a4;
  else
    return v7[0] != 0;
}
