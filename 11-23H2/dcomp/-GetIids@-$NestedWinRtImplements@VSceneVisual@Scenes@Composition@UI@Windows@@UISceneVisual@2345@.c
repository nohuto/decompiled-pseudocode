/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VSceneVisual@Scenes@Composition@UI@Windows@@UISceneVisual@2345@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180145C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneVisual,Windows::UI::Composition::Scenes::ISceneVisual>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 320),
           a2,
           a3);
}
