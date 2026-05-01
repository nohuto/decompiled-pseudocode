/*
 * XREFs of ?LaunchedApplication@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1803630C8
 * Callers:
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180362E8C (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x1800A6D60 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::LaunchedApplication(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *this)
{
  _DWORD *v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v2 = (_DWORD *)wil::details::static_lazy<NotificationCenterLogging>::get(
                   (__int64)this,
                   _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v2,
      (unsigned __int8 *)dword_1806A602C,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      0LL,
      2u,
      &v3);
}
