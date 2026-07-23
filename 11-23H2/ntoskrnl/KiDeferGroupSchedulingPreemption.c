/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x140307814
 * Callers:
 *     KiDispatchInterrupt @ 0x140249600 (KiDispatchInterrupt.c)
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
 *     KiGetThreadEffectiveRankNonZero @ 0x1402B34D0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiInsertDeferredReadyList @ 0x1402B9EE4 (KiInsertDeferredReadyList.c)
 *     KiAddThreadToScbQueue @ 0x140305CB0 (KiAddThreadToScbQueue.c)
 *     KiShouldPreemptionBeDeferred @ 0x140307B00 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckPrcbAffinityEx @ 0x140307B20 (KiCheckPrcbAffinityEx.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x14030819C (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiCommitRescheduleContext @ 0x140308804 (KiCommitRescheduleContext.c)
 *     KiInsertDeferredPreemptionApc @ 0x1403093B4 (KiInsertDeferredPreemptionApc.c)
 *     KiIsPrcbThread @ 0x140324F90 (KiIsPrcbThread.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

bool __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  bool v7; // r11
  __int64 v9; // r13
  char v10; // r10
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *RescheduleContextEntryForPrcb; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  char v17; // dl
  __int64 v19; // r12
  char v20; // r11
  unsigned __int8 *v21; // rsi
  _QWORD *v22; // rdi
  unsigned __int8 v23; // dl
  __int64 v24; // r15
  _DWORD *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // r11
  char v32; // r10
  __int64 v33; // r10
  _DWORD *v34; // rcx
  __int64 i; // r11
  _DWORD *v36; // r10
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r15
  bool v40; // zf
  unsigned __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // rcx
  char v44; // al
  char v45; // al
  char v46; // cl
  char v47; // al
  __int64 v48; // rcx
  char v49; // cl
  _QWORD *v50; // rax
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // r8
  _DWORD *v55; // r11
  char v56; // r10
  __int64 v57; // r10
  _DWORD *v58; // rcx
  char v59; // r15
  char v60; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v61; // [rsp+38h] [rbp-C8h] BYREF
  int ThreadEffectiveRankNonZero; // [rsp+40h] [rbp-C0h]
  __int64 v63; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v65; // [rsp+58h] [rbp-A8h]
  _DWORD v66[84]; // [rsp+60h] [rbp-A0h] BYREF

  v65 = a1;
  v3 = a1;
  memset(v66, 0, sizeof(v66));
  v4 = *(_QWORD *)(v3 + 104);
  v63 = 0LL;
  if ( !v4 || !(unsigned __int8)KiShouldPreemptionBeDeferred(v3) )
    return 0;
  while ( 1 )
  {
    ThreadEffectiveRankNonZero = 0;
    v60 = 0;
    KiAcquirePrcbLocksForIsolationUnit(a2, 0, &v63);
    v5 = *(_QWORD *)(a2 + 16);
    if ( !*(_QWORD *)(v3 + 104)
      || v5 == *(_QWORD *)(a2 + 24)
      || !(unsigned __int8)KiCheckPrcbAffinityEx(*(_QWORD *)(v3 + 576), a2)
      || ((v6 = *(_QWORD *)(v5 + 104)) == 0
       || (v6 += *(unsigned int *)(a2 + 216)) == 0
       || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v5, v6, 1, (bool *)&v60)) == 0)
      && *(_BYTE *)(v5 + 195) > *(_BYTE *)(v3 + 195) )
    {
      v7 = 0;
      goto LABEL_9;
    }
    v61 = 0LL;
    memset(v66, 0, sizeof(v66));
    KiStartRescheduleContext((__int64)v66, &v63, 0LL);
    v9 = *(_QWORD *)(a2 + 8);
    v64 = 0LL;
    if ( (*(_DWORD *)(v9 + 120) & 0x1000) == 0 && v9 != *(_QWORD *)(a2 + 34944) )
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v66, a2);
      if ( (unsigned __int8)(v10 & 2) <= (unsigned __int8)(*(_BYTE *)(v5 + 120) & 2)
        || (v23 = v66[0], v24 = 0LL, !LOBYTE(v66[0])) )
      {
LABEL_18:
        v15 = *RescheduleContextEntryForPrcb;
        v16 = *(_QWORD *)(*RescheduleContextEntryForPrcb + 8LL);
        RescheduleContextEntryForPrcb[2] = v16;
        v17 = RescheduleContextEntryForPrcb[4] & 0xFE | (v16 == *(_QWORD *)(v15 + 24));
        *((_BYTE *)RescheduleContextEntryForPrcb + 32) = v17;
        LOBYTE(v11) = v17 & 0xC5;
        LODWORD(v15) = *(_DWORD *)(v16 + 120);
        RescheduleContextEntryForPrcb[3] = 0LL;
        *((_BYTE *)RescheduleContextEntryForPrcb + 33) &= ~1u;
        *((_BYTE *)RescheduleContextEntryForPrcb + 34) |= 1u;
        *((_BYTE *)RescheduleContextEntryForPrcb + 32) = v11 | (2 * (((v15 & 2) != 0) | 2));
        if ( ((*(_BYTE *)(v9 + 120) | *(_BYTE *)(v5 + 120)) & 2) != 0 )
        {
          for ( i = 0LL; (unsigned int)i < LOBYTE(v66[0]); i = (unsigned int)(i + 1) )
          {
            v36 = &v66[10 * i + 4];
            if ( RescheduleContextEntryForPrcb != (_QWORD *)v36 )
            {
              v37 = *(_DWORD *)(v9 + 120);
              v38 = *((_QWORD *)v36 + 3);
              v64 = 0LL;
              v39 = *(_QWORD *)v36;
              v40 = (v37 & 2) == 0;
              v41 = v38 - 1;
              if ( v40 )
              {
                v42 = *(_QWORD *)(v39 + 24);
                if ( v41 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v38, v11, v12, v13) )
                {
                  if ( (*((_BYTE *)v36 + 33) & 1) != 0 )
                    *(_DWORD *)(v48 + 116) |= 2u;
                  *(_BYTE *)(v48 + 565) = 1;
                  KiInsertDeferredReadyList((__int64)&v64, v48);
                }
                v49 = *((_BYTE *)v36 + 32) | 1;
                *((_QWORD *)v36 + 2) = v42;
                *((_BYTE *)v36 + 32) = v49;
                *((_BYTE *)v36 + 32) = v49 & 0xC5 | (2 * (((*(_DWORD *)(v42 + 120) & 2) != 0) | 2));
              }
              else
              {
                v42 = *(_QWORD *)(v39 + 34944);
                if ( v41 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v38, v11, v12, v13) )
                {
                  if ( (*((_BYTE *)v36 + 33) & 1) != 0 )
                    *(_DWORD *)(v43 + 116) |= 2u;
                  *(_BYTE *)(v43 + 565) = 1;
                  KiInsertDeferredReadyList((__int64)&v64, v43);
                }
                v44 = v36[8] & 0xFE;
                *((_QWORD *)v36 + 2) = v9;
                *((_BYTE *)v36 + 32) = v44;
                v45 = v44 & 0xE5 | (2 * (((*(_DWORD *)(v9 + 120) & 2) != 0) | 2));
                v46 = v45 | 0x20;
                v47 = v45 & 0xDF;
                if ( v9 == v42 )
                  v46 = v47;
                *((_BYTE *)v36 + 32) = v46;
              }
              *((_BYTE *)v36 + 33) &= ~1u;
              *((_QWORD *)v36 + 3) = v42;
              if ( !(unsigned __int8)KiIsPrcbThread(v42, v11, v12, v13) )
                *(_DWORD *)(v42 + 536) = *(_DWORD *)(v39 + 36);
            }
          }
        }
        v66[1] = (*(_DWORD *)(v9 + 120) >> 1) & 1;
        goto LABEL_20;
      }
      while ( 1 )
      {
        v25 = &v66[10 * v24 + 4];
        if ( RescheduleContextEntryForPrcb != (_QWORD *)v25 )
        {
          if ( !KiDoesThreadDominateRescheduleContextEntry((__int64)v25, v9, 2LL, 0LL) )
          {
            v26 = KiFindRescheduleContextEntryForPrcb(v66, a2);
            LOBYTE(v27) = 1;
            KiAdjustRescheduleContextEntryForThreadRemoval(v26, v28, v27, 0LL);
            if ( (v32 & 2) != 0 )
            {
              LOBYTE(v29) = v66[0];
              v33 = 0LL;
              if ( LOBYTE(v66[0]) )
              {
                do
                {
                  v34 = &v66[10 * v33 + 4];
                  if ( v34 != v31 )
                  {
                    LOBYTE(v30) = 1;
                    KiAdjustRescheduleContextEntryForThreadRemoval(v34, v29, v30, 0LL);
                    LOBYTE(v29) = v66[0];
                  }
                  v33 = (unsigned int)(v33 + 1);
                }
                while ( (unsigned int)v33 < (unsigned __int8)v29 );
              }
              goto LABEL_69;
            }
            goto LABEL_20;
          }
          v23 = v66[0];
        }
        v24 = (unsigned int)(v24 + 1);
        if ( (unsigned int)v24 >= v23 )
          goto LABEL_18;
      }
    }
    v50 = KiFindRescheduleContextEntryForPrcb(v66, a2);
    LOBYTE(v51) = 1;
    KiAdjustRescheduleContextEntryForThreadRemoval(v50, v52, v51, 0LL);
    if ( (v56 & 2) != 0 )
    {
      LOBYTE(v53) = v66[0];
      v57 = 0LL;
      if ( LOBYTE(v66[0]) )
      {
        do
        {
          v58 = &v66[10 * v57 + 4];
          if ( v58 != v55 )
          {
            LOBYTE(v54) = 1;
            KiAdjustRescheduleContextEntryForThreadRemoval(v58, v53, v54, 0LL);
            LOBYTE(v53) = v66[0];
          }
          v57 = (unsigned int)(v57 + 1);
        }
        while ( (unsigned int)v57 < (unsigned __int8)v53 );
      }
LABEL_69:
      v66[1] = 0;
    }
LABEL_20:
    *(_BYTE *)(v5 + 388) = 1;
    if ( v6 ? KiGetThreadEffectiveRankNonZero(v5, v6, 1, (bool *)&v60) : ThreadEffectiveRankNonZero )
      KiAddThreadToScbQueue(a2, v6, v5, 1);
    else
      KiAddThreadToPrcbQueue(a2, v5, *(char *)(v5 + 195), 1, v60);
    KiSearchForNewThreadsForRescheduleContext(v66, (__int64)&v61);
    KiCommitRescheduleContext(v66, a2, 0LL, &v61);
    v19 = *(_QWORD *)(a2 + 16);
    KiReleasePrcbLocksForIsolationUnit(&v63);
    if ( v20 )
    {
      KiCompleteRescheduleContext(v66, a2);
      v21 = (unsigned __int8 *)(a2 + 12760);
      KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a2 + 12760));
    }
    else
    {
      v21 = (unsigned __int8 *)(a2 + 12760);
    }
    v22 = v61;
    if ( !v61 )
      break;
    v59 = 0;
    v61 = (_QWORD *)*v61;
    do
    {
      KiDeferredReadySingleThread(a2, (unsigned __int64)(v22 - 27), (__int64)&v61);
      v22 = v61;
      ++v59;
      if ( v61 )
        v61 = (_QWORD *)*v61;
      if ( (v59 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(v21);
    }
    while ( v22 );
    KiFlushSoftwareInterruptBatch(v21);
    v7 = v19 == 0;
    if ( v19 )
      goto LABEL_9;
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_28;
    v3 = v65;
  }
  v7 = v19 == 0;
  if ( v19 )
    goto LABEL_9;
LABEL_28:
  KiInsertDeferredPreemptionApc(a2, v65, 0LL);
  v7 = v19 == 0;
LABEL_9:
  if ( v63 )
    KiReleasePrcbLocksForIsolationUnit(&v63);
  return v7;
}
