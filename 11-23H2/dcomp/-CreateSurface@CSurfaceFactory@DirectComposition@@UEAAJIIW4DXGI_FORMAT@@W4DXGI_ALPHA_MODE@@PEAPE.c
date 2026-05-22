/*
 * XREFs of ?CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionSurface@@@Z @ 0x18008DEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEAPEAUIDCompositionSurface@@@Z @ 0x18002A850 (-CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEA.c)
 */

__int64 __fastcall DirectComposition::CSurfaceFactory::CreateSurface(
        DirectComposition::CSurfaceFactory *this,
        int a2,
        int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_ALPHA_MODE a5,
        struct IDCompositionSurface **a6)
{
  return DirectComposition::CSurfaceFactory::CreateSurface(this, a2, a3, a4, a5, 0, a6);
}
