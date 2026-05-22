/*
 * XREFs of ?GetFrameStatistics@CDevice@DirectComposition@@WBA@EAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z @ 0x1800A8BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::GetFrameStatistics(__int64 a1, struct DCOMPOSITION_FRAME_STATISTICS *a2)
{
  return DirectComposition::CDevice::GetFrameStatistics((DirectComposition::CDevice *)(a1 - 16), a2);
}
