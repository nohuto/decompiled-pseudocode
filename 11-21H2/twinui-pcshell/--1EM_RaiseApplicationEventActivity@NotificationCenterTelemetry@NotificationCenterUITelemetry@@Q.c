/*
 * XREFs of ??1EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18004A054
 * Callers:
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18004945C (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18004CF88 (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800A516C (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     _lambda_52a7597311830440b167c013db955118_::operator() @ 0x1801964A0 (_lambda_52a7597311830440b167c013db955118_--operator().c)
 *     __lambda_52a7597311830440b167c013db955118_::operator()_::_1_::dtor$0 @ 0x18019658A (__lambda_52a7597311830440b167c013db955118_--operator()_--_1_--dtor$0.c)
 *     _CToastCenterExperienceManager::RaisePropertyChangedEvent_::_1_::dtor$0 @ 0x18021A353 (_CToastCenterExperienceManager--RaisePropertyChangedEvent_--_1_--dtor$0.c)
 *     ?RaiseHideRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z @ 0x180354588 (-RaiseHideRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z.c)
 *     _CControlCenterExperienceManager::RaiseHideRequestedEvent_::_1_::dtor$0 @ 0x1803547BE (_CControlCenterExperienceManager--RaiseHideRequestedEvent_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004B7A0 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::~EM_RaiseApplicationEventActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
