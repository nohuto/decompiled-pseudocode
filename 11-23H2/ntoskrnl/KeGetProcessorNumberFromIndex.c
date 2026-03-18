/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x14030CEC0
 * Callers:
 *     KeMaskInterrupt @ 0x14031F5B4 (KeMaskInterrupt.c)
 *     HalpInterruptInitializeIpis @ 0x14037E6B0 (HalpInterruptInitializeIpis.c)
 *     IoGetAffinityInterrupt @ 0x1403B5F10 (IoGetAffinityInterrupt.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403CEDF4 (KeSetIdealProcessorThreadByNumber.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140507938 (HalpPmuReservedResourcesProcessorCallback.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x1405802C0 (WheaFlushETWEventsSelectProcessor.c)
 *     PspWriteTebIdealProcessor @ 0x14076FA3C (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x1409657CC (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x1409EF760 (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x140A9D480 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeGetProcessorNumberFromIndex(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNumber)
{
  unsigned int v2; // ecx

  if ( !ProcIndex )
  {
    *ProcNumber = 0;
    return 0;
  }
  if ( ProcIndex < 0x800 )
  {
    v2 = KiProcessorIndexToNumberMappingTable[ProcIndex];
    if ( v2 )
    {
      ProcNumber->Reserved = 0;
      ProcNumber->Group = v2 >> 6;
      ProcNumber->Number = v2 & 0x3F;
      return 0;
    }
  }
  return -1073741811;
}
