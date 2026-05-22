/*
 * XREFs of ?AddRef@EdgyExperienceSourceFactory@Internal@Interactions@Composition@UI@Windows@@UEAAKXZ @ 0x180012CB0
 * Callers:
 *     ?AddRef@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@W7EAAKXZ @ 0x1800A96B0 (-AddRef@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@W7EAAKXZ.c)
 *     ?AddRef@SceneMeshFactory@Scenes@Composition@UI@Windows@@WCI@EAAKXZ @ 0x1800A96D0 (-AddRef@SceneMeshFactory@Scenes@Composition@UI@Windows@@WCI@EAAKXZ.c)
 *     ?AddRef@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@WDI@EAAKXZ @ 0x1800AA150 (-AddRef@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Windows::UI::Composition::Interactions::Internal::EdgyExperienceSourceFactory::AddRef(
        Windows::UI::Composition::Interactions::Internal::EdgyExperienceSourceFactory *this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::IHolographicCompositionDisplayStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(this);
}
