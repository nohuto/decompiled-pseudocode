/*
 * XREFs of MiFillPteHierarchy @ 0x14028AEF0
 * Callers:
 *     MiClearNonPagedPtes @ 0x140212458 (MiClearNonPagedPtes.c)
 *     MiSynchronizeSystemVa @ 0x1402619B0 (MiSynchronizeSystemVa.c)
 *     MiDeletePagablePteRange @ 0x14027A160 (MiDeletePagablePteRange.c)
 *     MiLockPoolCommitPageTable @ 0x14028613C (MiLockPoolCommitPageTable.c)
 *     MiCaptureDeleteHierarchy @ 0x14028ACA0 (MiCaptureDeleteHierarchy.c)
 *     MiGetPhysicalAddress @ 0x14028BF20 (MiGetPhysicalAddress.c)
 *     MiPfCompleteInPageSupport @ 0x1402A3AEC (MiPfCompleteInPageSupport.c)
 *     MiInPagePageTable @ 0x1402E4D70 (MiInPagePageTable.c)
 *     MiFindActualFaultingPte @ 0x1402EF4C0 (MiFindActualFaultingPte.c)
 *     MiInitializePageFaultPacket @ 0x1402EF73C (MiInitializePageFaultPacket.c)
 *     MiBitmapRangeZeroEx @ 0x1402FBDB0 (MiBitmapRangeZeroEx.c)
 *     MiVaToPfnEx @ 0x14038A270 (MiVaToPfnEx.c)
 *     MiSmallVaStillMapsFrame @ 0x1403A8F90 (MiSmallVaStillMapsFrame.c)
 *     MiLockStealUserVm @ 0x1403BDF18 (MiLockStealUserVm.c)
 *     MmFreeContiguousMemory @ 0x1403C3600 (MmFreeContiguousMemory.c)
 *     MiDbgCopyMemoryTarget @ 0x140643A30 (MiDbgCopyMemoryTarget.c)
 *     MiUpdateForkMaps @ 0x140665430 (MiUpdateForkMaps.c)
 *     MiMapProcessExecutable @ 0x1407A3090 (MiMapProcessExecutable.c)
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
