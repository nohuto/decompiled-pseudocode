/*
 * XREFs of ??$WebExperienceInstallerPackageInstallPolicyChecked@AEB_NAEB_NAEB_N@DashboardManagerTelemetry@@SAXAEB_N00@Z @ 0x180693D08
 * Callers:
 *     _anonymous_namespace_::IsAppInstallAllowedByPolicy @ 0x180696F7C (_anonymous_namespace_--IsAppInstallAllowedByPolicy.c)
 * Callees:
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x1800B24C4 (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall DashboardManagerTelemetry::WebExperienceInstallerPackageInstallPolicyChecked<bool const &,bool const &,bool const &>(
        char *a1,
        char *a2,
        char *a3)
{
  __int64 *v6; // rax
  _DWORD *v7; // rcx
  char v9; // [rsp+38h] [rbp-19h] BYREF
  char v10; // [rsp+39h] [rbp-18h] BYREF
  char v11; // [rsp+3Ah] [rbp-17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+48h] [rbp-9h] BYREF
  char *v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  char *v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+80h] [rbp+2Fh]
  char *v17; // [rsp+88h] [rbp+37h]
  __int64 v18; // [rsp+90h] [rbp+3Fh]

  v6 = wil::details::static_lazy<DashboardManagerTelemetry>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v6[1];
  if ( *v7 > 5u )
  {
    v9 = *a3;
    v10 = *a2;
    v11 = *a1;
    v17 = &v9;
    v15 = &v10;
    v13 = &v11;
    v18 = 1LL;
    v16 = 1LL;
    v14 = 1LL;
    LODWORD(v6) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v7,
                    (unsigned __int8 *)dword_18087601A,
                    0LL,
                    0LL,
                    5u,
                    &v12);
  }
  return (int)v6;
}
