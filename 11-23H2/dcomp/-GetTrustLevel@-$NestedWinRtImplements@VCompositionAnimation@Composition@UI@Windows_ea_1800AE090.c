/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AE090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionAnimation,Windows::UI::Composition::ICompositionAnimation,Windows::UI::Composition::ICompositionAnimation2,Windows::UI::Composition::ICompositionAnimation3,Windows::UI::Composition::ICompositionAnimation4,Windows::UI::Composition::ICompositionAnimationBase,Windows::UI::Composition::ICompositionAnimationBaseInternal>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneBoundingBox,Windows::UI::Composition::Scenes::ISceneObject>::GetTrustLevel(
           a1 - 32,
           a2);
}
