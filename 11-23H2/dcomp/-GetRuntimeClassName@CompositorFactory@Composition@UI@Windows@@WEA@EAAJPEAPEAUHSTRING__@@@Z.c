/*
 * XREFs of ?GetRuntimeClassName@CompositorFactory@Composition@UI@Windows@@WEA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AA690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositorFactory::GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  return Windows::UI::Composition::Effects::WhiteNoiseEffectFactory::GetRuntimeClassName(
           (Windows::UI::Composition::Effects::WhiteNoiseEffectFactory *)(a1 - 64),
           a2);
}
