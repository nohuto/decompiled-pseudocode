/*
 * XREFs of ?AddRef@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAKXZ @ 0x18008D180
 * Callers:
 *     ?AddRef@CompositionCapabilitiesFactory@Composition@UI@Windows@@W7EAAKXZ @ 0x1800A9630 (-AddRef@CompositionCapabilitiesFactory@Composition@UI@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CompositionCapabilitiesFactory@Composition@UI@Windows@@WCI@EAAKXZ @ 0x1800A9650 (-AddRef@CompositionCapabilitiesFactory@Composition@UI@Windows@@WCI@EAAKXZ.c)
 *     ?AddRef@CompositionCapabilitiesFactory@Composition@UI@Windows@@WDA@EAAKXZ @ 0x1800A9670 (-AddRef@CompositionCapabilitiesFactory@Composition@UI@Windows@@WDA@EAAKXZ.c)
 *     ?AddRef@CompositionCapabilitiesFactory@Composition@UI@Windows@@WDI@EAAKXZ @ 0x1800A9690 (-AddRef@CompositionCapabilitiesFactory@Composition@UI@Windows@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::Composition::CompositionCapabilitiesFactory::AddRef(
        Windows::UI::Composition::CompositionCapabilitiesFactory *this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Windows::UI::Composition::ICompositionCapabilitiesStatics,Microsoft::WRL::CloakedIid<Windows::UI::Composition::Desktop::ICompositionCapabilitiesInteropFactory>>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(this);
}
