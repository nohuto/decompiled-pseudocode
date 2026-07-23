/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x14036BE70
 * Callers:
 *     KeMaskInterrupt @ 0x14031F844 (KeMaskInterrupt.c)
 *     HalpHvInitMcaPcrContext @ 0x140380484 (HalpHvInitMcaPcrContext.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140507E88 (HalpPmuReservedResourcesProcessorCallback.c)
 *     KeSetTargetProcessorDpc @ 0x140572900 (KeSetTargetProcessorDpc.c)
 *     KiAltContextWorkQueueAddItem @ 0x140580704 (KiAltContextWorkQueueAddItem.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x1406134C4 (WheaFlushETWEventsAddWorkRtn.c)
 *     HalpMcaInitializePcrContext @ 0x140A90308 (HalpMcaInitializePcrContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140255270 (KeGetProcessorIndexFromNumber.c)
 */

NTSTATUS __stdcall KeSetTargetProcessorDpcEx(PKDPC Dpc, PPROCESSOR_NUMBER ProcNumber)
{
  ULONG ProcessorIndexFromNumber; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return -1073741811;
  if ( !Dpc->DpcData )
    Dpc->Number = ProcessorIndexFromNumber + 2048;
  return 0;
}
