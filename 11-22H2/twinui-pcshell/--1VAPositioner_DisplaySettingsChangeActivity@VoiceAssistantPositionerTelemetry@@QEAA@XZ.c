/*
 * XREFs of ??1VAPositioner_DisplaySettingsChangeActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1805AAF1C
 * Callers:
 *     ?DisplaySettingsChange@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1800720C0 (-DisplaySettingsChange@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR.c)
 *     _VoiceAssistantPositioner::DisplaySettingsChange_::_1_::dtor$0 @ 0x1802C158B (_VoiceAssistantPositioner--DisplaySettingsChange_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805AC3A8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_DisplaySettingsChangeActivity::~VAPositioner_DisplaySettingsChangeActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_DisplaySettingsChangeActivity *this)
{
  *(_QWORD *)this = &VoiceAssistantPositionerTelemetry::VAPositioner_DisplaySettingsChangeActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
