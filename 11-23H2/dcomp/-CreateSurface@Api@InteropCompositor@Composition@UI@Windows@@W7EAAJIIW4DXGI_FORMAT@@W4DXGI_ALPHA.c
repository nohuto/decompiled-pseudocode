/*
 * XREFs of ?CreateSurface@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionSurface@@@Z @ 0x1800ABF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateSurface(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        enum DXGI_ALPHA_MODE a5,
        struct IDCompositionSurface **a6)
{
  return Windows::UI::Composition::InteropCompositor::Api::CreateSurface(
           (Windows::UI::Composition::InteropCompositor::Api *)(a1 - 8),
           a2,
           a3,
           a4,
           a5,
           a6);
}
