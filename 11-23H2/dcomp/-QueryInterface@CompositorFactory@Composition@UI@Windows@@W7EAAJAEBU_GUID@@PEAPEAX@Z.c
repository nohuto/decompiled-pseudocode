/*
 * XREFs of ?QueryInterface@CompositorFactory@Composition@UI@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AB0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositorFactory::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::UI::Composition::CompositorFactory::QueryInterface(
           (Windows::UI::Composition::CompositorFactory *)(a1 - 8),
           a2,
           a3);
}
