/*
 * XREFs of ?QueryInterface@CompositionObjectFactory@Composition@UI@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AB010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionObjectFactory::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::UI::Composition::CompositionObjectFactory::QueryInterface(
           (Windows::UI::Composition::CompositionObjectFactory *)(a1 - 40),
           a2,
           a3);
}
