/*
 * XREFs of MiReleasePageFileInfo @ 0x14029556C
 * Callers:
 *     MiProcessWsInSwapFault @ 0x140200008 (MiProcessWsInSwapFault.c)
 *     MiOutSwapWorkingSetPte @ 0x140215660 (MiOutSwapWorkingSetPte.c)
 *     MiLockPageAndSetDirty @ 0x140217514 (MiLockPageAndSetDirty.c)
 *     MiReleasePageFileSpace @ 0x14021941C (MiReleasePageFileSpace.c)
 *     MiInPageSingleKernelStack @ 0x14021B0F0 (MiInPageSingleKernelStack.c)
 *     MiLockPageTablePage @ 0x140237BD0 (MiLockPageTablePage.c)
 *     MiResolveTransitionFault @ 0x140262760 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140263370 (MiMigratePfn.c)
 *     MiCompleteProtoPteFault @ 0x140268E70 (MiCompleteProtoPteFault.c)
 *     MiRevertValidPte @ 0x140278D10 (MiRevertValidPte.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F460 (MmSetAddressRangeModifiedEx.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiDeleteValidSystemPage @ 0x140280AA0 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x140281630 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x140281B50 (MiPfnShareCountIsZero.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1402845A0 (MiSetSystemCodeProtection.c)
 *     MiReservePageFileSpace @ 0x140284C30 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x140285100 (MiReservePageFileSpaceForPage.c)
 *     MiMakePteClean @ 0x140285B00 (MiMakePteClean.c)
 *     MiTrimSystemImagePages @ 0x140291384 (MiTrimSystemImagePages.c)
 *     MiWalkVaRange @ 0x140293FE4 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140297250 (MmProtectPool.c)
 *     MiProbeUnlockPage @ 0x1402CB400 (MiProbeUnlockPage.c)
 *     MiDeletePteList @ 0x1402D26E0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D5380 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x1402D6200 (MiDeleteBatch.c)
 *     MiDeleteClusterPage @ 0x1402D64B0 (MiDeleteClusterPage.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiDeleteTransitionPte @ 0x1402DD110 (MiDeleteTransitionPte.c)
 *     MiResolveProtoCombine @ 0x1402E3D88 (MiResolveProtoCombine.c)
 *     MiCombineInitialInstance @ 0x1402EC920 (MiCombineInitialInstance.c)
 *     MiLockPagedAddress @ 0x1402ED780 (MiLockPagedAddress.c)
 *     MiWriteComplete @ 0x1402F45B0 (MiWriteComplete.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403250DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMakeFaultPfnActive @ 0x140335170 (MiMakeFaultPfnActive.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403483F8 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiPurgeImageSection @ 0x14036A5D8 (MiPurgeImageSection.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403A9F14 (MmDbgMarkPfnModifiedWorker.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiStoreMarkLockedPagesModified @ 0x14046DD64 (MiStoreMarkLockedPagesModified.c)
 *     MiStoreWriteModifiedPages @ 0x14046DEAA (MiStoreWriteModifiedPages.c)
 *     MiMakeOutswappedPageResident @ 0x140618ABC (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x14061A380 (MiLockDriverPageRange.c)
 *     MiSetPagesModified @ 0x140628E4C (MiSetPagesModified.c)
 *     MiReplaceImportEntry @ 0x14062CC00 (MiReplaceImportEntry.c)
 *     MiBuildReservationCluster @ 0x140638834 (MiBuildReservationCluster.c)
 *     MiFreeModifiedReservations @ 0x14063A47C (MiFreeModifiedReservations.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063BC40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCompleteSecureProcessFault @ 0x1406460E8 (MiCompleteSecureProcessFault.c)
 *     MmUpdateUserShadowStackValue @ 0x140646CD0 (MmUpdateUserShadowStackValue.c)
 *     MiUnlockStoreLockedPages @ 0x14065D360 (MiUnlockStoreLockedPages.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140664E98 (MiHandleForkTransitionPte.c)
 *     MiFreeReservationRun @ 0x1407B7424 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x140A32E90 (MiScanPagefileSpace.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdateReserveClusterInfo @ 0x1402956B8 (MiUpdateReserveClusterInfo.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1402956E8 (MiCoalescePageFileBitmapsCache.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiStoreSetEvictPageFile @ 0x14065CEB0 (MiStoreSetEvictPageFile.c)
 *     MiClearPageFileHash @ 0x1406660E0 (MiClearPageFileHash.c)
 */

void __fastcall MiReleasePageFileInfo(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  int v5; // r13d
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rdi
  volatile LONG *v9; // rcx
  KIRQL v10; // bp
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  int v19; // [rsp+78h] [rbp+10h]
  __int64 v21; // [rsp+88h] [rbp+20h]

  v3 = a2;
  if ( qword_140C65B40 && (a2 & 0x10) == 0 )
    v3 = a2 & ~qword_140C65B40;
  v4 = HIDWORD(v3);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 8LL * ((unsigned __int16)a2 >> 12) + 17056);
  v7 = (a2 >> 1) & 1;
  v8 = (a2 >> 2) & 1;
  v19 = a3 & 1;
  v9 = (volatile LONG *)(v6 + 232);
  if ( (a3 & 1) != 0 )
  {
    v10 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v9);
  }
  else
  {
    v10 = ExAcquireSpinLockExclusive(v9);
  }
  v11 = *(_QWORD *)(v6 + 112);
  v21 = v11;
  if ( (_DWORD)v7 )
  {
    *(_BYTE *)(*(_QWORD *)(v11 + 32) + (v4 >> 3)) &= ~(1 << (v4 & 7));
    ++*(_QWORD *)(v6 + 48);
  }
  if ( (_DWORD)v8 )
  {
    if ( (a3 & 2) == 0 )
    {
      MiClearPageFileHash(v6, (unsigned int)v4);
      v11 = v21;
    }
    if ( (*(_BYTE *)(v6 + 204) & 0x40) != 0 )
    {
      MiStoreSetEvictPageFile(v6, (unsigned int)v4);
      goto LABEL_13;
    }
    *(_BYTE *)(*(_QWORD *)(v11 + 16) + (v4 >> 3)) &= ~(1 << (v4 & 7));
    v12 = ++*(_QWORD *)(v6 + 24);
    if ( (unsigned int)v4 < *(_DWORD *)(v6 + 120) )
      *(_DWORD *)(v6 + 120) = v4;
    ++*(_DWORD *)(v6 + 128);
    if ( v12 == 1 && (*(_BYTE *)(v6 + 206) & 1) != 0 )
      v5 = 1;
  }
  if ( ((_DWORD)v7 || !_bittest64(*(const signed __int64 **)(v11 + 32), v4))
    && ((_DWORD)v8 || !_bittest64(*(const signed __int64 **)(v11 + 16), v4)) )
  {
    MiCoalescePageFileBitmapsCache(v6, (unsigned int)v7, (unsigned int)v4);
    MiUpdateReserveClusterInfo(*(_QWORD *)(v6 + 248), 0LL, 0LL);
  }
LABEL_13:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 232));
  if ( !v19 )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v10);
  }
  if ( v5 )
    KeSetEvent((PRKEVENT)(a1 + 920), 0, 0);
}
