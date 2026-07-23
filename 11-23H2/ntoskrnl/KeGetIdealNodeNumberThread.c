/*
 * XREFs of KeGetIdealNodeNumberThread @ 0x140570CA0
 * Callers:
 *     MmAllocateNonCachedMemory @ 0x140A2DBC0 (MmAllocateNonCachedMemory.c)
 *     MiCreateHardwareEnclave @ 0x140A3DA38 (MiCreateHardwareEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x140A40608 (MiAllocateUserPhysicalPages.c)
 *     MmManagePartitionMoveMemory @ 0x140A45A68 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetIdealNodeNumberThread(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 192) + 138LL);
}
