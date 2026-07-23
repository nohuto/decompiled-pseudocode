/*
 * XREFs of ExAllocateHeapPool @ 0x1402AD2B0
 * Callers:
 *     ExpAllocatePoolWithTagFromNode @ 0x1402AD220 (ExpAllocatePoolWithTagFromNode.c)
 * Callees:
 *     RtlpHpVsContextMultiAlloc @ 0x140249D90 (RtlpHpVsContextMultiAlloc.c)
 *     RtlpHpVsContextAllocateInternal @ 0x14024A090 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpAllocateHeap @ 0x14024D400 (RtlpHpAllocateHeap.c)
 *     RtlpHpSegAlloc @ 0x14024DB20 (RtlpHpSegAlloc.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140289AC0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpFreeHeap @ 0x1402AC490 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhSlotAllocate @ 0x1402ADC90 (RtlpHpLfhSlotAllocate.c)
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     ExFreeHeapPool @ 0x140322ED0 (ExFreeHeapPool.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x1403238E0 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLargeAlloc @ 0x140323EBC (RtlpHpLargeAlloc.c)
 *     ExpAddTagForBigPages @ 0x140331990 (ExpAddTagForBigPages.c)
 *     ExpPlFindLimitEntry @ 0x14035C8E8 (ExpPlFindLimitEntry.c)
 *     ExpPoolTrackerChargeEntry @ 0x1403BA09C (ExpPoolTrackerChargeEntry.c)
 *     RtlHeapZero @ 0x1403D8230 (RtlHeapZero.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404287F0 (RtlpInterlockedPopEntrySList.c)
 *     InterlockedPushListSList @ 0x1404288A0 (InterlockedPushListSList.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     ExCheckSingleFilter @ 0x14046AAFE (ExCheckSingleFilter.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpLogHeapFailure @ 0x1405B4B5C (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasAppend @ 0x1405B6500 (RtlpHpExtrasAppend.c)
 *     EtwTracePool @ 0x1405FD220 (EtwTracePool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140607BA8 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateHeapSpecialPool @ 0x14060EDA0 (ExAllocateHeapSpecialPool.c)
 *     VfHandlePoolAlloc @ 0x140AD1FB0 (VfHandlePoolAlloc.c)
 */

__int64 __fastcall ExAllocateHeapPool(unsigned int PoolType, unsigned __int64 a2, int a3, unsigned int a4, __int16 a5)
{
  _SLIST_ENTRY *v5; // r11
  ULONG_PTR v6; // rdi
  unsigned int v7; // ebx
  unsigned __int64 v9; // rsi
  unsigned __int32 v10; // r8d
  unsigned __int64 v11; // r10
  int v12; // r15d
  POOL_TYPE v13; // r14d
  __int16 v14; // r9
  unsigned int v15; // r13d
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r12
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r15
  __int64 v21; // rcx
  unsigned int v22; // ebx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  int v25; // ecx
  unsigned __int64 v26; // rsi
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  unsigned __int8 v31; // al
  unsigned __int64 v32; // rdi
  int v33; // r9d
  unsigned int v34; // r8d
  int v35; // r12d
  __int64 v36; // rax
  unsigned int v37; // r12d
  int v38; // r8d
  __int64 v39; // rdx
  unsigned int v40; // esi
  unsigned int v41; // r10d
  __int64 v42; // rbx
  int v43; // eax
  __int64 v44; // r13
  ULONG_PTR v45; // rdi
  __int64 v47; // rcx
  unsigned int v48; // eax
  __int64 v49; // rcx
  unsigned __int16 *v50; // rsi
  __int64 v51; // r8
  unsigned int v52; // ecx
  unsigned __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // rdi
  __int64 Heap; // rax
  int v57; // ebx
  __int64 v58; // rax
  __int64 v59; // r11
  __int64 v60; // r9
  int v61; // edx
  unsigned int v62; // ebx
  unsigned int v63; // r8d
  __int64 v64; // rsi
  int v65; // eax
  __int64 v66; // r12
  int updated; // eax
  __int64 v68; // rcx
  unsigned int v69; // eax
  int v70; // eax
  _SLIST_ENTRY *v71; // rdx
  ULONG v72; // eax
  int v73; // r11d
  __int64 v74; // rcx
  __int64 v75; // rax
  unsigned __int64 v76; // rbx
  int v77; // r10d
  __int64 v78; // rcx
  __int64 LimitEntry; // rax
  unsigned __int64 OldIrql; // rsi
  unsigned __int64 v81; // r8
  __int64 HeapSpecialPool; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v86; // eax
  bool v87; // zf
  __int64 v88; // r9
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rax
  unsigned __int8 v92; // al
  struct _KPRCB *v93; // r10
  _DWORD *v94; // r9
  int v95; // eax
  int v96; // [rsp+40h] [rbp-81h]
  unsigned int v97; // [rsp+40h] [rbp-81h]
  __int64 *v98; // [rsp+48h] [rbp-79h]
  __int64 v99; // [rsp+48h] [rbp-79h]
  __int64 v100; // [rsp+48h] [rbp-79h]
  unsigned __int64 v101; // [rsp+50h] [rbp-71h]
  int v102; // [rsp+58h] [rbp-69h] BYREF
  _SLIST_ENTRY **p_Next; // [rsp+60h] [rbp-61h] BYREF
  _SLIST_ENTRY *v104; // [rsp+68h] [rbp-59h] BYREF
  __int64 v105; // [rsp+70h] [rbp-51h]
  __int64 v106; // [rsp+78h] [rbp-49h]
  __int64 v107; // [rsp+80h] [rbp-41h]
  PSLIST_ENTRY ListEnd; // [rsp+88h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE v109; // [rsp+90h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v111; // [rsp+C0h] [rbp-1h] BYREF
  __int64 v112; // [rsp+D0h] [rbp+Fh]
  __int64 retaddr; // [rsp+118h] [rbp+57h]
  unsigned int v114; // [rsp+120h] [rbp+5Fh]
  unsigned int v115; // [rsp+120h] [rbp+5Fh]
  unsigned int v116; // [rsp+130h] [rbp+6Fh]

  v5 = 0LL;
  v6 = a4;
  v7 = (PoolType >> 9) & 2;
  v9 = a2;
  v10 = PoolType;
  v11 = 0LL;
  if ( (PoolType & 0x44) == 0x44 )
    v10 = PoolType & 0xFFFFFFFB;
  v12 = 1;
  v13 = v10 | 0x200;
  if ( (v10 & 0x201) != 0 || (ExpPoolFlags & 0x400) == 0 )
    v13 = v10;
  if ( (ExpPoolFlags & 8) == 0 )
    goto LABEL_6;
  if ( (v13 & 0x80000080) == 0 )
    return VfHandlePoolAlloc(v13, HighPoolPriority, 0LL, 0, retaddr);
  v13 &= ~0x80u;
  if ( v13 < NonPagedPool )
  {
    v14 = a5;
    if ( (MmVerifierData & 1) != 0 )
      v14 = 1;
  }
  else
  {
LABEL_6:
    v14 = a5;
  }
  v15 = a3 & 0x7FFFFFFF;
  v116 = v15;
  if ( !v15 )
  {
    v15 = 811884866;
    v116 = 811884866;
  }
  if ( a2 <= 0xFE0
    && (MmSpecialPoolTag
     && a2
     && ((unsigned int)ExCheckSingleFilter(v15, (unsigned int)MmSpecialPoolTag) || v81 >= v9 + 16 && v81 < v9 + 32)
     || (v14 & 1) != 0) )
  {
    HeapSpecialPool = ExAllocateHeapSpecialPool((unsigned int)v13, v9, v15);
    v11 = HeapSpecialPool;
    if ( HeapSpecialPool )
    {
      _InterlockedIncrement(&ExpSpecialAllocations);
      return HeapSpecialPool;
    }
    v5 = 0LL;
  }
  if ( !v9 )
    v9 = 1LL;
  if ( (_DWORD)v6 == 0x80000000 )
    goto LABEL_156;
  if ( (unsigned int)v6 >= (unsigned __int16)KeNumberNodes )
    KeBugCheckEx(0xC2u, 0xEuLL, v6, (int)v13 & 0xFFFFFFFFFFFFFF7FuLL, v15);
  if ( (_DWORD)v6 == 0x80000000 )
LABEL_156:
    LODWORD(v6) = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  if ( (unsigned int)v6 >= dword_140C74AA0 )
    LODWORD(v6) = (_DWORD)v5;
  v16 = &qword_140C74AC0[1048 * (unsigned int)v6];
  if ( v13 < NonPagedPool )
  {
    v18 = v16[3];
  }
  else
  {
    if ( (v13 & 1) != 0 )
    {
      v17 = 2LL;
    }
    else
    {
      v17 = (__int64)v5;
      if ( (v13 & 0x200) != 0 )
        v17 = 1LL;
    }
    v18 = v16[v17];
  }
  if ( v9 > 0xFE0 )
  {
    v55 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v55 >= 0x10000 || (((_WORD)v9 + 15) & 0xFF0u) > 0xFC0 )
      v55 = (v55 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v55 < v9 )
    {
LABEL_190:
      v45 = (ULONG_PTR)v5;
      if ( !v11 )
        goto LABEL_192;
LABEL_191:
      RtlpHpFreeHeap((_DWORD *)v18, v11, 0, 0LL, v5);
      goto LABEL_192;
    }
    if ( (v55 & 0xFFF) != 0 || v55 > *(unsigned int *)(v18 + 528) )
    {
      Heap = (__int64)RtlpHpAllocateHeap(v18, v55, v7, v14);
    }
    else
    {
      v68 = v18 + 320;
      if ( v55 > *(unsigned int *)(v18 + 336) )
        v68 = v18 + 512;
      Heap = RtlpHpSegAlloc(v68, v55, v55, v55, ((unsigned int)v13 >> 9) & 2);
    }
    v57 = Heap;
    v101 = Heap;
    if ( !Heap )
    {
      v45 = 0LL;
      goto LABEL_192;
    }
    if ( !(unsigned int)ExpAddTagForBigPages(Heap, v15, v55, v13, 0, 0) )
    {
      v11 = v101;
      v5 = 0LL;
      v45 = 0LL;
      goto LABEL_191;
    }
    memset(&v109, 0, sizeof(v109));
    if ( v15 == PoolHitTag )
      __debugbreak();
    v58 = DWORD1(PerfGlobalGroupMask);
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
      v58 = EtwTracePool(3616, v13, v15, v57, v55);
    LODWORD(v58) = KeGetPcr()->Prcb.Number;
    v59 = PoolTrackTableSize;
    v100 = PoolTrackTableSize;
    v60 = (__int64)*(&ExPoolTagTables + v58);
    v61 = PoolTrackTableMask;
    v107 = v60;
    v106 = PoolTrackTableMask;
    v62 = PoolTrackTableMask & ((40543 * v15) ^ ((40543 * (unsigned __int64)v15) >> 32));
    v63 = v62;
    v97 = v62;
    while ( 1 )
    {
      v64 = 80LL * v62;
      v65 = *(_DWORD *)(v64 + v60);
      v66 = v64 + v60;
      if ( v65 == v15 )
      {
        v12 = ExpPoolTrackerChargeEntry((v13 & 1) == 0, v55, v64 + v60);
        goto LABEL_102;
      }
      if ( v65 )
      {
LABEL_99:
        v62 = v61 & (v62 + 1);
        if ( v62 == v63 )
        {
          ExpInsertPoolTrackerExpansion(v15, v55, v13 & 0xFFFFFFDF);
LABEL_102:
          v45 = v101;
          goto LABEL_61;
        }
      }
      else
      {
        v77 = *(_DWORD *)(v64 + PoolTrackTable);
        if ( v77 )
        {
          *(_DWORD *)v66 = v77;
          v78 = *(_QWORD *)(v64 + PoolTrackTable + 72);
          if ( v78 )
            *(_QWORD *)(v66 + 72) = v78;
        }
        else
        {
          if ( v62 == v59 - 1 )
            goto LABEL_99;
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v109);
          v105 = v64 + PoolTrackTable;
          if ( !*(_DWORD *)(v64 + PoolTrackTable) )
          {
            LimitEntry = ExpPlFindLimitEntry(v15);
            *(_QWORD *)(v105 + 72) = LimitEntry;
            *(_QWORD *)(v66 + 72) = LimitEntry;
            *(_DWORD *)(v64 + PoolTrackTable) = v15;
            *(_DWORD *)v66 = v15;
          }
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&v109);
          OldIrql = v109.OldIrql;
          if ( (_DWORD)KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
              && CurrentIrql <= 0xFu
              && v109.OldIrql <= 0xFu
              && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v86 = ~(unsigned __int16)(-1LL << (v109.OldIrql + 1));
              v87 = (v86 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v86;
              if ( v87 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(OldIrql);
          v61 = v106;
          v63 = v97;
          v60 = v107;
          v59 = v100;
        }
      }
    }
  }
  v19 = v9 + 16;
  if ( (v13 & 4) != 0 )
  {
    v19 += *(unsigned int *)((char *)&Mm64BitPhysicalAddress + 1);
    if ( v19 > 0xFE0 )
    {
      v19 = v9 + 16;
      LOWORD(v13) = v13 & 0xFFFB;
    }
  }
  v20 = (v19 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v20 >= 0x201 && v20 <= 0xF80 )
  {
    v47 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)v20 >> 4));
    v20 = (unsigned __int16)RtlpBucketBlockSizes[v47];
    v48 = v47 - 33;
    v49 = *(_QWORD *)(v18 + 40);
    if ( v49 )
    {
      v50 = (unsigned __int16 *)(v49 + ((v48 + 1LL) << 6));
      ++*((_DWORD *)v50 + 5);
      if ( *v50 )
      {
        v32 = (unsigned __int64)RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v49 + ((v48 + 1LL) << 6)));
        if ( v32 )
          goto LABEL_74;
        v5 = 0LL;
      }
      ++*((_DWORD *)v50 + 6);
      v51 = v50[8];
      v69 = *v50;
      p_Next = &v5->Next;
      ListEnd = v5;
      if ( v69 < (unsigned int)v51 && (v51 = ((unsigned int)v51 - v69) >> 1, (_DWORD)v51) )
      {
        v70 = RtlpHpVsContextMultiAlloc(v18 + 704, v20, (int)v51 + 1, 0, &p_Next, &ListEnd);
        if ( v70 )
        {
          v32 = (unsigned __int64)p_Next;
          v71 = *p_Next;
          p_Next = (_SLIST_ENTRY **)*p_Next;
          v72 = v70 - 1;
          if ( v72 )
            InterlockedPushListSList((PSLIST_HEADER)v50, v71, ListEnd, v72);
        }
        else
        {
          v32 = 0LL;
        }
      }
      else
      {
        v32 = (unsigned __int64)v5;
      }
LABEL_74:
      if ( (v13 & 0x400) != 0 )
      {
        if ( !v32 )
        {
LABEL_118:
          v5 = 0LL;
          goto LABEL_26;
        }
        RtlHeapZero(v32 + 16, v20 - 16, v51);
      }
      if ( v32 )
        goto LABEL_50;
      goto LABEL_118;
    }
  }
LABEL_26:
  v21 = *(_QWORD *)(v18 + 48);
  v22 = (*(_DWORD *)(v18 + 20) | v7) & 0x93000F0B;
  v23 = v21;
  if ( (v21 || (v23 = qword_140C6B3A8) != 0) && v20 > v23 )
  {
    v88 = *(_QWORD *)(v18 + 56);
    if ( !v88 )
    {
LABEL_136:
      v11 = 0LL;
      goto LABEL_190;
    }
    RtlpLogHeapFailure(20, v18, 0, v88, v20, v21);
    goto LABEL_169;
  }
  v96 = (int)v5;
  v24 = (__int64)v5;
  v104 = v5;
  if ( (v22 & 0x1000000) == 0 )
  {
    v25 = *(_DWORD *)(v18 + 24);
    v96 = v25;
    if ( v25 )
    {
      v22 |= 8u;
      if ( (_WORD)v25 != 1 )
        goto LABEL_136;
      if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _SLIST_ENTRY **))CLFS_LSN_NULL_EXT)(
                  v18,
                  0LL,
                  1LL,
                  &v104) < 0 )
        goto LABEL_169;
      v24 = (__int64)v104;
      v5 = 0LL;
    }
  }
  v26 = v24 + v20;
  if ( (v22 & 0x10000000) != 0 )
    v26 += 16LL;
  if ( (v22 & 0x20000F08) != 0 )
    v26 = ((v26 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  if ( !v26 )
    v26 = 1LL;
  if ( v26 < v20 || v20 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_136;
  v27 = v22 & 0x13000003;
  v114 = v22 & 0x13000003;
  if ( v26 > (unsigned int)*(unsigned __int16 *)(v18 + 956) - 16 )
    goto LABEL_105;
  v28 = (unsigned int)v26;
  if ( (_DWORD)v20 != (_DWORD)v26 )
    v28 = (unsigned int)(v26 + 2);
  v98 = (__int64 *)(v18
                  + 896
                  + 8 * (*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v28 + 15) >> 4)) + 16LL));
  if ( (*v98 & 1) != 0 )
  {
    updated = RtlpHpLfhBucketUpdateStats(v18 + 896, v28, 1LL);
    v27 = v114;
    if ( !updated )
    {
      LODWORD(v5) = 0;
LABEL_105:
      v34 = v26;
      goto LABEL_106;
    }
  }
  v29 = 128LL;
  v30 = *v98;
  if ( (RtlpHpLfhPerfFlags & 0x400) != 0 )
    v29 = 192LL;
  if ( *(_BYTE *)(v30 + 2) == 1 )
    v31 = 0;
  else
    v31 = *(_BYTE *)(BYTE5(KeGetCurrentThread()[1].Spare18) + v30 + v29);
  v32 = RtlpHpLfhSlotAllocate(
          (int)v18 + 896,
          v30,
          *(_QWORD *)(v29
                    + *(unsigned __int8 *)(v18 + 952)
                    - (unsigned __int64)((*(_BYTE *)(v18 + 952) - 1) & 7)
                    + 7
                    + v30
                    + 8LL * v31),
          v20,
          v27);
  v34 = v26;
  if ( v32 == -1LL )
  {
    v27 = v114;
    LODWORD(v5) = 0;
LABEL_106:
    if ( v26 > 0x20000 )
    {
      if ( v26 > *(unsigned int *)(v18 + 528) )
      {
        v90 = RtlpHpLargeAlloc(v18, v20, v26, v27);
      }
      else
      {
        v89 = v18 + 320;
        if ( v26 > *(unsigned int *)(v18 + 336) )
          v89 = v18 + 512;
        v90 = RtlpHpSegAlloc(v89, v20, v26, v26, v27);
      }
      v32 = v90;
    }
    else
    {
      v102 = (int)v5;
      v112 = 0LL;
      v111 = 0LL;
      v32 = (unsigned __int64)RtlpHpVsContextAllocateInternal(v18 + 704, v20, v34, v27, &v111, &v102);
      if ( v102 && (v22 & 1) == 0 )
        RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(v18 + 712), (__int64)&v111);
    }
  }
  if ( v32 )
  {
    if ( (v22 & 0x30000F08) != 0 )
    {
      v91 = RtlpHpExtrasAppend(v18, v32, v20, v33, (__int64)v104, v22, 0);
      if ( v96 )
      {
        *(_BYTE *)(v91 + 2) ^= (*(_BYTE *)(v91 + 2) ^ v96) & 0xF;
        if ( (_WORD)v96 != 1
          || (int)((__int64 (__fastcall *)(__int64, unsigned __int64, __int64, __int64))CLFS_LSN_NULL_EXT)(
                    v18,
                    v32,
                    2LL,
                    v91 + 16) < 0 )
        {
          RtlpHpFreeHeap((_DWORD *)v18, v32, v22, 0LL, 0LL);
          goto LABEL_169;
        }
      }
    }
  }
  if ( !v32 )
  {
LABEL_169:
    v5 = 0LL;
    goto LABEL_136;
  }
LABEL_50:
  *(_DWORD *)(v32 + 4) = v15;
  *(_BYTE *)(v32 + 2) = v20 >> 4;
  *(_BYTE *)v32 = 0;
  v35 = v13 & 0x6D | 2;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  *(_BYTE *)(v32 + 3) = v35;
  LockHandle.LockQueue = 0LL;
  if ( v15 == PoolHitTag )
    __debugbreak();
  v36 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v36 = EtwTracePool(3616, v13 & 0x6D | 2u, v15, (int)v32 + 16, v20);
  LODWORD(v36) = KeGetPcr()->Prcb.Number;
  v37 = v35 & 0xFFFFFFDF;
  v38 = PoolTrackTableMask;
  v105 = PoolTrackTableMask;
  v39 = (__int64)*(&ExPoolTagTables + v36);
  v99 = PoolTrackTableSize;
  v106 = v39;
  v40 = PoolTrackTableMask & ((40543 * v15) ^ ((40543 * (unsigned __int64)v15) >> 32));
  v41 = v40;
  v115 = v40;
  do
  {
    while ( 1 )
    {
      v42 = 80LL * v40;
      v43 = *(_DWORD *)(v39 + v42);
      v44 = v39 + v42;
      if ( v43 == v116 )
      {
        v12 = ExpPoolTrackerChargeEntry((v37 & 1) == 0, v20, v39 + v42);
        goto LABEL_57;
      }
      if ( v43 )
        break;
      v73 = *(_DWORD *)(v42 + PoolTrackTable);
      if ( v73 )
      {
        *(_DWORD *)v44 = v73;
        v74 = *(_QWORD *)(v42 + PoolTrackTable + 72);
        if ( v74 )
          *(_QWORD *)(v44 + 72) = v74;
      }
      else
      {
        if ( v40 == v99 - 1 )
          break;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        v107 = v42 + PoolTrackTable;
        if ( !*(_DWORD *)(v42 + PoolTrackTable) )
        {
          v75 = ExpPlFindLimitEntry(v116);
          *(_QWORD *)(v107 + 72) = v75;
          *(_QWORD *)(v44 + 72) = v75;
          *(_DWORD *)(v42 + PoolTrackTable) = v116;
          *(_DWORD *)v44 = v116;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v76 = LockHandle.OldIrql;
        if ( (_DWORD)KiIrqlFlags )
        {
          v92 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v92 <= 0xFu && LockHandle.OldIrql <= 0xFu && v92 >= 2u )
          {
            v93 = KeGetCurrentPrcb();
            v94 = v93->SchedulerAssist;
            v95 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v87 = (v95 & v94[5]) == 0;
            v94[5] &= v95;
            if ( v87 )
              KiRemoveSystemWorkPriorityKick(v93);
          }
        }
        __writecr8(v76);
        v39 = v106;
        v38 = v105;
        v41 = v115;
      }
    }
    v40 = v38 & (v40 + 1);
  }
  while ( v40 != v41 );
  ExpInsertPoolTrackerExpansion(v116, v20, v37);
  v12 = 1;
LABEL_57:
  if ( (v13 & 4) != 0 )
  {
    *(_BYTE *)(v32 + 3) &= ~4u;
    v52 = (*(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) - 1) & (-16 - v32);
    if ( v52 )
    {
      v53 = v32 + v52;
      v54 = (__int64)v52 >> 4;
      *(_BYTE *)v53 = v54;
      *(_BYTE *)(v53 + 2) = *(_BYTE *)(v32 + 2) - v54;
      *(_BYTE *)(v53 + 1) = *(_BYTE *)(v32 + 1);
      *(_BYTE *)(v53 + 3) = *(_BYTE *)(v32 + 3) | 4;
      *(_DWORD *)(v53 + 4) = *(_DWORD *)(v32 + 4);
      if ( (unsigned __int8)*(_WORD *)v53 > 1u )
        *(_QWORD *)(v32 + 16) = ExpPoolQuotaCookie ^ v53;
      v32 = v53;
    }
  }
  if ( (*(_BYTE *)(v32 + 3) & 8) != 0 )
    *(_QWORD *)(v32 + 8) = ExpPoolQuotaCookie ^ v32;
  v45 = v32 + 16;
LABEL_61:
  if ( v12 )
  {
    if ( v45 )
      return v45;
  }
  else
  {
    ExFreeHeapPool(v45);
    v45 = 0LL;
  }
LABEL_192:
  if ( (v13 & 0x10) != 0 )
    RtlRaiseStatus(-1073741670);
  return v45;
}
