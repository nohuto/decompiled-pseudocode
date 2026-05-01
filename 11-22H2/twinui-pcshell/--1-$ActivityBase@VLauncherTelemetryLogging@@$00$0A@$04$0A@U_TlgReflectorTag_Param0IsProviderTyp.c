/*
 * XREFs of ??1?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F46EC
 * Callers:
 *     ??1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ @ 0x1800F3A64 (--1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ @ 0x1800F5788 (--1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ @ 0x1801052FC (--1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x18050382C (--1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1DestroyHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x180503858 (--1DestroyHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F472C (--1-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType_ea_1800F472C.c)
 *     ?reset@?$shared_object@V?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18019FA48 (-reset@-$shared_object@V-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_ea_18019FA48.c)
 */

void __fastcall wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
