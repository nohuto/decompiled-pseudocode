/*
 * XREFs of KiApplyForegroundBoostThread @ 0x140350678
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140350330 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x1403D0A80 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14020666C (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiStartRescheduleContext @ 0x140238FF0 (KiStartRescheduleContext.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiCommitRescheduleContextEntry @ 0x140242F60 (KiCommitRescheduleContextEntry.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KiComputeHeteroThreadQos @ 0x1402B1080 (KiComputeHeteroThreadQos.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1402B30B0 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402BD4E0 (KiPrepareReadyThreadForRescheduling.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAbProcessThreadPriorityModification @ 0x140307BB0 (KiAbProcessThreadPriorityModification.c)
 *     KiUpdateThreadPriority @ 0x140307E20 (KiUpdateThreadPriority.c)
 *     KiAbQueueAutoBoostDpc @ 0x140307FD8 (KiAbQueueAutoBoostDpc.c)
 *     KiIsThreadRankNonZero @ 0x140309270 (KiIsThreadRankNonZero.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiSetSchedulerAssistPriority @ 0x140410704 (KiSetSchedulerAssistPriority.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiSetThreadQosLevelUnsafe @ 0x140462A58 (KiSetThreadQosLevelUnsafe.c)
 *     KiGetCurrentScheduledThreadProcessor @ 0x140577750 (KiGetCurrentScheduledThreadProcessor.c)
 *     KiGetThreadHeteroRunningType @ 0x140577768 (KiGetThreadHeteroRunningType.c)
 */

char __fastcall KiApplyForegroundBoostThread(__int64 a1, _QWORD *a2)
{
  char v3; // r15
  char v4; // r12
  __int64 v5; // rsi
  volatile signed __int32 *v6; // r14
  char v7; // al
  int v9; // edx
  char v10; // bl
  int v11; // r15d
  int v12; // r13d
  __int64 v13; // r12
  struct _KPRCB *v14; // rcx
  bool v15; // zf
  int v16; // ecx
  struct _KPRCB **v17; // r12
  unsigned int v18; // ecx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE *v22; // rax
  __int64 v23; // r15
  struct _KPRCB *v24; // rbx
  unsigned __int8 *PriorityState; // r13
  char v26; // al
  unsigned __int8 v27; // cl
  _KPRIORITY_STATE *v28; // r13
  int v29; // r12d
  bool v30; // r9
  _QWORD *v31; // rbx
  int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  _WORD *v36; // rcx
  __int64 v37; // rcx
  char v38; // r13
  _QWORD **v39; // r8
  int v40; // edx
  unsigned __int64 v41; // r9
  struct _KPRCB *v42; // rbx
  _QWORD *v43; // rdx
  unsigned int v44; // ecx
  _QWORD *v45; // rax
  char v46; // di
  __int64 v47; // rbx
  struct _KPRCB *v48; // r15
  __int64 v49; // r8
  char v50; // cl
  struct _SINGLE_LIST_ENTRY *v51; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  __int64 v53; // rbx
  __int64 v54; // rdx
  char v55; // bl
  char v56; // bl
  int v57; // [rsp+34h] [rbp-CCh]
  _QWORD *v58; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v59; // [rsp+48h] [rbp-B8h] BYREF
  int v60; // [rsp+50h] [rbp-B0h] BYREF
  int v61; // [rsp+54h] [rbp-ACh]
  int v62; // [rsp+58h] [rbp-A8h]
  volatile signed __int32 *v63; // [rsp+60h] [rbp-A0h]
  struct _KPRCB *CurrentPrcb; // [rsp+68h] [rbp-98h]
  __int64 v65; // [rsp+70h] [rbp-90h]
  __int64 v66; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v67[42]; // [rsp+80h] [rbp-80h] BYREF

  v58 = a2;
  v59 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_BYTE *)(a1 + 388);
      v5 = 0LL;
      v63 = 0LL;
      v6 = 0LL;
      if ( v4 == 1 )
        break;
      switch ( v4 )
      {
        case 2:
LABEL_40:
          v21 = *(unsigned int *)(a1 + 536);
          if ( (int)v21 >= 0 )
          {
            v5 = KiProcessorBlock[v21];
            KiAcquirePrcbLocksForIsolationUnit(v5, 0, &v59);
            if ( a1 == *(_QWORD *)(v5 + 8) )
              goto LABEL_7;
            goto LABEL_42;
          }
          break;
        case 3:
          v53 = *(unsigned int *)(a1 + 536);
          if ( (int)v53 >= 0 )
          {
            v5 = KiProcessorBlock[v53];
            KiAcquirePrcbLocksForIsolationUnit(v5, 0, &v59);
            if ( a1 == *(_QWORD *)(v5 + 16) )
              goto LABEL_7;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v53 )
              __fastfail(0x1Eu);
LABEL_42:
            KiReleasePrcbLocksForIsolationUnit(&v59);
          }
          break;
        case 5:
          v7 = *(_BYTE *)(a1 + 112) & 7;
          if ( v7 == 1 || (unsigned __int8)(v7 - 3) <= 3u )
            goto LABEL_7;
          v4 = 2;
          goto LABEL_40;
        default:
          goto LABEL_7;
      }
    }
    v19 = *(unsigned int *)(a1 + 536);
    if ( (int)v19 >= 0 )
      break;
    v20 = (unsigned int)v19;
    v60 = 0;
    LODWORD(v20) = v19 & 0x7FFFFFFF;
    v6 = *(volatile signed __int32 **)(KiProcessorBlock[v20] + 34888);
    v63 = v6;
    while ( _interlockedbittestandset64(v6, 0LL) )
    {
      do
        KeYieldProcessorEx(&v60);
      while ( *(_QWORD *)v6 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v19 )
      goto LABEL_7;
    _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
  }
  v5 = KiProcessorBlock[v19];
  KiAcquirePrcbLocksForIsolationUnit(v5, 0, &v59);
  if ( *(_BYTE *)(a1 + 388) != 1 || *(_DWORD *)(a1 + 536) != (_DWORD)v19 )
    goto LABEL_42;
LABEL_7:
  if ( (unsigned __int8)(v4 - 1) > 2u && v4 != 7 )
    goto LABEL_9;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) != 2 )
    goto LABEL_9;
  if ( *(_BYTE *)(a1 + 564) )
    goto LABEL_9;
  if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
    goto LABEL_9;
  v9 = *(char *)(a1 + 195);
  if ( *(char *)(a1 + 195) <= 0 )
    goto LABEL_9;
  v10 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
  if ( v10 >= 16 )
    v10 = 15;
  if ( v10 <= (char)v9 )
  {
LABEL_9:
    if ( v5 )
      KiReleasePrcbLocksForIsolationUnit(&v59);
    if ( v6 )
      _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
    return v3;
  }
  v62 = *(char *)(a1 + 195);
  v57 = 0;
  v11 = v10;
  v61 = v10;
  v12 = v9;
  *(_BYTE *)(a1 + 564) = (v10 - v9) & 0xF;
  CurrentPrcb = KeGetCurrentPrcb();
  memset(v67, 0, sizeof(v67));
  if ( v4 == 1 )
  {
    KiRemoveThreadFromAnyReadyQueue(v5, (__int64)v6, a1, (unsigned int)v12);
    KiUpdateThreadPriority(0LL, 0LL, a1, v10, 0);
    v31 = v58;
    KiPrepareReadyThreadForRescheduling(a1, v11, (__int64)v58);
    v29 = 0;
    v3 = 1;
    v30 = 0;
    goto LABEL_60;
  }
  if ( v4 != 2 )
  {
    if ( v4 == 3 )
    {
      KiUpdateThreadPriority(v5, (__int64)&v59, a1, v10, 1);
      v29 = 0;
      if ( v10 >= v12 )
        v29 = v10;
      v30 = v10 < v12;
      v57 = v29;
      v3 = 1;
      goto LABEL_59;
    }
    v3 = 1;
    KiAbProcessThreadPriorityModification(a1, v10, 1);
    *(_BYTE *)(a1 + 195) = v10;
    if ( (unsigned int)KiComputeHeteroThreadQos(a1, 0LL) != (unsigned __int8)*(_DWORD *)(a1 + 512) )
      KiSetThreadQosLevelUnsafe(a1);
    if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
    {
      LOBYTE(v49) = 1;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 968), (unsigned int)*(char *)(a1 + 195), v49);
    }
    goto LABEL_100;
  }
  v13 = *(_QWORD *)(v5 + 16);
  v14 = KeGetCurrentPrcb();
  v15 = *(_BYTE *)(a1 + 793) == 0;
  v65 = v13;
  if ( !v15 )
  {
    v51 = (struct _SINGLE_LIST_ENTRY *)(a1 + 808);
    if ( *(_QWORD *)(a1 + 808) == 1LL )
    {
      p_AbPropagateBoostsList = &v14->AbPropagateBoostsList;
      if ( v14 != (struct _KPRCB *)-35704LL )
      {
        v51->Next = p_AbPropagateBoostsList->Next;
        p_AbPropagateBoostsList->Next = v51;
        _InterlockedAdd16((volatile signed __int16 *)(a1 + 868), 1u);
        KiAbQueueAutoBoostDpc((__int64)v14);
      }
    }
  }
  *(_BYTE *)(a1 + 195) = v10;
  if ( (unsigned int)KiComputeHeteroThreadQos(a1, 0LL) != (unsigned __int8)*(_DWORD *)(a1 + 512) )
    KiSetThreadQosLevelUnsafe(a1);
  if ( !v13 )
  {
    v16 = *(_DWORD *)(a1 + 120) >> 1;
    v66 = v5;
    if ( (v16 & 1) != 0 )
    {
      v22 = *(_BYTE **)(v5 + 34904);
      v18 = (unsigned __int8)*v22;
      v17 = (struct _KPRCB **)(v22 + 8);
      if ( *v22 )
        goto LABEL_44;
    }
    else
    {
      v17 = (struct _KPRCB **)&v66;
      v18 = 1;
LABEL_44:
      v23 = v18;
      do
      {
        v24 = *v17;
        KiGetCurrentScheduledThreadProcessor(*v17);
        PriorityState = (unsigned __int8 *)v24->PriorityState;
        if ( (*(_BYTE *)(a1 + 2) & 4) == 0 || (v15 = !KiIsThreadRankNonZero(a1, v24), v26 = 1, v15) )
          v26 = *(_BYTE *)(a1 + 195);
        v27 = v26 & 0x7F | ((unsigned __int8)(*(_DWORD *)(a1 + 120) >> 1) << 7);
        *PriorityState = v27;
        if ( v24->SchedulerAssist )
        {
          if ( (_KTHREAD *)a1 == v24->IdleThread )
            v54 = (unsigned int)KiVpThreadSystemWorkPriority;
          else
            v54 = v27 & 0x7F;
          KiSetSchedulerAssistPriority(v24->SchedulerAssist, v54, 0LL);
        }
        v28 = v24->PriorityState;
        if ( KeHeteroSystem )
        {
          v55 = (*(_BYTE *)(a1 + 512) ^ v28[64].AllFields) & 7 ^ v28[64].AllFields;
          v56 = (v55 ^ (8 * *(_BYTE *)(a1 + 516))) & 0x38 ^ v55;
          v28[64].AllFields = (v56 ^ ((unsigned __int8)KiGetThreadHeteroRunningType(a1) << 6)) & 0x40 ^ v56;
        }
        ++v17;
        --v23;
      }
      while ( v23 );
      v6 = v63;
      v11 = v61;
      v12 = v62;
    }
    v13 = v65;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
    KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 968), (unsigned int)*(char *)(a1 + 195), 1LL);
  if ( v13 )
  {
    v3 = 1;
LABEL_100:
    v29 = 0;
    v30 = 0;
    goto LABEL_59;
  }
  if ( v11 >= v12 )
  {
    if ( v11 > v12 )
    {
      v31 = v58;
      if ( *(_BYTE *)(a1 + 388) == 2 )
      {
        v30 = 0;
        v29 = v11;
        v57 = v11;
      }
      else
      {
        v29 = 0;
        v30 = 0;
      }
      v3 = 1;
      goto LABEL_60;
    }
    v29 = 0;
    v3 = 1;
    v30 = 0;
LABEL_59:
    v31 = v58;
    goto LABEL_60;
  }
  v29 = 0;
  if ( *(_BYTE *)(a1 + 388) == 2 )
  {
    v3 = 1;
    v30 = 1;
    goto LABEL_59;
  }
  v50 = v11 + 1;
  v31 = v58;
  v3 = 1;
  v30 = 0;
  if ( (unsigned int)(*(_DWORD *)(v5 + 32472) | *(_DWORD *)(*(_QWORD *)(v5 + 34888) + 8LL)) >> v50 )
    *(_BYTE *)(a1 + 112) |= 0x10u;
LABEL_60:
  v32 = 0;
  v33 = KiProcessorBlock[*(unsigned int *)(a1 + 588)];
  v34 = *(_QWORD *)(v33 + 34880);
  if ( v34 )
  {
    v35 = *(unsigned __int8 *)(v33 + 208);
    v36 = *(_WORD **)(a1 + 576);
    if ( (unsigned __int16)v35 >= *v36 )
      v37 = 0LL;
    else
      v37 = *(_QWORD *)&v36[4 * v35 + 4];
    LOBYTE(v32) = (v34 & v37) == v34;
  }
  if ( v32 != ((*(_DWORD *)(a1 + 120) >> 13) & 1) )
    _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x2000u);
  if ( v30 )
  {
    KiStartRescheduleContext((__int64)v67, &v59, 0LL);
    v43 = 0LL;
    v44 = 0;
    if ( LOBYTE(v67[0]) )
    {
      v45 = &v67[2];
      while ( *v45 != v5 )
      {
        ++v44;
        v45 += 5;
        if ( v44 >= LOBYTE(v67[0]) )
          goto LABEL_83;
      }
      v43 = v45;
    }
LABEL_83:
    *((_BYTE *)v43 + 34) |= 2u;
    KiSearchForNewThreadsForRescheduleContext(v67, (__int64)v31);
    v46 = 0;
    v38 = 0;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      v46 = 2;
    v47 = 0LL;
    if ( LOBYTE(v67[0]) )
    {
      v48 = CurrentPrcb;
      do
      {
        v38 |= KiCommitRescheduleContextEntry(&v67[5 * v47 + 2], (__int64)v48, v46, v58);
        v47 = (unsigned int)(v47 + 1);
      }
      while ( (unsigned int)v47 < LOBYTE(v67[0]) );
      v6 = v63;
      v3 = 1;
      v29 = v57;
    }
    if ( LODWORD(v67[1]) == 1 )
      *(_BYTE *)(*(_QWORD *)(v67[2] + 34904LL) + 1LL) = (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v67[2] + 34904LL) + 1LL)
                                                                        + 1) < **(_BYTE **)(v67[2] + 34904LL)
                                                      ? *(_BYTE *)(*(_QWORD *)(v67[2] + 34904LL) + 1LL) + 1
                                                      : 0;
  }
  else
  {
    v38 = 0;
  }
  if ( v5 )
  {
    v39 = 0LL;
    v40 = 0;
    v41 = v59 & 0xFFFFFFFFFFFFFFFEuLL;
    v58 = (_QWORD *)(v59 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v59 & 1) == 0 )
    {
      v39 = &v58;
      v40 = 1;
      goto LABEL_71;
    }
    if ( (v59 & 1) == 1 )
    {
      v39 = (_QWORD **)(*(_QWORD *)(v41 + 34904) + 8LL);
      v40 = **(unsigned __int8 **)(v41 + 34904);
    }
    while ( v40 )
LABEL_71:
      _InterlockedAnd64(v39[--v40] + 6, 0LL);
    v59 = 0LL;
  }
  if ( v6 )
    _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
  v42 = CurrentPrcb;
  if ( v38 )
  {
    KiCompleteRescheduleContext(v67, (__int64)CurrentPrcb);
    KiFlushSoftwareInterruptBatch(&v42->DeferredDispatchInterrupts.Level);
  }
  if ( v29 > 0 )
    KiHvEnlightenedGuestPriorityKick((__int64)v42, v5, v29);
  return v3;
}
