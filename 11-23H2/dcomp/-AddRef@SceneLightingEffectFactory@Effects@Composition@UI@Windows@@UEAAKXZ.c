/*
 * XREFs of ?AddRef@SceneLightingEffectFactory@Effects@Composition@UI@Windows@@UEAAKXZ @ 0x180010E30
 * Callers:
 *     ?AddRef@CompositionPathFactory@Composition@UI@Windows@@W7EAAKXZ @ 0x1800AA170 (-AddRef@CompositionPathFactory@Composition@UI@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CompositionPathFactory@Composition@UI@Windows@@WCI@EAAKXZ @ 0x1800AA190 (-AddRef@CompositionPathFactory@Composition@UI@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::Composition::Effects::SceneLightingEffectFactory::AddRef(
        Windows::UI::Composition::Effects::SceneLightingEffectFactory *this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionPathFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(this);
}
