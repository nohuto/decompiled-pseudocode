/*
 * XREFs of MiInitializeSystemPageTable @ 0x1402E45A8
 * Callers:
 *     MiCreateSystemPageTable @ 0x1402E4410 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AEA4 (MiUnmapPageInHyperSpaceWorker.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiSetPageTablePfnBuddy @ 0x1402923FC (MiSetPageTablePfnBuddy.c)
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 *     MiGetContainingPageTable @ 0x1402E1270 (MiGetContainingPageTable.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E3F60 (MiInitializePfnForOtherProcess.c)
 *     MiGetLeafVa @ 0x1402E5A20 (MiGetLeafVa.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiFillPhysicalPages @ 0x1403390F0 (MiFillPhysicalPages.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140367B48 (MiInsertRecursiveTbFlushEntries.c)
 *     MiReplicatePteChange @ 0x140367CB0 (MiReplicatePteChange.c)
 *     MiTransformValidPteInPlace @ 0x1403C2B1C (MiTransformValidPteInPlace.c)
 *     MiClearPteAccessedBitRange @ 0x1403C5644 (MiClearPteAccessedBitRange.c)
 *     KeCopyPage @ 0x140424020 (KeCopyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiArePageContentsZero @ 0x14064D490 (MiArePageContentsZero.c)
 *     MxCopyPage @ 0x140B9A540 (MxCopyPage.c)
 */

__int64 __fastcall MiInitializeSystemPageTable(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  unsigned int v8; // esi
  char v9; // bl
  int v10; // edi
  unsigned __int64 v11; // r13
  unsigned __int64 LeafVa; // rbx
  __int64 v13; // r12
  unsigned __int64 ContainingPageTable; // rbx
  __int64 v15; // r8
  unsigned __int64 ValidPte; // rdi
  char v17; // al
  unsigned __int64 v18; // rbx
  int v19; // esi
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v25; // rdi
  _QWORD *v26; // rbx
  __int64 v27; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v30; // edx
  char v31; // cl
  unsigned __int8 v32; // al
  int v33; // edx
  __int64 v34; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  __int64 v38; // [rsp+90h] [rbp+18h] BYREF
  _QWORD *v39; // [rsp+98h] [rbp+20h]

  v39 = a4;
  a5 = *(_QWORD *)(a1 + 168);
  v34 = a5 + 144;
  v8 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v38 = MI_READ_PTE_LOCK_FREE(a3);
  v9 = v38;
  v10 = a2 != 0 ? 6 : 4;
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a4 + 0x44000000000LL) >> 4);
  if ( (MiFlags & 0x80u) != 0LL && (++dword_140C68060 & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero(v11);
  if ( a2 )
  {
    if ( (v9 & 1) != 0 )
    {
      if ( KeGetCurrentPrcb()->MmInternal )
      {
        v25 = MiMapPageInHyperSpaceWorker(v11, 0LL, 0x80000000);
        KeCopyPage(v25, (__int64)(a3 << 25) >> 16);
        if ( (MiFlags & 0x2000000) == 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140C65B8F) != 0 )
        {
          v26 = (_QWORD *)v25;
          if ( v25 < v25 + 4096 )
          {
            do
            {
              v27 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v26);
              v38 = v27;
              if ( (v27 & 1) != 0 && (v27 & 0x20) != 0 )
                *v26 &= ~0x20uLL;
              ++v26;
            }
            while ( (unsigned __int64)v26 < v25 + 4096 );
          }
        }
        MiUnmapPageInHyperSpaceWorker(v25, 0x11u);
        v10 = a2 != 0 ? 6 : 4;
      }
      else
      {
        MxCopyPage(v11);
      }
    }
  }
  else if ( (v9 & 1) == 0
         || (PVOID)(((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v38) >> 12) & 0xFFFFFFFFFFLL) != qword_140C69858 )
  {
    MiFillPhysicalPages(v11);
  }
  LeafVa = MiGetLeafVa(a3);
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1 )
  {
    v8 = 1;
  }
  else if ( LeafVa <= 0x7FFFFFFEFFFFLL
         || LeafVa <= qword_140C67170 && LeafVa >= qword_140C6A658
         || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = 4;
  }
  v13 = (__int64)v39;
  *v39 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a3);
  v15 = v10 | 0x90000000;
  if ( a2 )
    v15 = v10 | 0x98000000;
  ValidPte = MiMakeValidPte(a3, v11, v15);
  v38 = ValidPte;
  if ( (MiFlags & 0x2000000) == 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140C65B8F) != 0 )
  {
    ValidPte &= ~0x20uLL;
    v38 = ValidPte;
  }
  if ( a2 == 3 && (MiFlags & 0x30) != 0 )
  {
    if ( (v8 & 1) != 0 )
    {
      ContainingPageTable = v11;
      MiSetPageTablePfnBuddy(v13, KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25], 0);
      ValidPte = v38;
    }
    else if ( v8 < 4 )
    {
      if ( PsInitialSystemProcess )
        ContainingPageTable = PsInitialSystemProcess->DirectoryTableBase >> 12;
      else
        ContainingPageTable = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
    }
  }
  MiInitializePfnForOtherProcess(v11, a3, ContainingPageTable, 512);
  if ( a2 == 3 )
    KeAcquireInStackQueuedSpinLock(&qword_140C698C0, &LockHandle);
  v17 = MI_READ_PTE_LOCK_FREE(a3);
  if ( (v17 & 1) == 0 )
  {
    v18 = ValidPte;
    v19 = 0;
    result = MiPteInShadowRange(a3);
    if ( (_DWORD)result )
    {
      result = MiPteHasShadow(v22, v21, v23);
      if ( (_DWORD)result )
      {
        v19 = 1;
        if ( !HIBYTE(word_140C66DFC) && (ValidPte & 1) != 0 )
        {
          result = 0x8000000000000000uLL;
          v18 = ValidPte | 0x8000000000000000uLL;
        }
      }
      else
      {
        result = (__int64)KeGetCurrentThread();
        if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) != 0 && (ValidPte & 1) != 0 )
        {
          result = 0x8000000000000000uLL;
          v18 = ValidPte | 0x8000000000000000uLL;
        }
        ValidPte = v38;
      }
    }
    *(_QWORD *)a3 = v18;
    if ( v19 )
      result = MiWritePteShadow(a3, v18);
    if ( a2 != 3 )
      goto LABEL_22;
LABEL_29:
    if ( *(_DWORD *)(a5 + 120) != 2 )
      MiReplicatePteChange(a3, ValidPte, 1LL);
    result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !(_DWORD)KiIrqlFlags )
      goto LABEL_32;
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) == 0
      || (unsigned __int8)result > 0xFu
      || LockHandle.OldIrql > 0xFu
      || (unsigned __int8)result < 2u )
    {
      goto LABEL_32;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v30 = SchedulerAssist[5];
    v31 = LockHandle.OldIrql + 1;
    goto LABEL_81;
  }
  if ( (v17 & 0x20) != 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140C65B8F) != 0 )
    MiClearPteAccessedBitRange(a1, a2, a3);
  result = MiTransformValidPteInPlace(a3, a3, ValidPte, a2, v34, LockHandle.LockQueue.Next);
  if ( a2 == 3 )
  {
    MiInsertRecursiveTbFlushEntries(v35, 3LL, a3);
    goto LABEL_29;
  }
LABEL_22:
  if ( !a2 )
  {
    result = a5;
    if ( *(_DWORD *)(a5 + 120) == 4 )
    {
      v32 = MiLockPageInline(v13);
      OldIrql = v32;
      *(_WORD *)(v13 + 32) = 2;
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !(_DWORD)KiIrqlFlags )
        goto LABEL_32;
      result = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) == 0
        || (unsigned __int8)result > 0xFu
        || (unsigned __int8)OldIrql > 0xFu
        || (unsigned __int8)result < 2u )
      {
        goto LABEL_32;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v31 = OldIrql + 1;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v30 = SchedulerAssist[5];
LABEL_81:
      result = ~(unsigned __int16)(-1LL << v31);
      v33 = result & v30;
      SchedulerAssist[5] = v33;
      if ( !v33 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_32:
      __writecr8(OldIrql);
    }
  }
  return result;
}
