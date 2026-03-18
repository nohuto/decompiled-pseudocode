/*
 * XREFs of KeSetBasePriorityThread @ 0x1402EBF30
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x140882180 (PfTLoggingWorker.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EEA80 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiAdjustRealtimePriorityFloor @ 0x140291174 (KiAdjustRealtimePriorityFloor.c)
 *     KiPriQueueThreadPriorityChanged @ 0x140291EE4 (KiPriQueueThreadPriorityChanged.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiComputeNewPriority @ 0x1402BA000 (KiComputeNewPriority.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402EC3E4 (KiSetBasePriorityAndClearDecrement.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140345AA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     EtwTracePriority @ 0x14062E0D0 (EtwTracePriority.c)
 */

LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  _KPROCESS *Process; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v7; // rcx
  int BasePriority; // r13d
  LONG v9; // r15d
  char v10; // r8
  int v11; // ecx
  int v12; // edi
  int v13; // r12d
  _DISPATCHER_HEADER *volatile Queue; // rcx
  _QWORD *v15; // rdi
  char v16; // r12
  ULONG_PTR v17; // rdi
  _DWORD *SchedulerAssist; // r9
  volatile unsigned __int64 CycleTime; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  struct _KPRCB *v23; // r13
  _DWORD *v24; // rcx
  _KTHREAD *NextThread; // r13
  __int64 v26; // r8
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  bool v39; // zf
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  struct _KPRCB *v42; // r9
  _DWORD *v43; // r8
  int v44; // eax
  int v45; // [rsp+30h] [rbp-48h] BYREF
  int v46; // [rsp+34h] [rbp-44h] BYREF
  _QWORD *v47; // [rsp+38h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-38h]
  int v49[6]; // [rsp+48h] [rbp-30h] BYREF
  int v50; // [rsp+A0h] [rbp+28h] BYREF
  int v51; // [rsp+B0h] [rbp+38h] BYREF
  int v52; // [rsp+B8h] [rbp+40h]

  Process = Thread->Process;
  v51 = 0;
  v50 = 0;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v47 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v45 = 0;
  v7 = CurrentPrcb->SchedulerAssist;
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( v7 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v31 = v7[6];
      v7[6] = v31 + 1;
      if ( v31 == -1 )
LABEL_70:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    v27 = CurrentPrcb->SchedulerAssist;
    if ( v27 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v32 = v27[6] - 1;
        v27[6] = v32;
        if ( !v32 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v45);
    while ( Thread->ThreadLock );
    v28 = CurrentPrcb->SchedulerAssist;
    if ( v28 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v33 = v28[6];
        v28[6] = v33 + 1;
        if ( v33 == -1 )
          goto LABEL_70;
      }
    }
  }
  BasePriority = Thread->BasePriority;
  v9 = BasePriority - Process->BasePriority;
  v52 = BasePriority;
  if ( Thread->Saturation )
    v9 = 16 * Thread->Saturation;
  Thread->Saturation = 0;
  v10 = 0;
  if ( (int)abs32(Increment) >= 16 )
  {
    v10 = 1;
    if ( Increment <= 0 )
      v10 = -1;
    Thread->Saturation = v10;
  }
  v11 = Process->BasePriority;
  v12 = Increment + v11;
  v51 = Increment + v11;
  if ( (char)v11 >= 16 )
  {
    if ( v12 >= 16 )
    {
      if ( v12 > 31 )
      {
        v12 = 31;
        v51 = 31;
      }
    }
    else
    {
      v12 = 16;
      v51 = 16;
    }
    goto LABEL_52;
  }
  if ( v12 >= 16 )
  {
    v12 = 15;
    v51 = 15;
    v13 = 15;
  }
  else
  {
    v13 = Increment + v11;
    if ( v12 <= 0 )
    {
      v12 = 1;
      v51 = 1;
      v13 = 1;
    }
  }
  if ( v10 )
  {
LABEL_52:
    v50 = v12;
    goto LABEL_15;
  }
  v12 = v13 - BasePriority + (char)KiComputeNewPriority((__int64)Thread, 0, 1);
  v50 = v12;
  if ( v12 >= 16 )
  {
    v12 = 15;
    goto LABEL_52;
  }
  if ( v12 <= 0 )
  {
    v12 = 1;
    goto LABEL_52;
  }
LABEL_15:
  KiSetBasePriorityAndClearDecrement(Thread, &v51, 0LL);
  if ( v12 != Thread->Priority )
  {
    if ( Thread != CurrentThread || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
      v12 = v50;
    }
    else
    {
      _disable();
      CycleTime = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, Thread, 0LL);
      _enable();
    }
    v21 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
      v12 = v50;
    }
    Thread->QuantumTarget = v21;
    KiAdjustRealtimePriorityFloor((ULONG_PTR)Thread, v12);
    KiSetPriorityThread(Thread, &v47, (unsigned int)v12);
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(&Queue->Lock, (__int64)Thread);
  else
    KiReleaseThreadLockSafe((__int64)Thread);
  v15 = v47;
  v16 = 0;
  if ( v47 )
  {
    v47 = (_QWORD *)*v47;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, v15 - 27, &v47);
      v15 = v47;
      ++v16;
      if ( v47 )
        v47 = (_QWORD *)*v47;
      if ( (v16 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
    }
    while ( v15 );
  }
  KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    {
      if ( CurrentPrcb->NestingLevel )
      {
        CurrentPrcb->InterruptRequest = 1;
      }
      else
      {
        v49[0] = 5;
        *(_OWORD *)&v49[1] = 0LL;
        HalpInterruptSendIpi(v49, 0x2Fu);
      }
    }
  }
  else
  {
    v17 = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v23 = KeGetCurrentPrcb();
      v46 = 0;
      v24 = v23->SchedulerAssist;
      if ( v24 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          v34 = v24[6];
          v24[6] = v34 + 1;
          if ( v34 == -1 )
LABEL_84:
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        v29 = v23->SchedulerAssist;
        if ( v29 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v35 = v29[6] - 1;
            v29[6] = v35;
            if ( !v35 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        do
          KeYieldProcessorEx(&v46);
        while ( CurrentPrcb->PrcbLock );
        v30 = v23->SchedulerAssist;
        if ( v30 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v36 = v30[6];
            v30[6] = v36 + 1;
            if ( v36 == -1 )
              goto LABEL_84;
          }
        }
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      LOBYTE(v22) = 1;
      KiEndThreadCycleAccumulation(CurrentPrcb, v17, 0LL, v22);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v26 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v26 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(v17 + 643) = 32;
      *(_BYTE *)(v17 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, v17, v26);
      if ( (unsigned __int8)KiSwapContext(v17, NextThread, CurrentIrql) )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v37 = KeGetCurrentPrcb();
            v38 = v37->SchedulerAssist;
            v39 = (v38[5] & 0xFFFF0003) == 0;
            v38[5] &= 0xFFFF0003;
            if ( v39 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(v17 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
      }
      BasePriority = v52;
    }
    else if ( (*(_DWORD *)(v17 + 116) & 0x40) != 0 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v39 = (v41[5] & 0xFFFF0003) == 0;
          v41[5] &= 0xFFFF0003;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v17 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v42 = KeGetCurrentPrcb();
        v43 = v42->SchedulerAssist;
        v44 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v39 = (v44 & v43[5]) == 0;
        v43[5] &= v44;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(v42);
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, BasePriority, v51, (__int64)&v50);
  return v9;
}
