/*
 * XREFs of KiExitDispatcher @ 0x1402B0820
 * Callers:
 *     KeSetProcess @ 0x1402095F0 (KeSetProcess.c)
 *     IoSetIoCompletionEx @ 0x14022A180 (IoSetIoCompletionEx.c)
 *     KeRundownQueueEx @ 0x140234764 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x140234B28 (KeDeleteMutant.c)
 *     KeTimeOutQueueWaiters @ 0x14023C084 (KeTimeOutQueueWaiters.c)
 *     KeFreezeProcess @ 0x1402443D8 (KeFreezeProcess.c)
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     KeThawMultiProcess @ 0x14025753C (KeThawMultiProcess.c)
 *     KeInsertQueue @ 0x1402624D0 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402B02B0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402B1740 (ExpReleaseResourceSharedForThreadLite.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     ExpSetTimerObject @ 0x1402E33D0 (ExpSetTimerObject.c)
 *     KeAlertThread @ 0x1402ECB90 (KeAlertThread.c)
 *     KeRequestTerminationThread @ 0x1402ECD10 (KeRequestTerminationThread.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeSuspendThread @ 0x1402EE3D8 (KeSuspendThread.c)
 *     KeResumeThread @ 0x1402EEAA8 (KeResumeThread.c)
 *     KeForceResumeThread @ 0x1402EF5FC (KeForceResumeThread.c)
 *     KiSchedulerApc @ 0x1402EFA40 (KiSchedulerApc.c)
 *     KiRundownMutants @ 0x1402F0604 (KiRundownMutants.c)
 *     KeRegisterObjectNotification @ 0x1402F0D90 (KeRegisterObjectNotification.c)
 *     KeAlertThreadByThreadId @ 0x1402F5FD0 (KeAlertThreadByThreadId.c)
 *     AlpcpQueueIoCompletion @ 0x1402F6750 (AlpcpQueueIoCompletion.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402F8040 (NtReleaseWorkerFactoryWorker.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     KeInsertQueueEx @ 0x140311A50 (KeInsertQueueEx.c)
 *     KeInsertPriQueue @ 0x1403462B0 (KeInsertPriQueue.c)
 *     KeSetTimerEx @ 0x1403575C0 (KeSetTimerEx.c)
 *     KeSetEventBoostPriorityEx @ 0x1403595B4 (KeSetEventBoostPriorityEx.c)
 *     IoSetIoCompletionEx2 @ 0x14035A850 (IoSetIoCompletionEx2.c)
 *     KeReleaseSemaphoreEx @ 0x14035AD70 (KeReleaseSemaphoreEx.c)
 *     KeWakeWaitChain @ 0x14035B8F4 (KeWakeWaitChain.c)
 *     KeForceResumeProcess @ 0x14035EB3C (KeForceResumeProcess.c)
 *     KiSetSystemTimeDpc @ 0x1403AD4F0 (KiSetSystemTimeDpc.c)
 *     KeRegisterObjectDpc @ 0x140565F08 (KeRegisterObjectDpc.c)
 *     KeAdjustTimerDelayProcess @ 0x14056C444 (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x140570CF0 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x14057B42C (KeRundownPriQueue.c)
 * Callees:
 *     KiDirectSwitchThread @ 0x14020F360 (KiDirectSwitchThread.c)
 *     KiInswapAndReadyThread @ 0x140211410 (KiInswapAndReadyThread.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     HalRequestIpiSpecifyVector @ 0x140300100 (HalRequestIpiSpecifyVector.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwTraceReadyThread @ 0x14062E258 (EtwTraceReadyThread.c)
 */

char __fastcall KiExitDispatcher(__int64 a1, char a2, int a3, int a4, unsigned __int8 a5)
{
  char v6; // bp
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  char v11; // r13
  _QWORD *v12; // rdi
  _QWORD *v13; // r15
  _QWORD *v14; // r15
  __int64 *v15; // r14
  __int64 *v16; // r12
  unsigned __int8 v17; // r11
  unsigned __int8 v18; // r10
  int v19; // eax
  _QWORD *v20; // r14
  char v21; // al
  bool v22; // zf
  struct _KPRCB *CurrentPrcb; // rax
  int v24; // ecx
  unsigned int v25; // edx
  char v26; // r8
  _QWORD *v27; // rdx
  __int64 *v28; // rax
  __int64 **v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r9
  struct _KPRCB *v32; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v34; // rbp
  __int64 v35; // r8
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  _DWORD *v43; // rdx
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  volatile signed __int32 *v47; // [rsp+20h] [rbp-88h]
  __int64 v48; // [rsp+28h] [rbp-80h] BYREF
  int v49; // [rsp+30h] [rbp-78h]
  __int64 v50; // [rsp+34h] [rbp-74h]
  int v51[26]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v52; // [rsp+B0h] [rbp+8h] BYREF
  int v53; // [rsp+B8h] [rbp+10h] BYREF
  int v54; // [rsp+C0h] [rbp+18h]
  int v55; // [rsp+C8h] [rbp+20h]

  v55 = a4;
  v54 = a3;
  v6 = a2 & 1;
  if ( *(_QWORD *)(a1 + 11528) )
  {
    if ( v6 && KiDirectSwitchThread(a1, a4, (a2 & 2) != 0) )
      goto LABEL_47;
    v10 = *(_QWORD **)(a1 + 11528);
    v11 = 0;
    v12 = 0LL;
    v52 = 0LL;
    *(_QWORD *)(a1 + 11528) = 0LL;
    while ( v10 )
    {
      v13 = v10;
      v10 = (_QWORD *)*v10;
      v14 = v13 - 27;
      v15 = (__int64 *)v14[26];
      v16 = &v15[6 * *((unsigned __int8 *)v14 + 587)];
      do
      {
        if ( *((_BYTE *)v15 + 17) < 5u )
        {
          v47 = (volatile signed __int32 *)v15[4];
          KiAcquireKobjectLockSafe(v47);
          if ( *((_BYTE *)v15 + 17) == 4 )
          {
            v28 = (__int64 *)*v15;
            v29 = (__int64 **)v15[1];
            if ( *(__int64 **)(*v15 + 8) != v15 || *v29 != v15 )
              __fastfail(3u);
            *v29 = v28;
            v28[1] = (__int64)v29;
          }
          _InterlockedAnd(v47, 0xFFFFFF7F);
        }
        v15 += 6;
      }
      while ( v15 != v16 );
      v17 = v54;
      v18 = v55;
      *((_BYTE *)v14 + 566) = v54;
      *((_BYTE *)v14 + 567) = v18;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceReadyThread(v14, v17, v18);
      v19 = *((_DWORD *)v14 + 30);
      if ( (v19 & 0x20000) == 0 || (v19 & 0x100000) != 0 )
      {
        v14[27] = v12;
        v12 = v14 + 27;
      }
      else
      {
        v20 = v14 + 27;
        v14[27] = v52;
        do
        {
          KiDeferredReadySingleThread(a1, v20 - 27, &v52);
          v20 = v52;
          ++v11;
          if ( v52 )
            v52 = (_QWORD *)*v52;
          if ( (v11 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch(a1 + 12760);
        }
        while ( v20 );
      }
    }
    v21 = *(_BYTE *)(a1 + 12761);
    if ( v21 )
    {
      v22 = v21 == 1;
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v22 )
      {
        v24 = *(_DWORD *)(a1 + 12764);
        v25 = 47;
        v26 = *(_BYTE *)(a1 + 12760);
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        v49 = v24;
        v48 = 6LL;
        if ( v26 == 1 )
          v25 = 31;
        v50 = 0LL;
        HalpInterruptSendIpi((int *)&v48, v25);
      }
      else
      {
        v35 = 47LL;
        if ( *(_BYTE *)(a1 + 12760) == 1 )
          v35 = 31LL;
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        HalRequestIpiSpecifyVector(0LL, a1 + 12768, v35);
      }
      if ( *(_BYTE *)(a1 + 12761) == 2 )
      {
        *(_QWORD *)(a1 + 12768) = 2097153LL;
        memset((void *)(a1 + 12776), 0, 0x100uLL);
      }
      *(_BYTE *)(a1 + 12761) = 0;
      *(_DWORD *)(a1 + 12764) = 0xFFFF;
    }
    while ( v12 )
    {
      v27 = v12;
      v12 = (_QWORD *)*v12;
      KiInswapAndReadyThread(a1, (__int64)(v27 - 27));
    }
  }
  if ( v6 )
  {
LABEL_47:
    v30 = *(_QWORD *)(a1 + 8);
    LOBYTE(v8) = a5;
    *(_DWORD *)(v30 + 116) |= 4u;
    *(_BYTE *)(v30 + 390) = v8;
    return v8;
  }
  v7 = a5;
  v8 = *(_QWORD *)(a1 + 16);
  if ( a5 < 2u )
  {
    v9 = *(_QWORD *)(a1 + 8);
    if ( v8 )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0LL);
      v32 = KeGetCurrentPrcb();
      v53 = 0;
      SchedulerAssist = v32->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v38 = SchedulerAssist[6];
          SchedulerAssist[6] = v38 + 1;
          if ( v38 == -1 )
LABEL_68:
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v36 = v32->SchedulerAssist;
        if ( v36 )
        {
          if ( v32->NestingLevel <= 1u )
          {
            v39 = v36[6] - 1;
            v36[6] = v39;
            if ( !v39 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
        do
          KeYieldProcessorEx(&v53);
        while ( *(_QWORD *)(a1 + 48) );
        v37 = v32->SchedulerAssist;
        if ( v37 )
        {
          if ( v32->NestingLevel <= 1u )
          {
            v40 = v37[6];
            v37[6] = v40 + 1;
            if ( v40 == -1 )
              goto LABEL_68;
          }
        }
      }
      v34 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      LOBYTE(v31) = 1;
      KiEndThreadCycleAccumulation(a1, v9, 0LL, v31);
      _enable();
      *(_QWORD *)(a1 + 8) = v34;
      if ( *(_BYTE *)(v34 + 388) == 1 )
        *(_DWORD *)(v34 + 132) = *(_DWORD *)(v34 + 132) - *(_DWORD *)(v34 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v34 + 388) = 2;
      *(_BYTE *)(v9 + 643) = 32;
      *(_BYTE *)(v9 + 390) = v7;
      KiQueueReadyThread(a1, v9);
      if ( !(unsigned __int8)KiSwapContext(v9, v34, (unsigned __int8)v7) )
        goto LABEL_6;
      if ( !KiIrqlFlags )
        goto LABEL_56;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_56;
      if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
        goto LABEL_56;
      v41 = KeGetCurrentPrcb();
      v42 = v41->SchedulerAssist;
      v22 = (v42[5] & 0xFFFF0003) == 0;
      v42[5] &= 0xFFFF0003;
      if ( !v22 )
        goto LABEL_56;
    }
    else
    {
      if ( (*(_DWORD *)(v9 + 116) & 0x40) == 0 )
        goto LABEL_6;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
        || (v41 = KeGetCurrentPrcb(),
            v43 = v41->SchedulerAssist,
            v22 = (v43[5] & 0xFFFF0003) == 0,
            v43[5] &= 0xFFFF0003,
            !v22) )
      {
LABEL_56:
        __writecr8(1uLL);
        *(_DWORD *)(v9 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
LABEL_6:
        LOBYTE(v8) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LOBYTE(v8) = KeGetCurrentIrql() - 2;
            if ( (unsigned __int8)v8 <= 0xDu )
            {
              v44 = KeGetCurrentPrcb();
              v45 = v44->SchedulerAssist;
              LODWORD(v8) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
              v22 = ((unsigned int)v8 & v45[5]) == 0;
              v45[5] &= v8;
              if ( v22 )
                LOBYTE(v8) = KiRemoveSystemWorkPriorityKick(v44);
            }
          }
        }
        __writecr8(v7);
        return v8;
      }
    }
    KiRemoveSystemWorkPriorityKick(v41);
    goto LABEL_56;
  }
  if ( v8 )
  {
    LOBYTE(v8) = *(_BYTE *)(a1 + 13242);
    if ( !(_BYTE)v8 )
    {
      if ( *(_BYTE *)(a1 + 32) )
      {
        *(_BYTE *)(a1 + 6) = 1;
      }
      else
      {
        v51[0] = 5;
        *(_OWORD *)&v51[1] = 0LL;
        LOBYTE(v8) = HalpInterruptSendIpi(v51, 0x2Fu);
      }
    }
  }
  return v8;
}
