/*
 * XREFs of _anonymous_namespace_::IsRegistryFlagSet @ 0x1801C8FF0
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     _anonymous_namespace_::IsAppInstallAllowedByPolicy @ 0x1801C8E60 (_anonymous_namespace_--IsAppInstallAllowedByPolicy.c)
 *     _anonymous_namespace_::IsAppInstallOnMeteredNetworkAllowed @ 0x1801C8F68 (_anonymous_namespace_--IsAppInstallOnMeteredNetworkAllowed.c)
 *     _anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1 @ 0x1801CA220 (_anonymous_namespace_--RepairWebExperiencePackage$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1801CC700 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1801CC700.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
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
