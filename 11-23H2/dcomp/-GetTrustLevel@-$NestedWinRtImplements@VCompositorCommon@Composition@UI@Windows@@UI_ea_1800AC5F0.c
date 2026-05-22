/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AC5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::ICompositor2,Windows::UI::Composition::ICompositor4,Windows::UI::Composition::ICompositor5,Windows::UI::Composition::ICompositor6,Windows::UI::Composition::ICompositor7,Windows::UI::Composition::ICompositor8>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneComponentCollection,Windows::UI::Composition::Scenes::ISceneObject>::GetTrustLevel(
           a1 - 32,
           a2);
}
