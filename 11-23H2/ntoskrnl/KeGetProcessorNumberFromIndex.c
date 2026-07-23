/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x14030D150
 * Callers:
 *     KeMaskInterrupt @ 0x14031F844 (KeMaskInterrupt.c)
 *     HalpInterruptInitializeIpis @ 0x14037E850 (HalpInterruptInitializeIpis.c)
 *     IoGetAffinityInterrupt @ 0x1403B60F0 (IoGetAffinityInterrupt.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403CEFD4 (KeSetIdealProcessorThreadByNumber.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140507E88 (HalpPmuReservedResourcesProcessorCallback.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x1405807B0 (WheaFlushETWEventsSelectProcessor.c)
 *     PspWriteTebIdealProcessor @ 0x14076FC2C (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x1409659CC (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x1409EF9F0 (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x140A9D2F0 (PnprQuiesceProcessorDpc.c)
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
