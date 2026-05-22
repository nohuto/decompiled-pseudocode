/*
 * XREFs of ?CreateBlendEffect@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionBlendEffect@@@Z @ 0x1800ABC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateBlendEffect(
        __int64 a1,
        struct IDCompositionBlendEffect **a2)
{
  return Windows::UI::Composition::InteropCompositor::Api::CreateBlendEffect(
           (Windows::UI::Composition::InteropCompositor::Api *)(a1 - 8),
           a2);
}
