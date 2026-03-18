/*
 * XREFs of KeWakeProcessor @ 0x1403B4940
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x140423360 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1404257E0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140425B20 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140425E60 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1404261A0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1404264E0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140427360 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140428220 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x14042CF40 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140430F00 (KiMcheckAbort.c)
 * Callees:
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0 (KeInterlockedClearProcessorAffinityEx.c)
 */

unsigned __int64 __fastcall KeWakeProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Number; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  CurrentPrcb->DeepSleep = 0;
  KeInterlockedClearProcessorAffinityEx(KeSleepingProcessors, Number, a3);
  v5 = __readcr4();
  if ( (v5 & 0x20080) != 0 )
  {
    result = v5 ^ 0x80;
    __writecr4(v5 ^ 0x80);
    __writecr4(v5);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
