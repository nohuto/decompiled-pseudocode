/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x140355110
 * Callers:
 *     PopFxAddLogEntry @ 0x140355058 (PopFxAddLogEntry.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14037039C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     HalpHvInitMcaPcrContext @ 0x1403D2700 (HalpHvInitMcaPcrContext.c)
 *     KiInterruptDispatchCommon @ 0x140575CD8 (KiInterruptDispatchCommon.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x14057C2F0 (WheaFlushETWEventsSelectProcessor.c)
 *     PopIdleWakeNotifyWakeSource @ 0x1405DBF90 (PopIdleWakeNotifyWakeSource.c)
 *     KiCopyCountersWorker @ 0x140962218 (KiCopyCountersWorker.c)
 *     HalpMcaInitializePcrContext @ 0x140A5B2F8 (HalpMcaInitializePcrContext.c)
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
