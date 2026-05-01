/*
 * XREFs of ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180429B58
 * Callers:
 *     ??1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180429E80 (--1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??1CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180429ED8 (--1CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??1CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180476E38 (--1CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180429C0C (--1-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityB.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180431A34 (-reset@-$shared_object@V-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
