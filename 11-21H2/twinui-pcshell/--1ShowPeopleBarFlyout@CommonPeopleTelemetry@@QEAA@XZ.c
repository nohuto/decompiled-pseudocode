/*
 * XREFs of ??1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x180367D24
 * Callers:
 *     ?OnMessage@CPeopleBarFlyoutExperienceManager@@UEAAJI_K_J@Z @ 0x18016A650 (-OnMessage@CPeopleBarFlyoutExperienceManager@@UEAAJI_K_J@Z.c)
 *     _CPeopleBarFlyoutExperienceManager::OnMessage_::_1_::dtor$1 @ 0x180223476 (_CPeopleBarFlyoutExperienceManager--OnMessage_--_1_--dtor$1.c)
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x180367C04 (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180367F04 (--4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?OnViewDestroyed@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180369510 (-OnViewDestroyed@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180369650 (-OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CPeopleBarFlyoutExperienceManager::OnViewShowing_::_1_::dtor$0 @ 0x180369721 (_CPeopleBarFlyoutExperienceManager--OnViewShowing_--_1_--dtor$0.c)
 *     ?OnViewShown@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180369750 (-OnViewShown@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CPeopleBarFlyoutExperienceManager::OnViewShown_::_1_::dtor$0 @ 0x18036982A (_CPeopleBarFlyoutExperienceManager--OnViewShown_--_1_--dtor$0.c)
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x180369BC0 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 *     _CPeopleBarFlyoutExperienceManager::ShowFlyout_::_1_::dtor$0 @ 0x180369DCB (_CPeopleBarFlyoutExperienceManager--ShowFlyout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180368470 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTa.c)
 */

void __fastcall CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout(
        CommonPeopleTelemetry::ShowPeopleBarFlyout *this)
{
  *(_QWORD *)this = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
