/*
 * XREFs of ??1FindAppInfoContext@TrayNotificationsTelemetry@@QEAA@XZ @ 0x1805462F0
 * Callers:
 *     ?FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@ApplicationModel@Windows@@@Z @ 0x180546450 (-FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@Applicat.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18054639C (-Destroy@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 */

void __fastcall TrayNotificationsTelemetry::FindAppInfoContext::~FindAppInfoContext(
        TrayNotificationsTelemetry::FindAppInfoContext *this)
{
  *(_QWORD *)this = &TrayNotificationsTelemetry::FindAppInfoContext::`vftable';
  wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TrayNotificationAreaLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
