/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VSceneComponentCollection@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$IIterable@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@785@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x180090520
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VSceneNodeCollection@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$IIterable@PEAVSceneNode@Scenes@Composition@UI@Windows@@@785@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800B0480 (-GetTrustLevel@-$NestedWinRtImplements@VSceneNodeCollection@Scenes@Composition@UI@Windows@@U-$IV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneComponentCollection,Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Scenes::SceneComponent *>>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 168) + 32LL);
  return result;
}
