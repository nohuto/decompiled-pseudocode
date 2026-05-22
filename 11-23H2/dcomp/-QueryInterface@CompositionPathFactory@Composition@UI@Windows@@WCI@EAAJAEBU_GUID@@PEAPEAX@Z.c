/*
 * XREFs of ?QueryInterface@CompositionPathFactory@Composition@UI@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AB050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionPathFactory::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::UI::Composition::CompositionPathFactory::QueryInterface(
           (Windows::UI::Composition::CompositionPathFactory *)(a1 - 40),
           a2,
           a3);
}
