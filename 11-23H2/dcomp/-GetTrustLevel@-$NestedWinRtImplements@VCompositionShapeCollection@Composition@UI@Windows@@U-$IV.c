/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionShapeCollection@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAVCompositionShape@Composition@UI@Windows@@@674@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AC590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionShapeCollection,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionShape *>>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneComponentCollection,Windows::UI::Composition::Scenes::ISceneObject>::GetTrustLevel(
           a1 - 8,
           a2);
}
