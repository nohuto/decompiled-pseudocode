/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VLayerVisual@Composition@UI@Windows@@UILayerVisual@234@UILayerVisual2@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::LayerVisual,Windows::UI::Composition::ILayerVisual,Windows::UI::Composition::ILayerVisual2>::GetIids(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::SpriteVisual,Windows::UI::Composition::ISpriteVisual,Windows::UI::Composition::ISpriteVisual2>::GetIids(a1 - 8);
}
