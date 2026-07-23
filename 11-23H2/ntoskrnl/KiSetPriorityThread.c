/*
 * XREFs of KiSetPriorityThread @ 0x1402B0860
 * Callers:
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     PsImpersonateContainerOfThread @ 0x14025A170 (PsImpersonateContainerOfThread.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9440 (NtWaitForWorkViaWorkerFactory.c)
 *     KeSetPriorityThread @ 0x1402B05D0 (KeSetPriorityThread.c)
 *     ExpQueueWorkItem @ 0x1402B7930 (ExpQueueWorkItem.c)
 *     KeInsertPriQueue @ 0x1402B81B0 (KeInsertPriQueue.c)
 *     KeSetActualBasePriorityThread @ 0x1402B98F0 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KiAbApplyWakeupBoost @ 0x1402BCB30 (KiAbApplyWakeupBoost.c)
 *     KeRemovePriQueue @ 0x1402BF340 (KeRemovePriQueue.c)
 *     KiSetPriorityBoost @ 0x140307D98 (KiSetPriorityBoost.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140318150 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbSetMinimumThreadPriority @ 0x1403190B8 (KiAbSetMinimumThreadPriority.c)
 *     KiClearSystemPriority @ 0x140346270 (KiClearSystemPriority.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140350330 (KeSetPriorityAndQuantumProcess.c)
 *     KiSetSystemPriorityThread @ 0x140356070 (KiSetSystemPriorityThread.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1403576E8 (KiTryUnwaitThreadWithPriority.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D8DC (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056EBDC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
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
 *     KiUpdateThreadPriority @ 0x140307E20 (KiUpdateThreadPriority.c)
 *     KiAbQueueAutoBoostDpc @ 0x140307FD8 (KiAbQueueAutoBoostDpc.c)
 *     KiIsThreadRankNonZero @ 0x140309270 (KiIsThreadRankNonZero.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiSetSchedulerAssistPriority @ 0x140410704 (KiSetSchedulerAssistPriority.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiSetThreadQosLevelUnsafe @ 0x140462A58 (KiSetThreadQosLevelUnsafe.c)
 */

char __fastcall KiSetPriorityThread(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // eax
  unsigned __int64 *v4; // r14
  int v6; // eax
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  char v14; // al
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // r15
  int v21; // ebx
  char v22; // r13
  int v23; // esi
  int v24; // edx
  struct _KPRCB *v25; // rcx
  char v26; // si
  struct _SINGLE_LIST_ENTRY *v27; // r8
  _SINGLE_LIST_ENTRY *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rbx
  bool v31; // r9
  int v32; // r12d
  _QWORD *v33; // rsi
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  _WORD *v38; // rcx
  __int64 v39; // rcx
  struct _KPRCB *v40; // rcx
  char v41; // al
  __int64 v42; // r12
  struct _SINGLE_LIST_ENTRY *v43; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  __int64 v45; // r8
  int v46; // ecx
  _BYTE *v47; // rax
  unsigned int v48; // ecx
  __int64 *v49; // rsi
  __int64 v50; // r12
  _QWORD *v51; // rbx
  _BYTE *v52; // r15
  char IsThreadRankNonZero; // al
  char v54; // cl
  char v55; // al
  __int64 v56; // rcx
  __int64 v57; // rdx
  unsigned int v58; // edx
  char v59; // al
  char v60; // al
  char v61; // cl
  int v62; // edx
  _QWORD *v63; // r8
  unsigned int v64; // ecx
  _QWORD *v65; // rax
  char v66; // di
  unsigned int v67; // ebx
  unsigned __int8 *v68; // rdx
  unsigned __int8 v69; // al
  __int64 v70; // r9
  int v71; // edx
  unsigned __int64 v72; // r8
  unsigned __int64 v74; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v75; // [rsp+40h] [rbp-C0h]
  int v76; // [rsp+48h] [rbp-B8h]
  __int64 v77[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v78; // [rsp+60h] [rbp-A0h] BYREF
  int v79; // [rsp+68h] [rbp-98h]
  unsigned int v80; // [rsp+6Ch] [rbp-94h]
  int v81; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v82; // [rsp+78h] [rbp-88h]
  struct _KPRCB *v83; // [rsp+80h] [rbp-80h]
  __int64 v84; // [rsp+88h] [rbp-78h]
  _QWORD v85[42]; // [rsp+90h] [rbp-70h] BYREF

  v3 = *(_DWORD *)(a1 + 856);
  v4 = 0LL;
  LODWORD(v78) = a3;
  v74 = a2;
  if ( v3 )
  {
    _BitScanReverse(&v3, v3);
    v80 = v3;
    a3 = (unsigned __int8)a3;
    if ( (char)a3 < (char)v3 )
      a3 = (unsigned __int8)v3;
    LODWORD(v78) = a3;
  }
  v6 = *(char *)(a1 + 195);
  v76 = (char)a3;
  if ( v6 == (char)a3 )
    return 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = *(unsigned __int8 *)(a1 + 388);
  v10 = v9;
  v77[0] = 0LL;
  if ( v9 > 5 )
    goto LABEL_36;
  while ( 1 )
  {
    v8 = 0LL;
    v7 = 0LL;
    v11 = v10 - 1;
    if ( v11 )
      break;
    v18 = *(unsigned int *)(a1 + 536);
    if ( (int)v18 >= 0 )
    {
      v8 = KiProcessorBlock[v18];
      KiAcquirePrcbLocksForIsolationUnit(v8, 0, v77);
      if ( *(_BYTE *)(a1 + 388) == 1 )
      {
        v16 = *(_DWORD *)(a1 + 536) == (_DWORD)v18;
        goto LABEL_31;
      }
LABEL_32:
      KiReleasePrcbLocksForIsolationUnit(v77);
      goto LABEL_33;
    }
    v19 = (unsigned int)v18;
    v81 = 0;
    LODWORD(v19) = v18 & 0x7FFFFFFF;
    v7 = *(volatile signed __int32 **)(KiProcessorBlock[v19] + 34888);
    while ( _interlockedbittestandset64(v7, 0LL) )
    {
      do
        KeYieldProcessorEx(&v81);
      while ( *(_QWORD *)v7 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v18 )
      goto LABEL_36;
    _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
LABEL_33:
    v9 = *(unsigned __int8 *)(a1 + 388);
    v8 = 0LL;
    v7 = 0LL;
    v10 = v9;
    if ( v9 > 5 )
      goto LABEL_36;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_14:
    v15 = *(unsigned int *)(a1 + 536);
    if ( (int)v15 >= 0 )
    {
      v8 = KiProcessorBlock[v15];
      KiAcquirePrcbLocksForIsolationUnit(v8, 0, v77);
      v16 = a1 == *(_QWORD *)(v8 + 8);
LABEL_31:
      if ( v16 )
        goto LABEL_36;
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 != 2 )
      goto LABEL_36;
    v14 = *(_BYTE *)(a1 + 112) & 7;
    if ( v14 == 1 || (unsigned __int8)(v14 - 3) <= 3u )
      goto LABEL_36;
    LOBYTE(v9) = 2;
    goto LABEL_14;
  }
  v17 = *(unsigned int *)(a1 + 536);
  if ( (int)v17 < 0 )
    goto LABEL_33;
  v8 = KiProcessorBlock[v17];
  KiAcquirePrcbLocksForIsolationUnit(v8, 0, v77);
  if ( a1 != *(_QWORD *)(v8 + 16) )
  {
    if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v17 )
      __fastfail(0x1Eu);
    goto LABEL_32;
  }
  v7 = 0LL;
LABEL_36:
  CurrentPrcb = KeGetCurrentPrcb();
  v82 = v7;
  v21 = *(char *)(a1 + 195);
  v22 = 0;
  v75 = v8;
  v23 = v21;
  v79 = v21;
  v83 = CurrentPrcb;
  memset(v85, 0, sizeof(v85));
  if ( (unsigned __int8)v9 == 1 )
  {
    v30 = v75;
    KiRemoveThreadFromAnyReadyQueue(v75, (__int64)v82, a1, (unsigned int)v23);
    KiUpdateThreadPriority(0, v62, a1, v76, 0);
    v33 = (_QWORD *)v74;
    KiPrepareReadyThreadForRescheduling(a1, (unsigned int)v76, v74);
    v31 = 0;
    v32 = 0;
    goto LABEL_52;
  }
  if ( (unsigned __int8)v9 == 2 )
  {
    v40 = KeGetCurrentPrcb();
    v41 = v78;
    v42 = *(_QWORD *)(v75 + 16);
    v84 = v42;
    if ( (char)v78 > (char)v21 )
    {
      if ( *(_BYTE *)(a1 + 793) )
      {
        v43 = (struct _SINGLE_LIST_ENTRY *)(a1 + 808);
        if ( *(_QWORD *)(a1 + 808) == 1LL )
        {
          p_AbPropagateBoostsList = &v40->AbPropagateBoostsList;
          if ( v40 != (struct _KPRCB *)-35704LL )
          {
            v43->Next = p_AbPropagateBoostsList->Next;
            p_AbPropagateBoostsList->Next = v43;
            _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
            KiAbQueueAutoBoostDpc(v40);
            v41 = v78;
          }
        }
      }
    }
    *(_BYTE *)(a1 + 195) = v41;
    if ( (unsigned int)KiComputeHeteroThreadQos(a1, 0LL) != (unsigned __int8)*(_DWORD *)(a1 + 512) )
      KiSetThreadQosLevelUnsafe(a1);
    v30 = v75;
    if ( v42 )
    {
LABEL_88:
      if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
      {
        LOBYTE(v45) = 1;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 968), (unsigned int)*(char *)(a1 + 195), v45);
      }
      if ( v42 )
      {
LABEL_49:
        v31 = 0;
      }
      else
      {
        if ( v76 >= v23 )
        {
          if ( v76 <= v23 )
            goto LABEL_49;
          v31 = 0;
          v33 = (_QWORD *)v74;
          if ( *(_BYTE *)(a1 + 388) == 2 )
            v32 = v76;
          else
            v32 = 0;
          goto LABEL_52;
        }
        if ( *(_BYTE *)(a1 + 388) != 2 )
        {
          v33 = (_QWORD *)v74;
          v32 = 0;
          if ( (unsigned int)(*(_DWORD *)(v30 + 32472) | *(_DWORD *)(*(_QWORD *)(v30 + 34888) + 8LL)) >> (v76 + 1) )
            *(_BYTE *)(a1 + 112) |= 0x10u;
          v31 = 0;
          goto LABEL_52;
        }
        v31 = 1;
      }
      v32 = 0;
      goto LABEL_51;
    }
    v46 = *(_DWORD *)(a1 + 120) >> 1;
    v78 = v75;
    if ( (v46 & 1) != 0 )
    {
      v47 = *(_BYTE **)(v75 + 34904);
      v48 = (unsigned __int8)*v47;
      v49 = (__int64 *)(v47 + 8);
      if ( !*v47 )
      {
LABEL_87:
        v23 = v79;
        goto LABEL_88;
      }
    }
    else
    {
      v49 = &v78;
      v48 = 1;
    }
    v50 = v48;
    do
    {
      v51 = (_QWORD *)*v49;
      v52 = *(_BYTE **)(*v49 + 56);
      if ( (*(_BYTE *)(a1 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(a1, *v49), v54 = 1, !IsThreadRankNonZero) )
      {
        v54 = *(_BYTE *)(a1 + 195);
      }
      v55 = v54 & 0x7F | ((unsigned __int8)(*(_DWORD *)(a1 + 120) >> 1) << 7);
      *v52 = v55;
      v56 = v51[4375];
      if ( v56 )
      {
        if ( a1 == v51[3] )
          v57 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v57 = v55 & 0x7F;
        KiSetSchedulerAssistPriority(v56, v57, 0LL);
      }
      v45 = v51[7];
      if ( KeHeteroSystem )
      {
        v58 = *(_DWORD *)(a1 + 80);
        v59 = (*(_BYTE *)(a1 + 512) ^ *(_BYTE *)(v45 + 64)) & 7 ^ *(_BYTE *)(v45 + 64);
        v60 = (v59 ^ (8 * *(_BYTE *)(a1 + 516))) & 0x38 ^ v59;
        if ( v58 <= *(_DWORD *)(a1 + 84) )
          v58 = *(_DWORD *)(a1 + 84);
        v61 = 64;
        if ( v58 < KiDynamicHeteroCpuPolicyExpectedCycles )
          v61 = 0;
        *(_BYTE *)(v45 + 64) = v61 | v60 & 0xBF;
      }
      ++v49;
      --v50;
    }
    while ( v50 );
    CurrentPrcb = v83;
    v42 = v84;
    v30 = v75;
    goto LABEL_87;
  }
  if ( (unsigned __int8)v9 != 3 )
  {
    v25 = KeGetCurrentPrcb();
    v26 = v78;
    if ( (char)v78 > (char)v21 )
    {
      if ( *(_BYTE *)(a1 + 793) )
      {
        v27 = (struct _SINGLE_LIST_ENTRY *)(a1 + 808);
        if ( *(_QWORD *)(a1 + 808) == 1LL )
        {
          v28 = &v25->AbPropagateBoostsList;
          if ( v25 != (struct _KPRCB *)-35704LL )
          {
            v27->Next = v28->Next;
            v28->Next = v27;
            _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
            KiAbQueueAutoBoostDpc(v25);
          }
        }
      }
    }
    *(_BYTE *)(a1 + 195) = v26;
    if ( (unsigned int)KiComputeHeteroThreadQos(a1, 0LL) != (unsigned __int8)*(_DWORD *)(a1 + 512) )
      KiSetThreadQosLevelUnsafe(a1);
    if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
    {
      LOBYTE(v29) = 1;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 968), (unsigned int)*(char *)(a1 + 195), v29);
    }
    v30 = v75;
    goto LABEL_49;
  }
  v30 = v75;
  KiUpdateThreadPriority(v75, v24, a1, v76, 1);
  v32 = 0;
  if ( v76 >= v23 )
    v32 = v76;
  v31 = v76 < v23;
LABEL_51:
  v33 = (_QWORD *)v74;
LABEL_52:
  v34 = 0;
  v35 = KiProcessorBlock[*(unsigned int *)(a1 + 588)];
  v36 = *(_QWORD *)(v35 + 34880);
  if ( v36 )
  {
    v37 = *(unsigned __int8 *)(v35 + 208);
    v38 = *(_WORD **)(a1 + 576);
    if ( (unsigned __int16)v37 >= *v38 )
      v39 = 0LL;
    else
      v39 = *(_QWORD *)&v38[4 * v37 + 4];
    LOBYTE(v34) = (v36 & v39) == v36;
  }
  if ( v34 != ((*(_DWORD *)(a1 + 120) >> 13) & 1) )
    _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x2000u);
  if ( v31 )
  {
    KiStartRescheduleContext((__int64)v85, v77, 0LL);
    v63 = 0LL;
    v64 = 0;
    if ( LOBYTE(v85[0]) )
    {
      v65 = &v85[2];
      while ( *v65 != v30 )
      {
        ++v64;
        v65 += 5;
        if ( v64 >= LOBYTE(v85[0]) )
          goto LABEL_113;
      }
      v63 = v65;
    }
LABEL_113:
    *((_BYTE *)v63 + 34) |= 2u;
    KiSearchForNewThreadsForRescheduleContext(v85, (__int64)v33);
    v66 = 0;
    v67 = 0;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      v66 = 2;
    if ( LOBYTE(v85[0]) )
    {
      do
        v22 |= KiCommitRescheduleContextEntry(&v85[5 * v67++ + 2], (__int64)CurrentPrcb, v66, v33);
      while ( v67 < LOBYTE(v85[0]) );
    }
    if ( LODWORD(v85[1]) == 1 )
    {
      v68 = *(unsigned __int8 **)(v85[2] + 34904LL);
      v69 = v68[1] + 1;
      if ( v69 >= *v68 )
        v69 = 0;
      v68[1] = v69;
    }
  }
  v70 = v75;
  if ( v75 )
  {
    v71 = 0;
    v72 = v77[0] & 0xFFFFFFFFFFFFFFFEuLL;
    v74 = v77[0] & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v77[0] & 1) == 0 )
    {
      v4 = &v74;
      v71 = 1;
      goto LABEL_128;
    }
    if ( (v77[0] & 1) == 1 )
    {
      v4 = (unsigned __int64 *)(*(_QWORD *)(v72 + 34904) + 8LL);
      v71 = **(unsigned __int8 **)(v72 + 34904);
    }
    while ( v71 )
LABEL_128:
      _InterlockedAnd64((volatile signed __int64 *)(v4[--v71] + 48), 0LL);
  }
  if ( v82 )
    _InterlockedAnd64((volatile signed __int64 *)v82, 0LL);
  if ( v22 )
  {
    KiCompleteRescheduleContext(v85, (__int64)CurrentPrcb);
    KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
    v70 = v75;
  }
  if ( v32 > 0 )
    KiHvEnlightenedGuestPriorityKick(CurrentPrcb, v70, (unsigned int)v32, v70);
  return 1;
}
