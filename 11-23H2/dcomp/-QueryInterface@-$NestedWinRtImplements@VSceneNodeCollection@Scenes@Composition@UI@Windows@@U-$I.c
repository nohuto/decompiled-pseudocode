/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VSceneNodeCollection@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$IIterable@PEAVSceneNode@Scenes@Composition@UI@Windows@@@785@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B04A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneNodeCollection,Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneNode *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Scenes::SceneNode *>>::QueryInterface(
        __int64 a1)
{
  return Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::CompositionGraphicsDevice,Windows::UI::Composition::ICompositionGraphicsDeviceInterop>::QueryInterface(a1 - 8);
}
