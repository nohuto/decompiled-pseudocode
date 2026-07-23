/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x140221CF0
 * Callers:
 *     MiZeroThreadContending @ 0x140220D2C (MiZeroThreadContending.c)
 *     MiUnparkedCoreCount @ 0x140220E6C (MiUnparkedCoreCount.c)
 *     MiGetIdleProcessorCount @ 0x140220F5C (MiGetIdleProcessorCount.c)
 *     KiIntPartGetLowestClassProcessorInMask @ 0x140221BB4 (KiIntPartGetLowestClassProcessorInMask.c)
 *     MiInitializeDpcGroupAffinity @ 0x140221C20 (MiInitializeDpcGroupAffinity.c)
 *     KiCallInterruptServiceRoutine @ 0x140324BE0 (KiCallInterruptServiceRoutine.c)
 *     HalpTimerConfigureInterrupt @ 0x14037D134 (HalpTimerConfigureInterrupt.c)
 *     MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x14038E2D8 (MiInitializeZeroEngineCurrentPassDpcAffinity.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x14038E4AC (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     HalpIommuConfigureInterrupt @ 0x1403AA048 (HalpIommuConfigureInterrupt.c)
 *     MiGetNextAffinityWalker @ 0x1403BFAA8 (MiGetNextAffinityWalker.c)
 *     MiSetIdealProcessorThread @ 0x1406675BC (MiSetIdealProcessorThread.c)
 *     MiInitializeZeroingDomains @ 0x1406B29AC (MiInitializeZeroingDomains.c)
 *     PpmRegisterPerfStates @ 0x14082E84C (PpmRegisterPerfStates.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B5EFB4 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiFindProcessorsForMemoryOnlyNode @ 0x140B9A10C (MiFindProcessorsForMemoryOnlyNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightGroupAffinity(__int64 a1)
{
  unsigned __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  _BitScanForward64(&v2, v2);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(a1 + 8) + (unsigned int)v2];
}
