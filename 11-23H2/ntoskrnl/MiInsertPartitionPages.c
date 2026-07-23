/*
 * XREFs of MiInsertPartitionPages @ 0x14065A9D0
 * Callers:
 *     MiAddPhysicalMemory @ 0x140A2B978 (MiAddPhysicalMemory.c)
 *     MmRemovePhysicalMemory @ 0x140A2D4C0 (MmRemovePhysicalMemory.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A445CC (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x140A44F50 (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x140288350 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14028B1E0 (RtlAvlRemoveNode.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeInvalidateAllCaches @ 0x14036DCE0 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036F73C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiIncreaseCommitLimits @ 0x140396244 (MiIncreaseCommitLimits.c)
 *     MiComputeCommitThresholds @ 0x140396358 (MiComputeCommitThresholds.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140551720 (IoUpdateDumpPhysicalRanges.c)
 *     RtlNumberOfSetBitsEx @ 0x1405A90E0 (RtlNumberOfSetBitsEx.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14061C4FC (MiUnlockDynamicMemoryExclusive.c)
 *     MiInitializeHugePfnDatabase @ 0x1406212A0 (MiInitializeHugePfnDatabase.c)
 *     MiInsertHugeRangeInList @ 0x14062151C (MiInsertHugeRangeInList.c)
 *     MiLockHugePfn @ 0x140621944 (MiLockHugePfn.c)
 *     MiReduceCommitLimits @ 0x140656AAC (MiReduceCommitLimits.c)
 *     MiActOnPartitionNodePages @ 0x1406585D0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14065906C (MiAddRangeToPartitionTree.c)
 *     MiClearPartitionPageBitMap @ 0x140659510 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionPageNodes @ 0x140659944 (MiDeletePartitionPageNodes.c)
 *     MiFreePartitionNodePages @ 0x14065A1C0 (MiFreePartitionNodePages.c)
 *     MiFreePartitionTree @ 0x14065A3E8 (MiFreePartitionTree.c)
 *     MiMergePageNodes @ 0x14065B460 (MiMergePageNodes.c)
 *     MiPartitionDeleteMemoryNode @ 0x14065B6DC (MiPartitionDeleteMemoryNode.c)
 *     MiMakePartitionMemoryBlock @ 0x140A45340 (MiMakePartitionMemoryBlock.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140A45538 (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiInsertPartitionPages(__int16 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r8
  unsigned __int64 *v10; // r13
  int updated; // r12d
  __int64 v12; // r9
  char v13; // al
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // r8
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // r10
  _QWORD *v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // rbx
  _QWORD *i; // rax
  __int64 v28; // rbx
  __int64 v29; // rdi
  unsigned __int64 v30; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v34; // eax
  bool v35; // zf
  __int64 v36; // rsi
  __m128i v37; // xmm0
  __int64 v38; // xmm1_8
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdi
  _QWORD *v42; // rcx
  __int64 v43; // rdi
  struct _KTHREAD *v44; // rsi
  __int64 v45; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v47; // ecx
  struct _KPRCB *v48; // rcx
  signed __int32 *v49; // r8
  signed __int32 v50; // eax
  signed __int32 v51; // ett
  int SessionId; // eax
  unsigned __int64 *v53; // rax
  unsigned __int64 *v54; // rsi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r9
  _DWORD *v58; // r8
  int v59; // eax
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // rdi
  __int64 v63; // rax
  unsigned __int64 **v64; // rdx
  unsigned __int64 *v65; // rcx
  unsigned __int64 *v66; // rcx
  unsigned __int64 *v67; // r8
  unsigned __int8 v68; // cl
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  int v71; // eax
  int v72; // r8d
  unsigned __int64 v73; // rbx
  _QWORD *v74; // rdx
  bool v75; // r8
  _QWORD *v76; // rax
  __int64 v77; // rdi
  __int64 v78; // rbx
  unsigned __int8 v79; // al
  unsigned __int8 v80; // di
  struct _KPRCB *v81; // r10
  _DWORD *v82; // r9
  int v83; // eax
  unsigned __int64 *v84; // [rsp+30h] [rbp-D0h]
  unsigned int v85; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v86; // [rsp+40h] [rbp-C0h]
  _QWORD *v87; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v88; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 *v89; // [rsp+58h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A0h]
  _QWORD *v91; // [rsp+70h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-88h] BYREF
  __m128i v93[5]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v94[9]; // [rsp+E0h] [rbp-20h] BYREF
  KIRQL v95; // [rsp+180h] [rbp+80h]
  unsigned __int8 v96; // [rsp+180h] [rbp+80h]
  int v97; // [rsp+188h] [rbp+88h]
  int v98; // [rsp+190h] [rbp+90h]
  __int64 v99; // [rsp+198h] [rbp+98h]

  v99 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v93, 0, 0x48uLL);
  memset(v94, 0, 0x48uLL);
  v10 = *(unsigned __int64 **)a3;
  updated = 0;
  v87 = 0LL;
  v12 = 0x3FFFFFFFFFFFFFFFLL;
  v88 = 0LL;
  v93[0].m128i_i64[1] = (__int64)a1;
  v93[0].m128i_i64[0] = a2;
  CurrentThread = KeGetCurrentThread();
  v13 = *(_DWORD *)(a3 + 24) & 0x14;
  v89 = v10;
  if ( v13 == 4 )
  {
    v14 = (_QWORD *)*v10;
    v15 = 0LL;
    while ( v14 )
    {
      v15 = v14;
      v14 = (_QWORD *)*v14;
    }
    while ( v15 )
    {
      v16 = (_QWORD *)v15[1];
      v17 = v15;
      v18 = v15;
      if ( v16 )
      {
        do
        {
          v15 = v16;
          v16 = (_QWORD *)*v16;
        }
        while ( v16 );
      }
      else
      {
        while ( 1 )
        {
          v15 = (_QWORD *)(v15[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v15 || (_QWORD *)*v15 == v18 )
            break;
          v18 = v15;
        }
      }
      if ( !(unsigned int)MiAddRangeToPartitionTree(&v88, v17[3] & 0x3FFFFFFFFFFFFFFFLL, v17[4], 4) )
        goto LABEL_17;
      v12 = 0x3FFFFFFFFFFFFFFFLL;
    }
  }
  if ( (*(_DWORD *)(a3 + 24) & 2) != 0 )
  {
    v19 = (_QWORD *)*v10;
    v20 = 0LL;
    while ( v19 )
    {
      v20 = v19;
      v19 = (_QWORD *)*v19;
    }
    while ( v20 )
    {
      v21 = (_QWORD *)v20[1];
      v22 = (__int64)v20;
      v23 = v20;
      if ( v21 )
      {
        do
        {
          v20 = v21;
          v21 = (_QWORD *)*v21;
        }
        while ( v21 );
      }
      else
      {
        while ( 1 )
        {
          v20 = (_QWORD *)(v20[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v20 || (_QWORD *)*v20 == v23 )
            break;
          v23 = v20;
        }
      }
      MiActOnPartitionNodePages(v22, 0xAu, 0, (__int16 **)v93);
    }
  }
  v24 = *(_DWORD *)(a3 + 24) & 0x20;
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
  {
    if ( (_DWORD)v24 )
    {
      updated = MiUpdatePartitionLargePfnBitMap(a1, v10, v9, v12);
      if ( updated < 0 )
        goto LABEL_107;
    }
  }
  else
  {
    if ( (_DWORD)v24 )
    {
      if ( !(unsigned int)MiInitializeHugePfnDatabase() )
      {
LABEL_17:
        updated = -1073741670;
        goto LABEL_107;
      }
      *(_DWORD *)(a3 + 24) |= 4u;
      updated = MiFreePartitionTree((__int16 *)a2, v10, *(_DWORD *)(a3 + 24), 1);
      if ( updated < 0 )
      {
        MiFreePartitionTree(a1, v10, 1, 1);
        goto LABEL_107;
      }
      a2 = 0LL;
      v10 = 0LL;
      v89 = 0LL;
    }
    if ( a1 != (__int16 *)MiSystemPartition )
    {
      if ( (*(_DWORD *)(a3 + 24) & 0x20) == 0 )
        MiClearPartitionPageBitMap((__int64)a1, (_QWORD **)v10);
      MiReduceCommitLimits(a1, a4, a4);
      MiReturnCommit((__int64)a1, a4);
    }
  }
  if ( (unsigned __int16 *)a2 != MiSystemPartition )
    goto LABEL_72;
  updated = MiFreePartitionTree((__int16 *)a2, v10, *(_DWORD *)(a3 + 24), 1);
  if ( (*(_DWORD *)(a3 + 24) & 4) != 0 )
  {
    MiFlushEntireTbDueToAttributeChange();
    ++dword_140C65B04;
    KeInvalidateAllCaches();
    IoUpdateDumpPhysicalRanges();
  }
  if ( updated < 0 )
  {
    v25 = *(_DWORD *)(a3 + 24);
    v26 = 0LL;
    if ( (v25 & 0x20) != 0 )
    {
      for ( i = (_QWORD *)*v10; i; i = (_QWORD *)*i )
        v26 = i;
      v28 = (v26[3] >> 18) & 0x3FFFFFLL;
      v29 = qword_140C67DF0 + 8 * v28;
      v30 = MiLockHugePfn(v29);
      MiInsertHugeRangeInList(0LL, v28, 0);
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140C67DF8 + 4 * ((((v29 - qword_140C67DF0) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((v29 - qword_140C67DF0) >> 3) & 0x1F)));
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v30 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
          v35 = (v34 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v34;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v30);
      goto LABEL_107;
    }
    v36 = 0LL;
    a2 = (__int64)a1;
    *((_QWORD *)&v94[0] + 1) = v93[0].m128i_i64[0];
    v94[1] = v93[1];
    v37 = v93[3];
    v94[2] = v93[2];
    v38 = v93[4].m128i_i64[0];
    *(_QWORD *)&v94[0] = _mm_srli_si128(v93[0], 8).m128i_u64[0];
    *(_DWORD *)(a3 + 24) = v25 & 0xFFFFFFFB;
    v94[3] = v37;
    *(_QWORD *)&v94[4] = v38;
    v39 = (_QWORD *)*v10;
    v99 = 0LL;
    while ( v39 )
    {
      v26 = v39;
      v39 = (_QWORD *)*v39;
    }
    if ( v26 )
    {
      do
      {
        v40 = (_QWORD *)v26[1];
        v41 = (__int64)v26;
        v42 = v26;
        if ( v40 )
        {
          do
          {
            v26 = v40;
            v40 = (_QWORD *)*v40;
          }
          while ( v40 );
        }
        else
        {
          while ( 1 )
          {
            v26 = (_QWORD *)(v26[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v26 || (_QWORD *)*v26 == v42 )
              break;
            v42 = v26;
          }
        }
        v36 += RtlNumberOfSetBitsEx((_QWORD *)(v41 + 32));
        if ( (*(_DWORD *)(a3 + 24) & 2) != 0 )
          MiActOnPartitionNodePages(v41, 0xAu, 0, (__int16 **)v94);
      }
      while ( v26 );
      v99 = v36;
    }
LABEL_72:
    if ( !a2 )
      goto LABEL_107;
    v98 = *(_DWORD *)(a3 + 24) & 0x21;
    if ( !a5 )
    {
      v43 = a2 + 216;
      --CurrentThread->SpecialApcDisable;
      v44 = KeGetCurrentThread();
      v45 = 0LL;
      _disable();
      AbEntrySummary = v44->AbEntrySummary;
      if ( v44->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v24, (__int64)v44)) != 0 )
      {
        _BitScanForward(&v47, AbEntrySummary);
        v85 = v47;
        v44->AbEntrySummary = AbEntrySummary & ~(1 << v47);
        v48 = KeGetCurrentPrcb();
        v49 = (signed __int32 *)v48->SchedulerAssist;
        if ( v49 )
        {
          _m_prefetchw(v49);
          v50 = *v49;
          do
          {
            v51 = v50;
            v50 = _InterlockedCompareExchange(v49, v50 & 0xFFDFFFFF, v50);
          }
          while ( v51 != v50 );
          if ( (v50 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v48);
        }
        _enable();
        v45 = (__int64)(&v44[1].Process + 12 * v85);
        if ( (unsigned __int64)(v43 - qword_140C659E8) >= 0x8000000000LL )
          SessionId = -1;
        else
          SessionId = MmGetSessionIdEx((__int64)v44->ApcState.Process);
        *(_DWORD *)(v45 + 8) = SessionId;
        *(_QWORD *)v45 = v43 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v43, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v43, v45, v43);
      if ( v45 )
        *(_BYTE *)(v45 + 18) = 1;
    }
    v53 = (unsigned __int64 *)*v10;
    v54 = 0LL;
    while ( v53 )
    {
      v54 = v53;
      v53 = (unsigned __int64 *)*v53;
    }
    if ( !v54 )
      goto LABEL_93;
    while ( 1 )
    {
      v84 = v54;
      v61 = v54[3];
      v91 = v54 + 3;
      v62 = v61 & 0x3FFFFFFFFFFFFFFFLL;
      v63 = RtlNumberOfSetBitsEx(v54 + 4);
      v64 = (unsigned __int64 **)v54[1];
      v65 = v54;
      v86 = v63;
      if ( v64 )
      {
        v66 = *v64;
        v54 = (unsigned __int64 *)v54[1];
        while ( v66 )
        {
          v54 = v66;
          v66 = (unsigned __int64 *)*v66;
        }
      }
      else
      {
        while ( 1 )
        {
          v54 = (unsigned __int64 *)(v54[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v54 || (unsigned __int64 *)*v54 == v65 )
            break;
          v65 = v54;
        }
      }
      v95 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 224));
      RtlAvlRemoveNode(v89, v84);
      if ( v98 == 33 )
        break;
      if ( (*(_DWORD *)(a3 + 24) & 0x10) == 0 )
      {
        v67 = &v88;
        goto LABEL_121;
      }
      v97 = 1;
LABEL_122:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 224));
      if ( (_DWORD)KiIrqlFlags )
      {
        v68 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v68 <= 0xFu && v95 <= 0xFu && v68 >= 2u )
        {
          v69 = KeGetCurrentPrcb();
          v70 = v69->SchedulerAssist;
          v71 = ~(unsigned __int16)(-1LL << (v95 + 1));
          v35 = (v71 & v70[5]) == 0;
          v70[5] &= v71;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick((__int64)v69);
        }
      }
      __writecr8(v95);
      if ( (*(_DWORD *)(a3 + 24) & 0x310) == 0 && v98 != 33 )
        MiIncreaseCommitLimits(a2, v86, v86, 1, 0LL);
      *(_DWORD *)(a3 + 24) |= 0x40u;
      v72 = *(_DWORD *)(a3 + 24);
      if ( (v72 & 0x100) != 0 )
      {
        updated = 0;
      }
      else if ( (v72 & 0x800) == 0 )
      {
        v73 = (unsigned __int64)v84;
        updated = MiFreePartitionNodePages((__int16 *)a2, (__int64)v84, v72);
        if ( updated < 0 )
        {
          MiPartitionDeleteMemoryNode(a2, v62, v99);
          v77 = (v62 >> 18) & 0x3FFFFF;
          v78 = qword_140C67DF0 + 8LL * (unsigned int)v77;
          v96 = MiLockHugePfn(v78);
          MiInsertHugeRangeInList(0LL, (unsigned int)v77, 0);
          _InterlockedAnd(
            (volatile signed __int32 *)(qword_140C67DF8 + 4 * ((((v78 - qword_140C67DF0) >> 3) & 0x3FFFFFuLL) >> 5)),
            ~(1 << (((v78 - qword_140C67DF0) >> 3) & 0x1F)));
          if ( (_DWORD)KiIrqlFlags && (v79 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0) && v79 <= 0xFu )
          {
            v80 = v96;
            if ( v96 <= 0xFu && v79 >= 2u )
            {
              v81 = KeGetCurrentPrcb();
              v82 = v81->SchedulerAssist;
              v83 = ~(unsigned __int16)(-1LL << (v96 + 1));
              v35 = (v83 & v82[5]) == 0;
              v82[5] &= v83;
              if ( v35 )
                KiRemoveSystemWorkPriorityKick((__int64)v81);
            }
          }
          else
          {
            v80 = v96;
          }
          __writecr8(v80);
          goto LABEL_155;
        }
        goto LABEL_135;
      }
      v73 = (unsigned __int64)v84;
LABEL_135:
      if ( !v97 )
        goto LABEL_155;
      v74 = v87;
      v75 = 0;
      if ( !v87 )
        goto LABEL_154;
      while ( (*v91 & 0x3FFFFFFFFFFFFFFFuLL) < (v74[3] & 0x3FFFFFFFFFFFFFFFuLL) )
      {
        v76 = (_QWORD *)*v74;
        if ( !*v74 )
        {
          v75 = 0;
          goto LABEL_154;
        }
LABEL_152:
        v74 = v76;
      }
      v76 = (_QWORD *)v74[1];
      if ( v76 )
        goto LABEL_152;
      v75 = 1;
LABEL_154:
      RtlAvlInsertNodeEx((unsigned __int64 *)&v87, (unsigned __int64)v74, v75, v73);
LABEL_155:
      if ( !v54 )
      {
LABEL_93:
        if ( v98 == 33 || (*(_DWORD *)(a3 + 24) & 0x10) == 0 )
          MiMakePartitionMemoryBlock(a2);
        if ( !a5 )
          MiUnlockDynamicMemoryExclusive(a2, (__int64)CurrentThread);
        if ( (*(_DWORD *)(a3 + 24) & 0x10) == 0 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 16424), &LockHandle);
          MiComputeCommitThresholds((_QWORD *)a2);
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( (_DWORD)KiIrqlFlags )
          {
            v56 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v56 <= 0xFu && LockHandle.OldIrql <= 0xFu && v56 >= 2u )
            {
              v57 = KeGetCurrentPrcb();
              v58 = v57->SchedulerAssist;
              v59 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v35 = (v59 & v58[5]) == 0;
              v58[5] &= v59;
              if ( v35 )
                KiRemoveSystemWorkPriorityKick((__int64)v57);
            }
          }
          __writecr8(OldIrql);
        }
        goto LABEL_107;
      }
    }
    v67 = 0LL;
LABEL_121:
    v97 = MiMergePageNodes(a2, v84, v67);
    *(_QWORD *)(a2 + 17040) += v86;
    *(_BYTE *)(a2 + 12) = 1;
    goto LABEL_122;
  }
LABEL_107:
  MiDeletePartitionPageNodes((unsigned __int64 *)&v87);
  MiDeletePartitionPageNodes(&v88);
  return (unsigned int)updated;
}
