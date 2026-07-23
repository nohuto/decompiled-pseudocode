/*
 * XREFs of KiExitDispatcher @ 0x14023CE40
 * Callers:
 *     KeThawMultiProcess @ 0x140204688 (KeThawMultiProcess.c)
 *     KeForceResumeProcess @ 0x140204AE0 (KeForceResumeProcess.c)
 *     KeSetProcess @ 0x1402085E4 (KeSetProcess.c)
 *     KePulseEvent @ 0x1402206A0 (KePulseEvent.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D950 (ExpReleaseResourceSharedForThreadLite.c)
 *     KeRegisterObjectNotification @ 0x140250A70 (KeRegisterObjectNotification.c)
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x140253650 (KeSetTimerEx.c)
 *     CcUnpinFileDataEx @ 0x14025DAA0 (CcUnpinFileDataEx.c)
 *     KeWakeWaitChain @ 0x140260BD0 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x140260EC0 (ExpCommitWakeResourceShared.c)
 *     KeRundownQueueEx @ 0x14028CA94 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x14028CE38 (KeDeleteMutant.c)
 *     AlpcpSignal @ 0x1402B6F00 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x1402B7430 (KeReleaseSemaphoreEx.c)
 *     ExpQueueWorkItem @ 0x1402B7930 (ExpQueueWorkItem.c)
 *     KeInsertPriQueue @ 0x1402B81B0 (KeInsertPriQueue.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402B8C10 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x1402B9480 (IoSetIoCompletionEx2.c)
 *     KeAlertThreadByThreadId @ 0x1402B9A70 (KeAlertThreadByThreadId.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAFD0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetEventBoostPriorityEx @ 0x1402BC260 (KeSetEventBoostPriorityEx.c)
 *     IopfCompleteRequest @ 0x1402C9C40 (IopfCompleteRequest.c)
 *     KeInsertQueueApc @ 0x1402CC8D0 (KeInsertQueueApc.c)
 *     KeAlertThread @ 0x140309AE0 (KeAlertThread.c)
 *     KeRequestTerminationThread @ 0x140309C8C (KeRequestTerminationThread.c)
 *     KeSuspendThread @ 0x14030A0A8 (KeSuspendThread.c)
 *     KeResumeThread @ 0x14030A4BC (KeResumeThread.c)
 *     KiSchedulerApc @ 0x14030ABF0 (KiSchedulerApc.c)
 *     KeForceResumeThread @ 0x14030AE6C (KeForceResumeThread.c)
 *     KiRundownMutants @ 0x14030B32C (KiRundownMutants.c)
 *     KeInsertQueueEx @ 0x14031AD40 (KeInsertQueueEx.c)
 *     KeInsertQueue @ 0x14031CFC0 (KeInsertQueue.c)
 *     KeReleaseSemaphore @ 0x1403216C0 (KeReleaseSemaphore.c)
 *     KeTimeOutQueueWaiters @ 0x14034ECEC (KeTimeOutQueueWaiters.c)
 *     KeSignalGate @ 0x14035D4DC (KeSignalGate.c)
 *     KeFreezeProcess @ 0x14036F9F8 (KeFreezeProcess.c)
 *     KiSetSystemTimeDpc @ 0x14039A630 (KiSetSystemTimeDpc.c)
 *     KeReleaseMutantEx @ 0x14041083C (KeReleaseMutantEx.c)
 *     KeRegisterObjectDpc @ 0x1405687A8 (KeRegisterObjectDpc.c)
 *     KeAdjustTimerDelayProcess @ 0x14056FA08 (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x140573DB0 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x14057EF40 (KeRundownPriQueue.c)
 * Callees:
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248520 (KiEndThreadAccountingPeriodEx.c)
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiAcquireKobjectLockSafe @ 0x1402520F0 (KiAcquireKobjectLockSafe.c)
 *     KiAndAffinityEx @ 0x140252500 (KiAndAffinityEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KeAndGroupAffinityEx @ 0x140254540 (KeAndGroupAffinityEx.c)
 *     HalRequestIpiSpecifyVector @ 0x140254750 (HalRequestIpiSpecifyVector.c)
 *     HalpInterruptSendIpi @ 0x140254E10 (HalpInterruptSendIpi.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255270 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     KiAbPropagateBoosts @ 0x1402BC160 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     KiDeliverApc @ 0x14030FB20 (KiDeliverApc.c)
 *     KiInswapAndReadyThread @ 0x14034DBDC (KiInswapAndReadyThread.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwTraceReadyThread @ 0x14046785A (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiExitDispatcher(__int64 a1, char a2, _PROCESSOR_NUMBER a3, unsigned int a4, unsigned __int8 a5)
{
  char v5; // bp
  __int64 result; // rax
  ULONG_PTR v8; // r14
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  _QWORD *v11; // r15
  _QWORD *v12; // r12
  _QWORD *v13; // r15
  __int64 *v14; // r14
  __int64 *v15; // r13
  unsigned __int8 Group; // r11
  unsigned __int8 v17; // r10
  int v18; // eax
  int v19; // r14d
  char v20; // al
  bool v21; // zf
  struct _KPRCB *CurrentPrcb; // rax
  int v23; // ecx
  __int64 v24; // rdx
  char v25; // r8
  _QWORD *v26; // rbx
  _QWORD *v27; // rdx
  __int64 (__fastcall *v28)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *); // r10
  __int64 *v29; // rax
  __int64 **v30; // rcx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rdi
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rax
  struct _KPRCB *v37; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  struct _KPRCB *v41; // rdi
  __int64 v42; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v44; // rcx
  _DWORD *v45; // rdx
  unsigned __int8 v46; // cl
  _DWORD *v47; // rdx
  unsigned __int8 v48; // cl
  struct _KPRCB *v49; // r10
  _DWORD *v50; // r9
  __int64 v51; // rdx
  __int16 v52; // r15
  unsigned int *v53; // rdi
  unsigned __int64 v54; // rsi
  unsigned __int8 v55; // bp
  int v56; // r14d
  __int64 (__fastcall *v57)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v58)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v59)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v60[2]; // [rsp+40h] [rbp-368h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-360h] BYREF
  int v62; // [rsp+4Ch] [rbp-35Ch]
  __int128 v63; // [rsp+50h] [rbp-358h] BYREF
  int v64; // [rsp+60h] [rbp-348h]
  int v65; // [rsp+68h] [rbp-340h]
  _QWORD *v66; // [rsp+70h] [rbp-338h] BYREF
  int v67; // [rsp+78h] [rbp-330h] BYREF
  __int64 v68; // [rsp+80h] [rbp-328h] BYREF
  _DWORD v69[2]; // [rsp+88h] [rbp-320h] BYREF
  _DWORD v70[2]; // [rsp+90h] [rbp-318h] BYREF
  _DWORD v71[2]; // [rsp+98h] [rbp-310h] BYREF
  _DWORD v72[2]; // [rsp+A0h] [rbp-308h] BYREF
  _DWORD v73[2]; // [rsp+A8h] [rbp-300h] BYREF
  _DWORD v74[2]; // [rsp+B0h] [rbp-2F8h] BYREF
  __int64 v75; // [rsp+B8h] [rbp-2F0h] BYREF
  unsigned __int64 v76; // [rsp+C0h] [rbp-2E8h] BYREF
  __int128 v77; // [rsp+C8h] [rbp-2E0h] BYREF
  __int64 v78; // [rsp+D8h] [rbp-2D0h]
  volatile signed __int32 *v79; // [rsp+E0h] [rbp-2C8h]
  __int64 v80; // [rsp+E8h] [rbp-2C0h] BYREF
  int v81; // [rsp+F0h] [rbp-2B8h]
  __int64 v82; // [rsp+F4h] [rbp-2B4h]
  int v83; // [rsp+100h] [rbp-2A8h] BYREF
  __int128 v84; // [rsp+104h] [rbp-2A4h]
  __int128 v85; // [rsp+118h] [rbp-290h] BYREF
  _QWORD v86[34]; // [rsp+130h] [rbp-278h] BYREF
  _QWORD v87[34]; // [rsp+240h] [rbp-168h] BYREF
  int v88; // [rsp+3A0h] [rbp-8h]

  v60[0] = a4;
  ProcNumber = a3;
  v5 = a2 & 1;
  if ( *(_QWORD *)(a1 + 11528) )
  {
    if ( v5 && (unsigned __int8)KiDirectSwitchThread(a1, a4, (a2 & 2) != 0) )
      goto LABEL_51;
    v9 = *(_QWORD **)(a1 + 11528);
    v10 = 0LL;
    v65 = 0;
    v66 = 0LL;
    *(_QWORD *)(a1 + 11528) = 0LL;
    while ( v9 )
    {
      v11 = v9;
      v12 = v9;
      v9 = (_QWORD *)*v9;
      v13 = v11 - 27;
      v14 = (__int64 *)v13[26];
      v15 = &v14[6 * *((unsigned __int8 *)v13 + 587)];
      do
      {
        if ( *((_BYTE *)v14 + 17) < 5u )
        {
          v79 = (volatile signed __int32 *)v14[4];
          KiAcquireKobjectLockSafe(v79);
          if ( *((_BYTE *)v14 + 17) == 4 )
          {
            v29 = (__int64 *)*v14;
            v30 = (__int64 **)v14[1];
            if ( *(__int64 **)(*v14 + 8) != v14 || *v30 != v14 )
              __fastfail(3u);
            *v30 = v29;
            v29[1] = (__int64)v30;
          }
          _InterlockedAnd(v79, 0xFFFFFF7F);
        }
        v14 += 6;
      }
      while ( v14 != v15 );
      Group = ProcNumber.Group;
      v17 = v60[0];
      *((_BYTE *)v13 + 566) = ProcNumber.Group;
      *((_BYTE *)v13 + 567) = v17;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceReadyThread(v13, Group, v17, 0LL);
      v18 = *((_DWORD *)v13 + 30);
      if ( (v18 & 0x20000) == 0 || (v18 & 0x100000) != 0 )
      {
        *v12 = v10;
        v10 = v12;
      }
      else
      {
        v19 = v65;
        *v12 = v66;
        do
        {
          KiDeferredReadySingleThread(a1, (unsigned __int64)(v12 - 27), (__int64)&v66);
          v12 = v66;
          ++v19;
          if ( v66 )
            v66 = (_QWORD *)*v66;
          if ( (v19 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch(a1 + 12760);
        }
        while ( v12 );
        v65 = v19;
      }
    }
    v20 = *(_BYTE *)(a1 + 12761);
    if ( v20 )
    {
      v21 = v20 == 1;
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v21 )
      {
        v23 = *(_DWORD *)(a1 + 12764);
        v24 = 47LL;
        v25 = *(_BYTE *)(a1 + 12760);
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        v81 = v23;
        v80 = 6LL;
        if ( v25 == 1 )
          v24 = 31LL;
        v82 = 0LL;
        HalpInterruptSendIpi(&v80, v24);
        v26 = (_QWORD *)(a1 + 12768);
      }
      else
      {
        v26 = (_QWORD *)(a1 + 12768);
        v42 = 47LL;
        if ( *(_BYTE *)(a1 + 12760) == 1 )
          v42 = 31LL;
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        HalRequestIpiSpecifyVector(0LL, a1 + 12768, v42);
      }
      if ( *(_BYTE *)(a1 + 12761) == 2 )
      {
        *v26 = 2097153LL;
        memset(v26 + 1, 0, 0x100uLL);
      }
      *(_BYTE *)(a1 + 12761) = 0;
      *(_DWORD *)(a1 + 12764) = 0xFFFF;
    }
    while ( v10 )
    {
      v27 = v10;
      v10 = (_QWORD *)*v10;
      KiInswapAndReadyThread(a1, v27 - 27);
    }
  }
  if ( v5 )
  {
LABEL_51:
    v31 = *(_QWORD *)(a1 + 8);
    result = a5;
    *(_DWORD *)(v31 + 116) |= 4u;
    *(_BYTE *)(v31 + 390) = a5;
    return result;
  }
  result = *(_QWORD *)(a1 + 16);
  v76 = 0LL;
  if ( a5 < 2u )
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( result )
    {
      v32 = *(unsigned __int8 *)(v8 + 792) | *(unsigned __int8 *)(v8 + 870);
      v68 = 0LL;
      v75 = 0LL;
      if ( v32 != 63 )
      {
        v41 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(v8, 1, 1, 1, (__int64)&v68, (__int64)&v75, (__int64)&v41->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v75, &v41->AbSelfIoBoostsList, &v68);
        KiReadyDeferredReadyList(v41, &v68);
      }
      v67 = 0;
      v76 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v67);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v33 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      *(_BYTE *)(a1 + 32) = 1;
      v34 = __rdtsc();
      v35 = v34 - *(_QWORD *)(a1 + 33152);
      *(_QWORD *)(v8 + 72) += v35;
      v36 = ((v35 * *(unsigned int *)(a1 + 33208)) >> 16) + *(unsigned int *)(v8 + 80);
      if ( v36 > 0xFFFFFFFF )
        LODWORD(v36) = -1;
      *(_QWORD *)(a1 + 33152) = v34;
      v21 = (*(_BYTE *)(v8 + 2) & 0xBE) == 0;
      *(_DWORD *)(v8 + 80) = v36;
      if ( !v21 )
      {
        LOBYTE(v34) = 1;
        KiEndThreadAccountingPeriodEx(a1, v8, v35, v34);
      }
      v37 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v37->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v39 = *SchedulerAssist;
        do
        {
          v40 = v39;
          v39 = _InterlockedCompareExchange(SchedulerAssist, v39 & 0xFFDFFFFF, v39);
        }
        while ( v40 != v39 );
        if ( (v39 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v37);
      }
      _enable();
      *(_QWORD *)(a1 + 8) = v33;
      if ( *(_BYTE *)(v33 + 388) == 1 )
        *(_DWORD *)(v33 + 132) = *(_DWORD *)(v33 + 132) - *(_DWORD *)(v33 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v33 + 388) = 2;
      *(_BYTE *)(v8 + 643) = 32;
      *(_BYTE *)(v8 + 390) = a5;
      KiQueueReadyThread(a1, (__int64 *)&v76, v8);
      if ( !(unsigned __int8)KiSwapContext(v8, v33, a5) )
        goto LABEL_6;
      if ( !(_DWORD)KiIrqlFlags )
        goto LABEL_71;
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 )
        goto LABEL_71;
      if ( (unsigned __int8)(CurrentIrql - 2) > 0xDu )
        goto LABEL_71;
      v44 = KeGetCurrentPrcb();
      v45 = v44->SchedulerAssist;
      v21 = (v45[5] & 0xFFFF0003) == 0;
      v45[5] &= 0xFFFF0003;
      if ( !v21 )
        goto LABEL_71;
    }
    else
    {
      if ( (*(_DWORD *)(v8 + 116) & 0x40) == 0 )
        goto LABEL_6;
      if ( !(_DWORD)KiIrqlFlags
        || (v46 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) == 0)
        || (unsigned __int8)(v46 - 2) > 0xDu
        || (v44 = KeGetCurrentPrcb(),
            v47 = v44->SchedulerAssist,
            v21 = (v47[5] & 0xFFFF0003) == 0,
            v47[5] &= 0xFFFF0003,
            !v21) )
      {
LABEL_71:
        __writecr8(1uLL);
        *(_DWORD *)(v8 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
LABEL_6:
        result = (unsigned int)KiIrqlFlags;
        if ( (_DWORD)KiIrqlFlags )
        {
          v48 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v48 - 2) <= 0xDu )
          {
            v49 = KeGetCurrentPrcb();
            v50 = v49->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << (a5 + 1));
            v21 = ((unsigned int)result & v50[5]) == 0;
            v50[5] &= result;
            if ( v21 )
              result = KiRemoveSystemWorkPriorityKick(v49);
          }
        }
        __writecr8(a5);
        return result;
      }
    }
    KiRemoveSystemWorkPriorityKick(v44);
    goto LABEL_71;
  }
  if ( !result )
    return result;
  result = *(unsigned __int8 *)(a1 + 13242);
  if ( (_BYTE)result )
    return result;
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 6) = 1;
    return result;
  }
  memset(&v86[1], 0, 0x100uLL);
  v84 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v83 = 3;
    v28 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
    ProcNumber = (_PROCESSOR_NUMBER)-1;
    v60[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v60[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v62 = 1;
    _disable();
    result = v28(*(_QWORD *)(HalpInterruptController + 16), v60, &v83, 47LL, &ProcNumber);
    if ( (v88 & 0x200) != 0 )
      _enable();
    return result;
  }
  LODWORD(v86[0]) = 2097153;
  memset((char *)v86 + 4, 0, 0x104uLL);
  LODWORD(v51) = KeGetPcr()->Prcb.Number;
  KeAddProcessorAffinityEx(v86, v51);
  v60[0] = 0;
  v78 = 0LL;
  v85 = 0LL;
  v77 = 0LL;
  memset(&v87[1], 0, 0x100uLL);
  v64 = 0;
  v63 = 0LL;
  if ( qword_140C62548 )
    return qword_140C62548(v86, 47LL);
  LODWORD(v87[0]) = 2097153;
  memset((char *)v87 + 4, 0, 0x104uLL);
  KiAndAffinityEx(&HalpInterruptPhysicalTargets, v86, v87, 32LL);
  v52 = v88;
  if ( !HalpInterruptClusterModeEnabled )
  {
    if ( !HalpInterruptPhysicalModeOnly )
    {
      *((_QWORD *)&v77 + 1) = v86[1];
      *(_QWORD *)&v77 = v86;
      LODWORD(v63) = 5;
      DWORD2(v63) = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(v60, &v77) )
      {
        if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v60[0]) == 5 )
          DWORD2(v63) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v60[0] + 8);
      }
      if ( DWORD2(v63) )
      {
        v71[0] = -1;
        v71[1] = 1;
        v72[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v72[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v58 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        result = v58(*(_QWORD *)(HalpInterruptController + 16), v72, &v63, 47LL, v71);
        if ( (v52 & 0x200) != 0 )
          _enable();
        if ( (int)result < 0 )
          return result;
      }
    }
LABEL_114:
    *((_QWORD *)&v77 + 1) = v87[1];
    *(_QWORD *)&v77 = v87;
    v60[0] = 0;
    LOWORD(v78) = 0;
    do
    {
      result = KeEnumerateNextProcessor(v60, &v77);
      if ( (_DWORD)result )
        break;
      LODWORD(v63) = 4;
      v73[0] = -1;
      v73[1] = 1;
      DWORD2(v63) = *(_DWORD *)(HalpInterruptTargets + 24LL * v60[0] + 8);
      v74[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v74[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v59 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      result = v59(*(_QWORD *)(HalpInterruptController + 16), v74, &v63, 47LL, v73);
      if ( (v52 & 0x200) != 0 )
        _enable();
    }
    while ( (int)result >= 0 );
    return result;
  }
  v53 = (unsigned int *)HalpInterruptClusterData;
  ProcNumber = 0;
  if ( HalpInterruptClusterData >= (unsigned __int64)HalpInterruptClusterDataEnd )
    goto LABEL_114;
  while ( 1 )
  {
    if ( (unsigned int)KeAndGroupAffinityEx(v86, v53 + 2, &v85) )
    {
      v54 = v85;
      v55 = 0;
      LODWORD(v63) = 6;
      v56 = 0;
      *((_QWORD *)&v63 + 1) = *v53;
      ProcNumber.Group = WORD4(v85);
      for ( ProcNumber.Number = 0; v54; ProcNumber.Number = v55 )
      {
        if ( (v54 & 1) != 0 )
        {
          v60[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
          v56 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v60[0] + 12);
          HIDWORD(v63) = v56;
        }
        ++v55;
        v54 >>= 1;
      }
      v69[0] = -1;
      v69[1] = 1;
      v70[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v70[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v57 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      result = v57(*(_QWORD *)(HalpInterruptController + 16), v70, &v63, 47LL, v69);
      if ( (v52 & 0x200) != 0 )
        _enable();
      if ( (int)result < 0 )
        return result;
    }
    v53 += 6;
    if ( (unsigned __int64)v53 >= HalpInterruptClusterDataEnd )
      goto LABEL_114;
  }
}
