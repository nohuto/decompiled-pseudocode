/*
 * XREFs of ?EventRaised@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1800493EC
 * Callers:
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18004945C (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18004CF88 (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800A516C (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     _lambda_52a7597311830440b167c013db955118_::operator() @ 0x1801964A0 (_lambda_52a7597311830440b167c013db955118_--operator().c)
 *     ?RaiseHideRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z @ 0x180354588 (-RaiseHideRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x1800A6D60 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::EventRaised(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *this)
{
  _DWORD *v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_DWORD **)(wil::details::static_lazy<NotificationCenterLogging>::get(
                      this,
                      _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((int)v2, (int)&dword_1806A3501, *((_QWORD *)this + 6) + 8, 0, 2u, &v3);
}
