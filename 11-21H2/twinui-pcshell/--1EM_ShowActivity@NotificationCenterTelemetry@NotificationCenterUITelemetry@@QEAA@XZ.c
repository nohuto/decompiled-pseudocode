/*
 * XREFs of ??1EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1803625F4
 * Callers:
 *     ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x18036545C (-Show@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 *     _CToastCenterExperienceManager::Show_::_1_::dtor$0 @ 0x180365578 (_CToastCenterExperienceManager--Show_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004B7A0 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity::~EM_ShowActivity(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
