/*
 * XREFs of RtlWriteReleaseTickLock @ 0x1403B65D8
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140A48E70 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x140A58F00 (KiCreateCpuSetForProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWriteReleaseTickLock(__int64 *a1)
{
  __int64 result; // rax

  result = *a1 + 1;
  *a1 = result;
  return result;
}
