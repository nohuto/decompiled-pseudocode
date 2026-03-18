/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x1402F8040
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402D56F4 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402F8420 (ExpWorkerFactoryCheckCreate.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     IopAllocateMiniCompletionPacket @ 0x1407D57AC (IopAllocateMiniCompletionPacket.c)
 */

NTSTATUS __fastcall NtReleaseWorkerFactoryWorker(void *a1)
{
  NTSTATUS result; // eax
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  _QWORD *v4; // rbx
  volatile __int64 *v5; // rdi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v8; // rdx
  __int64 v9; // rcx
  char v10; // di
  int v11; // eax
  int v12; // r12d
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rax
  struct _KPRCB *v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 MiniCompletionPacket; // rdi
  __int64 v21; // rbx
  _QWORD *v22; // rsi
  unsigned __int8 v23; // r15
  struct _KPRCB *v24; // r14
  _KTHREAD *CurrentThread; // r13
  __int64 v26; // r9
  PVOID v27; // rbx
  int v28; // edx
  __int64 *v29; // rcx
  int v30; // eax
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  int v34; // eax
  bool v35; // zf
  unsigned __int8 IsThreadRunning; // al
  __int128 v37; // [rsp+30h] [rbp-38h] BYREF
  __int64 v38; // [rsp+40h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+10h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v38 = 0LL;
  v37 = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             a1,
             1u,
             ExpWorkerFactoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result < 0 )
    return result;
  v4 = Object;
  v5 = (volatile __int64 *)*((_QWORD *)Object + 2);
  *((_QWORD *)&v37 + 1) = v5;
  *(_QWORD *)&v37 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v2 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  LOBYTE(v38) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = CurrentPrcb->SchedulerAssist;
  if ( v8 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v30 = v8[6];
      v8[6] = v30 + 1;
      if ( v30 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v37, v5);
  }
  else if ( _InterlockedExchange64(v5, (__int64)&v37) )
  {
    KxWaitForLockOwnerShip(&v37);
  }
  v9 = v4[2];
  v10 = 0;
  if ( *(_BYTE *)(v9 + 33) )
  {
    v12 = 128;
  }
  else
  {
    v11 = *(_DWORD *)(v9 + 24);
    if ( v11 == -1 )
    {
      v12 = -1073741823;
    }
    else
    {
      v12 = 0;
      *(_DWORD *)(v9 + 24) = v11 + 1;
      v13 = v4[2];
      if ( !*(_BYTE *)(v13 + 32) )
      {
        v14 = (__int64 *)Object;
        v10 = 1;
        *(_BYTE *)(v13 + 32) = 1;
        if ( (v14[51] & 0x200) != 0 )
          ExpLeaveWorkerFactoryAwayMode(v14);
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v37, retaddr);
  }
  else
  {
    _m_prefetchw(&v37);
    v15 = v37;
    if ( !(_QWORD)v37 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v37 + 1), 0LL, (signed __int64)&v37) == &v37 )
        goto LABEL_15;
      v15 = KxWaitForLockChainValid((__int64 *)&v37);
    }
    *(_QWORD *)&v37 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v15 + 8), 1uLL);
  }
LABEL_15:
  v16 = KeGetCurrentPrcb();
  v17 = (__int64)v16->SchedulerAssist;
  if ( v17 )
  {
    if ( v16->NestingLevel <= 1u )
    {
      v31 = *(_DWORD *)(v17 + 24) - 1;
      *(_DWORD *)(v17 + 24) = v31;
      if ( !v31 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
  }
  v18 = (unsigned __int8)v38;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        SchedulerAssist = v33->SchedulerAssist;
        v16 = (struct _KPRCB *)((unsigned int)(unsigned __int8)v38 + 1);
        v17 = -1LL << ((unsigned __int8)v38 + 1);
        v34 = ~(unsigned __int16)v17;
        v35 = (v34 & SchedulerAssist[5]) == 0;
        v2 = (unsigned int)v34 & SchedulerAssist[5];
        SchedulerAssist[5] = v2;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
  }
  __writecr8(v18);
  if ( v10 )
  {
    v19 = v4[2];
    MiniCompletionPacket = *(_QWORD *)(v19 + 16);
    v21 = *(_QWORD *)(v19 + 8);
    if ( MiniCompletionPacket
      || (LOBYTE(v16) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(v16, 0LL)) != 0) )
    {
      *(_QWORD *)(MiniCompletionPacket + 24) = 0LL;
      v22 = (_QWORD *)(v21 + 8);
      *(_QWORD *)(MiniCompletionPacket + 32) = 0LL;
      *(_DWORD *)(MiniCompletionPacket + 40) = 0;
      *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
      v23 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v23 <= 0xFu )
      {
        v2 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
        v17 = (-1 << (v23 + 1)) & 4u | *(_DWORD *)(v2 + 20);
        *(_DWORD *)(v2 + 20) = v17;
      }
      v24 = KeGetCurrentPrcb();
      CurrentThread = v24->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v24->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, IsThreadRunning);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v21, v17, v2, (__int64)SchedulerAssist);
      if ( (_QWORD *)*v22 == v22
        || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v21 && CurrentThread->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v24, v21, MiniCompletionPacket, v26) )
      {
        v28 = *(_DWORD *)(v21 + 4);
        *(_DWORD *)(v21 + 4) = v28 + 1;
        v29 = *(__int64 **)(v21 + 32);
        if ( *v29 != v21 + 24 )
          __fastfail(3u);
        *(_QWORD *)MiniCompletionPacket = v21 + 24;
        *(_QWORD *)(MiniCompletionPacket + 8) = v29;
        *v29 = MiniCompletionPacket;
        *(_QWORD *)(v21 + 32) = MiniCompletionPacket;
        if ( !v28 && (_QWORD *)*v22 != v22 )
          KiWakeOtherQueueWaiters(v24, v21);
      }
      else
      {
        *(_QWORD *)MiniCompletionPacket = 0LL;
      }
      _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
      KiExitDispatcher((__int64)v24, 0, 1, 0, v23);
    }
    v27 = Object;
    ExpWorkerFactoryCheckCreate(Object, 0LL);
  }
  else
  {
    v27 = Object;
  }
  ObfDereferenceObjectWithTag(v27, 0x746C6644u);
  return v12;
}
