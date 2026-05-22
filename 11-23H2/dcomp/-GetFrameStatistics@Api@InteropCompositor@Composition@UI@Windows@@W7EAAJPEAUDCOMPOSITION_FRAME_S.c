/*
 * XREFs of ?GetFrameStatistics@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z @ 0x1800AC1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::GetFrameStatistics(
        __int64 a1,
        struct DCOMPOSITION_FRAME_STATISTICS *a2)
{
  return Windows::UI::Composition::InteropCompositor::Api::GetFrameStatistics(
           (struct _RTL_CRITICAL_SECTION *)(a1 - 8),
           a2);
}
