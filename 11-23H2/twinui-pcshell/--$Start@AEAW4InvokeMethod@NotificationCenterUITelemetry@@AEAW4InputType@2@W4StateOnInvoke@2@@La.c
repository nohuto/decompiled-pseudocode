/*
 * XREFs of ??$Start@AEAW4InvokeMethod@NotificationCenterUITelemetry@@AEAW4InputType@2@W4StateOnInvoke@2@@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@AEAW4InvokeMethod@2@AEAW4InputType@2@$$QEAW4StateOnInvoke@2@@Z @ 0x18001AA4C
 * Callers:
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DCA70 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001AAB4 (--0-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?StartActivity@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4InvokeMethod@3@W4InputType@3@W4StateOnInvoke@3@@Z @ 0x18001C2A0 (-StartActivity@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEA.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details::IFailureCallback *__fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::Start<enum NotificationCenterUITelemetry::InvokeMethod &,enum NotificationCenterUITelemetry::InputType &,enum NotificationCenterUITelemetry::StateOnInvoke>(
        struct wil::details::IFailureCallback *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(a1);
  *(_QWORD *)a1 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity(a1, *a2, *a3, *a4);
  return a1;
}
