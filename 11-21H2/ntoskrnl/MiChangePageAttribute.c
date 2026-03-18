/*
 * XREFs of MiChangePageAttribute @ 0x140267E78
 * Callers:
 *     MiZeroPhysicalPage @ 0x1402359C4 (MiZeroPhysicalPage.c)
 *     MiSetPfnOwnedAndActive @ 0x14024EA68 (MiSetPfnOwnedAndActive.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140266074 (MiPageAttributeBatchChangeNeeded.c)
 *     MiCopySinglePage @ 0x14026BE94 (MiCopySinglePage.c)
 *     MiFillCombinePage @ 0x14026C038 (MiFillCombinePage.c)
 *     MiInitializeReadInProgressPfn @ 0x1402724C0 (MiInitializeReadInProgressPfn.c)
 *     MiDeleteClusterSection @ 0x140276E5C (MiDeleteClusterSection.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiMapPagesToZero @ 0x1402C5D00 (MiMapPagesToZero.c)
 *     MiCoalesceFreePages @ 0x1402C7DF0 (MiCoalesceFreePages.c)
 *     MiDeleteClusterPage @ 0x1402CC0F0 (MiDeleteClusterPage.c)
 *     MiFinalizePageAttribute @ 0x1402E5708 (MiFinalizePageAttribute.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiBuildMdlForMappedFileFault @ 0x140313DE0 (MiBuildMdlForMappedFileFault.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiCompletePrivateZeroFault @ 0x140321F70 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiAssignNonPagedPoolPte @ 0x14033A6B0 (MiAssignNonPagedPoolPte.c)
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     MiInitializePfn @ 0x14033C880 (MiInitializePfn.c)
 *     MiAddExpansionNonPagedPool @ 0x1403C3290 (MiAddExpansionNonPagedPool.c)
 *     MiIncrementAweMapCount @ 0x1405AB148 (MiIncrementAweMapCount.c)
 *     MiBuildForkPageTable @ 0x1405B85F8 (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x1405BA864 (MiDuplicateCloneLeaf.c)
 *     MiComputeOptimalZeroPath @ 0x140B088E4 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiAbortCombineScan @ 0x140268998 (MiAbortCombineScan.c)
 *     MiPageCombiningActive @ 0x140268A48 (MiPageCombiningActive.c)
 *     MiFlushCacheForAttributeChange @ 0x140268AB0 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026A230 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, unsigned int a2, char a3)
{
  char v3; // si
  unsigned __int8 v6; // bl
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  signed __int32 v23[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a3;
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_140C52A08 == KeGetCurrentThread() )
    v6 = 17;
  else
    v6 = MiLockPageInline(a1);
  v7 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( (unsigned int)MiPageCombiningActive(0LL) )
  {
    MiAbortCombineScan(a1, v8);
    LOBYTE(v8) = *(_BYTE *)(a1 + 34);
    v3 = -5;
  }
  LOBYTE(v10) = (_BYTE)a2 << 6;
  *(_BYTE *)(a1 + 34) = ((_BYTE)a2 << 6) | v8 & 0x3F;
  if ( v7 != 3 && (v3 & 4) == 0 )
  {
    if ( (v3 & 2) != 0
      || (v10 = (*(_QWORD *)(a1 + 24) >> 59) & 7LL, ((*(_QWORD *)(a1 + 24) >> 59) & 7) == 0)
      || (_InterlockedOr(v23, 0), v9 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v10) & 7, (unsigned int)v9 <= 2)
      && ((v10 & 1) != 0 || (unsigned int)v9 < 2) )
    {
      LOBYTE(v10) = MiFlushEntireTbDueToAttributeChange(v9, 2LL);
    }
    if ( v7 == 1 )
    {
      ++dword_140C50748;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      MiFlushCacheForAttributeChange(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), 1LL, a2);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v16 & v15[5]) == 0;
            v15[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      LOBYTE(v10) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && v6 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v17 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    LOBYTE(v10) = v6;
    __writecr8(v6);
  }
  return v10;
}
