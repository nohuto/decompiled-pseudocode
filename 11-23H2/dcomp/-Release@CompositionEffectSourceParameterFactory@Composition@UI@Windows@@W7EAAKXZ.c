/*
 * XREFs of ?Release@CompositionEffectSourceParameterFactory@Composition@UI@Windows@@W7EAAKXZ @ 0x1800AB390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionEffectSourceParameterFactory::Release(__int64 a1)
{
  return Windows::UI::Composition::Effects::WhiteNoiseEffectFactory::Release((Windows::UI::Composition::Effects::WhiteNoiseEffectFactory *)(a1 - 8));
}
