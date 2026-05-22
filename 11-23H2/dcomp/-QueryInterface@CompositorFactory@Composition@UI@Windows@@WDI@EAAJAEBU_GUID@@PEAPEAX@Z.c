/*
 * XREFs of ?QueryInterface@CompositorFactory@Composition@UI@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AB110
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
           (Windows::UI::Composition::CompositorFactory *)(a1 - 56),
           a2,
           a3);
}
