/*
 * XREFs of ?Release@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAKXZ @ 0x18007F380
 * Callers:
 *     ?Release@CompositionCapabilitiesFactory@Composition@UI@Windows@@W7EAAKXZ @ 0x1800A9ED0 (-Release@CompositionCapabilitiesFactory@Composition@UI@Windows@@W7EAAKXZ.c)
 *     ?Release@CompositionCapabilitiesFactory@Composition@UI@Windows@@WCI@EAAKXZ @ 0x1800A9EF0 (-Release@CompositionCapabilitiesFactory@Composition@UI@Windows@@WCI@EAAKXZ.c)
 *     ?Release@CompositionCapabilitiesFactory@Composition@UI@Windows@@WDA@EAAKXZ @ 0x1800A9F10 (-Release@CompositionCapabilitiesFactory@Composition@UI@Windows@@WDA@EAAKXZ.c)
 *     ?Release@CompositionCapabilitiesFactory@Composition@UI@Windows@@WDI@EAAKXZ @ 0x1800A9F30 (-Release@CompositionCapabilitiesFactory@Composition@UI@Windows@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::Composition::CompositionCapabilitiesFactory::Release(
        Windows::UI::Composition::CompositionCapabilitiesFactory *this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Windows::UI::Composition::ICompositionCapabilitiesStatics,Microsoft::WRL::CloakedIid<Windows::UI::Composition::Desktop::ICompositionCapabilitiesInteropFactory>>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(this);
}
