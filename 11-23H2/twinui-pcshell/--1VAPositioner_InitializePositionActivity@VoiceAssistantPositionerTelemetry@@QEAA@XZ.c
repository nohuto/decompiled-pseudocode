/*
 * XREFs of ??1VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1805AAFA0
 * Callers:
 *     ?InitializePosition@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1805ACD60 (-InitializePosition@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     _VoiceAssistantPositioner::InitializePosition_::_1_::dtor$0 @ 0x1805ACE49 (_VoiceAssistantPositioner--InitializePosition_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805AC3A8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_InitializePositionActivity::~VAPositioner_InitializePositionActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_InitializePositionActivity *this)
{
  *(_QWORD *)this = &VoiceAssistantPositionerTelemetry::VAPositioner_InitializePositionActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
