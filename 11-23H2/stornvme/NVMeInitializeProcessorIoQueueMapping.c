/*
 * XREFs of NVMeInitializeProcessorIoQueueMapping @ 0x1C000FA00
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C00036A0 (NVMeHwAdapterControl.c)
 * Callees:
 *     ProcessorToDedicatedIoSqMapping @ 0x1C0010D90 (ProcessorToDedicatedIoSqMapping.c)
 *     ProcessorToIoSqMappingBase @ 0x1C0010E14 (ProcessorToIoSqMappingBase.c)
 */

__int64 __fastcall NVMeInitializeProcessorIoQueueMapping(__int64 a1)
{
  unsigned int i; // esi

  if ( !*(_WORD *)(a1 + 280) )
    return 1LL;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 242); ++i )
  {
    if ( !(unsigned int)StorPortExtendedFunction(116LL, a1, *(unsigned int *)(*(_QWORD *)(a1 + 272) + 72LL * i))
      && *(_WORD *)(a1 + 280) == 1 )
    {
      ProcessorToIoSqMappingBase(a1, *(unsigned int *)(*(_QWORD *)(a1 + 272) + 72LL * i), 0LL, 0LL);
      ProcessorToDedicatedIoSqMapping(a1, *(unsigned int *)(*(_QWORD *)(a1 + 272) + 72LL * i), 0LL);
    }
  }
  return 0LL;
}
