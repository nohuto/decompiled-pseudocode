/*
 * XREFs of ??1LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041E0F0
 * Callers:
 *     CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DFD20 (CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     _CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$13 @ 0x1801E0350 (_CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1_--_1_--dtor$13.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18041E994 (-Destroy@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::LaunchControlCenterV1::~LaunchControlCenterV1(
        ControlCenterUITelemetry::ControlCenterTelemetry::LaunchControlCenterV1 *this)
{
  *(_QWORD *)this = &ControlCenterUITelemetry::ControlCenterTelemetry::LaunchControlCenterV1::`vftable';
  wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
