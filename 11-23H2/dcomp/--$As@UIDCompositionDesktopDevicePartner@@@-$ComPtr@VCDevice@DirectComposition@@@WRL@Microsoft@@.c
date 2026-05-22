/*
 * XREFs of ??$As@UIDCompositionDesktopDevicePartner@@@?$ComPtr@VCDevice@DirectComposition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@@Details@12@@Z @ 0x18011F510
 * Callers:
 *     ?OfferSurfaceResources@CompositorCommon@Composition@UI@Windows@@QEAAJXZ @ 0x1801285B4 (-OfferSurfaceResources@CompositorCommon@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?ReclaimSurfaceResources@CompositorCommon@Composition@UI@Windows@@QEAAJPEAH@Z @ 0x18012913C (-ReclaimSurfaceResources@CompositorCommon@Composition@UI@Windows@@QEAAJPEAH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DirectComposition::CDevice>::As<IDCompositionDesktopDevicePartner>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(a2);
  return v4(v2, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0, a2);
}
