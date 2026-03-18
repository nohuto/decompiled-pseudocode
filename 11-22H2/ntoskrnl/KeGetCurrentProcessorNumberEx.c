/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x1403262D0
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140349CE8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     HalpHvInitMcaPcrContext @ 0x140380934 (HalpHvInitMcaPcrContext.c)
 *     KiInterruptDispatchCommon @ 0x1403A2804 (KiInterruptDispatchCommon.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x140580350 (WheaFlushETWEventsSelectProcessor.c)
 *     PopIdleWakeNotifyWakeSource @ 0x14059DC7C (PopIdleWakeNotifyWakeSource.c)
 *     KiCopyCountersWorker @ 0x1409752D8 (KiCopyCountersWorker.c)
 *     HalpMcaInitializePcrContext @ 0x140A90488 (HalpMcaInitializePcrContext.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcNumber)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( ProcNumber )
  {
    ProcNumber->Group = CurrentPrcb->Group;
    *(_WORD *)&ProcNumber->Number = CurrentPrcb->GroupIndex;
  }
  return CurrentPrcb->Number;
}
