/*
 * XREFs of ??1VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1805AAF74
 * Callers:
 *     ?HandleSwitchToView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1805ACBA0 (-HandleSwitchToView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     _VoiceAssistantPositioner::HandleSwitchToView_::_1_::dtor$0 @ 0x1805ACC5A (_VoiceAssistantPositioner--HandleSwitchToView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805AC3A8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_HandleSwitchToViewActivity::~VAPositioner_HandleSwitchToViewActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_HandleSwitchToViewActivity *this)
{
  *(_QWORD *)this = &VoiceAssistantPositionerTelemetry::VAPositioner_HandleSwitchToViewActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
