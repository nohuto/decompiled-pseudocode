/*
 * XREFs of ?CreateVirtualSurface@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x1800AC1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateVirtualSurface(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_ALPHA_MODE a5,
        struct IDCompositionVirtualSurface **a6)
{
  return Windows::UI::Composition::InteropCompositor::Api::CreateVirtualSurface(
           (Windows::UI::Composition::InteropCompositor::Api *)(a1 - 16),
           a2,
           a3,
           a4,
           a5,
           a6);
}
