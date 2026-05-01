/*
 * XREFs of ??1HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x180367CF8
 * Callers:
 *     ?HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x180368AE0 (-HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ.c)
 *     _CPeopleBarFlyoutExperienceManager::HideFlyout_::_1_::dtor$0 @ 0x180368BC2 (_CPeopleBarFlyoutExperienceManager--HideFlyout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180368470 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTa.c)
 */

void __fastcall CommonPeopleTelemetry::HidePeopleBarFlyout::~HidePeopleBarFlyout(
        CommonPeopleTelemetry::HidePeopleBarFlyout *this)
{
  *(_QWORD *)this = &CommonPeopleTelemetry::HidePeopleBarFlyout::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
