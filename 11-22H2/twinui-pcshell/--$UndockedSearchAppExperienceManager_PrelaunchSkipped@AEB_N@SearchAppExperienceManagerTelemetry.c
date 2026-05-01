/*
 * XREFs of ??$UndockedSearchAppExperienceManager_PrelaunchSkipped@AEB_N@SearchAppExperienceManagerTelemetry@@SAXAEB_N@Z @ 0x180462150
 * Callers:
 *     ?Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x1801AC7E0 (-Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BB23C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PrelaunchSkipped<bool const &>(
        unsigned __int8 *a1)
{
  __int64 *v2; // rax
  _DWORD *v3; // rcx
  int v4; // eax
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = wil::details::static_lazy<SearchAppLauncherLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_);
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
                    (unsigned __int8 *)dword_1808527D3,
                    0LL,
                    0LL,
                    3u,
                    &v7);
  }
  return (int)v2;
}
