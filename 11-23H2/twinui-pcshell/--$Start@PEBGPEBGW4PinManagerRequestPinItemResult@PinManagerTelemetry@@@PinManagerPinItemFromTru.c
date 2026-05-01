/*
 * XREFs of ??$Start@PEBGPEBGW4PinManagerRequestPinItemResult@PinManagerTelemetry@@@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@SA?AV01@$$QEAPEBG0$$QEAW4PinManagerRequestPinItemResult@1@@Z @ 0x18024F33C
 * Callers:
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A41A0 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 * Callees:
 *     ?StartActivity@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAAXPEBG0W4PinManagerRequestPinItemResult@2@@Z @ 0x180252310 (-StartActivity@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAAXPEBG0W4PinManagerReq.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18069DD64 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details::IFailureCallback *__fastcall PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::Start<unsigned short const *,unsigned short const *,enum PinManagerTelemetry::PinManagerRequestPinItemResult>(
        struct wil::details::IFailureCallback *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(a1);
  *(_QWORD *)a1 = &PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::`vftable';
  PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::StartActivity(a1, *a2, *a3, *a4);
  return a1;
}
