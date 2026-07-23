/*
 * XREFs of KeRemovePriQueue @ 0x1402BF080
 * Callers:
 *     ExpWorkerThread @ 0x1402BEB60 (ExpWorkerThread.c)
 * Callees:
 *     KiGetProcessorEfficiencyClass @ 0x14020E8F4 (KiGetProcessorEfficiencyClass.c)
 *     KiCommitThreadWait @ 0x140241F00 (KiCommitThreadWait.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248430 (KiEndThreadAccountingPeriodEx.c)
 *     PoGetFrequencyBucket @ 0x140249C00 (PoGetFrequencyBucket.c)
 *     KiProcessThreadWaitList @ 0x140253CA0 (KiProcessThreadWaitList.c)
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KiSetPriorityThread @ 0x1402B05A0 (KiSetPriorityThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402B8400 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAdjustRealtimePriorityFloor @ 0x1402B84FC (KiAdjustRealtimePriorityFloor.c)
 *     KiFastExitThreadWait @ 0x1402BBBE0 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA48 (KiCheckForThreadDispatch.c)
 *     KiAttemptFastRemovePriQueue @ 0x1402BF710 (KiAttemptFastRemovePriQueue.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     KiDeliverApc @ 0x14030F6B0 (KiDeliverApc.c)
 *     KiSwitchPriQueue @ 0x140367198 (KiSwitchPriQueue.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CCC60 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CCC90 (HvlNotifyLongSpinWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiBeginCounterAccumulation @ 0x140574190 (KiBeginCounterAccumulation.c)
 *     KiGetDueTimeWithThreadTimerDelay @ 0x14057A2B8 (KiGetDueTimeWithThreadTimerDelay.c)
 */

struct _KPRCB *__fastcall KeRemovePriQueue(ULONG_PTR a1, char a2, char a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 *p_WaitIrql; // r14
  __int64 v8; // rcx
  unsigned int v9; // r12d
  unsigned __int8 v10; // bp
  $77FB1784F920FE33919952D0EDCFD5FB *v11; // r15
  int v12; // r9d
  _DISPATCHER_HEADER *volatile Queue; // r8
  __int64 v14; // r8
  unsigned int v15; // edi
  __int64 v16; // rdi
  unsigned __int64 DueTimeWithThreadTimerDelay; // rax
  __int64 v18; // rcx
  struct _LIST_ENTRY *v19; // rax
  struct _LIST_ENTRY *v20; // rcx
  struct _KPRCB *result; // rax
  _DWORD *SchedulerAssist; // r10
  __int64 v23; // r8
  __int64 v24; // rbp
  int v25; // edi
  __int64 QueuePriority; // rax
  __int64 v27; // r9
  struct _KPRCB *v28; // rdi
  struct _KPRCB *v29; // rdi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r8
  unsigned __int64 CycleTime; // r14
  unsigned __int64 v33; // rax
  bool v34; // zf
  unsigned __int64 v35; // r11
  struct _KPRCB *v36; // rcx
  signed __int32 *v37; // r8
  unsigned __int64 v38; // rcx
  int v39; // r8d
  int v40; // edx
  _DISPATCHER_HEADER *volatile v41; // rcx
  signed __int32 v42; // eax
  signed __int32 v43; // ett
  bool ProcessorEfficiencyClass; // al
  unsigned __int64 *v45; // rdx
  __int64 v46; // r10
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v48; // r11
  unsigned __int8 v49; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v51; // rdx
  _DWORD *v52; // r9
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rdi
  int v56; // ecx
  unsigned __int64 v57; // r11
  unsigned __int8 v58; // r8
  _DWORD *v59; // r10
  __int64 v60; // rdx
  _BYTE *v61; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  int v64; // [rsp+30h] [rbp-68h] BYREF
  int v65; // [rsp+34h] [rbp-64h] BYREF
  int v66; // [rsp+38h] [rbp-60h] BYREF
  __int64 v67; // [rsp+40h] [rbp-58h]
  int v70; // [rsp+B0h] [rbp+18h] BYREF
  int v71; // [rsp+B8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v67 = 0LL;
  v70 = 0;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    p_WaitIrql = &CurrentThread->WaitIrql;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v23) = 4;
      else
        v23 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v23;
    }
    p_WaitIrql = &CurrentThread->WaitIrql;
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v8 = 1LL;
  if ( a4 )
  {
    if ( *(int *)(a4 + 4) < 0 )
    {
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(0LL);
      p_WaitIrql = &CurrentThread->WaitIrql;
      v8 = *v48 + CurrentThread->RelativeTimerBias;
      v9 = 2;
      v67 = UnbiasedInterruptTime - v8;
    }
    else
    {
      v9 = 1;
      v67 = *(_QWORD *)a4;
    }
  }
  else
  {
    v9 = 0;
  }
  while ( 1 )
  {
    v10 = *p_WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = a2;
      if ( a3 )
        CurrentThread->MiscFlags |= 0x10u;
      v71 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v71);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || v10 )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( (_DWORD)KiIrqlFlags )
      {
        v49 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v49 - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v51 = CurrentPrcb->SchedulerAssist;
          v34 = (v51[5] & 0xFFFF0003) == 0;
          v51[5] &= 0xFFFF0003;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v8 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)v8 <= 0xFu )
      {
        v52 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)v8 == 2 )
        {
          LODWORD(v53) = 4;
        }
        else
        {
          v8 = (unsigned int)(unsigned __int8)v8 + 1;
          v53 = (-1LL << v8) & 4;
        }
        v52[5] |= v53;
      }
      *p_WaitIrql = 0;
    }
    v11 = &CurrentThread->320;
    if ( a3 )
    {
      if ( CurrentThread->Alerted[a2] )
      {
        v54 = 257;
        CurrentThread->Alerted[a2] = 0;
        v55 = 257LL;
        v12 = 0;
      }
      else if ( !a2
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        v12 = 0;
        if ( CurrentThread->Alerted[0] )
        {
          v54 = 257;
          CurrentThread->Alerted[0] = 0;
          v55 = 257LL;
        }
        else
        {
          v54 = 0;
          v55 = 0LL;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        v54 = 192;
        v55 = 192LL;
        v12 = 0;
      }
      if ( !v54 )
      {
LABEL_16:
        CurrentThread->WaitBlockFill6[68] = 5;
        CurrentThread->WaitReason = 15;
        CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_17;
      }
    }
    else
    {
      v12 = 0;
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !a2 )
        goto LABEL_16;
      v55 = 192LL;
    }
    CurrentThread->ThreadLock = 0LL;
    KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), v10);
    if ( v55 )
      return (struct _KPRCB *)v55;
    v12 = 0;
LABEL_17:
    Queue = CurrentThread->Queue;
    if ( (_DISPATCHER_HEADER *volatile)a1 != Queue )
    {
      KiSwitchPriQueue(CurrentThread, a1, Queue, 0LL);
      v12 = 0;
    }
    CurrentThread->WaitBlock[0].WaitType = 3;
    v14 = 128LL;
    CurrentThread->WaitBlockFill4[17] = 4;
    v15 = 0;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
        {
          HvlNotifyLongSpinWait(v15);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
      v12 = 0;
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      v64 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v64);
        while ( CurrentThread->ThreadLock );
      }
      v24 = KiAttemptFastRemovePriQueue(a1);
      if ( v24 )
      {
        v25 = v70;
        QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
        if ( (_DWORD)QueuePriority != v70 )
        {
          v40 = CurrentThread->QueuePriority & 0x100;
          if ( !v40 )
          {
            v41 = CurrentThread->Queue;
            _InterlockedDecrement((volatile signed __int32 *)&v41[22].WaitListHead + QueuePriority);
            _InterlockedIncrement((volatile signed __int32 *)&v41[22].WaitListHead + v70);
            v25 = v70;
          }
          CurrentThread->QueuePriority = (unsigned __int8)v25 | v40;
        }
        CurrentThread->Saturation = 0;
        KiSetBasePriorityAndClearDecrement((__int64)CurrentThread, &v70, 0);
        KiAdjustRealtimePriorityFloor((ULONG_PTR)CurrentThread, v25);
        if ( v25 != CurrentThread->Priority )
        {
          v29 = KeGetCurrentPrcb();
          if ( v29->NestingLevel )
          {
            CycleTime = CurrentThread->CycleTime;
          }
          else
          {
            _disable();
            v29->NestingLevel = 1;
            v30 = __rdtsc();
            v31 = v30 - v29->StartCycles;
            CycleTime = v31 + CurrentThread->CycleTime;
            CurrentThread->CycleTime = CycleTime;
            v33 = ((v31 * v29->CpuCycleScalingFactor) >> 16) + CurrentThread->CurrentRunTime;
            if ( v33 > 0xFFFFFFFF )
              LODWORD(v33) = -1;
            v29->StartCycles = v30;
            v34 = (CurrentThread->Header.Size & 0xBE) == 0;
            CurrentThread->CurrentRunTime = v33;
            if ( !v34 )
              KiEndThreadAccountingPeriodEx((__int64)v29, (__int64)CurrentThread, v31, 0);
            v35 = __rdtsc();
            v29->CycleTime += v35 - v29->StartCycles;
            if ( (CurrentThread->Header.Size & 0x20) != 0 )
            {
              PoGetFrequencyBucket((__int64)v29);
              ProcessorEfficiencyClass = KiGetProcessorEfficiencyClass((__int64)v29);
              v45 = &v29->Cycles[v27][ProcessorEfficiencyClass];
              *v45 += v46;
            }
            if ( (CurrentThread->Header.Size & 0x40) != 0 )
            {
              v61 = CurrentThread->SchedulerAssist;
              if ( v61 )
                v61[64] = 1;
            }
            v29->StartCycles = v35;
            if ( (CurrentThread->Header.Size & 2) != 0 )
              KiBeginCounterAccumulation(CurrentThread, 0LL, v31, v27);
            v34 = v29->InterruptRequest == 0;
            v29->NestingLevel = 0;
            if ( !v34 )
            {
              v29->InterruptRequest = 0;
              HalRequestSoftwareInterrupt(2);
            }
            v36 = KeGetCurrentPrcb();
            v37 = (signed __int32 *)v36->SchedulerAssist;
            if ( v37 )
            {
              _m_prefetchw(v37);
              v42 = *v37;
              do
              {
                v43 = v42;
                v42 = _InterlockedCompareExchange(v37, v42 & 0xFFDFFFFF, v42);
              }
              while ( v43 != v42 );
              if ( (v42 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v36);
            }
            _enable();
          }
          v38 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
          v39 = v70;
          CurrentThread->QuantumTarget = v38;
          KiSetPriorityThread((__int64)CurrentThread, 0LL, v39);
        }
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_44;
      }
      v12 = 0;
      CurrentThread->ThreadLock = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      break;
    v16 = v67;
    DueTimeWithThreadTimerDelay = v67;
    if ( v9 == 2 )
    {
      KiQueryUnbiasedInterruptTime(0LL);
      DueTimeWithThreadTimerDelay = KiGetDueTimeWithThreadTimerDelay(CurrentThread, (unsigned int)(v56 + 2), v16, 0LL);
    }
    else
    {
      if ( !v9 )
        goto LABEL_24;
      if ( !v67 )
        goto LABEL_77;
      v57 = MEMORY[0xFFFFF78000000014];
    }
    if ( v57 > DueTimeWithThreadTimerDelay )
    {
LABEL_77:
      v24 = 258LL;
      goto LABEL_44;
    }
LABEL_24:
    v65 = v12;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v65);
      while ( CurrentThread->ThreadLock );
    }
    v18 = (unsigned __int8)CurrentThread->QueuePriority;
    CurrentThread->QueuePriority = v18 | 0x100;
    v19 = (struct _LIST_ENTRY *)(a1 + 8);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 4 * v18 + 536));
    CurrentThread->ThreadLock = 0LL;
    v20 = *(struct _LIST_ENTRY **)(a1 + 8);
    if ( v20->Blink != (struct _LIST_ENTRY *)(a1 + 8) )
      goto LABEL_141;
    v11->WaitBlock[0].WaitListEntry.Flink = v20;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v19;
    v20->Blink = (struct _LIST_ENTRY *)v11;
    v19->Flink = (struct _LIST_ENTRY *)v11;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait((ULONG_PTR)CurrentThread, (__int64 *)&CurrentThread->320, v9, v16, 0LL);
    CurrentThread->WaitReason = 0;
    if ( result != (struct _KPRCB *)256 )
      return result;
    v58 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v58 <= 0xFu )
    {
      v59 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v58 == 2 )
      {
        LODWORD(v60) = 4;
      }
      else
      {
        v8 = (unsigned int)v58 + 1;
        v60 = (-1LL << (v58 + 1)) & 4;
      }
      v59[5] |= v60;
    }
    *p_WaitIrql = v58;
  }
  v66 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v66);
    while ( CurrentThread->ThreadLock );
  }
  if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 )
  {
    CurrentThread->Queue = 0LL;
    Flink = CurrentThread->QueueListEntry.Flink;
    Blink = CurrentThread->QueueListEntry.Blink;
    if ( Flink->Blink != &CurrentThread->QueueListEntry || Blink->Flink != &CurrentThread->QueueListEntry )
LABEL_141:
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
  }
  CurrentThread->ThreadLock = 0LL;
  v24 = 128LL;
LABEL_44:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  CurrentThread->WaitReason = 0;
  v28 = KeGetCurrentPrcb();
  if ( v28->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)v28, 1u, 0, 2u);
  LOBYTE(v14) = 1;
  KiFastExitThreadWait((__int64)v28, (__int64)CurrentThread, v14);
  return (struct _KPRCB *)v24;
}
