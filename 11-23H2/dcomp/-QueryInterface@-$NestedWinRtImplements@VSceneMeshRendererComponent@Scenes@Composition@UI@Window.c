/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VSceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UISceneMeshRendererComponent@2345@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneMeshRendererComponent,Windows::UI::Composition::Scenes::ISceneMeshRendererComponent>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 216),
           a2,
           a3);
}
