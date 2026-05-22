/*
 * XREFs of ?CreateSurfaceFactory@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAUIUnknown@@PEAPEAUIDCompositionSurfaceFactory@@@Z @ 0x1800ABFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateSurfaceFactory(
        __int64 a1,
        struct IUnknown *a2,
        struct IDCompositionSurfaceFactory **a3)
{
  return Windows::UI::Composition::InteropCompositor::Api::CreateSurfaceFactory(
           (Windows::UI::Composition::InteropCompositor::Api *)(a1 - 8),
           a2,
           a3);
}
