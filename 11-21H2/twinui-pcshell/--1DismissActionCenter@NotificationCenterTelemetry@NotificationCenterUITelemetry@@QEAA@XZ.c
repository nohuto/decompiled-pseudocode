/*
 * XREFs of ??1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18002F640
 * Callers:
 *     ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x18002F5A0 (-OnDismiss@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180192800 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     _CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$3 @ 0x180192B5E (_CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1_--_1_--dtor$3.c)
 *     _CActionCenterExperienceManager::OnDismiss_::_1_::dtor$0 @ 0x180215AE2 (_CActionCenterExperienceManager--OnDismiss_--_1_--dtor$0.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x18034FB90 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 *     _CActionCenterExperienceManager::StartSwipe_::_1_::dtor$0 @ 0x18034FCE1 (_CActionCenterExperienceManager--StartSwipe_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002F708 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::~DismissActionCenter(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::`vftable';
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
