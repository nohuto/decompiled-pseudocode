/*
 * XREFs of UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140214D94
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1402915B4 (MiDeleteFinalPageTables.c)
 *     MiDeletePartialVad @ 0x140309CD4 (MiDeletePartialVad.c)
 *     MiBeginProcessClean @ 0x140342800 (MiBeginProcessClean.c)
 *     MiDeleteEmptyPageTables @ 0x1403577A0 (MiDeleteEmptyPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x1406190E8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140619278 (MiReleaseOutSwappedProcessCommit.c)
 *     MiCopyOnWriteCheckConditions @ 0x140666E20 (MiCopyOnWriteCheckConditions.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406AB290 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiUnlockVadRange @ 0x1406AFF64 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MiInitializeVadCellBitMap @ 0x1406B2D54 (MiInitializeVadCellBitMap.c)
 *     MiInsertProcessVads @ 0x1406B3068 (MiInsertProcessVads.c)
 *     MiReserveUserMemory @ 0x14071F3E0 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14071FA58 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x140720280 (MiMapViewOfDataSection.c)
 *     MmFreeVirtualMemory @ 0x1407450C0 (MmFreeVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748574 (MiMapLockedPagesInUserSpace.c)
 *     MiPrepareVadDelete @ 0x14076D4F4 (MiPrepareVadDelete.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30CE0 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A32038 (MiCoalescePlaceholderAllocations.c)
 *     MiAllocateEnclaveVad @ 0x140A3CC88 (MiAllocateEnclaveVad.c)
 *     MiResizeAweBitMap @ 0x140A42110 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x140A42320 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall UNLOCK_ADDRESS_SPACE_UNORDERED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *result; // rax

  *(_BYTE *)(a1 + 1384) &= ~1u;
  v2 = a2 + 1224;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 1224);
  result = (_QWORD *)KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
