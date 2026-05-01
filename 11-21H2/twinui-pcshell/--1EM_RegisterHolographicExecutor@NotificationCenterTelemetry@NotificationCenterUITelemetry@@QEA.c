/*
 * XREFs of ??1EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1803625C8
 * Callers:
 *     ?RegisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJPEAUIHolographicCoreExperienceExecutor@Holographic@Shell@Internal@Windows@@@Z @ 0x180364CC0 (-RegisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJPEAUIHolographicCoreExperienceE.c)
 *     _CToastCenterExperienceManager::RegisterHolographicExecutor_::_1_::dtor$0 @ 0x180364ED6 (_CToastCenterExperienceManager--RegisterHolographicExecutor_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803629EC (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor::~EM_RegisterHolographicExecutor(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RegisterHolographicExecutor::`vftable';
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
