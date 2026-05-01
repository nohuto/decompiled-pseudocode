/*
 * XREFs of ??$WebExperienceInstallerPackageInstallPolicyChecked@AEB_NAEB_NAEB_N@DashboardManagerTelemetry@@SAXAEB_N00@Z @ 0x1801C1E04
 * Callers:
 *     _anonymous_namespace_::IsAppInstallAllowedByPolicy @ 0x1801C8E60 (_anonymous_namespace_--IsAppInstallAllowedByPolicy.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18017BD80 (-Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall DashboardManagerTelemetry::WebExperienceInstallerPackageInstallPolicyChecked<bool const &,bool const &,bool const &>(
        char *a1,
        char *a2,
        char *a3)
{
  const struct _tlgProvider_t *v6; // rax
  char v7; // r8
  char v8; // dl
  char v10; // [rsp+38h] [rbp-19h] BYREF
  char v11; // [rsp+39h] [rbp-18h] BYREF
  char v12; // [rsp+3Ah] [rbp-17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-9h] BYREF
  char *v14; // [rsp+68h] [rbp+17h]
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  char *v16; // [rsp+78h] [rbp+27h]
  __int64 v17; // [rsp+80h] [rbp+2Fh]
  char *v18; // [rsp+88h] [rbp+37h]
  __int64 v19; // [rsp+90h] [rbp+3Fh]

  v6 = DashboardManagerTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = *a3;
    v8 = *a2;
    v12 = *a1;
    v18 = &v10;
    v16 = &v11;
    v14 = &v12;
    v10 = v7;
    v11 = v8;
    v19 = 1LL;
    v17 = 1LL;
    v15 = 1LL;
    LODWORD(v6) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v6,
                    (unsigned __int8 *)dword_1806CBF1E,
                    0LL,
                    0LL,
                    5u,
                    &v13);
  }
  return (int)v6;
}
