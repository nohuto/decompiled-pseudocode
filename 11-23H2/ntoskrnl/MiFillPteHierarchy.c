/*
 * XREFs of MiFillPteHierarchy @ 0x14028B180
 * Callers:
 *     MiClearNonPagedPtes @ 0x140212458 (MiClearNonPagedPtes.c)
 *     MiSynchronizeSystemVa @ 0x140261C40 (MiSynchronizeSystemVa.c)
 *     MiDeletePagablePteRange @ 0x14027A3F0 (MiDeletePagablePteRange.c)
 *     MiLockPoolCommitPageTable @ 0x1402863CC (MiLockPoolCommitPageTable.c)
 *     MiCaptureDeleteHierarchy @ 0x14028AF30 (MiCaptureDeleteHierarchy.c)
 *     MiGetPhysicalAddress @ 0x14028C1B0 (MiGetPhysicalAddress.c)
 *     MiPfCompleteInPageSupport @ 0x1402A3D7C (MiPfCompleteInPageSupport.c)
 *     MiInPagePageTable @ 0x1402E5000 (MiInPagePageTable.c)
 *     MiFindActualFaultingPte @ 0x1402EF750 (MiFindActualFaultingPte.c)
 *     MiInitializePageFaultPacket @ 0x1402EF9CC (MiInitializePageFaultPacket.c)
 *     MiBitmapRangeZeroEx @ 0x1402FC040 (MiBitmapRangeZeroEx.c)
 *     MiVaToPfnEx @ 0x14038A450 (MiVaToPfnEx.c)
 *     MiSmallVaStillMapsFrame @ 0x1403A9170 (MiSmallVaStillMapsFrame.c)
 *     MiLockStealUserVm @ 0x1403BE0F8 (MiLockStealUserVm.c)
 *     MmFreeContiguousMemory @ 0x1403C37E0 (MmFreeContiguousMemory.c)
 *     MiDbgCopyMemoryTarget @ 0x140643F80 (MiDbgCopyMemoryTarget.c)
 *     MiUpdateForkMaps @ 0x140665980 (MiUpdateForkMaps.c)
 *     MiMapProcessExecutable @ 0x1407A3280 (MiMapProcessExecutable.c)
 *     MxMapVa @ 0x140B431AC (MxMapVa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFillPteHierarchy(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a2 = v2;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a2[1] = v3;
  result = 0xFFFFF68000000000uLL;
  v5 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a2[2] = v5;
  a2[3] = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return result;
}
