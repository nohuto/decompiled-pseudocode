/*
 * XREFs of ??1?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1804F3134
 * Callers:
 *     ??1VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1804F3258 (--1VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1804F3284 (--1VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1804F32B0 (--1VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_DisplaySettingsChangeActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1804F32DC (--1VAPositioner_DisplaySettingsChangeActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1804F3308 (--1VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ??1VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1804F3334 (--1VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1804F3360 (--1VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_InputHostHidingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1804F338C (--1VAPositioner_InputHostHidingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_InputHostShowingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1804F33B8 (--1VAPositioner_InputHostShowingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1804F3410 (--1VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1804F31A4 (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_1804F31A4.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1804F9CE0 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_1804F9CE0.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
