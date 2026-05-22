/*
 * XREFs of ?QueryInterface@CompositionCapabilitiesFactory@Composition@UI@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A9C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionCapabilitiesFactory::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::UI::Composition::CompositionCapabilitiesFactory::QueryInterface(
           (Windows::UI::Composition::CompositionCapabilitiesFactory *)(a1 - 8),
           a2,
           a3);
}
