/*
 * XREFs of KeRemovePriQueue @ 0x14033D110
 * Callers:
 *     ExpWorkerThread @ 0x14033CBF0 (ExpWorkerThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiSwitchPriQueue @ 0x140259330 (KiSwitchPriQueue.c)
 *     KiFastExitThreadWait @ 0x1402946B8 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x140294824 (KiCheckForThreadDispatch.c)
 *     KiCommitThreadWait @ 0x1402B5240 (KiCommitThreadWait.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402EC3E4 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAttemptFastRemovePriQueue @ 0x1402EC920 (KiAttemptFastRemovePriQueue.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     KiProcessThreadWaitList @ 0x140340390 (KiProcessThreadWaitList.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140345AA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiGetDueTimeWithThreadTimerDelay @ 0x1405786AC (KiGetDueTimeWithThreadTimerDelay.c)
 */

__int64 __fastcall KeRemovePriQueue(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // r9
  char v7; // r12
  unsigned __int8 CurrentIrql; // r10
  int v9; // r15d
  unsigned __int8 WaitIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v12; // rcx
  $0EA7835A9B05193480487A73CEA01DA9 *v13; // r14
  __int64 v14; // r13
  __int64 v15; // r9
  struct _KPRCB *v16; // rcx
  __int64 v17; // rdx
  __int64 Queue; // r8
  unsigned int v19; // esi
  unsigned __int64 DueTimeWithThreadTimerDelay; // rax
  struct _KPRCB *v21; // rsi
  _DWORD *v22; // rcx
  __int64 v23; // rcx
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  struct _LIST_ENTRY *v26; // rcx
  struct _LIST_ENTRY *v27; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *v30; // rsi
  _DWORD *v31; // rcx
  __int64 v32; // rsi
  unsigned int v33; // ebp
  __int64 QueuePriority; // rax
  struct _KPRCB *v35; // rdi
  struct _KPRCB *v36; // rcx
  __int64 CycleTime; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // edx
  _DISPATCHER_HEADER *volatile v41; // rcx
  unsigned __int8 v42; // r10
  _DWORD *v43; // r9
  _DWORD *v44; // rcx
  _DWORD *v45; // rcx
  _DWORD *v46; // rcx
  _DWORD *v47; // rcx
  _DWORD *v48; // rcx
  _DWORD *v49; // rcx
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v51; // r11
  int v52; // eax
  int v53; // eax
  int v54; // eax
  struct _KPRCB *v55; // rcx
  _DWORD *v56; // rdx
  bool v57; // zf
  unsigned __int8 v58; // cl
  _DWORD *v59; // r9
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // ecx
  unsigned __int64 v65; // r11
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  struct _KPRCB *v70; // rsi
  _DWORD *v71; // rcx
  int v72; // eax
  _DWORD *v73; // rcx
  int v74; // eax
  _DWORD *v75; // rcx
  int v76; // eax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  int v79; // [rsp+30h] [rbp-68h] BYREF
  int v80; // [rsp+34h] [rbp-64h] BYREF
  int v81; // [rsp+38h] [rbp-60h] BYREF
  __int64 v82; // [rsp+40h] [rbp-58h]
  char v84; // [rsp+A8h] [rbp+10h]
  unsigned int v85; // [rsp+B0h] [rbp+18h] BYREF
  int v86; // [rsp+B8h] [rbp+20h] BYREF

  v84 = a2;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = a3;
  v82 = 0LL;
  v85 = 0;
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
      v6 = 0LL;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( a4 )
  {
    if ( *(int *)(a4 + 4) < 0 )
    {
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v9 = 2;
      v82 = UnbiasedInterruptTime - (*v51 + CurrentThread->RelativeTimerBias);
      v6 = 0LL;
    }
    else
    {
      v9 = 1;
      v82 = *(_QWORD *)a4;
    }
  }
  else
  {
    v9 = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v84;
      if ( v7 )
        CurrentThread->MiscFlags |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v86 = 0;
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v52 = v12[6];
          v12[6] = v52 + 1;
          if ( v52 == -1 )
LABEL_80:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v44 = CurrentPrcb->SchedulerAssist;
        if ( v44 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v53 = v44[6] - 1;
            v44[6] = v53;
            if ( !v53 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v86, a2, a3, v6);
        while ( CurrentThread->ThreadLock );
        v45 = CurrentPrcb->SchedulerAssist;
        if ( v45 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v54 = v45[6];
            v45[6] = v54 + 1;
            if ( v54 == -1 )
              goto LABEL_80;
          }
        }
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v55 = KeGetCurrentPrcb();
          v56 = v55->SchedulerAssist;
          v57 = (v56[5] & 0xFFFF0003) == 0;
          v56[5] &= 0xFFFF0003;
          if ( v57 )
            KiRemoveSystemWorkPriorityKick(v55);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL);
      v58 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v58 <= 0xFu )
      {
        v59 = KeGetCurrentPrcb()->SchedulerAssist;
        a3 = (unsigned int)v59[5];
        a2 = (unsigned int)a3 | ~((unsigned __int8)(1LL << (v58 + 1)) - 1) & 4;
        v59[5] = a2;
      }
      CurrentThread->WaitIrql = 0;
      v6 = 0LL;
    }
    v13 = &CurrentThread->320;
    v14 = v82;
    if ( v7 )
    {
      if ( CurrentThread->Alerted[v84] )
      {
        CurrentThread->Alerted[v84] = 0;
        v32 = 257LL;
LABEL_76:
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), WaitIrql);
        return v32;
      }
      if ( v84 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_107:
        v32 = 192LL;
        goto LABEL_76;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v32 = 257LL;
        goto LABEL_76;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && v84 )
    {
      goto LABEL_107;
    }
    CurrentThread->WaitBlockFill6[68] = 5;
    v15 = 0LL;
    CurrentThread->WaitReason = 15;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v16 = KeGetCurrentPrcb();
    v17 = (__int64)v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v60 = *(_DWORD *)(v17 + 24) - 1;
        *(_DWORD *)(v17 + 24) = v60;
        if ( !v60 )
        {
          KiRemoveSystemWorkPriorityKick(v16);
          v15 = 0LL;
        }
      }
    }
    Queue = (__int64)CurrentThread->Queue;
    if ( a1 != Queue )
    {
      KiSwitchPriQueue((__int64)CurrentThread, a1, Queue);
      v15 = 0LL;
    }
    CurrentThread->WaitBlock[0].WaitType = 3;
    CurrentThread->WaitBlockFill4[17] = 4;
    v19 = 0;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
      {
        if ( (++v19 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v16, v17, Queue, v15) )
        {
          HvlNotifyLongSpinWait(v19);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
      v15 = 0LL;
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      v30 = KeGetCurrentPrcb();
      v79 = 0;
      v31 = v30->SchedulerAssist;
      if ( v31 )
      {
        if ( v30->NestingLevel <= 1u )
        {
          v61 = v31[6];
          v31[6] = v61 + 1;
          if ( v61 == -1 )
LABEL_116:
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v46 = v30->SchedulerAssist;
        if ( v46 )
        {
          if ( v30->NestingLevel <= 1u )
          {
            v62 = v46[6] - 1;
            v46[6] = v62;
            if ( !v62 )
              KiRemoveSystemWorkPriorityKick(v30);
          }
        }
        do
          KeYieldProcessorEx(&v79, v17, Queue, v15);
        while ( CurrentThread->ThreadLock );
        v47 = v30->SchedulerAssist;
        if ( v47 )
        {
          if ( v30->NestingLevel <= 1u )
          {
            v63 = v47[6];
            v47[6] = v63 + 1;
            if ( v63 == -1 )
              goto LABEL_116;
          }
        }
      }
      v32 = (__int64)KiAttemptFastRemovePriQueue(a1, (int *)&v85, (unsigned __int8)CurrentThread->QueuePriority);
      if ( v32 )
      {
        v33 = v85;
        QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
        if ( (_DWORD)QueuePriority != v85 )
        {
          v40 = CurrentThread->QueuePriority & 0x100;
          if ( !v40 )
          {
            v41 = CurrentThread->Queue;
            _InterlockedDecrement((volatile signed __int32 *)&v41[22].WaitListHead + QueuePriority);
            _InterlockedIncrement((volatile signed __int32 *)&v41[22].WaitListHead + (int)v85);
            v33 = v85;
          }
          CurrentThread->QueuePriority = v40 | (unsigned __int8)v33;
        }
        CurrentThread->Saturation = 0;
        KiSetBasePriorityAndClearDecrement((__int64)CurrentThread, (char *)&v85, 0);
        if ( v33 != CurrentThread->Priority )
        {
          v36 = KeGetCurrentPrcb();
          if ( v36->NestingLevel )
          {
            CycleTime = CurrentThread->CycleTime;
          }
          else
          {
            _disable();
            CycleTime = KiUpdateTotalCyclesCurrentThread(v36, CurrentThread, 0LL);
            _enable();
          }
          v38 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
          v39 = v85;
          CurrentThread->QuantumTarget = v38;
          KiSetPriorityThread(CurrentThread, 0LL, v39);
        }
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        goto LABEL_37;
      }
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      v15 = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
    {
      v70 = KeGetCurrentPrcb();
      v81 = 0;
      v71 = v70->SchedulerAssist;
      if ( v71 )
      {
        if ( v70->NestingLevel <= 1u )
        {
          v72 = v71[6];
          v71[6] = v72 + 1;
          if ( v72 == -1 )
LABEL_143:
            KiRemoveSystemWorkPriorityKick(v70);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v73 = v70->SchedulerAssist;
        if ( v73 )
        {
          if ( v70->NestingLevel <= 1u )
          {
            v74 = v73[6] - 1;
            v73[6] = v74;
            if ( !v74 )
              KiRemoveSystemWorkPriorityKick(v70);
          }
        }
        do
          KeYieldProcessorEx(&v81, v17, Queue, v15);
        while ( CurrentThread->ThreadLock );
        v75 = v70->SchedulerAssist;
        if ( v75 )
        {
          if ( v70->NestingLevel <= 1u )
          {
            v76 = v75[6];
            v75[6] = v76 + 1;
            if ( v76 == -1 )
              goto LABEL_143;
          }
        }
      }
      if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 )
      {
        CurrentThread->Queue = 0LL;
        Flink = CurrentThread->QueueListEntry.Flink;
        Blink = CurrentThread->QueueListEntry.Blink;
        if ( Flink->Blink != &CurrentThread->QueueListEntry || Blink->Flink != &CurrentThread->QueueListEntry )
LABEL_159:
          __fastfail(3u);
        Blink->Flink = Flink;
        Flink->Blink = Blink;
      }
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      v32 = 128LL;
      goto LABEL_37;
    }
    DueTimeWithThreadTimerDelay = v14;
    if ( v9 == 2 )
    {
      KiQueryUnbiasedInterruptTime();
      DueTimeWithThreadTimerDelay = KiGetDueTimeWithThreadTimerDelay(CurrentThread, (unsigned int)(v64 + 2), v14, 0LL);
      goto LABEL_125;
    }
    if ( v9 )
      break;
LABEL_22:
    v21 = KeGetCurrentPrcb();
    v80 = v15;
    v22 = v21->SchedulerAssist;
    if ( v22 )
    {
      if ( v21->NestingLevel <= 1u )
      {
        v66 = v22[6];
        v22[6] = v66 + 1;
        if ( v66 == -1 )
LABEL_129:
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v48 = v21->SchedulerAssist;
      if ( v48 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v67 = v48[6] - 1;
          v48[6] = v67;
          if ( !v67 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      do
        KeYieldProcessorEx(&v80, v17, Queue, v15);
      while ( CurrentThread->ThreadLock );
      v49 = v21->SchedulerAssist;
      if ( v49 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v68 = v49[6];
          v49[6] = v68 + 1;
          if ( v68 == -1 )
            goto LABEL_129;
        }
      }
    }
    v23 = (unsigned __int8)CurrentThread->QueuePriority;
    CurrentThread->QueuePriority = (unsigned __int8)CurrentThread->QueuePriority | 0x100;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 4 * v23 + 536));
    CurrentThread->ThreadLock = 0LL;
    v24 = KeGetCurrentPrcb();
    v25 = v24->SchedulerAssist;
    if ( v25 )
    {
      if ( v24->NestingLevel <= 1u )
      {
        v69 = v25[6] - 1;
        v25[6] = v69;
        if ( !v69 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
    v26 = *(struct _LIST_ENTRY **)(a1 + 8);
    v27 = (struct _LIST_ENTRY *)(a1 + 8);
    if ( v26->Blink != (struct _LIST_ENTRY *)(a1 + 8) )
      goto LABEL_159;
    v13->WaitBlock[0].WaitListEntry.Flink = v26;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v27;
    v26->Blink = (struct _LIST_ENTRY *)v13;
    v27->Flink = (struct _LIST_ENTRY *)v13;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, v9, v14, 0LL);
    CurrentThread->WaitReason = 0;
    if ( result != 256 )
      return result;
    v42 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v42 <= 0xFu )
    {
      v43 = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (unsigned int)v43[5];
      a2 = (unsigned int)a3 | ~((unsigned __int8)(1LL << (v42 + 1)) - 1) & 4;
      v43[5] = a2;
    }
    CurrentThread->WaitIrql = v42;
    v6 = 0LL;
  }
  if ( !v14 )
    goto LABEL_58;
  v65 = MEMORY[0xFFFFF78000000014];
LABEL_125:
  if ( v65 <= DueTimeWithThreadTimerDelay )
    goto LABEL_22;
LABEL_58:
  v32 = 258LL;
LABEL_37:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  CurrentThread->WaitReason = 0;
  v35 = KeGetCurrentPrcb();
  if ( v35->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(v35, 1LL, 0LL, 2LL);
  LOBYTE(Queue) = 1;
  KiFastExitThreadWait((__int64)v35, (__int64)CurrentThread, Queue);
  return v32;
}
