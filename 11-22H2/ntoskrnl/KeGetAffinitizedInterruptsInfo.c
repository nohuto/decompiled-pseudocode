/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x140579C88
 * Callers:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402544A0 (KiCopyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140257280 (KeAddProcessorAffinityEx.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(unsigned __int16 *a1)
{
  KiCopyAffinityEx((__int64)a1, a1[1], (unsigned __int16 *)KiIntSteerAffinitizedInterrupts);
  return KeAddProcessorAffinityEx(a1, KiClockTimerOwner);
}
