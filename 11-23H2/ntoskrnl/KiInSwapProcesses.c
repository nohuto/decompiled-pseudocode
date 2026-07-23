/*
 * XREFs of KiInSwapProcesses @ 0x14034D22C
 * Callers:
 *     KeSwapProcessOrStack @ 0x140395690 (KeSwapProcessOrStack.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMarkPfnTradable @ 0x14021B51C (MiMarkPfnTradable.c)
 *     MiReturnWsToExpansionList @ 0x14022245C (MiReturnWsToExpansionList.c)
 *     KiAcquireKobjectLockSafe @ 0x1402520F0 (KiAcquireKobjectLockSafe.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     KeMakeKernelDirectoryTableBase @ 0x140291CB0 (KeMakeKernelDirectoryTableBase.c)
 *     MiSetPageTablePfnBuddy @ 0x1402927AC (MiSetPageTablePfnBuddy.c)
 *     MiSetPfnPteFrame @ 0x1402E1830 (MiSetPfnPteFrame.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     KiReadyOutSwappedThreads @ 0x14034D394 (KiReadyOutSwappedThreads.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceInswapProcess @ 0x1405FD37C (EtwTraceInswapProcess.c)
 *     MiMakeOutswappedPageResident @ 0x140618ABC (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140619458 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiUpdateSystemPdes @ 0x140619A80 (MiUpdateSystemPdes.c)
 */

__int64 __fastcall KiInSwapProcesses(_QWORD *a1, _QWORD *a2, int a3, _DWORD *a4)
{
  __int64 v5; // rdi
  int v6; // eax
  unsigned __int8 v7; // bl
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  _DWORD *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  int v15; // r12d
  __int64 *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // zf
  __int64 v21; // rbx
  unsigned __int64 v22; // r14
  __int64 v23; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  unsigned __int8 v33; // cl
  struct _KPRCB *v34; // r10
  int v35; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int8 v37; // [rsp+90h] [rbp+40h] BYREF
  __int64 OutswappedPageResident; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int64 v39; // [rsp+A0h] [rbp+50h]

  do
  {
    v5 = (__int64)(a1 - 45);
    a1 = (_QWORD *)*a1;
    _InterlockedXor((volatile signed __int32 *)(v5 + 840), 6u);
    OutswappedPageResident = 0LL;
    v6 = *(_DWORD *)(v5 + 1124);
    v37 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( (v6 & 0x80u) == 0 )
      goto LABEL_2;
    OutswappedPageResident = MiMakeOutswappedPageResident(
                               v5,
                               (_DWORD)a2,
                               a3,
                               (_DWORD)a4,
                               *(unsigned __int16 *)(v5 + 836));
    v13 = OutswappedPageResident;
    v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&OutswappedPageResident) >> 12) & 0xFFFFFFFFFFLL;
    v39 = MiMapPageInHyperSpaceWorker(v14, &v37, 0x80000000);
    v15 = 0;
    v16 = (__int64 *)(v39 + 3944);
    if ( MiPteInShadowRange(v39 + 3944) )
    {
      if ( (unsigned int)MiPteHasShadow(v18, v17, v19) )
      {
        v15 = 1;
        if ( !HIBYTE(word_140C66CFC) )
        {
          v20 = (v13 & 1) == 0;
          goto LABEL_25;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v20 = (v13 & 1) == 0;
LABEL_25:
        if ( !v20 )
          v13 |= 0x8000000000000000uLL;
      }
    }
    *v16 = v13;
    if ( v15 )
      MiWritePteShadow(v16, v13);
    MiUnmapPageInHyperSpaceWorker(v39, v37);
    v21 = 48 * v14 - 0x220000000000LL;
    v22 = (unsigned __int8)MiLockPageInline(v21);
    *(_QWORD *)(v21 + 24) ^= ((*(_QWORD *)(v21 + 24) + 1LL) ^ *(_QWORD *)(v21 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    MiSetPfnPteFrame(v21, v14);
    MiSetPageTablePfnBuddy(v23, v5, 1);
    *(_QWORD *)(v21 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    if ( (*(_BYTE *)v21 & 1) == 0 )
      MiMarkPfnTradable(48 * v14 - 0x220000000000LL, 1);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v22 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
        v20 = (v27 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v27;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v22);
    *(_QWORD *)(v5 + 1808) = 1LL;
    *(_QWORD *)(v5 + 1816) = 1LL;
    *(_QWORD *)(v5 + 40) = KeMakeKernelDirectoryTableBase(v14 << 12);
    KeAcquireInStackQueuedSpinLock(&qword_140C697C0, &LockHandle);
    if ( (*(_DWORD *)(v5 + 1124) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v5 + 1124), 0xFF7FFFFF);
      MiUpdateSystemPdes(v5);
    }
    MiReturnWsToExpansionList(v5 + 1664, 0);
    _InterlockedAnd((volatile signed __int32 *)(v5 + 1124), 0xFFFFFF7F);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v29 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
    __writecr8(OldIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(v5);
LABEL_2:
    _InterlockedAnd((volatile signed __int32 *)(v5 + 1124), 0xFFFFFFBF);
    if ( (*(_BYTE *)(v5 + 1851) & 0x60) == 0x40 )
      MiReAcquireOutSwappedProcessCommit((PVOID)v5);
    v7 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v7 <= 0xFu )
    {
      v11 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v7 == 2 )
        LODWORD(v12) = 4;
      else
        v12 = (-1LL << (v7 + 1)) & 4;
      v11[5] |= v12;
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v5);
    v8 = (_QWORD *)(v5 + 344);
    v9 = *(_QWORD *)(v5 + 344);
    if ( v9 == v5 + 344 )
    {
      v9 = 0LL;
    }
    else
    {
      a2 = *(_QWORD **)(v5 + 352);
      if ( *(_QWORD **)(v9 + 8) != v8 || (_QWORD *)*a2 != v8 )
        __fastfail(3u);
      *a2 = v9;
      *(_QWORD *)(v9 + 8) = a2;
      *(_QWORD *)(v5 + 352) = v5 + 344;
      *v8 = v8;
    }
    _InterlockedXor((volatile signed __int32 *)(v5 + 840), 4u);
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    if ( v9 )
    {
      LOBYTE(a2) = v7;
      result = KiReadyOutSwappedThreads(v9, a2);
    }
    else
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v33 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v33 <= 0xFu && v7 <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          a2 = (_QWORD *)(-1LL << (v7 + 1));
          a4 = v34->SchedulerAssist;
          v35 = ~(unsigned __int16)a2;
          v20 = (v35 & a4[5]) == 0;
          a3 = v35 & a4[5];
          a4[5] = a3;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
      result = v7;
      __writecr8(v7);
    }
  }
  while ( a1 );
  return result;
}
