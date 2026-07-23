/*
 * XREFs of KeBoostPriorityThread @ 0x1402039B4
 * Callers:
 *     ExpCreateWorkerThread @ 0x140683520 (ExpCreateWorkerThread.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
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

char __fastcall KeBoostPriorityThread(__int64 a1, int a2)
{
  void *v2; // rax
  __int64 v4; // rbp
  int v5; // r14d
  unsigned int v6; // r13d
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  unsigned __int64 CurrentPrcb; // rsi
  _KTHREAD *v11; // rbx
  int v12; // ecx
  __int64 v13; // r9
  int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // rcx
  unsigned int FrequencyBucket; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int8 ProcessorEfficiencyClass; // al
  __int64 v29; // r10
  __int64 v30; // rax
  struct _KPRCB *v31; // r8
  signed __int32 *v32; // rdx
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  unsigned __int64 v35; // rcx
  _QWORD **v36; // rbx
  char v37; // di
  _KTHREAD *v38; // r14
  struct _KPRCB *v39; // rdi
  _KTHREAD *v40; // rbx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r10
  __int64 CurrentRunTime; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  struct _KPRCB *v46; // r8
  signed __int32 *v47; // rdx
  signed __int32 v48; // eax
  signed __int32 v49; // ett
  __int64 v50; // r8
  bool v51; // zf
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // rcx
  _DWORD *v54; // rdx
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  _DWORD *v57; // r8
  int v58; // eax
  int v59; // eax
  __int64 (__fastcall *v60)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *); // rax
  __int64 v61; // rdx
  __int16 v62; // r12
  unsigned int *v63; // rbx
  unsigned __int64 v64; // rdi
  unsigned __int8 v65; // si
  __int64 (__fastcall *v66)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v67)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v68)(_QWORD, __int64 *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v70[2]; // [rsp+40h] [rbp-338h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-330h] BYREF
  int v72; // [rsp+4Ch] [rbp-32Ch]
  _QWORD *v73; // [rsp+50h] [rbp-328h] BYREF
  __int128 v74; // [rsp+58h] [rbp-320h] BYREF
  int v75; // [rsp+68h] [rbp-310h]
  __int64 v76; // [rsp+70h] [rbp-308h] BYREF
  int v77; // [rsp+78h] [rbp-300h] BYREF
  int v78; // [rsp+7Ch] [rbp-2FCh] BYREF
  int v79; // [rsp+80h] [rbp-2F8h]
  __int64 v80; // [rsp+88h] [rbp-2F0h] BYREF
  __int128 v81; // [rsp+90h] [rbp-2E8h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-2D8h]
  __int64 v83; // [rsp+A8h] [rbp-2D0h] BYREF
  _DWORD v84[2]; // [rsp+B0h] [rbp-2C8h] BYREF
  _DWORD v85[2]; // [rsp+B8h] [rbp-2C0h] BYREF
  _DWORD v86[2]; // [rsp+C0h] [rbp-2B8h] BYREF
  _DWORD v87[2]; // [rsp+C8h] [rbp-2B0h] BYREF
  _DWORD v88[2]; // [rsp+D0h] [rbp-2A8h] BYREF
  unsigned __int64 v89; // [rsp+D8h] [rbp-2A0h] BYREF
  int v90; // [rsp+E0h] [rbp-298h] BYREF
  __int128 v91; // [rsp+E4h] [rbp-294h]
  __int128 v92; // [rsp+F8h] [rbp-280h] BYREF
  _QWORD v93[34]; // [rsp+110h] [rbp-268h] BYREF
  _QWORD v94[34]; // [rsp+220h] [rbp-158h] BYREF
  int v95; // [rsp+370h] [rbp-8h]

  v2 = &KiInitialProcess;
  v76 = a1;
  v4 = a1;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return (char)v2;
  v5 = 0;
  v73 = 0LL;
  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags
    && ((unsigned __int8)KiIrqlFlags & 1) != 0
    && CurrentIrql <= (unsigned __int8)((_BYTE)v73 + 15) )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v9) = 4;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
  v77 = 0;
  v11 = *(_KTHREAD **)(CurrentPrcb + 8);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v77);
    while ( *(_QWORD *)(v4 + 64) );
  }
  v12 = *(char *)(v4 + 195);
  v13 = 0xFFFFFFFFLL;
  v79 = v12;
  if ( v12 < 16 && !*(_BYTE *)(v4 + 564) )
  {
    v14 = a2 + *(char *)(v4 + 563);
    if ( v14 > v12 )
    {
      v6 = a2 + *(char *)(v4 + 563);
      if ( v14 >= 16 )
        v6 = 15;
      if ( (_KTHREAD *)v4 != v11 || *(_BYTE *)(CurrentPrcb + 32) )
      {
        v17 = *(_QWORD *)(v4 + 72);
      }
      else
      {
        _disable();
        *(_BYTE *)(CurrentPrcb + 32) = 1;
        v15 = __rdtsc();
        v16 = v15 - *(_QWORD *)(CurrentPrcb + 33152);
        v17 = v16 + *(_QWORD *)(v4 + 72);
        *(_QWORD *)(v4 + 72) = v17;
        v18 = *(unsigned int *)(v4 + 80);
        v19 = v16 * *(unsigned int *)(CurrentPrcb + 33208);
        *(_QWORD *)(CurrentPrcb + 33152) = v15;
        v20 = (v19 >> 16) + v18;
        if ( v20 > 0xFFFFFFFF )
          LODWORD(v20) = -1;
        v51 = (*(_BYTE *)(v4 + 2) & 0xBE) == 0;
        *(_DWORD *)(v4 + 80) = v20;
        if ( !v51 )
          KiEndThreadAccountingPeriodEx(CurrentPrcb, v4, v16, 0LL);
        v21 = __rdtsc();
        v22 = (unsigned __int64)HIDWORD(v21) << 32;
        v23 = v21;
        v24 = v21 - *(_QWORD *)(CurrentPrcb + 33152) + *(_QWORD *)(CurrentPrcb + 33400);
        *(_QWORD *)(CurrentPrcb + 33400) = v24;
        if ( (*(_BYTE *)(v4 + 2) & 0x20) != 0 )
        {
          FrequencyBucket = PoGetFrequencyBucket(CurrentPrcb, v22, v16, v13);
          ProcessorEfficiencyClass = KiGetProcessorEfficiencyClass(CurrentPrcb, v26, v27, FrequencyBucket);
          v22 = ProcessorEfficiencyClass + 2 * v13;
          v24 = v29 + *(_QWORD *)(CurrentPrcb + 8 * v22 + 33408);
          *(_QWORD *)(CurrentPrcb + 8 * v22 + 33408) = v24;
        }
        if ( (*(_BYTE *)(v4 + 2) & 0x40) != 0 )
        {
          v30 = *(_QWORD *)(v4 + 968);
          if ( v30 )
            *(_BYTE *)(v30 + 64) = 1;
        }
        *(_QWORD *)(CurrentPrcb + 33152) = v23;
        if ( (*(_BYTE *)(v4 + 2) & 2) != 0 )
          KiBeginCounterAccumulation(v4, 0LL, v16, v13);
        *(_BYTE *)(CurrentPrcb + 32) = 0;
        if ( *(_BYTE *)(CurrentPrcb + 6) )
        {
          LOBYTE(v24) = 2;
          *(_BYTE *)(CurrentPrcb + 6) = 0;
          HalRequestSoftwareInterrupt(v24, v22, v16, v13);
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
      v35 = v17 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v4 + 651);
      if ( (*(_DWORD *)(v4 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 5u);
      *(_QWORD *)(v4 + 32) = v35;
      KiSetPriorityThread(v4, &v73, v6, v13);
    }
  }
  v36 = (_QWORD **)v73;
  v37 = 0;
  *(_QWORD *)(v4 + 64) = 0LL;
  if ( v36 )
  {
    v73 = *v36;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, v36 - 27, &v73);
      v36 = (_QWORD **)v73;
      ++v37;
      if ( v73 )
        v73 = (_QWORD *)*v73;
      if ( (v37 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(CurrentPrcb + 12760);
    }
    while ( v36 );
    LODWORD(v4) = v76;
  }
  LOBYTE(v2) = KiFlushSoftwareInterruptBatch(CurrentPrcb + 12760);
  if ( CurrentIrql >= 2u )
  {
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      LOBYTE(v2) = *(_BYTE *)(CurrentPrcb + 13242);
      if ( !(_BYTE)v2 )
      {
        if ( *(_BYTE *)(CurrentPrcb + 32) )
        {
          LOBYTE(v2) = 1;
          *(_BYTE *)(CurrentPrcb + 6) = 1;
        }
        else
        {
          memset(&v93[1], 0, 0x100uLL);
          v91 = 0LL;
          if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) == 0 || HalpInterruptNoShorthand )
          {
            LODWORD(v93[0]) = 2097153;
            memset((char *)v93 + 4, 0, 0x104uLL);
            LODWORD(v61) = KeGetPcr()->Prcb.Number;
            KeAddProcessorAffinityEx(v93, v61);
            v70[0] = 0;
            v82 = 0LL;
            v92 = 0LL;
            v81 = 0LL;
            memset(&v94[1], 0, 0x100uLL);
            v75 = 0;
            v74 = 0LL;
            if ( qword_140C62628 )
            {
              LOBYTE(v2) = qword_140C62628(v93, 47LL);
            }
            else
            {
              LODWORD(v94[0]) = 2097153;
              memset((char *)v94 + 4, 0, 0x104uLL);
              KiAndAffinityEx(&HalpInterruptPhysicalTargets, v93, v94, 32LL);
              v62 = v95;
              if ( HalpInterruptClusterModeEnabled )
              {
                v63 = (unsigned int *)HalpInterruptClusterData;
                ProcNumber = 0;
                while ( (unsigned __int64)v63 < HalpInterruptClusterDataEnd )
                {
                  if ( (unsigned int)KeAndGroupAffinityEx(v93, v63 + 2, &v92) )
                  {
                    v64 = v92;
                    v65 = 0;
                    LODWORD(v74) = 6;
                    *((_QWORD *)&v74 + 1) = *v63;
                    ProcNumber.Group = WORD4(v92);
                    for ( ProcNumber.Number = 0; v64; ProcNumber.Number = v65 )
                    {
                      if ( (v64 & 1) != 0 )
                      {
                        v70[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
                        v5 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v70[0] + 12);
                        HIDWORD(v74) = v5;
                      }
                      ++v65;
                      v64 >>= 1;
                    }
                    v85[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                    v85[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                    v84[0] = -1;
                    v84[1] = 1;
                    v66 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
                    _disable();
                    LODWORD(v2) = v66(*(_QWORD *)(HalpInterruptController + 16), v85, &v74, 47LL, v84);
                    if ( (v62 & 0x200) != 0 )
                      _enable();
                    v5 = 0;
                    if ( (int)v2 < 0 )
                      goto LABEL_122;
                  }
                  v63 += 6;
                }
              }
              else if ( !HalpInterruptPhysicalModeOnly )
              {
                *((_QWORD *)&v81 + 1) = v93[1];
                *(_QWORD *)&v81 = v93;
                LODWORD(v74) = 5;
                DWORD2(v74) = 0;
                while ( !(unsigned int)KeEnumerateNextProcessor(v70, &v81) )
                {
                  if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v70[0]) == 5 )
                    DWORD2(v74) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v70[0] + 8);
                }
                if ( DWORD2(v74) )
                {
                  v86[0] = -1;
                  v86[1] = 1;
                  v87[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                  v87[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                  v67 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                  + 120);
                  _disable();
                  LODWORD(v2) = v67(*(_QWORD *)(HalpInterruptController + 16), v87, &v74, 47LL, v86);
                  if ( (v62 & 0x200) != 0 )
                    _enable();
                  if ( (int)v2 < 0 )
                    goto LABEL_122;
                }
              }
              *((_QWORD *)&v81 + 1) = v94[1];
              *(_QWORD *)&v81 = v94;
              v70[0] = 0;
              LOWORD(v82) = 0;
              do
              {
                LODWORD(v2) = KeEnumerateNextProcessor(v70, &v81);
                if ( (_DWORD)v2 )
                  break;
                LODWORD(v74) = 4;
                v88[0] = -1;
                v88[1] = 1;
                DWORD2(v74) = *(_DWORD *)(HalpInterruptTargets + 24LL * v70[0] + 8);
                v76 = *(_QWORD *)(HalpInterruptIpiLines + 16);
                v68 = *(__int64 (__fastcall **)(_QWORD, __int64 *, __int128 *, __int64, _DWORD *))(HalpInterruptController
                                                                                                 + 120);
                _disable();
                LODWORD(v2) = v68(*(_QWORD *)(HalpInterruptController + 16), &v76, &v74, 47LL, v88);
                if ( (v62 & 0x200) != 0 )
                  _enable();
              }
              while ( (int)v2 >= 0 );
            }
          }
          else
          {
            v90 = 3;
            v70[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v59 = *(_DWORD *)(HalpInterruptIpiLines + 16);
            ProcNumber = (_PROCESSOR_NUMBER)-1;
            v70[0] = v59;
            v60 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                                  + 120);
            v72 = 1;
            _disable();
            LOBYTE(v2) = v60(*(_QWORD *)(HalpInterruptController + 16), v70, &v90, 47LL, &ProcNumber);
            if ( (v95 & 0x200) != 0 )
              _enable();
          }
        }
      }
    }
  }
  else
  {
    v38 = *(_KTHREAD **)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      if ( (v38->AbEntrySummary | v38->AbOrphanedEntrySummary) != 0x3F )
      {
        v80 = 0LL;
        v83 = 0LL;
        v39 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks((_DWORD)v38, 1, 1, 1, (__int64)&v80, (__int64)&v83, (__int64)&v39->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v83, &v39->AbSelfIoBoostsList, &v80);
        KiReadyDeferredReadyList(v39, &v80);
      }
      v78 = 0;
      v89 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v78);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v40 = *(_KTHREAD **)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v41 = __rdtsc();
      v42 = v41 - *(_QWORD *)(CurrentPrcb + 33152);
      v38->CycleTime += v42;
      CurrentRunTime = v38->CurrentRunTime;
      v44 = v42 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v41;
      v45 = (v44 >> 16) + CurrentRunTime;
      if ( v45 > 0xFFFFFFFF )
        LODWORD(v45) = -1;
      v51 = (v38->Header.Size & 0xBE) == 0;
      v38->CurrentRunTime = v45;
      if ( !v51 )
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v38, v42, 1LL);
      v46 = KeGetCurrentPrcb();
      v47 = (signed __int32 *)v46->SchedulerAssist;
      if ( v47 )
      {
        _m_prefetchw(v47);
        v48 = *v47;
        do
        {
          v49 = v48;
          v48 = _InterlockedCompareExchange(v47, v48 & 0xFFDFFFFF, v48);
        }
        while ( v49 != v48 );
        if ( (v48 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v46);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v40;
      if ( v40->WaitBlockFill6[68] == 1 )
        v40->ReadyTime = v40->ReadyTime - v40->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      v40->WaitBlockFill6[68] = 2;
      v38->WaitReason = 32;
      v38->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, &v89, v38);
      LOBYTE(v50) = CurrentIrql;
      v51 = (unsigned __int8)KiSwapContext(v38, v40, v50) == 0;
    }
    else
    {
      v51 = (v38->MiscFlags & 0x40) == 0;
    }
    if ( !v51 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v52 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v52 - 2) <= 0xDu )
        {
          v53 = KeGetCurrentPrcb();
          v54 = v53->SchedulerAssist;
          v51 = (v54[5] & 0xFFFF0003) == 0;
          v54[5] &= 0xFFFF0003;
          if ( v51 )
            KiRemoveSystemWorkPriorityKick(v53);
        }
      }
      __writecr8(1uLL);
      v38->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( (_DWORD)KiIrqlFlags )
    {
      v55 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v55 - 2) <= 0xDu )
      {
        v56 = KeGetCurrentPrcb();
        v57 = v56->SchedulerAssist;
        v58 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v51 = (v58 & v57[5]) == 0;
        v57[5] &= v58;
        if ( v51 )
          KiRemoveSystemWorkPriorityKick(v56);
      }
    }
    LOBYTE(v2) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
LABEL_122:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v6 )
    LOBYTE(v2) = EtwTracePriority(v4, 1328, v79, v6, 0LL);
  return (char)v2;
}
