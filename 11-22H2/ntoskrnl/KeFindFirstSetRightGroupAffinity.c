/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x140221D10
 * Callers:
 *     MiZeroThreadContending @ 0x140220D4C (MiZeroThreadContending.c)
 *     MiUnparkedCoreCount @ 0x140220E8C (MiUnparkedCoreCount.c)
 *     MiGetIdleProcessorCount @ 0x140220F7C (MiGetIdleProcessorCount.c)
 *     KiIntPartGetLowestClassProcessorInMask @ 0x140221BD4 (KiIntPartGetLowestClassProcessorInMask.c)
 *     MiInitializeDpcGroupAffinity @ 0x140221C40 (MiInitializeDpcGroupAffinity.c)
 *     KiCallInterruptServiceRoutine @ 0x140324770 (KiCallInterruptServiceRoutine.c)
 *     HalpTimerConfigureInterrupt @ 0x14037D5E4 (HalpTimerConfigureInterrupt.c)
 *     MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x14038BBE8 (MiInitializeZeroEngineCurrentPassDpcAffinity.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x14038BDBC (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     HalpIommuConfigureInterrupt @ 0x1403A9778 (HalpIommuConfigureInterrupt.c)
 *     MiGetNextAffinityWalker @ 0x1403BF268 (MiGetNextAffinityWalker.c)
 *     MiSetIdealProcessorThread @ 0x1406670DC (MiSetIdealProcessorThread.c)
 *     MiInitializeZeroingDomains @ 0x1406B297C (MiInitializeZeroingDomains.c)
 *     PpmRegisterPerfStates @ 0x14083009C (PpmRegisterPerfStates.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B62B24 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiFindProcessorsForMemoryOnlyNode @ 0x140B9B10C (MiFindProcessorsForMemoryOnlyNode.c)
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
