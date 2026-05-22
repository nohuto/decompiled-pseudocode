/*
 * XREFs of ?AddRef@CompositorFactory@Composition@UI@Windows@@UEAAKXZ @ 0x180089B60
 * Callers:
 *     ?AddRef@CompositorFactory@Composition@UI@Windows@@W7EAAKXZ @ 0x1800AA1B0 (-AddRef@CompositorFactory@Composition@UI@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CompositorFactory@Composition@UI@Windows@@WCI@EAAKXZ @ 0x1800AA1D0 (-AddRef@CompositorFactory@Composition@UI@Windows@@WCI@EAAKXZ.c)
 *     ?AddRef@CompositorFactory@Composition@UI@Windows@@WDI@EAAKXZ @ 0x1800AA1F0 (-AddRef@CompositorFactory@Composition@UI@Windows@@WDI@EAAKXZ.c)
 *     ?AddRef@CompositorFactory@Composition@UI@Windows@@WEA@EAAKXZ @ 0x1800AA210 (-AddRef@CompositorFactory@Composition@UI@Windows@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::Composition::CompositorFactory::AddRef(
        Windows::UI::Composition::CompositorFactory *this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::IInteropCompositorFactoryPartner>,Windows::UI::Composition::ICompositorStatics,Windows::UI::Composition::IInteropCompositorFactoryRestricted,0>::AddRef(this);
}
