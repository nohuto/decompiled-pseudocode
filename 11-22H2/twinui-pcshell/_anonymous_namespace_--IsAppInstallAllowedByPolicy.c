/*
 * XREFs of _anonymous_namespace_::IsAppInstallAllowedByPolicy @ 0x180696F7C
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ??$WebExperienceInstallerPackageInstallPolicyChecked@AEB_NAEB_NAEB_N@DashboardManagerTelemetry@@SAXAEB_N00@Z @ 0x180693D08 (--$WebExperienceInstallerPackageInstallPolicyChecked@AEB_NAEB_NAEB_N@DashboardManagerTelemetry@@.c)
 *     _anonymous_namespace_::IsCtaPolicyActive @ 0x1806970E8 (_anonymous_namespace_--IsCtaPolicyActive.c)
 *     _anonymous_namespace_::IsRegistryFlagSet @ 0x180697274 (_anonymous_namespace_--IsRegistryFlagSet.c)
 */

char anonymous_namespace_::IsAppInstallAllowedByPolicy()
{
  char v0; // di
  bool v1; // bl
  char v2; // bp
  char v3; // si
  char IsRegistryFlagSet; // [rsp+40h] [rbp+8h] BYREF
  char IsCtaPolicyActive; // [rsp+48h] [rbp+10h] BYREF
  bool v7; // [rsp+50h] [rbp+18h] BYREF

  v0 = 0;
  v1 = (unsigned __int8)anonymous_namespace_::IsRegistryFlagSet(
                          -2147483646LL,
                          L"SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate",
                          L"DoNotConnectToWindowsUpdateInternetLocations",
                          0LL) == 0;
  v7 = v1;
  IsCtaPolicyActive = anonymous_namespace_::IsCtaPolicyActive();
  v2 = IsCtaPolicyActive;
  IsRegistryFlagSet = anonymous_namespace_::IsRegistryFlagSet(
                        -2147483646LL,
                        L"SOFTWARE\\Microsoft\\WindowsUpdate\\UX\\Settings",
                        L"AlwaysAllowCTADownload",
                        0LL);
  v3 = IsRegistryFlagSet;
  DashboardManagerTelemetry::WebExperienceInstallerPackageInstallPolicyChecked<bool const &,bool const &,bool const &>(
    (char *)&v7,
    &IsCtaPolicyActive,
    &IsRegistryFlagSet);
  if ( v1 && (!v2 || v3) )
    return 1;
  return v0;
}
