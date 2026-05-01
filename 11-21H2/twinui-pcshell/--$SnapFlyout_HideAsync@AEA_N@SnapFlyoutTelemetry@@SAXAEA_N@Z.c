/*
 * XREFs of ??$SnapFlyout_HideAsync@AEA_N@SnapFlyoutTelemetry@@SAXAEA_N@Z @ 0x1805AD7D0
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1801C0130 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall SnapFlyoutTelemetry::SnapFlyout_HideAsync<bool &>(char *a1)
{
  _QWORD *v2; // rax
  _DWORD *v3; // rcx
  char v4; // al
  char v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  char *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = wil::details::static_lazy<WindowManagementLogging>::get(
         (__int64)a1,
         _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v3 = (_DWORD *)v2[1];
  if ( *v3 > 5u )
  {
    v4 = *a1;
    v10 = 0;
    v6 = v4;
    v9 = 1;
    v8 = &v6;
    LODWORD(v2) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v3,
                    (unsigned __int8 *)dword_1806CB4C9,
                    0LL,
                    0LL,
                    3u,
                    &v7);
  }
  return (int)v2;
}
