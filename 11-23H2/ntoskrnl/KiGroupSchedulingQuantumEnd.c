/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x1403081E4
 * Callers:
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140206878 (KiRemoveSchedulingGroupQueue.c)
 *     KiStartRescheduleContext @ 0x140238FF0 (KiStartRescheduleContext.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x140243C40 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KiComputeGroupSchedulingRank @ 0x140305AC8 (KiComputeGroupSchedulingRank.c)
 *     KiCheckMaxOverQuotaTransition @ 0x140305C18 (KiCheckMaxOverQuotaTransition.c)
 *     KiShouldPreemptionBeDeferred @ 0x140307B00 (KiShouldPreemptionBeDeferred.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x14030819C (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308538 (KiGroupSchedulingGenerationEnd.c)
 *     KiCommitRescheduleContext @ 0x140308804 (KiCommitRescheduleContext.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x14030932C (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14030934C (KiCheckForMaxOverQuotaScb.c)
 *     KiInsertDeferredPreemptionApc @ 0x1403093B4 (KiInsertDeferredPreemptionApc.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140365710 (KiRecomputeGroupSchedulingRank.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall KiGroupSchedulingQuantumEnd(__int64 a1, __int64 *a2, _QWORD *a3, char a4)
{
  char v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rsi
  char v16; // al
  char v17; // r14
  _QWORD *v18; // r12
  __int64 v19; // rdi
  int v20; // r13d
  char v21; // si
  __int64 v22; // rcx
  char v23; // r11
  _QWORD *v24; // rdi
  __int64 *v25; // r15
  char v26; // r11
  unsigned __int8 *v27; // r14
  __int64 v28; // rcx
  _QWORD *v29; // r10
  char v30; // dl
  __int64 v31; // rdx
  __int64 *RescheduleContextEntryForPrcb; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // r8d
  char v36; // r10
  __int64 *v37; // r11
  __int64 v38; // r10
  __int64 *v39; // rcx
  unsigned __int8 v40; // r8
  __int64 i; // rdx
  _DWORD *v42; // rax
  char v43; // r15
  char v45; // [rsp+20h] [rbp-E0h]
  char v46; // [rsp+21h] [rbp-DFh]
  _QWORD *v48; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v49; // [rsp+30h] [rbp-D0h]
  __int64 v50; // [rsp+38h] [rbp-C8h]
  _DWORD v51[84]; // [rsp+40h] [rbp-C0h] BYREF

  v48 = a3;
  v49 = a2;
  memset(v51, 0, sizeof(v51));
  v45 = 0;
  v46 = 0;
  v7 = 0;
  v8 = MEMORY[0xFFFFF78000000320];
  LOBYTE(v9) = KiAcquirePrcbLocksForIsolationUnit(a1, 0, a2);
  if ( v8 > *(_QWORD *)(a1 + 34520) )
  {
    LOBYTE(v9) = KiGroupSchedulingGenerationEnd(a1, a2, v8);
    return v9;
  }
  v11 = a3[13];
  v12 = v11;
  if ( v11 )
  {
    v9 = *(unsigned int *)(a1 + 216);
    v13 = v9 + v11;
    if ( v13 )
    {
      v14 = *(_QWORD *)(a1 + 16);
      v15 = 0LL;
      v50 = v14;
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 104);
        if ( v15 )
          v15 += *(unsigned int *)(a1 + 216);
      }
      while ( 1 )
      {
        v16 = *(_BYTE *)(v13 + 112);
        if ( (v16 & 4) != 0 )
        {
          if ( (v16 & 2) != 0 )
            goto LABEL_34;
          if ( KiCheckMaxOverQuotaTransition(v13, v12) )
          {
            if ( (*(_BYTE *)(v13 + 112) & 1) != 0 )
              KiRemoveSchedulingGroupQueue((_RTL_RB_TREE *)a1, v13, 1);
            goto LABEL_34;
          }
          if ( *(_QWORD *)v13 >= *(_QWORD *)(v13 + 24) )
          {
            KiRecomputeGroupSchedulingRank(v12, v13, a1);
            if ( v15 == v13 )
              v46 = 1;
LABEL_34:
            v7 = 1;
            v45 = 1;
            v17 = 1;
            goto LABEL_10;
          }
          v17 = v45;
          if ( a4 )
            v7 = 1;
        }
        else
        {
          KiComputeGroupSchedulingRank(v12, a1, v10, v13);
          if ( (*(_BYTE *)(v13 + 112) & 4) != 0 )
          {
            v45 = 1;
            v7 = 1;
            v17 = 1;
            if ( v15 == v13 )
              v46 = 1;
          }
          else
          {
            v17 = v45;
          }
        }
LABEL_10:
        v13 = *(_QWORD *)(v13 + 408);
        if ( !v13 )
        {
          v18 = v48;
          v19 = v48[13];
          if ( v19 )
            v19 += *(unsigned int *)(a1 + 216);
          v48 = 0LL;
          KiStartRescheduleContext((__int64)v51, v49, 0LL);
          if ( v7 && !v50 )
          {
            if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(v18)
              && !KiShouldPreemptionBeDeferred(v28)
              && (unsigned __int8)KiCheckForMaxOverQuotaScb(v19, v31) )
            {
              RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v51, a1);
              KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v33, 0, 0);
              v20 = v35 + 1;
              if ( (v36 & 2) != 0 )
              {
                LOBYTE(v34) = v51[0];
                v38 = 0LL;
                if ( LOBYTE(v51[0]) )
                {
                  do
                  {
                    v39 = (__int64 *)&v51[10 * v38 + 4];
                    if ( v39 != v37 )
                    {
                      KiAdjustRescheduleContextEntryForThreadRemoval(v39, v34, 0, 0);
                      LOBYTE(v34) = v51[0];
                    }
                    v38 = (unsigned int)(v20 + v38);
                  }
                  while ( (unsigned int)v38 < (unsigned __int8)v34 );
                }
                v51[1] = 0;
              }
            }
            else
            {
              v29 = KiFindRescheduleContextEntryForPrcb(v51, a1);
              LOBYTE(v20) = 1;
              v30 = *((_BYTE *)v29 + 32);
              *((_BYTE *)v29 + 34) |= 2u;
              *((_BYTE *)v29 + 32) = v30 | 8;
              if ( (v30 & 2) != 0 )
              {
                v40 = v51[0];
                for ( i = 0LL; (unsigned int)i < v40; i = (unsigned int)(i + 1) )
                {
                  v42 = &v51[10 * i + 4];
                  if ( v42 != (_DWORD *)v29 )
                  {
                    *((_BYTE *)v42 + 32) |= 8u;
                    *((_BYTE *)v42 + 34) |= 2u;
                    v40 = v51[0];
                  }
                }
              }
            }
            goto LABEL_38;
          }
          if ( v17 && v50 && v15 )
          {
            if ( v15 == v19 )
            {
              LOBYTE(v20) = 1;
              goto LABEL_38;
            }
            do
            {
              if ( !v15 )
                break;
              v15 = *(_QWORD *)(v15 + 408);
            }
            while ( v15 != v19 );
            LOBYTE(v20) = 1;
            if ( v19 == v15 || v46 )
LABEL_38:
              KiSearchForNewThreadsForRescheduleContext(v51, (__int64)&v48);
          }
          else
          {
            LOBYTE(v20) = 1;
          }
          KiCommitRescheduleContext(v51, a1, 0LL, &v48);
          v21 = 0;
          LOBYTE(v9) = KiIsThreadConstrainedBySchedulingGroup(v18);
          if ( (_BYTE)v9 )
          {
            LOBYTE(v9) = KiShouldPreemptionBeDeferred(v22);
            if ( (_BYTE)v9 )
            {
              v21 = 0;
              if ( (v18[15] & 0xC00) == 0 )
                v21 = v20;
            }
          }
          v24 = v48;
          if ( v23 || v48 || v21 )
          {
            v25 = v49;
            KiReleasePrcbLocksForIsolationUnit(v49);
            if ( v26 )
            {
              KiCompleteRescheduleContext(v51, a1);
              v27 = (unsigned __int8 *)(a1 + 12760);
              KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
            }
            else
            {
              v27 = (unsigned __int8 *)(a1 + 12760);
            }
            if ( v24 )
            {
              v43 = 0;
              v48 = (_QWORD *)*v24;
              do
              {
                KiDeferredReadySingleThread(a1, (unsigned __int64)(v24 - 27), (__int64)&v48);
                v24 = v48;
                v43 += v20;
                if ( v48 )
                  v48 = (_QWORD *)*v48;
                if ( (v43 & 0xF) == 0 )
                  KiFlushSoftwareInterruptBatch(v27);
              }
              while ( v24 );
              KiFlushSoftwareInterruptBatch(v27);
              v25 = v49;
            }
            if ( v21 )
              KiInsertDeferredPreemptionApc(a1, v18, 0LL);
            LOBYTE(v9) = KiAcquirePrcbLocksForIsolationUnit(a1, 0, v25);
          }
          return v9;
        }
        v12 = v13 - *(unsigned int *)(a1 + 216);
      }
    }
  }
  return v9;
}
