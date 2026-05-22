/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VSceneVisual@Scenes@Composition@UI@Windows@@UISceneVisual@2345@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180145CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneVisual,Windows::UI::Composition::Scenes::ISceneVisual>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 320),
           a2,
           a3);
}
