/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VSceneNode@Scenes@Composition@UI@Windows@@UISceneNode@2345@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180142960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneNode,Windows::UI::Composition::Scenes::ISceneNode>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 208),
           a2,
           a3);
}
