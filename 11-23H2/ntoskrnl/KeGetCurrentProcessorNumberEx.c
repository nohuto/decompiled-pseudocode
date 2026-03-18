/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x1403264B0
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14034A2F0 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     HalpHvInitMcaPcrContext @ 0x1403802E4 (HalpHvInitMcaPcrContext.c)
 *     KiInterruptDispatchCommon @ 0x1403A2F44 (KiInterruptDispatchCommon.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x1405802C0 (WheaFlushETWEventsSelectProcessor.c)
 *     PopIdleWakeNotifyWakeSource @ 0x14059DBEC (PopIdleWakeNotifyWakeSource.c)
 *     KiCopyCountersWorker @ 0x140975228 (KiCopyCountersWorker.c)
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
