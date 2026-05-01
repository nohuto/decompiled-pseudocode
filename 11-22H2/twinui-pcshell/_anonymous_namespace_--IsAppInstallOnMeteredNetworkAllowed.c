/*
 * XREFs of _anonymous_namespace_::IsAppInstallOnMeteredNetworkAllowed @ 0x18069701C
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x1800B24C4 (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _anonymous_namespace_::IsRegistryFlagSet @ 0x180697274 (_anonymous_namespace_--IsRegistryFlagSet.c)
 */

bool anonymous_namespace_::IsAppInstallOnMeteredNetworkAllowed()
{
  __int64 v0; // rcx
  bool v1; // bl
  _DWORD *v2; // rcx
  bool v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  bool *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v1 = (unsigned __int8)anonymous_namespace_::IsRegistryFlagSet(
                          -2147483646LL,
                          L"SOFTWARE\\Microsoft\\WindowsUpdate\\UX\\Settings",
                          L"AllowAutoWindowsUpdateDownloadOverMeteredNetwork",
                          0LL)
    || (unsigned __int8)anonymous_namespace_::IsRegistryFlagSet(
                          -2147483646LL,
                          L"SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate",
                          L"AllowAutoWindowsUpdateDownloadOverMeteredNetwork",
                          0LL);
  v2 = (_DWORD *)wil::details::static_lazy<DashboardManagerTelemetry>::get(
                   v0,
                   (void (__cdecl *)())_lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
  {
    v8 = 0;
    v6 = &v4;
    v4 = v1;
    v7 = 1;
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_18087609E, 0LL, 0LL, 3u, &v5);
  }
  return v1;
}
