/*
 * XREFs of ?QueryInterface@SceneNodeFactory@Scenes@Composition@UI@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AAD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Windows::UI::Composition::Scenes::SceneNodeFactory::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::UI::Composition::Scenes::SceneNodeFactory::QueryInterface(
           (Windows::UI::Composition::Scenes::SceneNodeFactory *)(a1 - 8),
           a2,
           a3);
}
