/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x14036BCD0
 * Callers:
 *     KeMaskInterrupt @ 0x14031F5B4 (KeMaskInterrupt.c)
 *     HalpHvInitMcaPcrContext @ 0x1403802E4 (HalpHvInitMcaPcrContext.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140507938 (HalpPmuReservedResourcesProcessorCallback.c)
 *     KeSetTargetProcessorDpc @ 0x1405723C0 (KeSetTargetProcessorDpc.c)
 *     KiAltContextWorkQueueAddItem @ 0x140580214 (KiAltContextWorkQueueAddItem.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x140612F74 (WheaFlushETWEventsAddWorkRtn.c)
 *     HalpMcaInitializePcrContext @ 0x140A90488 (HalpMcaInitializePcrContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x1402551B0 (KeGetProcessorIndexFromNumber.c)
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
