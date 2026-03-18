/*
 * XREFs of KiIsQosGroupingActive @ 0x14034F2E8
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x1402C8490 (KiCheckPreferredHeteroProcessor.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14034F190 (PpmPerfArbitratorApplyProcessorState.c)
 *     KiHeteroIdleSetReduction @ 0x140461D4C (KiHeteroIdleSetReduction.c)
 *     KiSelectProcessorToPreempt @ 0x140461F7C (KiSelectProcessorToPreempt.c)
 * Callees:
 *     <none>
 */

bool KiIsQosGroupingActive()
{
  char v0; // cl

  if ( (KiHeteroSchedulerOptionsMask & 2) != 0 )
    return (KiHeteroSchedulerOptions & 2) != 0;
  v0 = 0;
  if ( (KiVelocityFlags & 0x800) != 0 )
    return KeHeteroSystemQos != 0;
  return v0;
}
