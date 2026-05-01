/*
 * XREFs of ??$WebExperienceInstallerPackageInstallWaitComplete@AEBW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@DashboardManagerTelemetry@@SAXAEBW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z @ 0x180693DE0
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x1800B24C4 (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall DashboardManagerTelemetry::WebExperienceInstallerPackageInstallWaitComplete<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState const &>(
        int *a1)
{
  __int64 *v2; // rax
  _DWORD *v3; // rcx
  int v4; // eax
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = wil::details::static_lazy<DashboardManagerTelemetry>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_);
  v3 = (_DWORD *)v2[1];
  if ( *v3 > 5u )
  {
    v4 = *a1;
    v10 = 0;
    v6 = v4;
    v9 = 4;
    v8 = &v6;
    LODWORD(v2) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v3,
                    (unsigned __int8 *)dword_1808761A5,
                    0LL,
                    0LL,
                    3u,
                    &v7);
  }
  return (int)v2;
}
