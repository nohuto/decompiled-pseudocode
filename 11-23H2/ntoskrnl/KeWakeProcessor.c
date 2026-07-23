/*
 * XREFs of KeWakeProcessor @ 0x140341B10
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x140422D80 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140425290 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1404255F0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140425950 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140425CB0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140426010 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140426EB0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140427DB0 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x14042C980 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140430C80 (KiMcheckAbort.c)
 * Callees:
 *     KeInterlockedClearProcessorAffinityEx @ 0x140341B70 (KeInterlockedClearProcessorAffinityEx.c)
 */

unsigned __int64 KeWakeProcessor()
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Number; // rdx
  unsigned __int64 v2; // rcx
  unsigned __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  CurrentPrcb->DeepSleep = 0;
  KeInterlockedClearProcessorAffinityEx(&KeSleepingProcessors, Number);
  v2 = __readcr4();
  if ( (v2 & 0x20080) != 0 )
  {
    result = v2 ^ 0x80;
    __writecr4(v2 ^ 0x80);
    __writecr4(v2);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
