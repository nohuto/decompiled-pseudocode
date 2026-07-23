/*
 * XREFs of KeWaitForGate @ 0x14034A780
 * Callers:
 *     MiMarkSessionDeletePending @ 0x1402007FC (MiMarkSessionDeletePending.c)
 *     MiDrainControlAreaWrites @ 0x1402198E4 (MiDrainControlAreaWrites.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1402870D0 (MiCheckPurgeAndUpMapCount.c)
 *     MiReferenceControlArea @ 0x140288198 (MiReferenceControlArea.c)
 *     MiUnlinkWorkingSet @ 0x140292E54 (MiUnlinkWorkingSet.c)
 *     MiLockControlAreaSectionExtend @ 0x140293024 (MiLockControlAreaSectionExtend.c)
 *     MiLockFreeLargePageLists @ 0x1402D7FF0 (MiLockFreeLargePageLists.c)
 *     MiZeroInParallel @ 0x140304230 (MiZeroInParallel.c)
 *     MiWaitForPageWriteCompletion @ 0x14034A6C4 (MiWaitForPageWriteCompletion.c)
 *     MmOutSwapProcess @ 0x14034C9F8 (MmOutSwapProcess.c)
 *     MiAttemptSectionDelete @ 0x14035F0D0 (MiAttemptSectionDelete.c)
 *     MiMappedPageWriter @ 0x14038FA30 (MiMappedPageWriter.c)
 *     KiExecuteDpc @ 0x14039A720 (KiExecuteDpc.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403A088C (MiTryUnlinkNodeLargePages.c)
 *     MiFreeUnusedPfnPages @ 0x1403B1E20 (MiFreeUnusedPfnPages.c)
 *     KeGenericCallDpcEx @ 0x1403C6090 (KeGenericCallDpcEx.c)
 *     KiEpfStart @ 0x1405790C4 (KiEpfStart.c)
 *     MiChangingSubsectionProtos @ 0x14063BE64 (MiChangingSubsectionProtos.c)
 *     MiIncrementLargeSubsections @ 0x14063D9C8 (MiIncrementLargeSubsections.c)
 *     MiWaitForExtentDeletions @ 0x1406402E4 (MiWaitForExtentDeletions.c)
 *     MiIncrementAweMapCount @ 0x14064AB40 (MiIncrementAweMapCount.c)
 *     MiWaitForVadDeletion @ 0x140660CC8 (MiWaitForVadDeletion.c)
 *     PspQueryWorkingSetWatch @ 0x1409AF604 (PspQueryWorkingSetWatch.c)
 *     MiZeroHugeRangeCore @ 0x140A2DF6C (MiZeroHugeRangeCore.c)
 *     MmScrubMemory @ 0x140A46B34 (MmScrubMemory.c)
 *     sub_140B10838 @ 0x140B10838 (sub_140B10838.c)
 *     sub_140B19070 @ 0x140B19070 (sub_140B19070.c)
 * Callees:
 *     KiCommitThreadWait @ 0x140241F00 (KiCommitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x140251F10 (KiAcquireKobjectLockSafe.c)
 *     KiFastExitThreadWait @ 0x1402BBBE0 (KiFastExitThreadWait.c)
 *     KiBeginThreadWait @ 0x1402C18E0 (KiBeginThreadWait.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  $77FB1784F920FE33919952D0EDCFD5FB *v7; // rdi
  unsigned __int8 CurrentIrql; // r8
  unsigned int v9; // esi
  struct _LIST_ENTRY *v10; // rcx
  _DWORD *SchedulerAssist; // r10
  __int64 v13; // rdx

  CurrentThread = KeGetCurrentThread();
  v7 = &CurrentThread->320;
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v13) = 4;
      else
        v13 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v13;
    }
    CurrentThread->WaitIrql = CurrentIrql;
    v9 = KiBeginThreadWait((__int64)CurrentThread, a3, a2, 0);
    if ( v9 )
      break;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
    if ( *(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 4) = 0;
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
      KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, 0LL);
      return v9;
    }
    v10 = *(struct _LIST_ENTRY **)(a1 + 16);
    if ( v10->Flink != (struct _LIST_ENTRY *)(a1 + 8) )
      __fastfail(3u);
    v7->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(a1 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v10;
    v10->Flink = (struct _LIST_ENTRY *)v7;
    *(_QWORD *)(a1 + 16) = v7;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v9 = (unsigned int)KiCommitThreadWait((ULONG_PTR)CurrentThread, (__int64 *)&CurrentThread->320, 0LL, 0LL, 0LL);
  }
  while ( v9 == 256 );
  return v9;
}
