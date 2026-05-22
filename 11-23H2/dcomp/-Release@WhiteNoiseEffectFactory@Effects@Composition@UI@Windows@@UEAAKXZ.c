/*
 * XREFs of ?Release@WhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@UEAAKXZ @ 0x180010AE0
 * Callers:
 *     ?Release@CompositionEffectSourceParameterFactory@Composition@UI@Windows@@W7EAAKXZ @ 0x1800AB390 (-Release@CompositionEffectSourceParameterFactory@Composition@UI@Windows@@W7EAAKXZ.c)
 *     ?Release@CompositionEffectSourceParameterFactory@Composition@UI@Windows@@WCI@EAAKXZ @ 0x1800AB3B0 (-Release@CompositionEffectSourceParameterFactory@Composition@UI@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::Composition::Effects::WhiteNoiseEffectFactory::Release(
        Windows::UI::Composition::Effects::WhiteNoiseEffectFactory *this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionEffectSourceParameterFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(this);
}
