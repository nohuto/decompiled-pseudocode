/*
 * XREFs of ?StopWithResult@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAAXJ@Z @ 0x180252D7C
 * Callers:
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A41A0 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::StopWithResult(_QWORD *this, unsigned int a2)
{
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
    this,
    a2);
}
