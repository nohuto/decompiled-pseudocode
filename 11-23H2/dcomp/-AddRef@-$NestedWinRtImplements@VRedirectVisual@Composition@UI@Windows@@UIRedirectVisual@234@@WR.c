/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VRedirectVisual@Composition@UI@Windows@@UIRedirectVisual@234@@WRL2@Microsoft@@UEAAKXZ @ 0x18001EDC0
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VLayerVisual@Composition@UI@Windows@@UILayerVisual@234@UILayerVisual2@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AE470 (-AddRef@-$NestedWinRtImplements@VLayerVisual@Composition@UI@Windows@@UILayerVisual@234@UILayerVi.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::RedirectVisual,Windows::UI::Composition::IRedirectVisual>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 312));
}
