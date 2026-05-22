/*
 * XREFs of ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionVisual2@@@Z @ 0x1800AC1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateVisual(
        __int64 a1,
        struct IDCompositionVisual2 **a2)
{
  return Windows::UI::Composition::InteropCompositor::Api::CreateVisual(
           (Windows::UI::Composition::InteropCompositor::Api *)(a1 - 8),
           a2);
}
