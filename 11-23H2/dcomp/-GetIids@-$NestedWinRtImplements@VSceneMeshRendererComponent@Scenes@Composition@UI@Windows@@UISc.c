/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VSceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UISceneMeshRendererComponent@2345@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18010FD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneMeshRendererComponent,Windows::UI::Composition::Scenes::ISceneMeshRendererComponent>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 216),
           a2,
           a3);
}
