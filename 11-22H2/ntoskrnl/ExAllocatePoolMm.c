/*
 * XREFs of ExAllocatePoolMm @ 0x1402E26E0
 * Callers:
 *     MiAbsorbPossibleEngineChanges @ 0x140221074 (MiAbsorbPossibleEngineChanges.c)
 *     MiAllocateAcceleratorDescriptor @ 0x140222100 (MiAllocateAcceleratorDescriptor.c)
 *     MiReferenceIoPages @ 0x140336360 (MiReferenceIoPages.c)
 *     MiGetHugePageToZero @ 0x140350B60 (MiGetHugePageToZero.c)
 *     MiComputeIdealDpcGang @ 0x14038940C (MiComputeIdealDpcGang.c)
 *     MiZeroPageCalibrate @ 0x1403A9F00 (MiZeroPageCalibrate.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x1403AA228 (MiAllocateZeroCalibrationBuffer.c)
 *     MiAllocateZeroPageDecisionTraceBuffer @ 0x1403B321C (MiAllocateZeroPageDecisionTraceBuffer.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1406501B8 (MiLockWorkingSetForLargeMapping.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F9DC0 (MiCombineAllPhysicalMemory.c)
 *     MiAddSecureEntry @ 0x140746294 (MiAddSecureEntry.c)
 *     MiCreateZeroThreadContext @ 0x140839588 (MiCreateZeroThreadContext.c)
 *     MiCreatePerNodeZeroingConductor @ 0x14085F7B8 (MiCreatePerNodeZeroingConductor.c)
 *     MiInitializeScrubPacket @ 0x140A4609C (MiInitializeScrubPacket.c)
 *     MmInitializeProcessor @ 0x140A898EC (MmInitializeProcessor.c)
 *     MiInitNucleus @ 0x140B44F88 (MiInitNucleus.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B62B24 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402080C0 (ExAllocatePoolWithQuotaTag.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402AD220 (ExpAllocatePoolWithTagFromNode.c)
 *     ExpPoolFlagsToPoolType @ 0x140AAFB60 (ExpPoolFlagsToPoolType.c)
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
