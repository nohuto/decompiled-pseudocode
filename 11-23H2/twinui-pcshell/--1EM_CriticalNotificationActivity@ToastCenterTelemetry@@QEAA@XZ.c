/*
 * XREFs of ??1EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180435440
 * Callers:
 *     ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1804376F0 (-OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::OnCriticalNotification_::_1_::dtor$0 @ 0x1804377C3 (_CToastCenterExperienceManager--OnCriticalNotification_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180056B90 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall ToastCenterTelemetry::EM_CriticalNotificationActivity::~EM_CriticalNotificationActivity(
        ToastCenterTelemetry::EM_CriticalNotificationActivity *this)
{
  *(_QWORD *)this = &ToastCenterTelemetry::EM_CriticalNotificationActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
