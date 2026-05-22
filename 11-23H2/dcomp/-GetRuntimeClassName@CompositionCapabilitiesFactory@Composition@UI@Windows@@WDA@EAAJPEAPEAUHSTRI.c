/*
 * XREFs of ?GetRuntimeClassName@CompositionCapabilitiesFactory@Composition@UI@Windows@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800A98B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionCapabilitiesFactory::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Windows::UI::Composition::Effects::WhiteNoiseEffectFactory::GetRuntimeClassName(
           (Windows::UI::Composition::Effects::WhiteNoiseEffectFactory *)(a1 - 48),
           a2);
}
