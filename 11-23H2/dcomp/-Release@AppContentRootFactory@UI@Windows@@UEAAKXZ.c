/*
 * XREFs of ?Release@AppContentRootFactory@UI@Windows@@UEAAKXZ @ 0x1800080C0
 * Callers:
 *     ?Release@CompositionIslandEnvironmentStatics@Composition@UI@Windows@@W7EAAKXZ @ 0x1800A9E90 (-Release@CompositionIslandEnvironmentStatics@Composition@UI@Windows@@W7EAAKXZ.c)
 *     ?Release@CompositionIslandEnvironmentStatics@Composition@UI@Windows@@WCI@EAAKXZ @ 0x1800A9EB0 (-Release@CompositionIslandEnvironmentStatics@Composition@UI@Windows@@WCI@EAAKXZ.c)
 *     ?Release@CompositorControllerFactory@Core@Composition@UI@Windows@@WDI@EAAKXZ @ 0x1800AB3D0 (-Release@CompositorControllerFactory@Core@Composition@UI@Windows@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::AppContentRootFactory::Release(Windows::UI::AppContentRootFactory *this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionIslandEnvironmentStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(this);
}
