/*
 * XREFs of ?CreateSkewTransform@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDCompositionSkewTransform@@@Z @ 0x1800ABF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateSkewTransform(
        __int64 a1,
        struct IDCompositionSkewTransform **a2)
{
  return Windows::UI::Composition::InteropCompositor::Api::CreateSkewTransform(
           (Windows::UI::Composition::InteropCompositor::Api *)(a1 - 16),
           a2);
}
