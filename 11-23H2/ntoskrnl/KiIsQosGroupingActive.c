/*
 * XREFs of KiIsQosGroupingActive @ 0x14034F488
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x1402C8720 (KiCheckPreferredHeteroProcessor.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14034F330 (PpmPerfArbitratorApplyProcessorState.c)
 *     KiHeteroIdleSetReduction @ 0x14046214C (KiHeteroIdleSetReduction.c)
 *     KiSelectProcessorToPreempt @ 0x14046237C (KiSelectProcessorToPreempt.c)
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
