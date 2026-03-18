/*
 * XREFs of KeGetIdealNodeNumberThread @ 0x140570800
 * Callers:
 *     MmAllocateNonCachedMemory @ 0x140A2D980 (MmAllocateNonCachedMemory.c)
 *     MiCreateHardwareEnclave @ 0x140A3D7F8 (MiCreateHardwareEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x140A403C8 (MiAllocateUserPhysicalPages.c)
 *     MmManagePartitionMoveMemory @ 0x140A45828 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetIdealNodeNumberThread(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 192) + 138LL);
}
