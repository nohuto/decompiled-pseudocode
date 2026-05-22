/*
 * XREFs of ?CreateVirtualSurface@CDevice@DirectComposition@@W7EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x1800A8B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateVirtualSurface(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_ALPHA_MODE a5,
        struct IDCompositionVirtualSurface **a6)
{
  return DirectComposition::CDevice::CreateVirtualSurface((DirectComposition::CDevice *)(a1 - 8), a2, a3, a4, a5, a6);
}
