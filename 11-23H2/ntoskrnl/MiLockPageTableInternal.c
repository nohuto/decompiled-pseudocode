/*
 * XREFs of MiLockPageTableInternal @ 0x1402377D0
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x14021B580 (MiOutPageSingleKernelStack.c)
 *     MiInitializeWorkingSetList @ 0x140223424 (MiInitializeWorkingSetList.c)
 *     MiResolvePageTablePage @ 0x1402360F0 (MiResolvePageTablePage.c)
 *     MiLockPageLeafPageTable @ 0x140236A10 (MiLockPageLeafPageTable.c)
 *     MiFastLockLeafPageTable @ 0x140237350 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x14023F1D0 (MiCheckProcessShadow.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14025C400 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x14025D330 (MiGetNextPageTablePte.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267AF0 (MiMakeSystemCacheRangeValid.c)
 *     MiSetVaAgeList @ 0x140270C70 (MiSetVaAgeList.c)
 *     MiAllocateKernelStackPages @ 0x140273550 (MiAllocateKernelStackPages.c)
 *     MiDeletePagablePteRange @ 0x14027A3F0 (MiDeletePagablePteRange.c)
 *     MiClearPteAccessed @ 0x14027C860 (MiClearPteAccessed.c)
 *     MiWsleFlush @ 0x1402810A0 (MiWsleFlush.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiDeleteKernelStack @ 0x140283C20 (MiDeleteKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x1402845A0 (MiSetSystemCodeProtection.c)
 *     MiLockWorkingSetOptimal @ 0x140285BFC (MiLockWorkingSetOptimal.c)
 *     MiSetPagingOfDriver @ 0x140291014 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MmProtectPool @ 0x140297250 (MmProtectPool.c)
 *     NtLockVirtualMemory @ 0x1402A33B0 (NtLockVirtualMemory.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MiEvictPageTableLock @ 0x1402E54C0 (MiEvictPageTableLock.c)
 *     MiIsPageTableDeletable @ 0x1402E5B14 (MiIsPageTableDeletable.c)
 *     MiRemoveMappedPtes @ 0x1402E6870 (MiRemoveMappedPtes.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403250DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiEncodeProtoFill @ 0x14034EC00 (MiEncodeProtoFill.c)
 *     MiRewritePteWithLockBit @ 0x140376630 (MiRewritePteWithLockBit.c)
 *     MiLockPageTable @ 0x140376690 (MiLockPageTable.c)
 *     MiMapWithLargePages @ 0x14038E8F4 (MiMapWithLargePages.c)
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     MiMapMdlCommon @ 0x1403A7750 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403B1724 (MiGetWsAndMakePageTablesNx.c)
 *     MiLockDriverPageRange @ 0x14061A380 (MiLockDriverPageRange.c)
 *     MiUnmapMdlCommon @ 0x14061E728 (MiUnmapMdlCommon.c)
 *     MiReplaceImportEntry @ 0x14062CC00 (MiReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x14062D4D0 (MiJumpStackTarget.c)
 *     MiFaultInPagedPool @ 0x1406310A8 (MiFaultInPagedPool.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632F88 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x1406336DC (MiSwitchToTransition.c)
 *     MiMapRetpolineStubs @ 0x140640C2C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140641764 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x14064233C (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x1406435CC (MmMapHotPatchTablePage.c)
 *     MiDeleteKernelShadowStack @ 0x140644914 (MiDeleteKernelShadowStack.c)
 *     MiUnmapLegacyAwePage @ 0x14064C428 (MiUnmapLegacyAwePage.c)
 *     MiUnlockPageTableRange @ 0x14064D730 (MiUnlockPageTableRange.c)
 *     MiReleaseLargePdeMappings @ 0x14065FD24 (MiReleaseLargePdeMappings.c)
 *     MiMarkBootKernelStack @ 0x140B45D4C (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x140B5B894 (MmFreeLoaderBlock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1402611B0 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140312480 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPageTableLockBuffer @ 0x140319A68 (MiGetPageTableLockBuffer.c)
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1403493A0 (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD4A0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD4D0 (HvlNotifyLongSpinWait.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14046058E (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiLockPageTableInternal(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  char v4; // al
  unsigned int v6; // esi
  char v7; // dl
  signed __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned __int64 v11; // rdx
  int v12; // ebp
  unsigned __int64 v13; // rdx
  bool v14; // zf
  signed __int64 v15; // rax
  __int64 v17; // rcx
  volatile signed __int32 *PageTableLockBuffer; // rbx
  int v19; // ebp
  unsigned __int32 v20; // r8d
  char v21; // cl
  signed __int32 v22; // eax
  volatile __int64 *v23; // r8
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  __int64 v25; // rdx
  signed __int64 v26; // rdx
  signed __int64 v27; // rax
  char v28; // al
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v30; // edx
  signed __int32 v31; // eax
  volatile LONG *v32; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v34; // rax
  __int64 v35; // r8
  int v36; // [rsp+78h] [rbp+10h] BYREF
  int v37; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_BYTE *)(a1 + 184);
  v6 = 0;
  v7 = v4 & 7;
  v36 = 0;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v7 )
    {
      v28 = v4 & 7;
      if ( v28 == 7 )
      {
        v23 = (volatile __int64 *)&unk_140C67200;
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v28 == 5 )
        {
          v23 = (volatile __int64 *)&unk_140C671F8;
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        }
        else
        {
          v23 = (volatile __int64 *)&unk_140C67210;
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
        }
      }
    }
    else
    {
      v23 = (volatile __int64 *)(a1 + 176);
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    if ( (a3 & 1) != 0 )
      return KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(v23, SelfmapLockHandle);
    SelfmapLockHandle->LockQueue.Lock = (unsigned __int64 *volatile)v23;
    SelfmapLockHandle->LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(SelfmapLockHandle, v23);
      return 1LL;
    }
    v25 = _InterlockedExchange64(v23, (__int64)SelfmapLockHandle);
    if ( v25 )
    {
      KxWaitForLockOwnerShip(SelfmapLockHandle, v25, v23, a4);
      return 1LL;
    }
    return 1LL;
  }
  if ( a2 < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_3;
  if ( v7 )
  {
    if ( a2 > 0xFFFFF6FB7DBEDFFFuLL )
      goto LABEL_3;
    v37 = 0;
    PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, a2, &v36);
    v19 = a3 & 1;
    v20 = *PageTableLockBuffer;
LABEL_18:
    while ( 1 )
    {
      v21 = v36;
      while ( ((v20 >> v21) & 1) != 0 )
      {
        if ( v19 )
          return 0LL;
        if ( ((v20 >> v21) & 2) == 0 )
        {
          v30 = v20 | (2 << v21);
          v31 = _InterlockedCompareExchange(PageTableLockBuffer, v30, v20);
          v14 = v20 == v31;
          v20 = v31;
          if ( v14 )
            v20 = v30;
          goto LABEL_18;
        }
        do
        {
          KeYieldProcessorEx(&v37);
          v20 = *PageTableLockBuffer;
          v21 = v36;
        }
        while ( (((unsigned __int32)*PageTableLockBuffer >> v36) & 1) != 0 );
      }
      v22 = _InterlockedCompareExchange(PageTableLockBuffer, ~(2 << v21) & (v20 | (1 << v21)), v20);
      v14 = v20 == v22;
      v20 = v22;
      if ( v14 )
        return 1LL;
      if ( v19 )
        return 0LL;
    }
  }
  if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v17 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 624);
    if ( v17 )
    {
      v32 = (volatile LONG *)(v17 + 4 * ((a2 >> 3) & 0x1FF));
      if ( (a3 & 4) != 0 )
      {
        ExAcquireSpinLockSharedAtDpcLevel(v32);
      }
      else if ( (a3 & 1) != 0 )
      {
        if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v32) )
          return 0LL;
      }
      else
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v32);
      }
      return 1LL;
    }
  }
LABEL_3:
  v9 = *(_QWORD *)a2;
  v10 = 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v34 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v35 = v9 | 0x20;
      if ( (v34 & 0x20) == 0 )
        v35 = *(_QWORD *)a2;
      v9 = v35;
      if ( (v34 & 0x42) != 0 )
        v9 = v35 | 0x42;
    }
  }
  v11 = v9;
  if ( (v9 & 1) != 0 )
  {
    v12 = a3 & 1;
    do
    {
      if ( (v11 & 0x1000000000000000LL) != 0 )
      {
        if ( v12 )
          return v6;
        if ( ((v11 >> 60) & 2) != 0 )
        {
          do
          {
            if ( (++v10 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
            {
              HvlNotifyLongSpinWait(v10);
            }
            else
            {
              _mm_pause();
            }
            v9 = *(_QWORD *)a2;
          }
          while ( (*(_QWORD *)a2 & 0x1000000000000000LL) != 0 );
        }
        else
        {
          v26 = v11 | 0x2000000000000000LL;
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          v27 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v26, v9);
          v14 = v9 == v27;
          v9 = v27;
          if ( v14 )
            v9 = v26;
        }
      }
      else
      {
        v13 = v11 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v13, v9);
        v14 = v9 == v15;
        v9 = v15;
        if ( v14 )
          return 1;
        if ( v12 )
          return v6;
      }
      v11 = v9;
    }
    while ( (v9 & 1) != 0 );
  }
  return v6;
}
