/*
 * XREFs of ?CreateSurfaceFromHandle@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAXPEAPEAUIUnknown@@@Z @ 0x1800ABFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateSurfaceFromHandle(
        __int64 a1,
        void *a2,
        struct IUnknown **a3)
{
  return Windows::UI::Composition::InteropCompositor::Api::CreateSurfaceFromHandle(
           (Windows::UI::Composition::InteropCompositor::Api *)(a1 - 16),
           a2,
           a3);
}
