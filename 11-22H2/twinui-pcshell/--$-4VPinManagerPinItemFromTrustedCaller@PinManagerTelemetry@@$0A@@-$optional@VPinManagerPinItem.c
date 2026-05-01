/*
 * XREFs of ??$?4VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@$0A@@?$optional@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@std@@QEAAAEAV01@$$QEAVPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@Z @ 0x18024C184
 * Callers:
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A41A0 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 * Callees:
 *     ??4PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18024F908 (--4PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18069DE0C (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

__int64 __fastcall std::optional<PinManagerTelemetry::PinManagerPinItemFromTrustedCaller>::operator=<PinManagerTelemetry::PinManagerPinItemFromTrustedCaller,0>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 320) )
  {
    PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::operator=();
  }
  else
  {
    wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>();
    *(_BYTE *)(a1 + 320) = 1;
    *(_QWORD *)a1 = &PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::`vftable';
  }
  return a1;
}
