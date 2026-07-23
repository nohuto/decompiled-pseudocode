/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x14057A0E8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x140254680 (KiCopyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(unsigned __int16 *a1)
{
  KiCopyAffinityEx((__int64)a1, a1[1], (unsigned __int16 *)KiIntSteerAffinitizedInterrupts);
  return KeAddProcessorAffinityEx(a1, KiClockTimerOwner);
}
