/*
 * XREFs of ?Destroy@DrawingSurfaceBase@Composition@UI@Windows@@UEAAXXZ @ 0x180061300
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::DrawingSurfaceBase::Destroy(
        Windows::UI::Composition::CompositionGraphicsDevice **this)
{
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(this + 23);
  Windows::UI::Composition::InvalidatableSurface::Destroy(this);
}
