/*
 * XREFs of KeSetBasePriorityThread @ 0x1402B9D70
 * Callers:
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x14083A720 (PfTLoggingWorker.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F0AAC (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     KiGetProcessorEfficiencyClass @ 0x14020E8F4 (KiGetProcessorEfficiencyClass.c)
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248430 (KiEndThreadAccountingPeriodEx.c)
 *     PoGetFrequencyBucket @ 0x140249C00 (PoGetFrequencyBucket.c)
 *     KiReadyDeferredReadyList @ 0x140249C70 (KiReadyDeferredReadyList.c)
 *     KiAndAffinityEx @ 0x140252320 (KiAndAffinityEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252640 (KiFlushSoftwareInterruptBatch.c)
 *     KeAndGroupAffinityEx @ 0x140254360 (KeAndGroupAffinityEx.c)
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255090 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257190 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257280 (KeAddProcessorAffinityEx.c)
 *     KiSetPriorityThread @ 0x1402B05A0 (KiSetPriorityThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402B8400 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAdjustRealtimePriorityFloor @ 0x1402B84FC (KiAdjustRealtimePriorityFloor.c)
 *     KiComputeNewPriority @ 0x1402BA990 (KiComputeNewPriority.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402BAAC4 (KiPriQueueThreadPriorityChanged.c)
 *     KiAbPropagateBoosts @ 0x1402BBEA0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
 *     KiDeliverApc @ 0x14030F6B0 (KiDeliverApc.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140427C20 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     EtwTracePriority @ 0x140466D2E (EtwTracePriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiBeginCounterAccumulation @ 0x140574190 (KiBeginCounterAccumulation.c)
 */

LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  _KPROCESS *Process; // rbx
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  __int64 CurrentPrcb; // rsi
  struct _KTHREAD *v10; // r12
  int BasePriority; // eax
  LONG v12; // ecx
  int Saturation; // eax
  int v14; // edi
  char v15; // r8
  int v16; // ecx
  int v17; // ebx
  int v18; // r14d
  int v19; // r14d
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  volatile unsigned __int64 CycleTime; // rbx
  __int64 CurrentRunTime; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r11
  bool ProcessorEfficiencyClass; // al
  __int64 v29; // r10
  _BYTE *v30; // rax
  struct _KPRCB *v31; // r8
  signed __int32 *v32; // rdx
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  unsigned __int64 v35; // rcx
  int v36; // r8d
  _DISPATCHER_HEADER *volatile Queue; // rcx
  _QWORD *v38; // rbx
  char v39; // di
  ULONG_PTR v40; // r14
  struct _KPRCB *v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rbx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  struct _KPRCB *v49; // r8
  signed __int32 *v50; // rdx
  signed __int32 v51; // eax
  signed __int32 v52; // ett
  __int64 v53; // r8
  bool v54; // zf
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // rcx
  _DWORD *v57; // rdx
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r9
  _DWORD *v60; // r8
  int v61; // eax
  void (__fastcall *v62)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *); // rax
  __int16 v63; // r12
  unsigned int *v64; // rbx
  unsigned __int64 v65; // rdi
  unsigned __int8 v66; // si
  bool v67; // zf
  __int64 (__fastcall *v68)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v69; // eax
  __int64 (__fastcall *v70)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v71; // eax
  __int64 (__fastcall *v72)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v73; // eax
  int v74; // [rsp+40h] [rbp-338h] BYREF
  int v75; // [rsp+44h] [rbp-334h] BYREF
  _DWORD v76[2]; // [rsp+48h] [rbp-330h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp-328h] BYREF
  int v78; // [rsp+54h] [rbp-324h]
  _QWORD *v79; // [rsp+58h] [rbp-320h] BYREF
  int v80; // [rsp+60h] [rbp-318h]
  LONG v81; // [rsp+64h] [rbp-314h]
  __int128 v82; // [rsp+68h] [rbp-310h] BYREF
  int v83; // [rsp+78h] [rbp-300h]
  int v84; // [rsp+80h] [rbp-2F8h] BYREF
  int v85; // [rsp+84h] [rbp-2F4h] BYREF
  __int64 v86; // [rsp+88h] [rbp-2F0h] BYREF
  __int128 v87; // [rsp+90h] [rbp-2E8h] BYREF
  __int64 v88; // [rsp+A0h] [rbp-2D8h]
  __int64 v89; // [rsp+A8h] [rbp-2D0h] BYREF
  _DWORD v90[2]; // [rsp+B0h] [rbp-2C8h] BYREF
  _DWORD v91[2]; // [rsp+B8h] [rbp-2C0h] BYREF
  _DWORD v92[2]; // [rsp+C0h] [rbp-2B8h] BYREF
  _DWORD v93[2]; // [rsp+C8h] [rbp-2B0h] BYREF
  _DWORD v94[2]; // [rsp+D0h] [rbp-2A8h] BYREF
  _DWORD v95[2]; // [rsp+D8h] [rbp-2A0h] BYREF
  unsigned __int64 v96; // [rsp+E0h] [rbp-298h] BYREF
  int v97; // [rsp+E8h] [rbp-290h] BYREF
  __int128 v98; // [rsp+ECh] [rbp-28Ch]
  __int128 v99; // [rsp+100h] [rbp-278h] BYREF
  _QWORD v100[34]; // [rsp+110h] [rbp-268h] BYREF
  _QWORD v101[34]; // [rsp+220h] [rbp-158h] BYREF
  int v102; // [rsp+370h] [rbp-8h]

  Process = Thread->Process;
  v75 = 0;
  v74 = 0;
  if ( Process == (_KPROCESS *)&KiInitialProcess )
    return 0;
  v79 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v8) = 4;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v84 = 0;
  v10 = *(struct _KTHREAD **)(CurrentPrcb + 8);
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v84);
    while ( Thread->ThreadLock );
  }
  BasePriority = Process->BasePriority;
  v80 = Thread->BasePriority;
  v12 = v80 - BasePriority;
  Saturation = Thread->Saturation;
  v81 = v12;
  if ( (_BYTE)Saturation )
    v81 = 16 * Saturation;
  v14 = 16;
  Thread->Saturation = 0;
  v15 = 0;
  if ( (int)abs32(Increment) >= 16 )
  {
    v15 = 1;
    if ( Increment <= 0 )
      v15 = -1;
    Thread->Saturation = v15;
  }
  v16 = Process->BasePriority;
  v17 = Increment + v16;
  v75 = Increment + v16;
  if ( (char)v16 >= 16 )
  {
    if ( v17 >= 16 )
    {
      v14 = Increment + v16;
      if ( v17 > 31 )
        v14 = 31;
    }
    v75 = v14;
    v17 = v14;
    v18 = 0;
    goto LABEL_37;
  }
  if ( v17 < 16 )
  {
    v19 = Increment + v16;
    if ( v17 > 0 )
      goto LABEL_30;
    v17 = 1;
    v19 = 1;
  }
  else
  {
    v17 = 15;
    v19 = 15;
  }
  v75 = v17;
LABEL_30:
  if ( v15 )
  {
    v18 = 0;
LABEL_36:
    v14 = v17;
LABEL_37:
    v74 = v17;
    goto LABEL_38;
  }
  v17 = v19 - v80 + (char)KiComputeNewPriority(Thread, 0LL);
  v18 = 0;
  v74 = v17;
  if ( v17 >= 16 )
  {
    v17 = 15;
    v74 = 15;
    v14 = 15;
    goto LABEL_38;
  }
  v14 = v17;
  if ( v17 <= 0 )
  {
    v17 = 1;
    goto LABEL_36;
  }
LABEL_38:
  KiSetBasePriorityAndClearDecrement((__int64)Thread, &v75, 0);
  KiAdjustRealtimePriorityFloor((ULONG_PTR)Thread, v17);
  if ( v14 != Thread->Priority )
  {
    if ( Thread != v10 || *(_BYTE *)(CurrentPrcb + 32) )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v21 = __rdtsc();
      v22 = v21 - *(_QWORD *)(CurrentPrcb + 33152);
      CycleTime = v22 + Thread->CycleTime;
      Thread->CycleTime = CycleTime;
      CurrentRunTime = Thread->CurrentRunTime;
      v25 = v22 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v21;
      v26 = (v25 >> 16) + CurrentRunTime;
      if ( v26 > 0xFFFFFFFF )
        LODWORD(v26) = -1;
      v54 = (Thread->Header.Size & 0xBE) == 0;
      Thread->CurrentRunTime = v26;
      if ( !v54 )
        KiEndThreadAccountingPeriodEx(CurrentPrcb, (__int64)Thread, v22, 0);
      v27 = __rdtsc();
      *(_QWORD *)(CurrentPrcb + 33400) += v27 - *(_QWORD *)(CurrentPrcb + 33152);
      if ( (Thread->Header.Size & 0x20) != 0 )
      {
        PoGetFrequencyBucket(CurrentPrcb);
        ProcessorEfficiencyClass = KiGetProcessorEfficiencyClass(CurrentPrcb);
        *(_QWORD *)(CurrentPrcb + 8 * (ProcessorEfficiencyClass + 2 * v20) + 33408) += v29;
      }
      if ( (Thread->Header.Size & 0x40) != 0 )
      {
        v30 = Thread->SchedulerAssist;
        if ( v30 )
          v30[64] = 1;
      }
      *(_QWORD *)(CurrentPrcb + 33152) = v27;
      if ( (Thread->Header.Size & 2) != 0 )
        KiBeginCounterAccumulation(Thread, 0LL, v22, v20);
      *(_BYTE *)(CurrentPrcb + 32) = 0;
      if ( *(_BYTE *)(CurrentPrcb + 6) )
      {
        *(_BYTE *)(CurrentPrcb + 6) = 0;
        HalRequestSoftwareInterrupt(2);
      }
      v31 = KeGetCurrentPrcb();
      v32 = (signed __int32 *)v31->SchedulerAssist;
      if ( v32 )
      {
        _m_prefetchw(v32);
        v33 = *v32;
        do
        {
          v34 = v33;
          v33 = _InterlockedCompareExchange(v32, v33 & 0xFFDFFFFF, v33);
        }
        while ( v34 != v33 );
        if ( (v33 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
      _enable();
    }
    v35 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    v36 = v74;
    Thread->QuantumTarget = v35;
    KiSetPriorityThread((__int64)Thread, (unsigned __int64)&v79, v36);
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(Queue, Thread);
  else
    Thread->ThreadLock = 0LL;
  v38 = v79;
  v39 = 0;
  if ( v79 )
  {
    v79 = (_QWORD *)*v79;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, (unsigned __int64)(v38 - 27), (__int64)&v79);
      v38 = v79;
      ++v39;
      if ( v79 )
        v79 = (_QWORD *)*v79;
      if ( (v39 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
    }
    while ( v38 );
  }
  KiFlushSoftwareInterruptBatch((unsigned __int8 *)(CurrentPrcb + 12760));
  if ( CurrentIrql >= 2u )
  {
    if ( *(_QWORD *)(CurrentPrcb + 16) && !*(_BYTE *)(CurrentPrcb + 13242) )
    {
      if ( *(_BYTE *)(CurrentPrcb + 32) )
      {
        *(_BYTE *)(CurrentPrcb + 6) = 1;
      }
      else
      {
        memset(&v100[1], 0, 0x100uLL);
        v98 = 0LL;
        if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) == 0 || HalpInterruptNoShorthand )
        {
          LODWORD(v100[0]) = 2097153;
          memset((char *)v100 + 4, 0, 0x104uLL);
          KeAddProcessorAffinityEx((unsigned __int16 *)v100, KeGetPcr()->Prcb.Number);
          v76[0] = 0;
          v88 = 0LL;
          v99 = 0LL;
          v87 = 0LL;
          memset(&v101[1], 0, 0x100uLL);
          v83 = 0;
          v82 = 0LL;
          if ( qword_140C62628 )
          {
            qword_140C62628(v100, 47LL);
          }
          else
          {
            LODWORD(v101[0]) = 2097153;
            memset((char *)v101 + 4, 0, 0x104uLL);
            KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v100, v101, 0x20u);
            v63 = v102;
            if ( HalpInterruptClusterModeEnabled )
            {
              v64 = (unsigned int *)HalpInterruptClusterData;
              ProcNumber = 0;
              while ( (unsigned __int64)v64 < HalpInterruptClusterDataEnd )
              {
                if ( (unsigned int)KeAndGroupAffinityEx(v100, (__int64)(v64 + 2), (char *)&v99) )
                {
                  v65 = v99;
                  v66 = 0;
                  LODWORD(v82) = 6;
                  v67 = (_QWORD)v99 == 0LL;
                  *((_QWORD *)&v82 + 1) = *v64;
                  ProcNumber.Group = WORD4(v99);
                  while ( 1 )
                  {
                    ProcNumber.Number = v66;
                    if ( v67 )
                      break;
                    if ( (v65 & 1) != 0 )
                    {
                      v76[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
                      v18 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v76[0] + 12);
                      HIDWORD(v82) = v18;
                    }
                    ++v66;
                    v65 >>= 1;
                    v67 = v65 == 0;
                  }
                  v90[1] = 1;
                  v91[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                  v91[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                  v90[0] = -1;
                  v68 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                  + 120);
                  _disable();
                  v69 = v68(*(_QWORD *)(HalpInterruptController + 16), v91, &v82, 47LL, v90);
                  if ( (v63 & 0x200) != 0 )
                    _enable();
                  v18 = 0;
                  if ( v69 < 0 )
                    goto LABEL_147;
                }
                v64 += 6;
              }
            }
            else if ( !HalpInterruptPhysicalModeOnly )
            {
              *((_QWORD *)&v87 + 1) = v100[1];
              *(_QWORD *)&v87 = v100;
              LODWORD(v82) = 5;
              DWORD2(v82) = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(v76, (unsigned __int16 **)&v87) )
              {
                if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v76[0]) == 5 )
                  DWORD2(v82) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v76[0] + 8);
              }
              if ( DWORD2(v82) )
              {
                v92[0] = -1;
                v92[1] = 1;
                v93[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                v93[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                v70 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                + 120);
                _disable();
                v71 = v70(*(_QWORD *)(HalpInterruptController + 16), v93, &v82, 47LL, v92);
                if ( (v63 & 0x200) != 0 )
                  _enable();
                if ( v71 < 0 )
                  goto LABEL_147;
              }
            }
            *((_QWORD *)&v87 + 1) = v101[1];
            *(_QWORD *)&v87 = v101;
            v76[0] = 0;
            LOWORD(v88) = 0;
            do
            {
              if ( (unsigned int)KeEnumerateNextProcessor(v76, (unsigned __int16 **)&v87) )
                break;
              LODWORD(v82) = 4;
              v94[0] = -1;
              v94[1] = 1;
              DWORD2(v82) = *(_DWORD *)(HalpInterruptTargets + 24LL * v76[0] + 8);
              v95[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
              v95[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
              v72 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                              + 120);
              _disable();
              v73 = v72(*(_QWORD *)(HalpInterruptController + 16), v95, &v82, 47LL, v94);
              if ( (v63 & 0x200) != 0 )
                _enable();
            }
            while ( v73 >= 0 );
          }
        }
        else
        {
          v97 = 3;
          v78 = 1;
          v76[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
          v76[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
          v62 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                             + 120);
          ProcNumber = (_PROCESSOR_NUMBER)-1;
          _disable();
          v62(*(_QWORD *)(HalpInterruptController + 16), v76, &v97, 47LL, &ProcNumber);
          if ( (v102 & 0x200) != 0 )
            _enable();
        }
      }
    }
  }
  else
  {
    v40 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      if ( (*(unsigned __int8 *)(v40 + 792) | *(unsigned __int8 *)(v40 + 870)) != 0x3F )
      {
        v41 = KeGetCurrentPrcb();
        v42 = *(_QWORD *)(CurrentPrcb + 8);
        v86 = 0LL;
        v89 = 0LL;
        KiAbProcessThreadLocks(v42, 1, 1, 1, (__int64)&v86, (__int64)&v89, (__int64)&v41->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v89, &v41->AbSelfIoBoostsList, &v86);
        KiReadyDeferredReadyList((__int64)v41, &v86);
      }
      v85 = 0;
      v96 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v85);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v43 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v44 = __rdtsc();
      v45 = v44 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v40 + 72) += v45;
      v46 = *(unsigned int *)(v40 + 80);
      v47 = v45 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v44;
      v48 = (v47 >> 16) + v46;
      if ( v48 > 0xFFFFFFFF )
        LODWORD(v48) = -1;
      v54 = (*(_BYTE *)(v40 + 2) & 0xBE) == 0;
      *(_DWORD *)(v40 + 80) = v48;
      if ( !v54 )
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v40, v45, 1u);
      v49 = KeGetCurrentPrcb();
      v50 = (signed __int32 *)v49->SchedulerAssist;
      if ( v50 )
      {
        _m_prefetchw(v50);
        v51 = *v50;
        do
        {
          v52 = v51;
          v51 = _InterlockedCompareExchange(v50, v51 & 0xFFDFFFFF, v51);
        }
        while ( v52 != v51 );
        if ( (v51 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v49);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v43;
      if ( *(_BYTE *)(v43 + 388) == 1 )
        *(_DWORD *)(v43 + 132) = *(_DWORD *)(v43 + 132) - *(_DWORD *)(v43 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v43 + 388) = 2;
      *(_BYTE *)(v40 + 643) = 32;
      *(_BYTE *)(v40 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v96, v40);
      LOBYTE(v53) = CurrentIrql;
      v54 = (unsigned __int8)KiSwapContext(v40, v43, v53) == 0;
    }
    else
    {
      v54 = (*(_DWORD *)(v40 + 116) & 0x40) == 0;
    }
    if ( !v54 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v55 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v55 - 2) <= 0xDu )
        {
          v56 = KeGetCurrentPrcb();
          v57 = v56->SchedulerAssist;
          v54 = (v57[5] & 0xFFFF0003) == 0;
          v57[5] &= 0xFFFF0003;
          if ( v54 )
            KiRemoveSystemWorkPriorityKick(v56);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v40 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( (_DWORD)KiIrqlFlags )
    {
      v58 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v58 - 2) <= 0xDu )
      {
        v59 = KeGetCurrentPrcb();
        v60 = v59->SchedulerAssist;
        v61 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v54 = (v61 & v60[5]) == 0;
        v60[5] &= v61;
        if ( v54 )
          KiRemoveSystemWorkPriorityKick(v59);
      }
    }
    __writecr8(CurrentIrql);
  }
LABEL_147:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1329, v80, v75, (__int64)&v74);
  return v81;
}
