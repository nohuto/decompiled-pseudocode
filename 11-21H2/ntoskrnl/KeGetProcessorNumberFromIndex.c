/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x1402949F0
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x1403861B4 (KeSetIdealProcessorThreadByNumber.c)
 *     KeMaskInterrupt @ 0x1403AED64 (KeMaskInterrupt.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403B4DA0 (HalGetProcessorIdByNtNumber.c)
 *     HalpInterruptInitializeIpis @ 0x1403B8D0C (HalpInterruptInitializeIpis.c)
 *     IoGetAffinityInterrupt @ 0x1403DEAB0 (IoGetAffinityInterrupt.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x14057C2F0 (WheaFlushETWEventsSelectProcessor.c)
 *     PspWriteTebIdealProcessor @ 0x1407028B8 (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x140951B40 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x1409EB100 (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x140A687F0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeGetProcessorNumberFromIndex(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNumber)
{
  unsigned int v3; // ecx

  if ( !ProcIndex )
  {
    *ProcNumber = 0;
    return 0;
  }
  if ( ProcIndex < 0x800 )
  {
    v3 = KiProcessorIndexToNumberMappingTable[ProcIndex];
    if ( v3 )
    {
      ProcNumber->Reserved = 0;
      ProcNumber->Group = v3 >> 6;
      ProcNumber->Number = v3 & 0x3F;
      return 0;
    }
  }
  return -1073741811;
}
