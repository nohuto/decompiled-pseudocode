/*
 * XREFs of ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800A18BC
 * Callers:
 *     ??1AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A19B4 (--1AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A19E0 (--1BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A1AA8 (--1CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1EndAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A1AD4 (--1EndAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A1B00 (--1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A1B2C (--1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180042010 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800A18F8 (--1-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800A4548 (-reset@-$shared_object@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
