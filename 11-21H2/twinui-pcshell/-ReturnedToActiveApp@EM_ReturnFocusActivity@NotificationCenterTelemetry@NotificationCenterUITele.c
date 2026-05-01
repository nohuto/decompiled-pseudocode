/*
 * XREFs of ?ReturnedToActiveApp@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18003CAC8
 * Callers:
 *     ?ReturnFocus@CControlCenterExperienceManager@@AEAAJXZ @ 0x18003C9DC (-ReturnFocus@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x18004EDE0 (-ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ @ 0x180365014 (-ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x1800A6D60 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::ReturnedToActiveApp(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *this)
{
  _DWORD *v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_DWORD **)(wil::details::static_lazy<NotificationCenterLogging>::get(
                      this,
                      _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((int)v2, (int)&dword_1806A2DF7, *((_QWORD *)this + 6) + 8, 0, 2u, &v3);
}
