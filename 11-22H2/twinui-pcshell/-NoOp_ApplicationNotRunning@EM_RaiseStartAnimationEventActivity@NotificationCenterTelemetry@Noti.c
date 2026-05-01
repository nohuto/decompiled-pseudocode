/*
 * XREFs of ?NoOp_ApplicationNotRunning@EM_RaiseStartAnimationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1804191FC
 * Callers:
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800166B0 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaiseHideExperienceRequestedEvent@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x1800182B0 (-RaiseHideExperienceRequestedEvent@CActionCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?RaiseStartAnimationEvent@CActionCenterExperienceManager@@AEAAJ_K00@Z @ 0x180018828 (-RaiseStartAnimationEvent@CActionCenterExperienceManager@@AEAAJ_K00@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x180183F88 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseStartAnimationEventActivity::NoOp_ApplicationNotRunning(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseStartAnimationEventActivity *this)
{
  _DWORD *v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v2 = (_DWORD *)wil::details::static_lazy<NotificationCenterLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v2,
      (unsigned __int8 *)dword_180849E4F,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      0LL,
      2u,
      &v3);
}
