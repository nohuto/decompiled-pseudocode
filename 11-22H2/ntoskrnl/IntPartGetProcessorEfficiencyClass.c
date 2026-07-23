/*
 * XREFs of IntPartGetProcessorEfficiencyClass @ 0x140387714
 * Callers:
 *     IntpAllocateProcessorContext @ 0x140B53F58 (IntpAllocateProcessorContext.c)
 *     IntPartGetClassAffinityGroup @ 0x140B54014 (IntPartGetClassAffinityGroup.c)
 * Callees:
 *     KiGetProcessorEfficiencyClass @ 0x14020E8F4 (KiGetProcessorEfficiencyClass.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255090 (KeGetProcessorIndexFromNumber.c)
 */

bool __fastcall IntPartGetProcessorEfficiencyClass(_PROCESSOR_NUMBER *a1)
{
  ULONG ProcessorIndexFromNumber; // eax

  if ( (KiInterruptSteeringFlags & 0x10) != 0 )
    return 0;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a1);
  return KiGetProcessorEfficiencyClass(KiProcessorBlock[ProcessorIndexFromNumber]);
}
