/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VSceneNodeCollection@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$IIterable@PEAVSceneNode@Scenes@Composition@UI@Windows@@@785@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180142EC0
 * Callers:
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VSceneNodeCollection@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$IIterable@PEAVSceneNode@Scenes@Composition@UI@Windows@@@785@@WRL2@Microsoft@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800B0420 (-GetRuntimeClassName@-$NestedWinRtImplements@VSceneNodeCollection@Scenes@Composition@UI@Windows@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneNodeCollection,Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneNode *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Scenes::SceneNode *>>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 176),
           a2);
}
