/*
 * XREFs of ?CreateScaleTransform@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionScaleTransform@@@Z @ 0x1800ABEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateScaleTransform(
        __int64 a1,
        struct IDCompositionScaleTransform **a2)
{
  return Windows::UI::Composition::InteropCompositor::Api::CreateScaleTransform(
           (Windows::UI::Composition::InteropCompositor::Api *)(a1 - 8),
           a2);
}
