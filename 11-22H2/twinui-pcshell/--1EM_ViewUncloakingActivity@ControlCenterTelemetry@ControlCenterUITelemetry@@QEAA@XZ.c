/*
 * XREFs of ??1EM_ViewUncloakingActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041E0C4
 * Callers:
 *     ?OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180421450 (-OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CControlCenterExperienceManager::OnViewUncloaking_::_1_::dtor$0 @ 0x1804215D8 (_CControlCenterExperienceManager--OnViewUncloaking_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18041EA48 (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewUncloakingActivity::~EM_ViewUncloakingActivity(
        ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewUncloakingActivity *this)
{
  *(_QWORD *)this = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewUncloakingActivity::`vftable';
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
