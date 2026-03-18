/*
 * XREFs of KiInSwapProcesses @ 0x14021119C
 * Callers:
 *     KeSwapProcessOrStack @ 0x1403C6D20 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiReadyOutSwappedThreads @ 0x1402112F8 (KiReadyOutSwappedThreads.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14036C428 (KeMakeKernelDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x14036C804 (MiMarkPfnTradable.c)
 *     MiSetPageTablePfnBuddy @ 0x14036C868 (MiSetPageTablePfnBuddy.c)
 *     MiReturnWsToExpansionList @ 0x14036DAE4 (MiReturnWsToExpansionList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140580DB8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiUpdateSystemPdes @ 0x140581434 (MiUpdateSystemPdes.c)
 *     EtwTraceInswapProcess @ 0x14062DB60 (EtwTraceInswapProcess.c)
 */

__int64 __fastcall KiInSwapProcesses(_QWORD *a1, _QWORD *a2, int a3, _DWORD *a4)
{
  _QWORD *v5; // rdi
  int v6; // eax
  unsigned __int8 v7; // bl
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  _DWORD *v11; // r9
  __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  int v14; // r12d
  __int64 *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rbx
  unsigned __int64 v20; // r14
  __int64 v21; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  int v33; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  char v35; // [rsp+90h] [rbp+40h] BYREF
  __int64 OutswappedPageResident; // [rsp+98h] [rbp+48h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+50h]

  do
  {
    v5 = a1 - 45;
    a1 = (_QWORD *)*a1;
    _InterlockedXor((volatile signed __int32 *)v5 + 210, 6u);
    OutswappedPageResident = 0LL;
    v6 = *((_DWORD *)v5 + 281);
    v35 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( (v6 & 0x80u) == 0 )
      goto LABEL_2;
    OutswappedPageResident = MiMakeOutswappedPageResident(
                               (_DWORD)v5,
                               (_DWORD)a2,
                               a3,
                               (_DWORD)a4,
                               *((unsigned __int16 *)v5 + 418));
    v12 = OutswappedPageResident;
    v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&OutswappedPageResident) >> 12) & 0xFFFFFFFFFFLL;
    v37 = MiMapPageInHyperSpaceWorker(v13, &v35, 0x80000000LL);
    v14 = 0;
    v15 = (__int64 *)(v37 + 3944);
    if ( (unsigned int)MiPteInShadowRange(v37 + 3944) )
    {
      if ( (unsigned int)MiPteHasShadow(v17, v16) )
      {
        v14 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v18 = (v12 & 1) == 0;
          goto LABEL_22;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v18 = (v12 & 1) == 0;
LABEL_22:
        if ( !v18 )
          v12 |= 0x8000000000000000uLL;
      }
    }
    *v15 = v12;
    if ( v14 )
      MiWritePteShadow(v15, v12);
    LOBYTE(v16) = v35;
    MiUnmapPageInHyperSpaceWorker(v37, v16, 0x80000000LL);
    v19 = 48 * v13 - 0x220000000000LL;
    v20 = (unsigned __int8)MiLockPageInline(v19);
    *(_QWORD *)(v19 + 24) ^= ((*(_QWORD *)(v19 + 24) + 1LL) ^ *(_QWORD *)(v19 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    MiSetPfnPteFrame(v19, v13);
    MiSetPageTablePfnBuddy(v21, v5, 1LL);
    *(_QWORD *)(v19 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    if ( (*(_BYTE *)v19 & 1) == 0 )
      MiMarkPfnTradable(48 * v13 - 0x220000000000LL, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
          v18 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v20);
    v5[226] = 1LL;
    v5[227] = 1LL;
    v5[5] = KeMakeKernelDirectoryTableBase(v13 << 12);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( (*((_DWORD *)v5 + 281) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)v5 + 281, 0xFF7FFFFF);
      MiUpdateSystemPdes(v5);
    }
    MiReturnWsToExpansionList(v5 + 208, 0LL);
    _InterlockedAnd((volatile signed __int32 *)v5 + 281, 0xFFFFFF7F);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && LockHandle.OldIrql <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(v5);
LABEL_2:
    _InterlockedAnd((volatile signed __int32 *)v5 + 281, 0xFFFFFFBF);
    if ( (*((_BYTE *)v5 + 1851) & 0x60) == 0x40 )
      MiReAcquireOutSwappedProcessCommit(v5);
    v7 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v7 <= 0xFu )
    {
      v11 = KeGetCurrentPrcb()->SchedulerAssist;
      v11[5] |= (-1 << (v7 + 1)) & 4;
    }
    KiAcquireKobjectLockSafe(v5);
    v8 = v5 + 43;
    v9 = v5[43];
    if ( (_QWORD *)v9 == v5 + 43 )
    {
      v9 = 0LL;
    }
    else
    {
      a2 = (_QWORD *)v5[44];
      if ( *(_QWORD **)(v9 + 8) != v8 || (_QWORD *)*a2 != v8 )
        __fastfail(3u);
      *a2 = v9;
      *(_QWORD *)(v9 + 8) = a2;
      v5[44] = v5 + 43;
      *v8 = v8;
    }
    _InterlockedXor((volatile signed __int32 *)v5 + 210, 4u);
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    if ( v9 )
    {
      LOBYTE(a2) = v7;
      result = KiReadyOutSwappedThreads(v9, a2);
    }
    else
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v31 = KeGetCurrentIrql();
          if ( v31 <= 0xFu && v7 <= 0xFu && v31 >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            a2 = (_QWORD *)(-1LL << (v7 + 1));
            a4 = v32->SchedulerAssist;
            v33 = ~(unsigned __int16)a2;
            v18 = (v33 & a4[5]) == 0;
            a3 = v33 & a4[5];
            a4[5] = a3;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
      }
      result = v7;
      __writecr8(v7);
    }
  }
  while ( a1 );
  return result;
}
