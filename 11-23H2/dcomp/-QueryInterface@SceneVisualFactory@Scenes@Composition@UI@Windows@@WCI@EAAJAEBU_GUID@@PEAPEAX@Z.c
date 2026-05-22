/*
 * XREFs of ?QueryInterface@SceneVisualFactory@Scenes@Composition@UI@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AAE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Windows::UI::Composition::Scenes::SceneVisualFactory::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::UI::Composition::Scenes::SceneVisualFactory::QueryInterface(
           (Windows::UI::Composition::Scenes::SceneVisualFactory *)(a1 - 40),
           a2,
           a3);
}
