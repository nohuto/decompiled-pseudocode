/*
 * XREFs of ExAllocatePoolMm @ 0x1402E2970
 * Callers:
 *     MiAbsorbPossibleEngineChanges @ 0x140221054 (MiAbsorbPossibleEngineChanges.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1402220E0 (MiAllocateAcceleratorDescriptor.c)
 *     MiReferenceIoPages @ 0x140336790 (MiReferenceIoPages.c)
 *     MiGetHugePageToZero @ 0x140351300 (MiGetHugePageToZero.c)
 *     MiComputeIdealDpcGang @ 0x14038BAFC (MiComputeIdealDpcGang.c)
 *     MiZeroPageCalibrate @ 0x1403AA7D0 (MiZeroPageCalibrate.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x1403AAAF8 (MiAllocateZeroCalibrationBuffer.c)
 *     MiAllocateZeroPageDecisionTraceBuffer @ 0x1403B3A8C (MiAllocateZeroPageDecisionTraceBuffer.c)
 *     MiLockWorkingSetForLargeMapping @ 0x140650698 (MiLockWorkingSetForLargeMapping.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F9F20 (MiCombineAllPhysicalMemory.c)
 *     MiAddSecureEntry @ 0x140745F74 (MiAddSecureEntry.c)
 *     MiCreateZeroThreadContext @ 0x140837D38 (MiCreateZeroThreadContext.c)
 *     MiCreatePerNodeZeroingConductor @ 0x14085F898 (MiCreatePerNodeZeroingConductor.c)
 *     MiInitializeScrubPacket @ 0x140A462DC (MiInitializeScrubPacket.c)
 *     MmInitializeProcessor @ 0x140A89098 (MmInitializeProcessor.c)
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B5EFB4 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402080C0 (ExAllocatePoolWithQuotaTag.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402AD4E0 (ExpAllocatePoolWithTagFromNode.c)
 *     ExpPoolFlagsToPoolType @ 0x140AAEB60 (ExpPoolFlagsToPoolType.c)
 */

PVOID __fastcall ExAllocatePoolMm(int a1, SIZE_T a2, ULONG a3, int a4)
{
  __int64 v4; // rbx
  char v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+31h] [rbp-17h] BYREF
  POOL_TYPE PoolType; // [rsp+34h] [rbp-14h] BYREF

  v4 = 0LL;
  PoolType = NonPagedPool;
  v11 = 0;
  v10 = 0;
  if ( (int)ExpPoolFlagsToPoolType(a1, 1, (unsigned int)&PoolType, (unsigned int)&v11, (__int64)&v10) >= 0 )
  {
    if ( v11 )
      return ExAllocatePoolWithQuotaTag(PoolType, a2, a3);
    else
      return (PVOID)ExpAllocatePoolWithTagFromNode(PoolType, a2, a3, a4, v10 != 0);
  }
  return (PVOID)v4;
}
