/*
 * XREFs of MiUnlockVad @ 0x140289CA0
 * Callers:
 *     MiLockAddressSpaceToo @ 0x14028952C (MiLockAddressSpaceToo.c)
 *     MiDeleteEmptyPageTables @ 0x1403577A0 (MiDeleteEmptyPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x1406190E8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140619278 (MiReleaseOutSwappedProcessCommit.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14061C0A4 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiInsertViewOfPhysicalSection @ 0x140630C30 (MiInsertViewOfPhysicalSection.c)
 *     MiCanDeleteEnclave @ 0x140647148 (MiCanDeleteEnclave.c)
 *     MiWaitForVadDeletion @ 0x140660C58 (MiWaitForVadDeletion.c)
 *     MiFindPlaceholderVadToReplace @ 0x140660D00 (MiFindPlaceholderVadToReplace.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiUnlockVadRange @ 0x1406AFF64 (MiUnlockVadRange.c)
 *     MiAllocateVirtualMemory @ 0x1406F7220 (MiAllocateVirtualMemory.c)
 *     MiReserveUserMemory @ 0x14071F3E0 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14071FA58 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x140720280 (MiMapViewOfDataSection.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CCB64 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30CE0 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A32038 (MiCoalescePlaceholderAllocations.c)
 *     MiApplyImageHotPatchRequest @ 0x140A355E0 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteVadHotPatchState @ 0x140A369DC (MiDeleteVadHotPatchState.c)
 *     MiPrepareToHotPatchVad @ 0x140A3AEEC (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x140A3B018 (MiProcessPatchImageCfg.c)
 *     MiInitializeVsmEnclave @ 0x140A3DFA0 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3E498 (MiLoadSectionIntoVsmEnclave.c)
 *     MiTerminateEnclave @ 0x140A3E8F0 (MiTerminateEnclave.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 */

int __fastcall MiUnlockVad(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  *(_BYTE *)(a1 + 1384) &= ~0x80u;
  v2 = a2 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 40);
  LODWORD(v4) = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v4 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v4 != v4 )
      LODWORD(v4) = KiCheckForKernelApcDelivery(v6, v5, v7, v8);
  }
  return (int)v4;
}
