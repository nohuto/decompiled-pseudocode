/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VSceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UISceneMetallicRoughnessMaterial@2345@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180127F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial,Windows::UI::Composition::Scenes::ISceneMetallicRoughnessMaterial>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 240),
           a2,
           a3);
}
