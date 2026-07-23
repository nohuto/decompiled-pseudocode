/*
 * XREFs of MiHotRemoveHugeRange @ 0x140620144
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1406580F0 (MiActOnPartitionNodePages.c)
 *     MiAddPhysicalMemory @ 0x140A2B738 (MiAddPhysicalMemory.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     RtlAvlInsertNodeEx @ 0x140287FA0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14028AE30 (RtlAvlRemoveNode.c)
 *     RtlClearBitsEx @ 0x14028BA00 (RtlClearBitsEx.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     RtlFindSetBitsAndClearEx @ 0x14034A090 (RtlFindSetBitsAndClearEx.c)
 *     MiRestrictRangeToNode @ 0x140375D64 (MiRestrictRangeToNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiHugePfnPartition @ 0x140620CC0 (MiHugePfnPartition.c)
 *     MiLockHugePfn @ 0x140621464 (MiLockHugePfn.c)
 *     MiLockHugePfnInternal @ 0x1406214D8 (MiLockHugePfnInternal.c)
 *     MiMakeEntireHugePfnGood @ 0x140621584 (MiMakeEntireHugePfnGood.c)
 *     MiUpdateHugePageCounts @ 0x140622DB8 (MiUpdateHugePageCounts.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x14062E7CC (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiSetPfnRemovalRequested @ 0x14064DF24 (MiSetPfnRemovalRequested.c)
 *     MiFlushCacheRange @ 0x140660F6C (MiFlushCacheRange.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiHotRemoveHugeRange(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR v4; // rbx
  int v5; // r15d
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // r13
  unsigned __int64 *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  ULONG_PTR v12; // r12
  ULONG_PTR v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r15
  volatile LONG *v16; // rdi
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rcx
  __int64 EntireHugePfnGood; // rax
  _QWORD *v20; // rdx
  bool v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  _QWORD *v24; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  _QWORD *v30; // rbx
  unsigned __int64 v31; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  PVOID v37; // rsi
  unsigned __int64 *v38; // rax
  ULONG64 SetBitsAndClear; // r14
  const signed __int64 *v40; // rbx
  __int64 v41; // rdi
  unsigned __int8 v42; // bl
  unsigned __int64 v43; // r15
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  ULONG_PTR v48; // [rsp+20h] [rbp-58h]
  ULONG_PTR v49; // [rsp+30h] [rbp-48h]
  __int64 v50; // [rsp+38h] [rbp-40h]
  const signed __int64 *i; // [rsp+40h] [rbp-38h]
  _RTL_BITMAP_EX BitMapHeader; // [rsp+48h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-20h] BYREF
  PVOID P; // [rsp+C0h] [rbp+48h] BYREF
  ULONG_PTR v55; // [rsp+C8h] [rbp+50h]
  int v56; // [rsp+D0h] [rbp+58h]
  __int64 v57; // [rsp+D8h] [rbp+60h]

  v56 = a3;
  v55 = a2;
  v3 = BugCheckParameter2;
  v48 = a2;
  P = 0LL;
  v4 = (BugCheckParameter2 >> 18) & 0x3FFFFF;
  BitMapHeader.SizeOfBitMap = v4;
  v5 = a3;
  v6 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = a2;
  v8 = (unsigned __int64 *)(8 * v4 + qword_140C67EF0);
  v50 = 8 * v4;
  v9 = MiHugePfnPartition(v8);
  v57 = v9;
  if ( v10 )
  {
    v11 = v9;
    while ( 1 )
    {
      v49 = MiRestrictRangeToNode(v3, v7);
      v12 = v49 >> 18;
      v13 = v49;
      v14 = *(_QWORD *)(v11 + 16) + 25408LL * *((unsigned int *)MiSearchNumaNodeTable(v3) + 2);
      if ( !(v49 >> 18) )
        goto LABEL_24;
      v15 = v57;
      v16 = (volatile LONG *)(v14 + 23104);
      do
      {
        v17 = (unsigned __int8)MiLockHugePfn(v8);
        ExAcquireSpinLockExclusiveAtDpcLevel(v16);
        MiUpdateHugePageCounts(v15, v4, 1LL, 0LL);
        v18 = *v8;
        if ( (*v8 & 8) == 0 )
          goto LABEL_15;
        EntireHugePfnGood = MiMakeEntireHugePfnGood(v4);
        v20 = P;
        v21 = 0;
        v22 = EntireHugePfnGood;
        if ( !P )
          goto LABEL_14;
        v23 = *(_QWORD *)(EntireHugePfnGood + 24) & 0x3FFFFFLL;
        while ( v23 < (v20[3] & 0x3FFFFFuLL) )
        {
          v24 = (_QWORD *)*v20;
          if ( !*v20 )
          {
            v21 = 0;
            goto LABEL_14;
          }
LABEL_12:
          v20 = v24;
        }
        v24 = (_QWORD *)v20[1];
        if ( v24 )
          goto LABEL_12;
        v21 = 1;
LABEL_14:
        RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v20, v21, v22);
        v18 = *v8;
LABEL_15:
        *v8 = v18 & 0xFFFFFFFFFFFF800FuLL | 0x4010;
        ExReleaseSpinLockExclusiveFromDpcLevel(v16);
        _InterlockedAnd(
          (volatile signed __int32 *)(qword_140C67EF8 + 4
                                                      * (((((__int64)v8 - qword_140C67EF0) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << ((((__int64)v8 - qword_140C67EF0) >> 3) & 0x1F)));
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v17 <= 0xFu
            && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
            v29 = (v28 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v28;
            if ( v29 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v17);
        ++v8;
        v4 ^= ((unsigned int)v4 ^ ((_DWORD)v4 + 1)) & 0x3FFFFF;
        --v12;
      }
      while ( v12 );
      v13 = v49;
      v7 = v48;
      v11 = v57;
LABEL_24:
      if ( v56 )
        MiFlushCacheRange(v3, v13);
      MiMarkHugeRangeIoPfnDeleted(v3);
      v3 += v13;
      v7 -= v13;
      v48 = v7;
      if ( !v7 )
      {
        v6 = v55;
        v5 = v56;
        break;
      }
    }
  }
  v30 = (_QWORD *)(qword_140C67EF0 + v50);
  v31 = v6 >> 18;
  KeAcquireInStackQueuedSpinLock(&qword_140C67F00, &LockHandle);
  RtlClearBitsEx((__int64)&stru_140C67EE0, BitMapHeader.SizeOfBitMap, v31);
  for ( ; v31; --v31 )
  {
    MiLockHugePfnInternal(v30, 0LL);
    *v30 = 0LL;
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140C67EF8 + 4 * (((((__int64)v30 - qword_140C67EF0) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v30 - qword_140C67EF0) >> 3) & 0x1F)));
    ++v30;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v33 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v33 <= 0xFu && LockHandle.OldIrql <= 0xFu && v33 >= 2u )
    {
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v29 = (v36 & v35[5]) == 0;
      v35[5] &= v36;
      if ( v29 )
        KiRemoveSystemWorkPriorityKick((__int64)v34);
    }
  }
  __writecr8(OldIrql);
  while ( P )
  {
    v37 = P;
    RtlAvlRemoveNode((unsigned __int64 *)&P, (unsigned __int64 *)P);
    if ( !v5 )
    {
      v38 = (unsigned __int64 *)*((_QWORD *)v37 + 4);
      SetBitsAndClear = 0LL;
      BitMapHeader.SizeOfBitMap = 0x40000LL;
      BitMapHeader.Buffer = v38;
      v40 = (const signed __int64 *)(v38 + 4096);
      for ( i = (const signed __int64 *)(v38 + 4096); ; v40 = i )
      {
        SetBitsAndClear = RtlFindSetBitsAndClearEx(&BitMapHeader, 1uLL, SetBitsAndClear);
        if ( SetBitsAndClear == -1LL )
          break;
        v41 = 48 * (SetBitsAndClear + ((*((_DWORD *)v37 + 6) & 0x3FFFFFLL) << 18)) - 0x220000000000LL;
        v42 = _bittest64(v40, SetBitsAndClear);
        MiAllocatePool(64, 0x20uLL, 0x6C42694Du);
        v43 = (unsigned __int8)MiLockPageInline(v41);
        if ( v42 )
          *(_BYTE *)(v41 + 35) |= 0x80u;
        MiSetPfnRemovalRequested(v41, 1LL, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v44 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v44 <= 0xFu && (unsigned __int8)v43 <= 0xFu && v44 >= 2u )
          {
            v45 = KeGetCurrentPrcb();
            v46 = v45->SchedulerAssist;
            v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v43 + 1));
            v29 = (v47 & v46[5]) == 0;
            v46[5] &= v47;
            if ( v29 )
              KiRemoveSystemWorkPriorityKick((__int64)v45);
          }
        }
        __writecr8(v43);
      }
      v5 = v56;
    }
    ExFreePoolWithTag(*((PVOID *)v37 + 4), 0);
    ExFreePoolWithTag(v37, 0);
  }
}
