/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VSpriteVisual@Composition@UI@Windows@@UISpriteVisual@234@UISpriteVisual2@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180127FA0
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VLayerVisual@Composition@UI@Windows@@UILayerVisual@234@UILayerVisual2@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE610 (-GetIids@-$NestedWinRtImplements@VLayerVisual@Composition@UI@Windows@@UILayerVisual@234@UILayerV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::SpriteVisual,Windows::UI::Composition::ISpriteVisual,Windows::UI::Composition::ISpriteVisual2>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 312),
           a2,
           a3);
}
