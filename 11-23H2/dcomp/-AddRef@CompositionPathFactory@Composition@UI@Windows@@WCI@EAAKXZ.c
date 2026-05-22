/*
 * XREFs of ?AddRef@CompositionPathFactory@Composition@UI@Windows@@WCI@EAAKXZ @ 0x1800AA190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionPathFactory::AddRef(__int64 a1)
{
  return Windows::UI::Composition::Effects::SceneLightingEffectFactory::AddRef((Windows::UI::Composition::Effects::SceneLightingEffectFactory *)(a1 - 40));
}
