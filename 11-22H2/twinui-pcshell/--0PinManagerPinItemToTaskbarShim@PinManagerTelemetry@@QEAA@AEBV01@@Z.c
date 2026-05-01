/*
 * XREFs of ??0PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@AEBV01@@Z @ 0x18069E134
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$1 @ 0x180250E90 (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_ResumeCo.c)
 * Callees:
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18069DEEC (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect_ea_18069DEEC.c)
 */

PinManagerTelemetry::PinManagerPinItemToTaskbarShim *__fastcall PinManagerTelemetry::PinManagerPinItemToTaskbarShim::PinManagerPinItemToTaskbarShim(
        PinManagerTelemetry::PinManagerPinItemToTaskbarShim *this,
        const struct PinManagerTelemetry::PinManagerPinItemToTaskbarShim *a2)
{
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)this,
    (__int64)a2);
  *(_QWORD *)this = &PinManagerTelemetry::PinManagerPinItemToTaskbarShim::`vftable';
  return this;
}
