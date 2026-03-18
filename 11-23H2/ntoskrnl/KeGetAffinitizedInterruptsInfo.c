/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x140579BF8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402545C0 (KiCopyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x1402573A0 (KeAddProcessorAffinityEx.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(unsigned __int16 *a1)
{
  KiCopyAffinityEx((__int64)a1, a1[1], (unsigned __int16 *)KiIntSteerAffinitizedInterrupts);
  return KeAddProcessorAffinityEx(a1, KiClockTimerOwner);
}
