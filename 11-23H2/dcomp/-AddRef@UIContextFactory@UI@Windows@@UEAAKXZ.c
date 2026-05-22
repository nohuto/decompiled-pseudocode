/*
 * XREFs of ?AddRef@UIContextFactory@UI@Windows@@UEAAKXZ @ 0x1800097F0
 * Callers:
 *     ?AddRef@AppContentRootFactory@UI@Windows@@W7EAAKXZ @ 0x1800A95F0 (-AddRef@AppContentRootFactory@UI@Windows@@W7EAAKXZ.c)
 *     ?AddRef@UIContextFactory@UI@Windows@@WCI@EAAKXZ @ 0x1800A9610 (-AddRef@UIContextFactory@UI@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::UIContextFactory::AddRef(Windows::UI::UIContextFactory *this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionIslandStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(this);
}
