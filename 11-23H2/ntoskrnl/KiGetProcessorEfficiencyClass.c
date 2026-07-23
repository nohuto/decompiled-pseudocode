/*
 * XREFs of KiGetProcessorEfficiencyClass @ 0x14020E8D4
 * Callers:
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KiEndDebugAccumulation @ 0x14020E5F0 (KiEndDebugAccumulation.c)
 *     KiAccumulateCycleStats @ 0x14020E7C0 (KiAccumulateCycleStats.c)
 *     KiAccumulateProcessorCycleStats @ 0x14020E890 (KiAccumulateProcessorCycleStats.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KiSetQuantumTargetThread @ 0x1402B2D80 (KiSetQuantumTargetThread.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KeRemovePriQueue @ 0x1402BF340 (KeRemovePriQueue.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140306240 (KeQueryLogicalProcessorRelationship.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140382D30 (KiConfigureCpuSetSchedulingInformation.c)
 *     IntPartGetProcessorEfficiencyClass @ 0x140383C24 (IntPartGetProcessorEfficiencyClass.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiGetProcessorEfficiencyClass(__int64 a1)
{
  char v1; // al

  if ( KeHeteroSystem )
    v1 = *(_BYTE *)(a1 + 34056);
  else
    v1 = *(_BYTE *)(a1 + 34059);
  return v1 != 0;
}
