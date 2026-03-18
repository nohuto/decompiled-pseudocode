/*
 * XREFs of KiIsQosGroupingActive @ 0x14023BA88
 * Callers:
 *     KeUpdateQosGroupingSets @ 0x14023BA30 (KeUpdateQosGroupingSets.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140308640 (KiCheckPreferredHeteroProcessor.c)
 *     KiSelectProcessorToPreempt @ 0x14045B3DA (KiSelectProcessorToPreempt.c)
 *     KiHeteroIdleSetReduction @ 0x1405740C4 (KiHeteroIdleSetReduction.c)
 * Callees:
 *     <none>
 */

bool KiIsQosGroupingActive()
{
  char v0; // cl

  v0 = 1;
  if ( (KiHeteroSchedulerOptions & 1) != 0 )
    return (KiHeteroSchedulerOptions & 2) != 0;
  if ( (KiVelocityFlags & 0x800) == 0 || !KeHeteroSystemQos )
    return 0;
  return v0;
}
