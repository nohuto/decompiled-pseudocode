/*
 * XREFs of ??1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ @ 0x18069ECCC
 * Callers:
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x1806A3594 (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::IsPinAllowed_::_1_::dtor$0 @ 0x1806A3826 (_winrt--Windows--Internal--Shell--implementation--PinManager--IsPinAllowed_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1806A0C64 (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 */

void __fastcall PinManagerTelemetry::PinManagerIsPinAllowed::~PinManagerIsPinAllowed(
        PinManagerTelemetry::PinManagerIsPinAllowed *this)
{
  *(_QWORD *)this = &PinManagerTelemetry::PinManagerIsPinAllowed::`vftable';
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
