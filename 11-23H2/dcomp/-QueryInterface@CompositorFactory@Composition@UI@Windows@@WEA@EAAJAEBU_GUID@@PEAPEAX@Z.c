/*
 * XREFs of ?QueryInterface@CompositorFactory@Composition@UI@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AB130
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
           (Windows::UI::Composition::CompositorFactory *)(a1 - 64),
           a2,
           a3);
}
