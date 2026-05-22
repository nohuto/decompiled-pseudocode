/*
 * XREFs of ?Release@CompositorFactory@Composition@UI@Windows@@UEAAKXZ @ 0x18007F450
 * Callers:
 *     ?Release@CompositorFactory@Composition@UI@Windows@@W7EAAKXZ @ 0x1800AB3F0 (-Release@CompositorFactory@Composition@UI@Windows@@W7EAAKXZ.c)
 *     ?Release@CompositorFactory@Composition@UI@Windows@@WCI@EAAKXZ @ 0x1800AB410 (-Release@CompositorFactory@Composition@UI@Windows@@WCI@EAAKXZ.c)
 *     ?Release@CompositorFactory@Composition@UI@Windows@@WDI@EAAKXZ @ 0x1800AB430 (-Release@CompositorFactory@Composition@UI@Windows@@WDI@EAAKXZ.c)
 *     ?Release@CompositorFactory@Composition@UI@Windows@@WEA@EAAKXZ @ 0x1800AB450 (-Release@CompositorFactory@Composition@UI@Windows@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::Composition::CompositorFactory::Release(
        Windows::UI::Composition::CompositorFactory *this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::IInteropCompositorFactoryPartner>,Windows::UI::Composition::ICompositorStatics,Windows::UI::Composition::IInteropCompositorFactoryRestricted,0>::Release(this);
}
