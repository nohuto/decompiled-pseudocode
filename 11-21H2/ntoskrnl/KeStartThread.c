/*
 * XREFs of KeStartThread @ 0x140292350
 * Callers:
 *     KiInitializePrcbThread @ 0x1403C1454 (KiInitializePrcbThread.c)
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     KiFreezeSingleThread @ 0x140244508 (KiFreezeSingleThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiUpdateThreadPriority @ 0x140291010 (KiUpdateThreadPriority.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140292818 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140292A04 (KiUpdateNodeAffinitizedFlag.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KiAdjustProcessIdealProcessorSetsForThreadCreation @ 0x1402930CC (KiAdjustProcessIdealProcessorSetsForThreadCreation.c)
 *     KeSelectInitialIdealProcessorForThread @ 0x140293218 (KeSelectInitialIdealProcessorForThread.c)
 *     KiComputeGroupMask @ 0x1402A0324 (KiComputeGroupMask.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiIsForegroundThread @ 0x1402F8020 (KiIsForegroundThread.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiFindBiasedSetMember @ 0x14056AAA4 (KiFindBiasedSetMember.c)
 *     KiExtendProcessAffinity @ 0x14057B33C (KiExtendProcessAffinity.c)
 *     EtwTraceIdealProcessor @ 0x14062DAE4 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeStartThread(__int64 a1, _WORD *a2, unsigned int *a3)
{
  unsigned __int64 CurrentThread; // rsi
  _KPROCESS *v7; // rdi
  unsigned __int8 CurrentIrql; // r15
  char BasePriority; // al
  __int64 v10; // rcx
  unsigned int v11; // r14d
  _LIST_ENTRY *p_ThreadListHead; // rsi
  __int64 v13; // r13
  int QuantumReset; // eax
  int v15; // edx
  __int64 v16; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v18; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  _LIST_ENTRY **v21; // rcx
  _LIST_ENTRY *p_ProcessListEntry; // rax
  char v23; // dl
  char v24; // cl
  __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // r10d
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v30; // r8
  int v31; // eax
  bool v32; // zf
  __int64 v33; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+28h] [rbp-D8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v36[68]; // [rsp+50h] [rbp-B0h] BYREF

  v36[0] = 2097153;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v36[1], 0, 0x104uLL);
  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v7 = *(_KPROCESS **)(a1 + 184);
  v34 = 0LL;
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (4 * *(_DWORD *)&v7->0)) & 8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&v7->ProcessLock);
  KiAdjustProcessIdealProcessorSetsForThreadCreation(v7);
  BasePriority = v7->BasePriority;
  *(_BYTE *)(a1 + 563) = BasePriority;
  *(_BYTE *)(a1 + 195) = BasePriority;
  if ( !a2 || (unsigned int)KeIsEmptyAffinityEx(a2) )
  {
    KiCopyAffinityEx(v36, HIWORD(v36[0]), &v7->Affinity);
    a2 = v36;
    if ( v7 == *(_KPROCESS **)(CurrentThread + 544) )
      LOWORD(CurrentThread) = *(_WORD *)(CurrentThread + 584);
    else
      LOWORD(CurrentThread) = v7->PrimaryGroup;
LABEL_5:
    LOWORD(v34) = CurrentThread;
    goto LABEL_6;
  }
  if ( !(unsigned int)KeIsSubsetAffinityEx((__int64)a2, (__int64)&v7->Affinity) )
    KiExtendProcessAffinity(v7, a2);
  CurrentThread = v7->PrimaryGroup;
  if ( (unsigned __int16)CurrentThread < *a2 && *(_QWORD *)&a2[4 * CurrentThread + 4] )
    goto LABEL_5;
  ExGenRandom(1LL, v25);
  v26 = KiComputeGroupMask(a2);
  LOWORD(CurrentThread) = KiFindBiasedSetMember(v26, v27);
  LOWORD(v34) = CurrentThread;
LABEL_6:
  if ( (unsigned __int16)CurrentThread >= *a2 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)&a2[4 * (unsigned __int16)CurrentThread + 4];
  v33 = v10;
  KiCopyAffinityEx(*(_QWORD *)(a1 + 576), *(unsigned __int16 *)(*(_QWORD *)(a1 + 576) + 2LL), a2);
  KiCopyAffinityEx(*(_QWORD *)(a1 + 552), *(unsigned __int16 *)(*(_QWORD *)(a1 + 552) + 2LL), a2);
  *(_WORD *)(a1 + 584) = CurrentThread;
  *(_WORD *)(a1 + 560) = CurrentThread;
  KiUpdateNodeAffinitizedFlag(a1);
  if ( a3 )
  {
    v11 = *a3;
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0);
  }
  else
  {
    v11 = (unsigned __int16)KeSelectInitialIdealProcessorForThread(v7, &v33);
  }
  *(_DWORD *)(a1 + 196) = v11;
  p_ThreadListHead = &v7->ThreadListHead;
  *(_DWORD *)(a1 + 588) = v11;
  v13 = KiProcessorBlock[v11];
  if ( p_ThreadListHead->Flink == p_ThreadListHead && v7 != (_KPROCESS *)&KiInitialProcess )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&KiProcessListLock;
    KxAcquireQueuedSpinLock(&LockHandle);
    v21 = (_LIST_ENTRY **)qword_140C2BC08;
    p_ProcessListEntry = &v7->ProcessListEntry;
    if ( *(__int64 **)qword_140C2BC08 != &KiProcessListHead )
      goto LABEL_56;
    v7->ProcessListEntry.Blink = (struct _LIST_ENTRY *)qword_140C2BC08;
    p_ProcessListEntry->Flink = (struct _LIST_ENTRY *)&KiProcessListHead;
    *v21 = p_ProcessListEntry;
    qword_140C2BC08 = (__int64)&v7->ProcessListEntry;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (*(_DWORD *)&v7->0 << 6)) & 0x100;
  QuantumReset = (unsigned __int8)v7->QuantumReset;
  v15 = *(_DWORD *)(a1 + 120);
  *(_BYTE *)(a1 + 651) = QuantumReset;
  v16 = (unsigned int)(KiCyclesPerClockQuantum * QuantumReset);
  if ( (v15 & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
  *(_QWORD *)(a1 + 32) = v16;
  KiAcquireKobjectLockSafe(v7);
  Blink = v7->ThreadListHead.Blink;
  v18 = (struct _LIST_ENTRY *)(a1 + 760);
  if ( Blink->Flink != p_ThreadListHead )
LABEL_56:
    __fastfail(3u);
  v18->Flink = p_ThreadListHead;
  *(_QWORD *)(a1 + 768) = Blink;
  Blink->Flink = v18;
  v7->ThreadListHead.Blink = v18;
  _InterlockedAnd(&v7->Header.Lock, 0xFFFFFF7F);
  if ( v7->FreezeCount )
    KiFreezeSingleThread((__int64)KeGetCurrentPrcb(), a1, 0);
  if ( (*(_DWORD *)&v7->0 & 8) != 0 )
    KiFreezeSingleThread((__int64)KeGetCurrentPrcb(), a1, 1);
  *(_QWORD *)(a1 + 104) = v7->SchedulingGroup;
  if ( v7->SchedulingGroup )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  KiUpdateSharedReadyQueueAffinityThread(v13, a1);
  if ( v7->PerProcessorCycleTimes )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x17u);
  if ( (unsigned __int8)KiIsForegroundThread(a1) )
  {
    if ( !*(_BYTE *)(a1 + 564) && (*(_DWORD *)(a1 + 120) & 8) == 0 )
    {
      v23 = *(_BYTE *)(a1 + 195);
      if ( v23 > 0 )
      {
        v24 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
        if ( v24 >= 16 )
          v24 = 15;
        if ( v24 > v23 )
        {
          *(_BYTE *)(a1 + 564) = (v24 - v23) & 0xF;
          KiUpdateThreadPriority(0LL, a1, (PVOID *)(unsigned int)v24, 0);
          KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
    *(_DWORD *)(a1 + 952) = v7->ProcessTimerDelay;
  if ( dword_140D05384 < (unsigned int)KiHgsPlusConfiguration )
    *(_BYTE *)(a1 + 516) = dword_140D05384;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v7->ProcessLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v30 = CurrentPrcb->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v32 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( _bittest((const signed __int32 *)&xmmword_140D06910, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1350LL, 0xFFFFFFFFLL, v11);
  if ( _bittest((const signed __int32 *)&xmmword_140D06910, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1351LL, 0xFFFFFFFFLL, v11);
  _InterlockedExchangeAdd(&v7->StackCount.Value, 8u);
  return result;
}
