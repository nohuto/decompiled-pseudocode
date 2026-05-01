/*
 * XREFs of _anonymous_namespace_::IsAppInstallAllowedByPolicy @ 0x1801C8E60
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180108390 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$WebExperienceInstallerPackageInstallPolicyChecked@AEB_NAEB_NAEB_N@DashboardManagerTelemetry@@SAXAEB_N00@Z @ 0x1801C1E04 (--$WebExperienceInstallerPackageInstallPolicyChecked@AEB_NAEB_NAEB_N@DashboardManagerTelemetry@@.c)
 *     _anonymous_namespace_::IsRegistryFlagSet @ 0x1801C8FF0 (_anonymous_namespace_--IsRegistryFlagSet.c)
 *     ?SHRegAllocData@@YAJPEAUHKEY__@@PEBG1HPEAPEAXPEAK@Z @ 0x180373A10 (-SHRegAllocData@@YAJPEAUHKEY__@@PEBG1HPEAPEAXPEAK@Z.c)
 */

char anonymous_namespace_::IsAppInstallAllowedByPolicy()
{
  bool v0; // bp
  HKEY v1; // rcx
  int v2; // r9d
  char v3; // bl
  bool v4; // di
  char v5; // si
  unsigned int *v7; // [rsp+28h] [rbp-20h]
  LPCWCH lpString1; // [rsp+50h] [rbp+8h] BYREF
  bool v9; // [rsp+58h] [rbp+10h] BYREF
  bool v10; // [rsp+60h] [rbp+18h] BYREF

  v0 = (unsigned __int8)anonymous_namespace_::IsRegistryFlagSet(
                          -2147483646LL,
                          L"SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate",
                          L"DoNotConnectToWindowsUpdateInternetLocations",
                          0LL) == 0;
  lpString1 = 0LL;
  v10 = v0;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&lpString1,
    0LL);
  v3 = 1;
  v4 = SHRegAllocData(
         v1,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\DeviceAccess",
         L"ActivePolicyCode",
         v2,
         (void **)&lpString1,
         v7) >= 0
    && CompareStringOrdinal(lpString1, -1, L"zh", -1, 1) == 2;
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&lpString1);
  v9 = v4;
  LOBYTE(lpString1) = anonymous_namespace_::IsRegistryFlagSet(
                        -2147483646LL,
                        L"SOFTWARE\\Microsoft\\WindowsUpdate\\UX\\Settings",
                        L"AlwaysAllowCTADownload",
                        0LL);
  v5 = (char)lpString1;
  DashboardManagerTelemetry::WebExperienceInstallerPackageInstallPolicyChecked<bool const &,bool const &,bool const &>(
    (char *)&v10,
    (char *)&v9,
    (char *)&lpString1);
  if ( !v0 || v4 && !v5 )
    return 0;
  return v3;
}
