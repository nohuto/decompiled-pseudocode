/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VLayerVisual@Composition@UI@Windows@@UILayerVisual@234@UILayerVisual2@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AE470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::LayerVisual,Windows::UI::Composition::ILayerVisual,Windows::UI::Composition::ILayerVisual2>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::RedirectVisual,Windows::UI::Composition::IRedirectVisual>::AddRef(a1 - 8);
}
