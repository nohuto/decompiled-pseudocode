/*
 * XREFs of KiSearchForNewThread @ 0x140240420
 * Callers:
 *     KiSwapThread @ 0x14023F4C0 (KiSwapThread.c)
 *     KiIdleSchedule @ 0x1403076B0 (KiIdleSchedule.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiCommitRescheduleContextEntry @ 0x140242F60 (KiCommitRescheduleContextEntry.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x140243C40 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x14030819C (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1403097C4 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034E478 (KiUpdateVPBackingThreadPriority.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KzReleaseAdditionalPrcbLocks @ 0x14056D7E4 (KzReleaseAdditionalPrcbLocks.c)
 *     KiParkCurrentProcessor @ 0x14057E38C (KiParkCurrentProcessor.c)
 *     KiSearchForNewThreadOnSubNode @ 0x14057EC9C (KiSearchForNewThreadOnSubNode.c)
 */

__int64 __fastcall KiSearchForNewThread(__int64 a1, char a2, __int64 *a3)
{
  __int64 v3; // r14
  __int64 *v4; // r13
  char v5; // bl
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned int v12; // r9d
  unsigned __int8 *v13; // rax
  struct _KPRCB **v14; // r8
  unsigned int v15; // r10d
  unsigned int v16; // edx
  unsigned int v17; // r13d
  _QWORD *v18; // rsi
  __int64 v19; // r9
  struct _KPRCB *v20; // r15
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdx
  ULONG_PTR NextThread; // rbx
  char v23; // cl
  char v24; // cl
  char v25; // al
  char v26; // dl
  unsigned __int8 v27; // cl
  _QWORD *v28; // r8
  unsigned int v29; // r9d
  _QWORD *v30; // rdx
  _BYTE *v31; // rcx
  __int64 v32; // rdx
  __int64 RescheduleContextEntryForPrcb; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r9
  _QWORD *v37; // r11
  char v38; // r10
  __int64 v39; // rdx
  unsigned int v40; // r10d
  _QWORD *v41; // rcx
  char v42; // si
  unsigned int v43; // r14d
  unsigned int v44; // ebx
  unsigned __int8 *v45; // rdx
  unsigned __int8 v46; // al
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  unsigned __int64 *v49; // r10
  char v50; // al
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // r9
  unsigned __int64 *v53; // r8
  int v54; // edx
  __int64 v55; // rdx
  char v56; // r13
  __int64 v57; // r15
  __int64 v58; // r9
  __int64 v59; // rcx
  int v60; // r8d
  unsigned __int64 v61; // rcx
  unsigned int v62; // eax
  int v63; // esi
  unsigned __int64 v64; // rbx
  unsigned __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rdx
  unsigned __int64 v70; // rbx
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  unsigned int i; // ebx
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rbx
  __int64 v80; // rcx
  __int64 v81; // r9
  int v84; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v85; // [rsp+38h] [rbp-C8h]
  __int64 *v86; // [rsp+40h] [rbp-C0h] BYREF
  struct _KPRCB **v87; // [rsp+48h] [rbp-B8h]
  __int64 v88; // [rsp+50h] [rbp-B0h]
  __int64 v89; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v90; // [rsp+60h] [rbp-A0h]
  _BYTE v91[24]; // [rsp+68h] [rbp-98h] BYREF
  int v92; // [rsp+80h] [rbp-80h]
  int v93; // [rsp+84h] [rbp-7Ch]
  int v94; // [rsp+88h] [rbp-78h]
  unsigned __int64 v95; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v96; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v97; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v98[42]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v86 = a3;
  v4 = a3;
  v89 = 0LL;
  v5 = a2;
  memset(v91, 0, sizeof(v91));
  if ( v3 && v3 != *(_QWORD *)(a1 + 24) )
  {
    v7 = *a3;
    v8 = *a3 & 0xFFFFFFFFFFFFFFFEuLL;
    v86 = (__int64 *)v8;
    if ( (v7 & 1) != 0 )
    {
      KzReleaseAdditionalPrcbLocks(*(_QWORD *)(v8 + 34904) + 8LL, **(unsigned __int8 **)(v8 + 34904), &v86, 1LL);
      *v4 &= ~1uLL;
    }
    return v3;
  }
  memset(v98, 0, sizeof(v98));
  v9 = *v4;
  v10 = *v4;
  v87 = 0LL;
  v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  v84 = 0;
  v12 = v9 & 1;
  v95 = v11;
  v90 = v12;
  if ( v12 )
  {
    v13 = *(unsigned __int8 **)(v11 + 34904);
    v14 = (struct _KPRCB **)(v13 + 8);
    v87 = (struct _KPRCB **)(v13 + 8);
    v15 = *v13;
    v84 = v15;
    v16 = 0;
    v85 = 0;
    if ( !v15 )
      goto LABEL_36;
  }
  else
  {
    v14 = (struct _KPRCB **)&v95;
    v85 = 0;
    v15 = 1;
    v87 = (struct _KPRCB **)&v95;
    v84 = 1;
  }
  v17 = v85;
  v18 = &v98[6];
  v19 = v15;
  v88 = v15;
  do
  {
    *((_OWORD *)v18 - 2) = 0LL;
    *((_OWORD *)v18 - 1) = 0LL;
    *v18 = 0LL;
    *(v18 - 1) = -1LL;
    *((_BYTE *)v18 + 4) = 63;
    v20 = *v14;
    *(v18 - 4) = *v14;
    SharedReadyQueue = v20->SharedReadyQueue;
    if ( (v20->IdleState & 8) != 0 && (v20->SchedulerSubNode->NonParkedSet & SharedReadyQueue->Affinity) != 0 )
      SharedReadyQueue = 0LL;
    *(v18 - 3) = SharedReadyQueue;
    NextThread = (ULONG_PTR)v20->NextThread;
    *(v18 - 2) = NextThread;
    if ( !NextThread )
    {
      NextThread = (ULONG_PTR)v20->CurrentThread;
      *(v18 - 2) = NextThread;
    }
    if ( v20->NextThread == (_KTHREAD *)NextThread )
    {
      *(_BYTE *)v18 |= 4u;
    }
    else
    {
      v23 = *(_BYTE *)v18;
      if ( v20 == KeGetCurrentPrcb() )
        v24 = v23 | 4;
      else
        v24 = v23 & 0xFB;
      *(_BYTE *)v18 = v24;
    }
    if ( (*(_DWORD *)(NextThread + 120) & 0x400000) != 0
      && !_interlockedbittestandset64((volatile signed __int32 *)(NextThread + 64), 0LL) )
    {
      if ( (*(_DWORD *)(NextThread + 120) & 0x400000) != 0 && *(_DWORD *)(NextThread + 536) == v20->Number )
      {
        if ( *(_BYTE *)(NextThread + 388) == 2
          || *(_BYTE *)(NextThread + 388) == 3
          || *(_BYTE *)(NextThread + 388) == 5
          && (v25 = *(_BYTE *)(NextThread + 112) & 7, v25 != 1)
          && (unsigned __int8)(v25 - 3) > 3u )
        {
          KiUpdateVPBackingThreadPriority(NextThread);
          v14 = v87;
          v19 = v88;
        }
      }
      *(_QWORD *)(NextThread + 64) = 0LL;
    }
    v26 = ((v20->IdleState & 1) == 0) | *(_BYTE *)v18 & 0xFE;
    *(_BYTE *)v18 = v26;
    v27 = v26 ^ (v26 ^ (v20->PriorityState->AllFields >> 6)) & 2;
    *(_BYTE *)v18 = v27;
    if ( ((v27 >> 1) & 1u) > v17 )
      v17 = (v27 >> 1) & 1;
    ++v14;
    v18 += 5;
    v87 = v14;
    v88 = --v19;
  }
  while ( v19 );
  v11 = v95;
  v15 = v84;
  v12 = v90;
  v5 = a2;
  v85 = v17;
  v16 = v17;
  v4 = v86;
LABEL_36:
  HIDWORD(v98[0]) = v16;
  LODWORD(v98[1]) = v12;
  LOBYTE(v98[0]) = v15;
  if ( v12 )
    BYTE1(v98[0]) = *(_BYTE *)(*(_QWORD *)(v11 + 34904) + 1LL);
  else
    BYTE1(v98[0]) = 0;
  if ( v16 )
  {
    v28 = 0LL;
    v29 = 0;
    if ( v15 )
    {
      v30 = &v98[2];
      while ( v30[2] == *(_QWORD *)(*v30 + 34944LL) )
      {
        ++v29;
        v30 += 5;
        if ( v29 >= v15 )
          goto LABEL_46;
      }
      v28 = v30;
LABEL_46:
      v31 = &v98[6];
      v32 = v15;
      do
      {
        if ( v31 - 32 != (_BYTE *)v28 )
        {
          *((_QWORD *)v31 - 2) = v28[2];
          *v31 = *((_BYTE *)v28 + 32) | 0x20;
        }
        v31 += 40;
        --v32;
      }
      while ( v32 );
    }
  }
  if ( !v5 && !v3 )
  {
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v98, a1);
    LOBYTE(v34) = 1;
    KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v35, 0LL, v34);
    if ( (v38 & 2) != 0 )
    {
      v39 = LOBYTE(v98[0]);
      v40 = 0;
      if ( LOBYTE(v98[0]) )
      {
        do
        {
          v41 = &v98[5 * v40 + 2];
          if ( v41 != v37 )
          {
            LOBYTE(v36) = 1;
            KiAdjustRescheduleContextEntryForThreadRemoval(v41, v39, 0LL, v36);
            v39 = LOBYTE(v98[0]);
          }
          ++v40;
        }
        while ( v40 < (unsigned __int8)v39 );
      }
      HIDWORD(v98[0]) = 0;
    }
  }
  KiSearchForNewThreadsForRescheduleContext(v98, &v89);
  v42 = 0;
  v43 = 1;
  v44 = 0;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    v43 = 3;
  if ( LOBYTE(v98[0]) )
  {
    do
      v42 |= KiCommitRescheduleContextEntry(&v98[5 * v44++ + 2], a1, v43, &v89);
    while ( v44 < LOBYTE(v98[0]) );
  }
  if ( LODWORD(v98[1]) == 1 )
  {
    v45 = *(unsigned __int8 **)(v98[2] + 34904LL);
    v46 = v45[1] + 1;
    if ( v46 >= *v45 )
      v46 = 0;
    v45[1] = v46;
  }
  if ( v89 || v42 )
  {
    KiReleasePrcbLocksForIsolationUnit(v4);
    if ( v42 )
    {
      KiCompleteRescheduleContext(v98, a1);
      KiFlushSoftwareInterruptBatch(a1 + 12760);
    }
    if ( v89 )
      KiReadyDeferredReadyList(a1, &v89);
    KiAcquirePrcbLocksForIsolationUnit(a1, 0LL, v4);
    goto LABEL_75;
  }
  v47 = *v4;
  v48 = *v4 & 0xFFFFFFFFFFFFFFFEuLL;
  v96 = v48;
  if ( (v47 & 1) == 0 )
  {
LABEL_75:
    v49 = (unsigned __int64 *)v86;
    goto LABEL_76;
  }
  KzReleaseAdditionalPrcbLocks(*(_QWORD *)(v48 + 34904) + 8LL, **(unsigned __int8 **)(v48 + 34904), &v96, 1LL);
  v49 = (unsigned __int64 *)v86;
  *v86 &= ~1uLL;
LABEL_76:
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 && v3 != *(_QWORD *)(a1 + 24) )
    return v3;
  v50 = *(_BYTE *)(a1 + 35);
  if ( (v50 & 1) != 0 )
    __fastfail(0x21u);
  if ( (v50 & 8) != 0 )
  {
    if ( !v3 )
      KiReleasePrcbLocksForIsolationUnit(v49);
    return v3;
  }
  v51 = *v49;
  v52 = *v49 & 0xFFFFFFFFFFFFFFFEuLL;
  v97 = v52;
  if ( (v51 & 1) != 0 )
  {
    v53 = (unsigned __int64 *)(*(_QWORD *)(v52 + 34904) + 8LL);
    v54 = **(unsigned __int8 **)(v52 + 34904);
    if ( !**(_BYTE **)(v52 + 34904) )
      goto LABEL_87;
  }
  else
  {
    v53 = &v97;
    v54 = 1;
  }
  do
    _InterlockedAnd64((volatile signed __int64 *)(v53[--v54] + 48), 0LL);
  while ( v54 );
LABEL_87:
  *v49 = 0LL;
  v55 = *(_QWORD *)(a1 + 192);
  v56 = *(_BYTE *)(a1 + 209);
  v90 = v55;
  v57 = *(_QWORD *)(v55 + 128);
  v58 = *(_QWORD *)(a1 + 34880) ^ *(_QWORD *)(v55 + 152);
  v59 = *(_QWORD *)(a1 + 200) ^ v57;
  v60 = *(unsigned __int16 *)(v55 + 136);
  v84 = v60;
  v88 = v58;
  if ( (KiCacheAwareScheduling & 2) != 0 )
    v57 &= *(_QWORD *)(a1 + 34928);
  v61 = ~*(_QWORD *)(v55 + 16) & v59;
  v62 = v60 << 6;
  v85 = v60 << 6;
  v63 = v60 << 6;
  while ( 1 )
  {
    v87 = (struct _KPRCB **)v61;
    if ( !v61 )
    {
      v63 = v62;
      if ( !v58 )
        break;
    }
    if ( (v58 & v57) != 0 )
    {
      v64 = __ROR8__(v58 & v57, v56);
      while ( 1 )
      {
        _BitScanForward64(&v65, v64);
        v92 = v65;
        v66 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v63 + (((_BYTE)v65 + v56) & 0x3F)]];
        v67 = *(_QWORD *)(v66 + 34880);
        v68 = *(_QWORD *)(v66 + 34888);
        v69 = ~v67;
        v88 = v69 & v58;
        v64 &= __ROR8__(v69, v56);
        v3 = KiSearchForNewThreadOnProcessor(a1, 0LL, v68, v49);
        if ( v3 )
          return v3;
        v58 = v88;
        v49 = (unsigned __int64 *)v86;
        if ( !v64 )
        {
          v61 = (unsigned __int64)v87;
          v55 = v90;
          v60 = v84;
          break;
        }
      }
    }
    if ( (v61 & v57) != 0 )
    {
      v70 = __ROR8__(v61 & v57, v56);
      while ( 1 )
      {
        _BitScanForward64(&v71, v70);
        v70 ^= 1LL << v71;
        v93 = v71;
        v3 = KiSearchForNewThreadOnProcessor(
               a1,
               KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v63 + (((_BYTE)v71 + v56) & 0x3F)]],
               0LL,
               v49);
        if ( v3 )
          return v3;
        v49 = (unsigned __int64 *)v86;
        if ( !v70 )
        {
          v61 = (unsigned __int64)v87;
          v55 = v90;
          v60 = v84;
          goto LABEL_103;
        }
      }
    }
    v63 = v60 << 6;
LABEL_103:
    v58 = v88;
    v49 = (unsigned __int64 *)v86;
    v61 &= ~v57;
    v57 = *(_QWORD *)(v55 + 128);
    v62 = v85;
  }
  v72 = *(unsigned __int16 *)(v55 + 138);
  *(_DWORD *)v91 = *(unsigned __int16 *)(v55 + 138);
  memset(&v91[4], 0, 20);
  *(_QWORD *)&v91[8] = KeNodeBlock[v72];
  for ( i = *(_DWORD *)(*(_QWORD *)&v91[8] + 16LL); ; i = *(_DWORD *)(v76 + 16) )
  {
    *(_DWORD *)&v91[16] = i;
    while ( i )
    {
      _BitScanForward((unsigned int *)&v77, i);
      v94 = v77;
      i &= ~(1 << v77);
      *(_DWORD *)&v91[16] = i;
      v78 = *(_QWORD *)(*(_QWORD *)&v91[8] + 8 * v77 + 24);
      if ( !v78 )
        goto LABEL_114;
      if ( v78 != *(_QWORD *)(a1 + 192) )
      {
        v3 = KiSearchForNewThreadOnSubNode(a1, v78, v49);
        if ( v3 )
          return v3;
        v49 = (unsigned __int64 *)v86;
      }
    }
    v74 = *(_DWORD *)&v91[4] + 1;
    *(_DWORD *)&v91[4] = v74;
    if ( v74 == (unsigned __int16)KeNumberNodes )
      break;
    v75 = *(unsigned int *)(qword_140C65A98
                          + 4LL * (v74 + (unsigned int)(unsigned __int16)KeNumberNodes * *(_DWORD *)v91));
    if ( (_DWORD)v75 == -1 )
      break;
    v76 = KeNodeBlock[v75];
    *(_QWORD *)&v91[16] = 0LL;
    *(_QWORD *)&v91[8] = v76;
  }
LABEL_114:
  v79 = *(_QWORD *)(a1 + 192);
  v80 = *(_QWORD *)(a1 + 200);
  if ( (v80 & *(_QWORD *)(v79 + 80)) != 0 && (v80 & *(_QWORD *)(v79 + 96)) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v79 + 112));
    KiAcquirePrcbLocksForIsolationUnit(a1, 0LL, v86);
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 && v3 != *(_QWORD *)(a1 + 24) )
    {
      KiDowngradeIsolationUnitLockHandle(v86, 0LL);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v79 + 112));
      return v3;
    }
    LOBYTE(v81) = 1;
    KiParkCurrentProcessor(a1, v79, v86, v81);
    v49 = (unsigned __int64 *)v86;
  }
  v3 = 0LL;
  if ( !a2 )
  {
    v84 = 0;
    *v49 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v84);
      while ( *(_QWORD *)(a1 + 48) );
    }
    return *(_QWORD *)(a1 + 16);
  }
  return v3;
}
