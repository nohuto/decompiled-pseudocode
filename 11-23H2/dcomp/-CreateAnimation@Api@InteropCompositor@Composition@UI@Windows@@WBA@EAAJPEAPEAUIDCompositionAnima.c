/*
 * XREFs of ?CreateAnimation@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAPEAUIDCompositionAnimation@@@Z @ 0x1800ABBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateAnimation(
        __int64 a1,
        struct IDCompositionAnimation **a2)
{
  return Windows::UI::Composition::InteropCompositor::Api::CreateAnimation(
           (struct _RTL_CRITICAL_SECTION *)(a1 - 16),
           a2);
}
