/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x140326740
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14034A488 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     HalpHvInitMcaPcrContext @ 0x140380484 (HalpHvInitMcaPcrContext.c)
 *     KiInterruptDispatchCommon @ 0x1403A3124 (KiInterruptDispatchCommon.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x1405807B0 (WheaFlushETWEventsSelectProcessor.c)
 *     PopIdleWakeNotifyWakeSource @ 0x14059E0DC (PopIdleWakeNotifyWakeSource.c)
 *     KiCopyCountersWorker @ 0x140975428 (KiCopyCountersWorker.c)
 *     HalpMcaInitializePcrContext @ 0x140A90308 (HalpMcaInitializePcrContext.c)
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
