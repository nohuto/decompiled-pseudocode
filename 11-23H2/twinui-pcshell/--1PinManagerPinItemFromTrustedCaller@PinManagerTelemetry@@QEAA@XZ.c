/*
 * XREFs of ??1PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAA@XZ @ 0x18024F7D0
 * Callers:
 *     ??1?$_Optional_destruct_base@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@$0A@@std@@QEAA@XZ @ 0x18024F730 (--1-$_Optional_destruct_base@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@$0A@@std@@.c)
 *     ??4PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18024F908 (--4PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A41A0 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1806A0D24 (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_P.c)
 */

void __fastcall PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::~PinManagerPinItemFromTrustedCaller(
        PinManagerTelemetry::PinManagerPinItemFromTrustedCaller *this)
{
  *(_QWORD *)this = &PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::`vftable';
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(this);
}
