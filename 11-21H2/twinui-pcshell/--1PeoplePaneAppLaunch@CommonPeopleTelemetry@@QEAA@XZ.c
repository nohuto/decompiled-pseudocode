/*
 * XREFs of ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x1803D52EC
 * Callers:
 *     _lambda_42c463a65dbba8f6c2411568f097b711_::__lambda_42c463a65dbba8f6c2411568f097b711_ @ 0x1803D511C (_lambda_42c463a65dbba8f6c2411568f097b711_--__lambda_42c463a65dbba8f6c2411568f097b711_.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1803D7FC0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$0 @ 0x1803D854C (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180368470 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTa.c)
 */

void __fastcall CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch(
        CommonPeopleTelemetry::PeoplePaneAppLaunch *this)
{
  *(_QWORD *)this = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
