/*
 * XREFs of ?CreateTargetForHwnd@Api@InteropCompositor@Composition@UI@Windows@@WBA@EAAJPEAUHWND__@@HPEAPEAUIDCompositionTarget@@@Z @ 0x1800AC050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateTargetForHwnd(
        __int64 a1,
        HWND a2,
        int a3,
        struct IDCompositionTarget **a4)
{
  return Windows::UI::Composition::InteropCompositor::Api::CreateTargetForHwnd(
           (struct _RTL_CRITICAL_SECTION *)(a1 - 16),
           a2,
           a3,
           a4);
}
