/*
 * XREFs of ?GetFrameStatistics@CDevice@DirectComposition@@W7EAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z @ 0x1800A8B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::GetFrameStatistics(__int64 a1, struct DCOMPOSITION_FRAME_STATISTICS *a2)
{
  return DirectComposition::CDevice::GetFrameStatistics((DirectComposition::CDevice *)(a1 - 8), a2);
}
