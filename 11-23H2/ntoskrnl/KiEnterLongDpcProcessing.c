/*
 * XREFs of KiEnterLongDpcProcessing @ 0x140247AD0
 * Callers:
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiCommitRescheduleContextEntry @ 0x140242F60 (KiCommitRescheduleContextEntry.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KiInsertDeferredReadyList @ 0x1402B9EE4 (KiInsertDeferredReadyList.c)
 *     KiIsPrcbThread @ 0x140324F90 (KiIsPrcbThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034E478 (KiUpdateVPBackingThreadPriority.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x14034EF50 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x14057722C (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     EtwTraceLongDpcMitigationEvent @ 0x1405FD4EC (EtwTraceLongDpcMitigationEvent.c)
 */

bool __fastcall KiEnterLongDpcProcessing(unsigned __int64 a1, unsigned __int64 a2)
{
  char v2; // r14
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  unsigned int v5; // ebx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  unsigned int v11; // ecx
  unsigned __int8 v12; // si
  unsigned __int64 v13; // rdi
  _BYTE *v14; // rax
  unsigned int v15; // ecx
  __int64 *v16; // r15
  __int64 v17; // r12
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // si
  __int64 v23; // r10
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r9
  unsigned __int64 *v26; // r8
  unsigned int v27; // r12d
  unsigned __int8 *v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // r13d
  _QWORD *v31; // rsi
  __int64 v32; // r9
  struct _KPRCB *v33; // r15
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdx
  _KTHREAD *NextThread; // rax
  ULONG_PTR CurrentThread; // rbx
  char v37; // di
  char v38; // di
  char v39; // al
  unsigned __int8 v40; // cl
  unsigned __int64 *v41; // rdx
  _BYTE *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  _QWORD *v45; // r10
  __int64 v46; // r11
  unsigned int v47; // ecx
  _QWORD *v48; // rax
  unsigned __int8 v49; // bl
  unsigned int v50; // r12d
  unsigned int i; // r15d
  __int64 v52; // rsi
  _QWORD *v53; // r10
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  __int64 v56; // rcx
  int v57; // ecx
  char v58; // al
  __int64 v59; // rbx
  __int64 v60; // rcx
  char v61; // al
  bool v62; // cl
  int v63; // r15d
  __int64 v64; // rcx
  __int64 v65; // rsi
  __int64 v66; // rcx
  int v67; // eax
  unsigned int v68; // esi
  __int64 v69; // rbx
  _QWORD *v70; // r10
  __int64 v71; // rcx
  unsigned __int64 v72; // rax
  __int64 v73; // rcx
  int v74; // ecx
  char v75; // al
  __int64 v76; // r15
  __int64 v77; // rcx
  char v78; // al
  bool v79; // cl
  char v80; // al
  char v81; // cl
  char v82; // al
  unsigned int v83; // r15d
  char v84; // si
  char v85; // r12
  unsigned int v86; // ebx
  unsigned __int8 *v87; // rdx
  unsigned __int8 v88; // al
  unsigned __int64 v89; // rcx
  unsigned __int64 *v90; // r8
  int v91; // edx
  __int64 v92; // rsi
  _QWORD *v93; // rdi
  int v94; // r9d
  unsigned __int64 v95; // rcx
  unsigned __int64 *v96; // r14
  int v97; // edx
  unsigned __int8 v98; // [rsp+31h] [rbp-CFh]
  _QWORD *v99; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v100; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v101; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v102; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 *v103; // [rsp+58h] [rbp-A8h]
  int v104; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v105; // [rsp+64h] [rbp-9Ch]
  unsigned int v106; // [rsp+68h] [rbp-98h]
  unsigned __int64 v107; // [rsp+70h] [rbp-90h] BYREF
  __int64 v108; // [rsp+78h] [rbp-88h]
  unsigned __int64 v109; // [rsp+80h] [rbp-80h] BYREF
  __int64 v110; // [rsp+88h] [rbp-78h]
  __int64 v111; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v112[42]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = 0;
  v102 = a2;
  v107 = a1;
  v3 = a2;
  v4 = a1;
  v5 = 0;
  v98 = 0;
  if ( a2 == *(_QWORD *)(a1 + 13112) )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v9 = *SchedulerAssist;
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange(SchedulerAssist, v9 & 0xFFDFFFFF, v9);
    }
    while ( v10 != v9 );
    if ( (v9 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
  v11 = 0;
  v12 = **(_BYTE **)(v4 + 56);
  v111 = v4;
  if ( v12 >> 7 )
    v11 = v12 >> 7;
  v13 = v11 | v4 & 0xFFFFFFFFFFFFFFFEuLL;
  v101 = v13;
  if ( v11 )
  {
    if ( v11 != 1 )
      goto LABEL_22;
    v14 = *(_BYTE **)(v4 + 34904);
    v15 = (unsigned __int8)*v14;
    v16 = (__int64 *)(v14 + 8);
    if ( !*v14 )
      goto LABEL_22;
  }
  else
  {
    v16 = &v111;
    v15 = 1;
  }
  v17 = v15;
  do
  {
    v18 = *v16;
    v104 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v104);
      while ( *(_QWORD *)(v18 + 48) );
    }
    ++v16;
    --v17;
  }
  while ( v17 );
  v13 = v101;
  v3 = v102;
LABEL_22:
  if ( ((**(_BYTE **)(v4 + 56) ^ v12) & 0x80u) != 0 )
  {
    KiAcquirePrcbLocksForPreemptionAttemptSlowPath(v4, 0LL, &v101);
    v13 = v101;
  }
  v19 = *(_DWORD *)(v4 + 236);
  if ( (v19 & 0x1000) == 0 )
    *(_DWORD *)(v4 + 236) = v19 | 0x1000;
  if ( v3 != *(_QWORD *)(v4 + 24) )
  {
    v20 = *(_QWORD *)(v4 + 13112);
    if ( v20 )
    {
      if ( v3 != v20
        && *(char *)(v3 + 195) >= 16
        && (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(v4, *(_QWORD *)(v3 + 576)) )
      {
        v5 = 2;
      }
    }
  }
  v21 = *(_QWORD *)(v4 + 13112);
  v22 = v5;
  v23 = *(_QWORD *)(v4 + 16);
  v106 = v5;
  v110 = v23;
  if ( v21 && v23 != v21 )
  {
    if ( v23 )
      v98 = *(_BYTE *)(v23 + 195);
    v99 = 0LL;
    memset(v112, 0, sizeof(v112));
    v103 = 0LL;
    v24 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
    v25 = v13 & 1;
    v109 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
    v105 = v13 & 1;
    v26 = 0LL;
    v27 = 0;
    if ( (v13 & 1) != 0 )
    {
      if ( (_DWORD)v25 == 1 )
      {
        v28 = *(unsigned __int8 **)(v24 + 34904);
        v26 = (unsigned __int64 *)(v28 + 8);
        v103 = (unsigned __int64 *)(v28 + 8);
        v27 = *v28;
      }
      v29 = 0;
      v100 = 0;
      if ( !v27 )
      {
LABEL_68:
        HIDWORD(v112[0]) = v29;
        LODWORD(v112[1]) = v25;
        LOBYTE(v112[0]) = v27;
        if ( (_DWORD)v25 )
          BYTE1(v112[0]) = *(_BYTE *)(*(_QWORD *)(v24 + 34904) + 1LL);
        else
          BYTE1(v112[0]) = 0;
        if ( v29 )
        {
          v26 = 0LL;
          v25 = 0LL;
          if ( v27 )
          {
            v41 = &v112[2];
            while ( v41[2] == *(_QWORD *)(*v41 + 34944) )
            {
              v25 = (unsigned int)(v25 + 1);
              v41 += 5;
              if ( (unsigned int)v25 >= v27 )
                goto LABEL_78;
            }
            v26 = v41;
LABEL_78:
            v42 = &v112[6];
            v43 = v27;
            do
            {
              if ( v42 - 32 != (_BYTE *)v26 )
              {
                *((_QWORD *)v42 - 2) = v26[2];
                *v42 = *((_BYTE *)v26 + 32) | 0x20;
              }
              v42 += 40;
              --v43;
            }
            while ( v43 );
          }
        }
        v44 = LOBYTE(v112[0]);
        v45 = 0LL;
        v46 = *(_QWORD *)(v4 + 13112);
        v47 = 0;
        if ( LOBYTE(v112[0]) )
        {
          v48 = &v112[2];
          while ( *v48 != v4 )
          {
            ++v47;
            v48 += 5;
            if ( v47 >= LOBYTE(v112[0]) )
              goto LABEL_88;
          }
          v45 = v48;
        }
LABEL_88:
        v49 = *((_BYTE *)v45 + 32);
        v50 = (*(_DWORD *)(v46 + 120) >> 1) & 1;
        if ( v50 >= ((v49 >> 1) & 1u) )
        {
          if ( v50 )
          {
            v68 = 0;
            v63 = 0;
            if ( !LOBYTE(v112[0]) )
              goto LABEL_135;
            do
            {
              v69 = v112[5 * v68 + 2];
              v70 = &v112[5 * v68 + 2];
              v71 = v70[3];
              v72 = v71 - 1;
              if ( v69 == v4 )
              {
                if ( v72 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v71, v44, v26, v25) )
                {
                  if ( (*((_BYTE *)v70 + 33) & 1) != 0 )
                    *(_DWORD *)(v73 + 116) |= 2u;
                  *(_BYTE *)(v73 + 565) = 1;
                  KiInsertDeferredReadyList(&v99, v73);
                }
                v74 = *(_DWORD *)(v46 + 120);
                v75 = v70[4] & 0xC4;
                *((_BYTE *)v70 + 33) &= ~1u;
                v70[2] = v46;
                v70[3] = v46;
                *((_BYTE *)v70 + 32) = v75 | (2 * (((v74 & 2) != 0) | 2));
                if ( !(unsigned __int8)KiIsPrcbThread(v46, v44, v26, v25) )
                  *(_DWORD *)(v46 + 536) = *(_DWORD *)(v69 + 36);
              }
              else
              {
                v76 = *(_QWORD *)(v69 + 34944);
                if ( v72 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v71, v44, v26, v25) )
                {
                  if ( (*((_BYTE *)v70 + 33) & 1) != 0 )
                    *(_DWORD *)(v77 + 116) |= 2u;
                  *(_BYTE *)(v77 + 565) = 1;
                  KiInsertDeferredReadyList(&v99, v77);
                }
                v78 = v70[4] & 0xE4;
                v79 = (*(_DWORD *)(v46 + 120) & 2) != 0;
                v70[2] = v46;
                v80 = v78 | (2 * (v79 | 2));
                v81 = v80 | 0x20;
                v82 = v80 & 0xDF;
                if ( v46 == v76 )
                  v81 = v82;
                *((_BYTE *)v70 + 32) = v81;
                *((_BYTE *)v70 + 33) &= ~1u;
                v70[3] = v76;
                if ( !(unsigned __int8)KiIsPrcbThread(v76, v44, v26, v25) )
                  *(_DWORD *)(v76 + 536) = *(_DWORD *)(v69 + 36);
              }
              ++v68;
            }
            while ( v68 < LOBYTE(v112[0]) );
          }
          else
          {
            v64 = v45[3];
            v65 = *v45;
            if ( (unsigned __int64)(v64 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
              && !(unsigned __int8)KiIsPrcbThread(v64, LOBYTE(v112[0]), v26, v25) )
            {
              if ( (*((_BYTE *)v45 + 33) & 1) != 0 )
                *(_DWORD *)(v66 + 116) |= 2u;
              *(_BYTE *)(v66 + 565) = 1;
              KiInsertDeferredReadyList(&v99, v66);
            }
            v67 = *(_DWORD *)(v46 + 120);
            *((_BYTE *)v45 + 33) &= ~1u;
            v45[2] = v46;
            v45[3] = v46;
            *((_BYTE *)v45 + 32) = v49 & 0xC4 | (2 * (((v67 & 2) != 0) | 2));
            if ( *(_UNKNOWN **)(v46 + 544) != &KiInitialProcess )
              *(_DWORD *)(v46 + 536) = *(_DWORD *)(v65 + 36);
          }
          v63 = 0;
        }
        else
        {
          for ( i = 0; i < LOBYTE(v112[0]); ++i )
          {
            v52 = v112[5 * i + 2];
            v53 = &v112[5 * i + 2];
            v54 = v53[3];
            v55 = v54 - 1;
            if ( v52 == v4 )
            {
              if ( v55 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v54, v44, v26, v25) )
              {
                if ( (*((_BYTE *)v53 + 33) & 1) != 0 )
                  *(_DWORD *)(v56 + 116) |= 2u;
                *(_BYTE *)(v56 + 565) = 1;
                KiInsertDeferredReadyList(&v99, v56);
              }
              v57 = *(_DWORD *)(v46 + 120);
              v58 = v53[4] & 0xC4;
              *((_BYTE *)v53 + 33) &= ~1u;
              v53[2] = v46;
              v53[3] = v46;
              *((_BYTE *)v53 + 32) = v58 | (2 * (((v57 & 2) != 0) | 2));
              if ( !(unsigned __int8)KiIsPrcbThread(v46, v44, v26, v25) )
                *(_DWORD *)(v46 + 536) = *(_DWORD *)(v52 + 36);
            }
            else
            {
              v59 = *(_QWORD *)(v52 + 24);
              if ( v55 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v54, v44, v26, v25) )
              {
                if ( (*((_BYTE *)v53 + 33) & 1) != 0 )
                  *(_DWORD *)(v60 + 116) |= 2u;
                *(_BYTE *)(v60 + 565) = 1;
                KiInsertDeferredReadyList(&v99, v60);
              }
              v61 = v53[4] & 0xC5;
              v62 = (*(_DWORD *)(v59 + 120) & 2) != 0;
              v53[2] = v59;
              *((_BYTE *)v53 + 32) = v61 | (2 * v62) | 5;
              *((_BYTE *)v53 + 33) &= ~1u;
              v53[3] = v59;
              if ( !(unsigned __int8)KiIsPrcbThread(v59, v44, v26, v25) )
                *(_DWORD *)(v59 + 536) = *(_DWORD *)(v52 + 36);
            }
          }
          v63 = 1;
        }
LABEL_135:
        HIDWORD(v112[0]) = v50;
        v83 = v106 | (4 * v63) | 1;
        if ( v83 >= 4 )
          KiSearchForNewThreadsForRescheduleContext(v112, (__int64)&v99);
        v84 = 0;
        v85 = 0;
        v86 = 0;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          v85 = 2;
        if ( LOBYTE(v112[0]) )
        {
          do
            v84 |= KiCommitRescheduleContextEntry(&v112[5 * v86++ + 2], v4, v85, &v99);
          while ( v86 < LOBYTE(v112[0]) );
        }
        if ( LODWORD(v112[1]) == 1 )
        {
          v87 = *(unsigned __int8 **)(v112[2] + 34904LL);
          v88 = v87[1] + 1;
          if ( v88 >= *v87 )
            v88 = 0;
          v87[1] = v88;
        }
        v89 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
        v5 = v83 | (8 * (v84 & 1));
        v107 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v13 & 1) != 0 )
        {
          v90 = (unsigned __int64 *)(*(_QWORD *)(v89 + 34904) + 8LL);
          v91 = **(unsigned __int8 **)(v89 + 34904);
          if ( !**(_BYTE **)(v89 + 34904) )
            goto LABEL_150;
        }
        else
        {
          v90 = &v107;
          v91 = 1;
        }
        do
          _InterlockedAnd64((volatile signed __int64 *)(v90[--v91] + 48), 0LL);
        while ( v91 );
LABEL_150:
        if ( v5 < 8 )
        {
          v92 = v4 + 12760;
        }
        else
        {
          KiCompleteRescheduleContext(v112, v4);
          v92 = v4 + 12760;
          KiFlushSoftwareInterruptBatch(v4 + 12760);
        }
        v93 = v99;
        if ( v99 )
        {
          v99 = (_QWORD *)*v99;
          do
          {
            KiDeferredReadySingleThread(v4, (unsigned __int64)(v93 - 27), (__int64)&v99);
            v93 = v99;
            ++v2;
            if ( v99 )
              v99 = (_QWORD *)*v99;
            if ( (v2 & 0xF) == 0 )
              KiFlushSoftwareInterruptBatch(v92);
          }
          while ( v93 );
          KiFlushSoftwareInterruptBatch(v92);
        }
        v3 = v102;
        LODWORD(v23) = v110;
        goto LABEL_162;
      }
    }
    else
    {
      v26 = &v109;
      v100 = 0;
      v103 = &v109;
      v27 = 1;
    }
    v30 = v100;
    v31 = &v112[6];
    v32 = v27;
    v108 = v27;
    do
    {
      *(v31 - 3) = 0LL;
      *v31 = 0LL;
      v33 = (struct _KPRCB *)*v26;
      *(v31 - 1) = -1LL;
      *((_BYTE *)v31 + 4) = 63;
      *(v31 - 4) = v33;
      SharedReadyQueue = v33->SharedReadyQueue;
      if ( (v33->IdleState & 8) != 0 && (v33->SchedulerSubNode->NonParkedSet & SharedReadyQueue->Affinity) != 0 )
        SharedReadyQueue = 0LL;
      NextThread = v33->NextThread;
      *(v31 - 3) = SharedReadyQueue;
      CurrentThread = (ULONG_PTR)NextThread;
      *(v31 - 2) = NextThread;
      if ( !NextThread )
      {
        CurrentThread = (ULONG_PTR)v33->CurrentThread;
        *(v31 - 2) = CurrentThread;
      }
      if ( NextThread == (_KTHREAD *)CurrentThread )
      {
        v37 = *(_BYTE *)v31 | 4;
      }
      else
      {
        v38 = *(_BYTE *)v31;
        if ( v33 == KeGetCurrentPrcb() )
          v37 = v38 | 4;
        else
          v37 = v38 & 0xFB;
      }
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x400000) != 0
        && !_interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x400000) != 0 && *(_DWORD *)(CurrentThread + 536) == v33->Number )
        {
          if ( *(_BYTE *)(CurrentThread + 388) == 2
            || *(_BYTE *)(CurrentThread + 388) == 3
            || *(_BYTE *)(CurrentThread + 388) == 5
            && (v39 = *(_BYTE *)(CurrentThread + 112) & 7, v39 != 1)
            && (unsigned __int8)(v39 - 3) > 3u )
          {
            KiUpdateVPBackingThreadPriority(CurrentThread);
            v26 = v103;
            v32 = v108;
          }
        }
        *(_QWORD *)(CurrentThread + 64) = 0LL;
      }
      v40 = (((v33->IdleState & 1) == 0) | v37 & 0xFE) ^ ((((v33->IdleState & 1) == 0) | v37) ^ (v33->PriorityState->AllFields >> 6)) & 2;
      *(_BYTE *)v31 = v40;
      if ( ((v40 >> 1) & 1u) > v30 )
        v30 = (v40 >> 1) & 1;
      ++v26;
      v31 += 5;
      v103 = v26;
      v108 = --v32;
    }
    while ( v32 );
    v13 = v101;
    v24 = v109;
    v25 = v105;
    v100 = v30;
    v29 = v30;
    v4 = v107;
    goto LABEL_68;
  }
  if ( !v13 )
  {
LABEL_162:
    v94 = v98;
    v22 = v5;
    goto LABEL_163;
  }
  v95 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
  v102 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v13 & 1) == 0 )
  {
    v96 = &v102;
    v97 = 1;
    goto LABEL_172;
  }
  v96 = (unsigned __int64 *)(*(_QWORD *)(v95 + 34904) + 8LL);
  v97 = **(unsigned __int8 **)(v95 + 34904);
  v94 = 0;
  if ( **(_BYTE **)(v95 + 34904) )
  {
LABEL_172:
    v94 = 0;
    do
      _InterlockedAnd64((volatile signed __int64 *)(v96[--v97] + 48), 0LL);
    while ( v97 );
  }
LABEL_163:
  _disable();
  if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 && (v5 & 3) != 0 )
    EtwTraceLongDpcMitigationEvent(v3, v23, *(unsigned __int8 *)(v3 + 195), v94, v5 & 1, (v22 & 2) != 0);
  return (v22 & 2) != 0;
}
