/*
 * XREFs of ?Destroy@CompositionSwapChain@Composition@UI@Windows@@UEAAXXZ @ 0x180160710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionSwapChain::Destroy(
        Windows::UI::Composition::CompositionSwapChain *this)
{
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 18);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
