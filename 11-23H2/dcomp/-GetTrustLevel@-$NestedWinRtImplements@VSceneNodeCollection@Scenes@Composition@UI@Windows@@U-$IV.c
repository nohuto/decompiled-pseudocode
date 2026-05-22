/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VSceneNodeCollection@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$IIterable@PEAVSceneNode@Scenes@Composition@UI@Windows@@@785@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800B0480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneNodeCollection,Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneNode *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Scenes::SceneNode *>>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneComponentCollection,Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Scenes::SceneComponent *>>::GetTrustLevel(
           a1 - 8,
           a2);
}
