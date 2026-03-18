/*
 * XREFs of ExpAcquireResourceExclusiveLite @ 0x1402AE9D0
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1402AEE80 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 * Callees:
 *     ExpBoostIoAfterAcquire @ 0x14021CA70 (ExpBoostIoAfterAcquire.c)
 *     ExpWaitForResource @ 0x140231990 (ExpWaitForResource.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     ExpApplyPriorityBoost @ 0x140343010 (ExpApplyPriorityBoost.c)
 *     PsGetBaseIoPriorityThread @ 0x140343770 (PsGetBaseIoPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1406325F8 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140632AC8 (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceExclusiveLite(__int64 a1, char a2)
{
  int v2; // esi
  struct _KTHREAD *CurrentThread; // r13
  bool v6; // r15
  volatile __int64 *v7; // rdi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v10; // rdx
  unsigned __int8 v11; // r14
  int v12; // eax
  __int64 Next; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  unsigned __int64 OldIrql; // rdi
  _DWORD *SchedulerAssist; // r9
  unsigned int v19; // edi
  unsigned int v20; // edi
  __int64 v21; // rax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  unsigned __int64 v29; // rdi
  int BaseIoPriorityThread; // edx
  __int64 v31; // r8
  unsigned int v32; // ecx
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  int v35; // eax
  int v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  _DWORD *v39; // r8
  int v40; // eax
  bool v41; // zf
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  unsigned __int64 v47; // rbx
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r9
  _DWORD *v50; // r8
  int v51; // eax
  int v52; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  __int64 v57; // r8
  __int64 v58; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  __int64 v60; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v61; // [rsp+40h] [rbp-30h]
  struct _KTHREAD *v62; // [rsp+48h] [rbp-28h]
  __int64 v63; // [rsp+50h] [rbp-20h]
  _QWORD v64[3]; // [rsp+58h] [rbp-18h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]

  v2 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v61 = 0LL;
  BYTE3(v63) = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x8A78u);
  v7 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = CurrentPrcb->SchedulerAssist;
  if ( v10 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v35 = v10[6];
      v10[6] = v35 + 1;
      if ( v35 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v7);
  }
  else if ( _InterlockedExchange64(v7, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  if ( !*(_DWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_WORD *)(a1 + 24) = 1;
    *(_WORD *)(a1 + 26) |= 0x80u;
    v11 = 1;
    v12 = *(_DWORD *)(a1 + 56) & 7;
    *(_DWORD *)(a1 + 64) = 1;
    *(_DWORD *)(a1 + 56) = v12 | 8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_10;
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    }
LABEL_10:
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v36 = v15[6] - 1;
        v15[6] = v36;
        if ( !v36 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v37 = KeGetCurrentIrql();
        if ( v37 <= 0xFu && LockHandle.OldIrql <= 0xFu && v37 >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          v39 = v38->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v41 = (v40 & v39[5]) == 0;
          v39[5] &= v40;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(v38);
        }
      }
    }
    __writecr8(OldIrql);
    __incgsdword(0x8A7Cu);
    __incgsdword(0x8A64u);
    if ( v6 )
      PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return v11;
  }
  if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v19 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v19;
    v20 = v19 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v21 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_23;
        v21 = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v21 + 8), 1uLL);
    }
LABEL_23:
    v22 = KeGetCurrentPrcb();
    v23 = v22->SchedulerAssist;
    if ( v23 )
    {
      if ( v22->NestingLevel <= 1u )
      {
        v42 = v23[6] - 1;
        v23[6] = v42;
        if ( !v42 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
    v24 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v43 = KeGetCurrentIrql();
        if ( v43 <= 0xFu && LockHandle.OldIrql <= 0xFu && v43 >= 2u )
        {
          v44 = KeGetCurrentPrcb();
          v45 = v44->SchedulerAssist;
          v46 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v41 = (v46 & v45[5]) == 0;
          v45[5] &= v46;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(v44);
        }
      }
    }
    __writecr8(v24);
    __incgsdword(0x8A80u);
    __incgsdword(0x8A64u);
    if ( !v6 )
      return 1;
    v57 = v20;
    v58 = 65585LL;
LABEL_104:
    PerfLogExecutiveResourceAcquire(v58, a1, v57, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    ++*(_DWORD *)(a1 + 76);
    v64[1] = v64;
    v64[0] = v64;
    v25 = *(_QWORD *)(a1 + 40);
    v60 = 0LL;
    v61 = 0LL;
    v63 = 393217LL;
    v62 = CurrentThread;
    if ( v25 )
    {
      v34 = *(_QWORD **)(v25 + 8);
      if ( *v34 != v25 )
        __fastfail(3u);
      v61 = *(__int64 **)(v25 + 8);
      v60 = v25;
      *v34 = &v60;
      *(_QWORD *)(v25 + 8) = &v60;
    }
    else
    {
      v61 = &v60;
      v60 = (__int64)&v60;
      *(_QWORD *)(a1 + 40) = &v60;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v26 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_33;
        v26 = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v26 + 8), 1uLL);
    }
LABEL_33:
    v27 = KeGetCurrentPrcb();
    v28 = v27->SchedulerAssist;
    if ( v28 )
    {
      if ( v27->NestingLevel <= 1u )
      {
        v52 = v28[6] - 1;
        v28[6] = v52;
        if ( !v52 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
    v29 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v53 = KeGetCurrentIrql();
        if ( v53 <= 0xFu && LockHandle.OldIrql <= 0xFu && v53 >= 2u )
        {
          v54 = KeGetCurrentPrcb();
          v55 = v54->SchedulerAssist;
          v56 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v41 = (v56 & v55[5]) == 0;
          v55[5] &= v56;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(v54);
        }
      }
    }
    __writecr8(v29);
    __incgsdword(0x8A84u);
    if ( v6 )
      PerfLogExecutiveResourceWait(65572LL, a1, 0LL);
    BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread());
    if ( (BaseIoPriorityThread < 2 && (struct _KTHREAD *)v31 == KeGetCurrentThread() && *(_DWORD *)(v31 + 1440)
       || BaseIoPriorityThread > 1)
      && (*(_BYTE *)(a1 + 26) & 4) == 0 )
    {
      v2 = 4;
    }
    v32 = v2 | 2;
    if ( (*(_WORD *)(a1 + 26) & 2) != 0 )
      v32 = v2;
    v33 = v32 | 0xFF00;
    if ( *(char *)(v31 + 195) <= HIBYTE(*(unsigned __int16 *)(a1 + 26)) )
      v33 = v32;
    if ( (_DWORD)v33 )
      ExpApplyPriorityBoost(a1, v33, v31);
    ExpWaitForResource(
      (struct _LIST_ENTRY *)a1,
      (__int64)&v60,
      0x10224u,
      (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
    ExpBoostIoAfterAcquire(a1, (__int64)CurrentThread, 0);
    __incgsdword(0x8A7Cu);
    __incgsdword(0x8A64u);
    if ( !v6 )
      return 1;
    v57 = 1LL;
    v58 = 65569LL;
    goto LABEL_104;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v47 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v48 = KeGetCurrentIrql();
      if ( v48 <= 0xFu && LockHandle.OldIrql <= 0xFu && v48 >= 2u )
      {
        v49 = KeGetCurrentPrcb();
        v50 = v49->SchedulerAssist;
        v51 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v41 = (v51 & v50[5]) == 0;
        v50[5] &= v51;
        if ( v41 )
          KiRemoveSystemWorkPriorityKick(v49);
      }
    }
  }
  __writecr8(v47);
  __incgsdword(0x8A88u);
  return 0;
}
