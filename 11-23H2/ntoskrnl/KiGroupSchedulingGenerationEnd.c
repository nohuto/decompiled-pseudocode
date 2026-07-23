/*
 * XREFs of KiGroupSchedulingGenerationEnd @ 0x140308538
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x1403081E4 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KiAddThreadToPrcbQueue @ 0x140238A10 (KiAddThreadToPrcbQueue.c)
 *     KiStartRescheduleContext @ 0x140238FF0 (KiStartRescheduleContext.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiDoesThreadDominateRescheduleContextEntry @ 0x1402438E0 (KiDoesThreadDominateRescheduleContextEntry.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x140243C40 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KiEndThreadCycleAccumulation @ 0x1402B2F20 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x1402B2FD0 (KiStartThreadCycleAccumulation.c)
 *     KiInsertDeferredReadyList @ 0x1402B9EE4 (KiInsertDeferredReadyList.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x14030819C (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiCommitRescheduleContext @ 0x140308804 (KiCommitRescheduleContext.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x14030889C (KiTransitionSchedulingGroupGeneration.c)
 *     KiIsPrcbThread @ 0x140324F90 (KiIsPrcbThread.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiGroupSchedulingGenerationEnd(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // rdi
  __int64 *v6; // r12
  bool v8; // r13
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  char v15; // al
  __int64 v16; // r8
  _QWORD **v17; // rdi
  __int64 result; // rax
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // r8
  int v21; // ett
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  __int64 v24; // r15
  char v25; // r10
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // r12
  __int64 v30; // rax
  __int64 v31; // rcx
  char v32; // dl
  __int64 v33; // rax
  int v34; // r8d
  unsigned __int8 v35; // dl
  __int64 v36; // r14
  _DWORD *v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 *v41; // r11
  char v42; // r10
  __int64 v43; // r10
  __int64 *v44; // rcx
  __int64 v45; // r11
  _DWORD *v46; // r10
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r14
  bool v50; // zf
  unsigned __int64 v51; // rax
  __int64 v52; // r13
  __int64 v53; // rcx
  char v54; // al
  char v55; // al
  char v56; // cl
  char v57; // al
  __int64 v58; // rcx
  char v59; // cl
  __int64 *RescheduleContextEntryForPrcb; // rax
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 *v63; // r11
  char v64; // r10
  __int64 v65; // r10
  __int64 *v66; // rcx
  char v67; // r11
  unsigned __int8 *v68; // rsi
  char v69; // r14
  bool v70; // [rsp+30h] [rbp-D0h]
  _QWORD *v71; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v73; // [rsp+48h] [rbp-B8h]
  __int64 v74; // [rsp+50h] [rbp-B0h]
  _DWORD v75[84]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a2;
  v73 = a2;
  v74 = v3;
  v8 = v3 == v5;
  v70 = v3 == v5;
  _disable();
  KiEndThreadCycleAccumulation(a1, v3, 0LL, 1u);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v22 = *SchedulerAssist;
    do
    {
      v23 = v22;
      v22 = _InterlockedCompareExchange(SchedulerAssist, v22 & 0xFFDFFFFF, v22);
    }
    while ( v23 != v22 );
    if ( (v22 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
  if ( v3 != v5 )
    goto LABEL_3;
  v33 = *(_QWORD *)(a1 + 16);
  if ( !v33 || v33 == *(_QWORD *)(a1 + 24) )
  {
    if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
      goto LABEL_24;
  }
  else if ( (*(_BYTE *)(a1 + 35) & 1) == 0 )
  {
LABEL_24:
    __fastfail(0x1Eu);
  }
LABEL_3:
  KiTransitionSchedulingGroupGeneration(a1, SchedulerAssist, a3, 0LL);
  v71 = 0LL;
  memset(v75, 0, sizeof(v75));
  KiStartRescheduleContext((__int64)v75, v6, 0LL);
  v14 = *(_QWORD *)(a1 + 16);
  if ( !v14 || (unsigned __int8)KiIsPrcbThread(*(_QWORD *)(a1 + 16), v11, v12, v13) )
    goto LABEL_4;
  v24 = *(_QWORD *)(a1 + 8);
  v72 = 0LL;
  if ( (*(_DWORD *)(v24 + 120) & 0x1000) != 0 || v24 == *(_QWORD *)(a1 + 34944) )
  {
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v75, a1);
    KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v61, 1, 0);
    if ( (v64 & 2) != 0 )
    {
      LOBYTE(v62) = v75[0];
      v65 = 0LL;
      if ( LOBYTE(v75[0]) )
      {
        do
        {
          v66 = (__int64 *)&v75[10 * v65 + 4];
          if ( v66 != v63 )
          {
            KiAdjustRescheduleContextEntryForThreadRemoval(v66, v62, 1, 0);
            LOBYTE(v62) = v75[0];
          }
          v65 = (unsigned int)(v65 + 1);
        }
        while ( (unsigned int)v65 < (unsigned __int8)v62 );
      }
      v75[1] = 0;
    }
    goto LABEL_28;
  }
  v29 = KiFindRescheduleContextEntryForPrcb(v75, a1);
  if ( (unsigned __int8)(v25 & 2) <= (unsigned __int8)(*(_BYTE *)(v14 + 120) & 2)
    || (v35 = v75[0], v36 = 0LL, !LOBYTE(v75[0])) )
  {
LABEL_20:
    v30 = *v29;
    v31 = *(_QWORD *)(*v29 + 8LL);
    v29[2] = v31;
    v32 = v29[4] & 0xFE | (v31 == *(_QWORD *)(v30 + 24));
    *((_BYTE *)v29 + 32) = v32;
    LOBYTE(v26) = v32 & 0xC5;
    LODWORD(v30) = *(_DWORD *)(v31 + 120);
    v29[3] = 0LL;
    *((_BYTE *)v29 + 33) &= ~1u;
    *((_BYTE *)v29 + 34) |= 1u;
    *((_BYTE *)v29 + 32) = v26 | (2 * (((v30 & 2) != 0) | 2));
    if ( ((*(_BYTE *)(v24 + 120) | *(_BYTE *)(v14 + 120)) & 2) != 0 )
    {
      v45 = 0LL;
      if ( LOBYTE(v75[0]) )
      {
        do
        {
          v46 = &v75[10 * v45 + 4];
          if ( v29 != (_QWORD *)v46 )
          {
            v47 = *(_DWORD *)(v24 + 120);
            v48 = *((_QWORD *)v46 + 3);
            v72 = 0LL;
            v49 = *(_QWORD *)v46;
            v50 = (v47 & 2) == 0;
            v51 = v48 - 1;
            if ( v50 )
            {
              v52 = *(_QWORD *)(v49 + 24);
              if ( v51 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v48, v26, v27, v28) )
              {
                if ( (*((_BYTE *)v46 + 33) & 1) != 0 )
                  *(_DWORD *)(v58 + 116) |= 2u;
                *(_BYTE *)(v58 + 565) = 1;
                KiInsertDeferredReadyList((__int64)&v72, v58);
              }
              v59 = *((_BYTE *)v46 + 32) | 1;
              *((_QWORD *)v46 + 2) = v52;
              *((_BYTE *)v46 + 32) = v59;
              *((_BYTE *)v46 + 32) = v59 & 0xC5 | (2 * (((*(_DWORD *)(v52 + 120) & 2) != 0) | 2));
            }
            else
            {
              v52 = *(_QWORD *)(v49 + 34944);
              if ( v51 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v48, v26, v27, v28) )
              {
                if ( (*((_BYTE *)v46 + 33) & 1) != 0 )
                  *(_DWORD *)(v53 + 116) |= 2u;
                *(_BYTE *)(v53 + 565) = 1;
                KiInsertDeferredReadyList((__int64)&v72, v53);
              }
              v54 = v46[8] & 0xFE;
              *((_QWORD *)v46 + 2) = v24;
              *((_BYTE *)v46 + 32) = v54;
              v55 = v54 & 0xE5 | (2 * (((*(_DWORD *)(v24 + 120) & 2) != 0) | 2));
              v56 = v55 | 0x20;
              v57 = v55 & 0xDF;
              if ( v24 == v52 )
                v56 = v57;
              *((_BYTE *)v46 + 32) = v56;
            }
            *((_BYTE *)v46 + 33) &= ~1u;
            *((_QWORD *)v46 + 3) = v52;
            if ( !(unsigned __int8)KiIsPrcbThread(v52, v26, v27, v28) )
              *(_DWORD *)(v52 + 536) = *(_DWORD *)(v49 + 36);
          }
          v45 = (unsigned int)(v45 + 1);
        }
        while ( (unsigned int)v45 < LOBYTE(v75[0]) );
        v8 = v70;
      }
    }
    v75[1] = (*(_DWORD *)(v24 + 120) >> 1) & 1;
    goto LABEL_41;
  }
  while ( 1 )
  {
    v37 = &v75[10 * v36 + 4];
    if ( v29 != (_QWORD *)v37 )
      break;
LABEL_33:
    v36 = (unsigned int)(v36 + 1);
    if ( (unsigned int)v36 >= v35 )
      goto LABEL_20;
  }
  if ( KiDoesThreadDominateRescheduleContextEntry((__int64)v37, v24, 2LL, 0LL) )
  {
    v35 = v75[0];
    goto LABEL_33;
  }
  v38 = KiFindRescheduleContextEntryForPrcb(v75, a1);
  KiAdjustRescheduleContextEntryForThreadRemoval(v38, v39, 1, 0);
  if ( (v42 & 2) != 0 )
  {
    LOBYTE(v40) = v75[0];
    v43 = 0LL;
    if ( LOBYTE(v75[0]) )
    {
      do
      {
        v44 = (__int64 *)&v75[10 * v43 + 4];
        if ( v44 != v41 )
        {
          KiAdjustRescheduleContextEntryForThreadRemoval(v44, v40, 1, 0);
          LOBYTE(v40) = v75[0];
        }
        v43 = (unsigned int)(v43 + 1);
      }
      while ( (unsigned int)v43 < (unsigned __int8)v40 );
    }
    v75[1] = 0;
  }
LABEL_41:
  v6 = v73;
LABEL_28:
  *(_BYTE *)(v14 + 388) = 1;
  v34 = *(char *)(v14 + 195);
  *(_DWORD *)(v14 + 436) = MEMORY[0xFFFFF78000000320];
  KiAddThreadToPrcbQueue(a1, v14, v34, 1, 0);
  v3 = v74;
LABEL_4:
  KiSearchForNewThreadsForRescheduleContext(v75, (__int64)&v71);
  v15 = KiCommitRescheduleContext(v75, a1, 0LL, &v71);
  v17 = (_QWORD **)v71;
  if ( v15 || v71 )
  {
    KiReleasePrcbLocksForIsolationUnit(v6);
    if ( v67 )
    {
      KiCompleteRescheduleContext(v75, a1);
      v68 = (unsigned __int8 *)(a1 + 12760);
      KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
    }
    else
    {
      v68 = (unsigned __int8 *)(a1 + 12760);
    }
    if ( v17 )
    {
      v69 = 0;
      v71 = *v17;
      do
      {
        KiDeferredReadySingleThread(a1, (unsigned __int64)(v17 - 27), (__int64)&v71);
        v17 = (_QWORD **)v71;
        ++v69;
        if ( v71 )
          v71 = (_QWORD *)*v71;
        if ( (v69 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(v68);
      }
      while ( v17 );
      KiFlushSoftwareInterruptBatch(v68);
    }
    KiAcquirePrcbLocksForIsolationUnit(a1, 0, v6);
  }
  _disable();
  LOBYTE(v16) = v8;
  result = KiStartThreadCycleAccumulation(a1, v3, v16);
  v19 = KeGetCurrentPrcb();
  v20 = v19->SchedulerAssist;
  if ( v20 )
  {
    _m_prefetchw(v20);
    LODWORD(result) = *v20;
    do
    {
      v21 = result;
      result = (unsigned int)_InterlockedCompareExchange(v20, result & 0xFFDFFFFF, result);
    }
    while ( v21 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick(v19);
  }
  _enable();
  return result;
}
