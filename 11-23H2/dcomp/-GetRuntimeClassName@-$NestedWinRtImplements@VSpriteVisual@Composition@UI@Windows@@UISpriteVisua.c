/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VSpriteVisual@Composition@UI@Windows@@UISpriteVisual@234@UISpriteVisual2@234@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180128290
 * Callers:
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VLayerVisual@Composition@UI@Windows@@UILayerVisual@234@UILayerVisual2@234@@WRL2@Microsoft@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AE7B0 (-GetRuntimeClassName@-$NestedWinRtImplements@VLayerVisual@Composition@UI@Windows@@UILayerVisual@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::SpriteVisual,Windows::UI::Composition::ISpriteVisual,Windows::UI::Composition::ISpriteVisual2>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 312),
           a2);
}
