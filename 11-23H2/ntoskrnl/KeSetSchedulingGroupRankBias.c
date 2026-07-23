/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x140205AD8
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x1402064E4 (KiCheckForEffectivePriorityChange.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140206878 (KiRemoveSchedulingGroupQueue.c)
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248520 (KiEndThreadAccountingPeriodEx.c)
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiAndAffinityEx @ 0x140252500 (KiAndAffinityEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KeAndGroupAffinityEx @ 0x140254540 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140255270 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     KiAbPropagateBoosts @ 0x1402BC160 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     KiResortScbQueue @ 0x140305990 (KiResortScbQueue.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x140308C0C (KiMoveScbThreadsToNewReadylist.c)
 *     KiDeliverApc @ 0x14030FB20 (KiDeliverApc.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall KeSetSchedulingGroupRankBias(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  int v4; // r12d
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  unsigned __int64 CurrentPrcb; // rsi
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rbx
  char v12; // cl
  __int64 v13; // rdx
  char v14; // cl
  unsigned int v15; // eax
  char v16; // cl
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD **v19; // r9
  __int64 v20; // r8
  __int64 v21; // rax
  _QWORD **v22; // rbx
  int v23; // ebp
  char v24; // di
  int v25; // eax
  _KTHREAD *v26; // rbp
  struct _KPRCB *v27; // rdi
  _KTHREAD *v28; // rbx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r8
  __int64 CurrentRunTime; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  struct _KPRCB *v34; // rcx
  signed __int32 *v35; // r8
  signed __int32 v36; // eax
  signed __int32 v37; // ett
  __int64 v38; // r8
  bool v39; // zf
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  __int64 (__fastcall *v47)(_QWORD, _DWORD *, int *, _QWORD, _PROCESSOR_NUMBER *); // rax
  __int64 v48; // rdx
  __int16 v49; // r12
  unsigned int *v50; // rbx
  unsigned __int64 v51; // rdi
  unsigned __int8 v52; // si
  bool v53; // zf
  __int64 (__fastcall *v54)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v55)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v56)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v58[2]; // [rsp+40h] [rbp-338h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-330h] BYREF
  int v60; // [rsp+4Ch] [rbp-32Ch]
  _QWORD *v61; // [rsp+50h] [rbp-328h] BYREF
  __int128 v62; // [rsp+58h] [rbp-320h] BYREF
  int v63; // [rsp+68h] [rbp-310h]
  int v64; // [rsp+70h] [rbp-308h] BYREF
  __int64 v65; // [rsp+78h] [rbp-300h] BYREF
  __int128 v66; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v67; // [rsp+90h] [rbp-2E8h]
  __int64 v68; // [rsp+98h] [rbp-2E0h] BYREF
  __int64 v69; // [rsp+A0h] [rbp-2D8h] BYREF
  _DWORD v70[2]; // [rsp+A8h] [rbp-2D0h] BYREF
  _DWORD v71[2]; // [rsp+B0h] [rbp-2C8h] BYREF
  _DWORD v72[2]; // [rsp+B8h] [rbp-2C0h] BYREF
  _DWORD v73[2]; // [rsp+C0h] [rbp-2B8h] BYREF
  _DWORD v74[2]; // [rsp+C8h] [rbp-2B0h] BYREF
  _DWORD v75[2]; // [rsp+D0h] [rbp-2A8h] BYREF
  unsigned __int64 v76; // [rsp+D8h] [rbp-2A0h] BYREF
  int v77; // [rsp+E0h] [rbp-298h] BYREF
  __int128 v78; // [rsp+E4h] [rbp-294h]
  __int128 v79; // [rsp+F8h] [rbp-280h] BYREF
  _QWORD v80[34]; // [rsp+110h] [rbp-268h] BYREF
  _QWORD v81[34]; // [rsp+220h] [rbp-158h] BYREF
  int v82; // [rsp+370h] [rbp-8h]

  v68 = 0LL;
  v61 = 0LL;
  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v7) = 4;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)v7 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
  v9 = 0LL;
  if ( KeMaximumProcessors )
  {
    while ( 1 )
    {
      v10 = KiProcessorBlock[v9];
      v11 = 424LL * (unsigned int)v9 + a1 + 128;
      if ( v10 )
        KiAcquirePrcbLocksForIsolationUnit(KiProcessorBlock[v9], 0LL, &v68);
      v12 = *(_BYTE *)(v11 + 112);
      v13 = *(unsigned int *)(v11 + 116);
      if ( (_BYTE)v4 )
        break;
      v15 = *(unsigned __int8 *)(v11 + 112);
      v16 = v12 & 0xF7;
      *(_BYTE *)(v11 + 112) = v16;
      v13 = (unsigned int)v13 - ((v15 >> 3) & 1);
      *(_DWORD *)(v11 + 116) = v13;
      if ( (_DWORD)v13 )
      {
        if ( (v16 & 1) != 0 )
        {
          a3 = 0LL;
LABEL_17:
          KiResortScbQueue(v10, v11, a3);
        }
LABEL_18:
        if ( v10 )
          goto LABEL_34;
        goto LABEL_35;
      }
      if ( v10 )
      {
        if ( (v16 & 1) != 0 )
        {
          v17 = 424LL * (unsigned int)v9 + a1 + 128;
          do
          {
            v18 = *(_QWORD *)(v17 + 408);
            if ( !v18 )
              break;
            v17 = *(_QWORD *)(v17 + 408);
          }
          while ( !*(_DWORD *)(v18 + 116) );
          if ( *(_DWORD *)(v17 + 116) )
          {
            v19 = 0LL;
          }
          else
          {
            v19 = &v61;
            v17 = 0LL;
          }
          KiMoveScbThreadsToNewReadylist(v11, v17, 0LL, v19);
          v21 = *(_QWORD *)(v11 + 392);
          if ( (*(_BYTE *)(v11 + 400) & 1) != 0 )
          {
            if ( v21 )
            {
              v21 ^= v11 + 392;
              goto LABEL_31;
            }
LABEL_32:
            LOBYTE(v20) = 1;
            KiRemoveSchedulingGroupQueue(v10, v11, v20);
          }
          else
          {
LABEL_31:
            if ( !v21 )
              goto LABEL_32;
          }
        }
        *(_BYTE *)(v11 + 112) &= ~4u;
LABEL_34:
        KiCheckForEffectivePriorityChange(v10, v13, v11);
        KiReleasePrcbLocksForIsolationUnit(&v68);
      }
LABEL_35:
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= KeMaximumProcessors )
        goto LABEL_36;
    }
    v14 = v12 | 0xC;
    *(_DWORD *)(v11 + 116) = v13 + 1;
    *(_BYTE *)(v11 + 112) = v14;
    if ( (v14 & 1) != 0 )
    {
      LOBYTE(a3) = 1;
      goto LABEL_17;
    }
    goto LABEL_18;
  }
LABEL_36:
  v22 = (_QWORD **)v61;
  v23 = 0;
  v24 = 0;
  *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (4 * v4)) & 4;
  if ( v22 )
  {
    v61 = *v22;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, v22 - 27, &v61);
      v22 = (_QWORD **)v61;
      ++v24;
      if ( v61 )
        v61 = (_QWORD *)*v61;
      if ( (v24 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(CurrentPrcb + 12760);
    }
    while ( v22 );
  }
  LOBYTE(v25) = KiFlushSoftwareInterruptBatch(CurrentPrcb + 12760);
  if ( CurrentIrql < 2u )
  {
    v26 = *(_KTHREAD **)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      if ( (v26->AbEntrySummary | v26->AbOrphanedEntrySummary) != 0x3F )
      {
        v27 = KeGetCurrentPrcb();
        v65 = 0LL;
        v69 = 0LL;
        KiAbProcessThreadLocks((_DWORD)v26, 1, 1, 1, (__int64)&v65, (__int64)&v69, (__int64)&v27->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v69, &v27->AbSelfIoBoostsList, &v65);
        KiReadyDeferredReadyList(v27, &v65);
      }
      v64 = 0;
      v76 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v64);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v28 = *(_KTHREAD **)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v29 = __rdtsc();
      v30 = v29 - *(_QWORD *)(CurrentPrcb + 33152);
      v26->CycleTime += v30;
      CurrentRunTime = v26->CurrentRunTime;
      v32 = v30 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v29;
      v33 = (v32 >> 16) + CurrentRunTime;
      if ( v33 > 0xFFFFFFFF )
        LODWORD(v33) = -1;
      v39 = (v26->Header.Size & 0xBE) == 0;
      v26->CurrentRunTime = v33;
      if ( !v39 )
      {
        LOBYTE(v29) = 1;
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v26, v30, v29);
      }
      v34 = KeGetCurrentPrcb();
      v35 = (signed __int32 *)v34->SchedulerAssist;
      if ( v35 )
      {
        _m_prefetchw(v35);
        v36 = *v35;
        do
        {
          v37 = v36;
          v36 = _InterlockedCompareExchange(v35, v36 & 0xFFDFFFFF, v36);
        }
        while ( v37 != v36 );
        if ( (v36 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v34);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v28;
      if ( v28->WaitBlockFill6[68] == 1 )
        v28->ReadyTime = v28->ReadyTime - v28->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      v28->WaitBlockFill6[68] = 2;
      v26->WaitIrql = CurrentIrql;
      v26->WaitReason = 32;
      KiQueueReadyThread(CurrentPrcb, &v76, v26);
      LOBYTE(v38) = CurrentIrql;
      v39 = (unsigned __int8)KiSwapContext(v26, v28, v38) == 0;
    }
    else
    {
      v39 = (v26->MiscFlags & 0x40) == 0;
    }
    if ( !v39 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v40 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v40 - 2) <= 0xDu )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v39 = (v42[5] & 0xFFFF0003) == 0;
          v42[5] &= 0xFFFF0003;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      __writecr8(1uLL);
      v26->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( (_DWORD)KiIrqlFlags )
    {
      v43 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v43 - 2) <= 0xDu )
      {
        v44 = KeGetCurrentPrcb();
        v45 = v44->SchedulerAssist;
        v46 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v39 = (v46 & v45[5]) == 0;
        v45[5] &= v46;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
    }
    LOBYTE(v25) = CurrentIrql;
    __writecr8(CurrentIrql);
    return v25;
  }
  if ( !*(_QWORD *)(CurrentPrcb + 16) )
    return v25;
  LOBYTE(v25) = *(_BYTE *)(CurrentPrcb + 13242);
  if ( (_BYTE)v25 )
    return v25;
  if ( *(_BYTE *)(CurrentPrcb + 32) )
  {
    *(_BYTE *)(CurrentPrcb + 6) = 1;
    return v25;
  }
  memset(&v80[1], 0, 0x100uLL);
  v78 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v77 = 3;
    ProcNumber = (_PROCESSOR_NUMBER)-1;
    v60 = 1;
    v58[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v58[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v47 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, _QWORD, _PROCESSOR_NUMBER *))(HalpInterruptController + 120);
    _disable();
    LOBYTE(v25) = v47(*(_QWORD *)(HalpInterruptController + 16), v58, &v77, (unsigned int)(v60 + 46), &ProcNumber);
    if ( (v82 & 0x200) != 0 )
      _enable();
    return v25;
  }
  LODWORD(v80[0]) = 2097153;
  memset((char *)v80 + 4, 0, 0x104uLL);
  LODWORD(v48) = KeGetPcr()->Prcb.Number;
  KeAddProcessorAffinityEx(v80, v48);
  v58[0] = 0;
  v67 = 0LL;
  v79 = 0LL;
  v66 = 0LL;
  memset(&v81[1], 0, 0x100uLL);
  v63 = 0;
  v62 = 0LL;
  if ( qword_140C62548 )
  {
    LOBYTE(v25) = qword_140C62548(v80, 47LL);
    return v25;
  }
  LODWORD(v81[0]) = 2097153;
  memset((char *)v81 + 4, 0, 0x104uLL);
  KiAndAffinityEx(&HalpInterruptPhysicalTargets, v80, v81, 32LL);
  v49 = v82;
  if ( HalpInterruptClusterModeEnabled )
  {
    v50 = (unsigned int *)HalpInterruptClusterData;
    ProcNumber = 0;
    while ( (unsigned __int64)v50 < HalpInterruptClusterDataEnd )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v80, v50 + 2, &v79) )
      {
        v51 = v79;
        v52 = 0;
        LODWORD(v62) = 6;
        v53 = (_QWORD)v79 == 0LL;
        *((_QWORD *)&v62 + 1) = *v50;
        ProcNumber.Group = WORD4(v79);
        while ( 1 )
        {
          ProcNumber.Number = v52;
          if ( v53 )
            break;
          if ( (v51 & 1) != 0 )
          {
            v58[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            v23 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v58[0] + 12);
            HIDWORD(v62) = v23;
          }
          ++v52;
          v51 >>= 1;
          v53 = v51 == 0;
        }
        v70[0] = -1;
        v70[1] = 1;
        v71[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v71[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v54 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        v25 = v54(*(_QWORD *)(HalpInterruptController + 16), v71, &v62, 47LL, v70);
        if ( (v49 & 0x200) != 0 )
          _enable();
        v23 = 0;
        if ( v25 < 0 )
          return v25;
      }
      v50 += 6;
    }
    goto LABEL_110;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_110;
  *((_QWORD *)&v66 + 1) = v80[1];
  *(_QWORD *)&v66 = v80;
  LODWORD(v62) = 5;
  DWORD2(v62) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(v58, &v66) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v58[0]) == 5 )
      DWORD2(v62) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v58[0] + 8);
  }
  if ( !DWORD2(v62) )
    goto LABEL_110;
  v72[0] = -1;
  v72[1] = 1;
  v73[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v73[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v55 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
  _disable();
  v25 = v55(*(_QWORD *)(HalpInterruptController + 16), v73, &v62, 47LL, v72);
  if ( (v49 & 0x200) != 0 )
    _enable();
  if ( v25 >= 0 )
  {
LABEL_110:
    *((_QWORD *)&v66 + 1) = v81[1];
    *(_QWORD *)&v66 = v81;
    v58[0] = 0;
    LOWORD(v67) = 0;
    do
    {
      v25 = KeEnumerateNextProcessor(v58, &v66);
      if ( v25 )
        break;
      LODWORD(v62) = 4;
      v74[0] = -1;
      v74[1] = 1;
      DWORD2(v62) = *(_DWORD *)(HalpInterruptTargets + 24LL * v58[0] + 8);
      v75[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v75[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v56 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      v25 = v56(*(_QWORD *)(HalpInterruptController + 16), v75, &v62, 47LL, v74);
      if ( (v49 & 0x200) != 0 )
        _enable();
    }
    while ( v25 >= 0 );
  }
  return v25;
}
