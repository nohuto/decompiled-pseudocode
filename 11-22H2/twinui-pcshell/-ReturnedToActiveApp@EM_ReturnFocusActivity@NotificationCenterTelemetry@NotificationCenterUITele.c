/*
 * XREFs of ?ReturnedToActiveApp@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180419AAC
 * Callers:
 *     ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x18001842C (-ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x180183F88 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::ReturnedToActiveApp(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *this)
{
  _DWORD *v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v2 = (_DWORD *)wil::details::static_lazy<NotificationCenterLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v2,
      (unsigned __int8 *)dword_18084951A,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      0LL,
      2u,
      &v3);
}
