/*
 * XREFs of ?CreateShadowEffect@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionShadowEffect@@@Z @ 0x1800ABF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateShadowEffect(
        __int64 a1,
        struct IDCompositionShadowEffect **a2)
{
  return Windows::UI::Composition::InteropCompositor::Api::CreateShadowEffect(
           (Windows::UI::Composition::InteropCompositor::Api *)(a1 - 8),
           a2);
}
