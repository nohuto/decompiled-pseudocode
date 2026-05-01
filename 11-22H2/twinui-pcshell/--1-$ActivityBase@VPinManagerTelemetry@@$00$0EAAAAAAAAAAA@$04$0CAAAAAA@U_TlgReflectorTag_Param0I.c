/*
 * XREFs of ??1?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18069E52C
 * Callers:
 *     ??1PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAA@XZ @ 0x18024F7D0 (--1PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??1PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAA@XZ @ 0x18024F7FC (--1PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??1PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAA@XZ @ 0x18024F828 (--1PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??1PinManagerIsItemPinned@PinManagerTelemetry@@QEAA@XZ @ 0x18069ECA0 (--1PinManagerIsItemPinned@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ @ 0x18069ECCC (--1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??1PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@XZ @ 0x18069ECF8 (--1PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ @ 0x18069ED24 (--1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18069E568 (--1-$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1806AA124 (-reset@-$shared_object@V-$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
