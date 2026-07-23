/*
 * XREFs of MiDeleteSubsectionPages @ 0x140218EF0
 * Callers:
 *     MiDeleteSegmentPages @ 0x140219670 (MiDeleteSegmentPages.c)
 *     MiExtendSection @ 0x1407069E4 (MiExtendSection.c)
 * Callees:
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiReleasePageFileSpace @ 0x14021941C (MiReleasePageFileSpace.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14021BF30 (MiUpdateSystemProtoPtesTree.c)
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x14029FD60 (MiDecrementSubsectionViewCount.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x1402DC6D0 (MiInvalidPteConforms.c)
 *     MiDeleteTransitionPte @ 0x1402DD110 (MiDeleteTransitionPte.c)
 *     MiLockProtoPoolPage @ 0x1402DD490 (MiLockProtoPoolPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteSubsectionLargePages @ 0x14064F2F8 (MiDeleteSubsectionLargePages.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140660DA8 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B904 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteSubsectionPages(_QWORD *BugCheckParameter2, __int64 a2)
{
  __int64 v2; // r13
  ULONG_PTR v3; // r12
  int v4; // edi
  __int64 v5; // rax
  ULONG_PTR v6; // rbx
  char *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbp
  ULONG_PTR v10; // rsi
  char *v11; // r15
  unsigned __int64 v12; // rdi
  __int64 v13; // r12
  unsigned __int64 v14; // r10
  __int64 v15; // r11
  unsigned __int64 v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  ULONG_PTR v20; // r14
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned __int64 v26; // rbx
  PVOID v27; // r15
  char v29; // al
  struct _LIST_ENTRY *Flink; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  ULONG_PTR v33; // rcx
  __int64 v34; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v38; // edx
  bool v39; // zf
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // r9
  int v42; // eax
  _DWORD *v43; // r8
  char v44; // [rsp+20h] [rbp-88h]
  BOOL v45; // [rsp+24h] [rbp-84h]
  __int64 v46; // [rsp+28h] [rbp-80h]
  ULONG_PTR v47; // [rsp+30h] [rbp-78h]
  __int64 v48; // [rsp+38h] [rbp-70h] BYREF
  __int64 v49; // [rsp+40h] [rbp-68h]
  __int64 v50; // [rsp+48h] [rbp-60h]
  PVOID P; // [rsp+50h] [rbp-58h]
  _QWORD *v52; // [rsp+B0h] [rbp+8h] BYREF
  _QWORD *v53; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v54; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 v55; // [rsp+C8h] [rbp+20h] BYREF

  v53 = (_QWORD *)a2;
  v52 = BugCheckParameter2;
  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  LOBYTE(a2) = 17;
  v48 = 0LL;
  v54 = 17;
  v4 = *(_DWORD *)(v2 + 56);
  v44 = v4;
  v50 = *(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF));
  v5 = *(_QWORD *)(v2 + 64);
  v6 = 0LL;
  v45 = v5 != 0;
  v7 = (char *)BugCheckParameter2[1];
  v8 = 0LL;
  v9 = 0LL;
  v47 = 0LL;
  v55 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v46 = 0LL;
  v49 = 0LL;
  P = v7;
  if ( !v7 )
    goto LABEL_49;
  v10 = (ULONG_PTR)v7;
  v11 = &v7[8 * *(unsigned int *)(v3 + 44)];
  if ( v7 >= v11 )
    goto LABEL_49;
  v12 = v55;
  v13 = 0LL;
  while ( 2 )
  {
    v14 = 0xFFFFDE0000000000uLL;
    v15 = 0x40000000000000LL;
    v16 = 0xFFFFDE0000000028uLL;
    v17 = 0xFFFFFFFFFFLL;
    if ( (v10 & 0xFFF) != 0 )
    {
      if ( v9 )
        goto LABEL_6;
    }
    else if ( v9 )
    {
      MiUnlockProtoPoolPage(v9, a2);
      v9 = 0LL;
    }
    while ( 1 )
    {
      if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
      {
        v23 = MI_READ_PTE_LOCK_FREE(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v48 = v23;
        if ( (v23 & 1) == 0 && (v23 & 0x400) != 0 && (v23 & 2) != 0 )
        {
          v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          goto LABEL_14;
        }
      }
      v9 = MiLockProtoPoolPage(v10, &v54);
      if ( v9 )
        break;
      MmAccessFault(2uLL, v10);
    }
    v15 = 0x40000000000000LL;
    v14 = 0xFFFFDE0000000000uLL;
    v16 = 0xFFFFDE0000000028uLL;
    v17 = 0xFFFFFFFFFFLL;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_6:
        v18 = *(_QWORD *)v10;
        v19 = *(_QWORD *)v10;
        if ( (*(_QWORD *)v10 & 1) != 0 )
          goto LABEL_20;
        if ( (*(_QWORD *)v10 & 0xC00LL) != 0x800 )
        {
          v20 = 0LL;
          goto LABEL_9;
        }
        if ( (unsigned int)MiInvalidPteConforms(*(_QWORD *)v10, a2, v17, v16) )
        {
          v19 = v18;
          if ( qword_140C65B40 && (v18 & 0x10) == 0 )
            v19 = v18 & ~qword_140C65B40;
LABEL_20:
          v22 = v17 & (v19 >> 12);
          if ( v22 <= qword_140C65BA0 )
          {
            a2 = 6 * v22;
            if ( (v15 & *(_QWORD *)(v16 + 48 * v22)) != 0 )
              break;
          }
        }
      }
      v20 = v14 + 48 * v22;
      LODWORD(v55) = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v55);
          while ( *(__int64 *)(v20 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) );
        v17 = 0xFFFFFFFFFFLL;
        v16 = 0xFFFFDE0000000028uLL;
        v14 = 0xFFFFDE0000000000uLL;
        v15 = 0x40000000000000LL;
      }
      if ( *(_QWORD *)v10 == v18 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      v20 = MiLockSpecialPurposeMemoryCachedPage(v20, 0LL, v17, v16);
LABEL_9:
    v21 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v21 & 1) != 0
      && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v31 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
        if ( (v31 & 0x20) != 0 )
          v21 |= 0x20uLL;
        if ( (v31 & 0x42) != 0 )
          v21 |= 0x42uLL;
      }
    }
    v48 = v21;
    if ( (v21 & 1) != 0 )
    {
      v32 = MI_READ_PTE_LOCK_FREE(&v48);
      if ( *(_WORD *)(v20 + 32) > 2u )
        ++v49;
      if ( (v32 & 0x1FF000) == 0 )
      {
        v33 = *(_QWORD *)v20 ^ (v47 >> 3);
        v47 = v20;
        *(_QWORD *)v20 ^= v33 & 0xFFFFFFFFFFELL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_12;
    }
    if ( (v21 & 0x400) != 0 )
      goto LABEL_12;
    if ( (v21 & 0x800) == 0 )
    {
      MiReleasePageFileSpace(v50, v21, 1LL);
      goto LABEL_12;
    }
    if ( qword_140C65B40 && (v21 & 0x10) == 0 )
      LOWORD(v21) = ~(_WORD)qword_140C65B40 & v21;
    if ( (_bittest64((const signed __int64 *)(v20 + 16), 0xAu) & ((*(_DWORD *)(v2 + 56) & 0x20) == 0)) != 0 )
    {
      v29 = *(_BYTE *)(v20 + 34);
      if ( (v29 & 0x10) != 0 || (v29 & 8) != 0 )
        ++v13;
    }
    if ( v12
      || (v21 & 0xF000) != 0
      || (__int64)((unsigned __int64)&v11[-v10] & 0xFFFFFFFFFFFFFFF8uLL) < 128
      || ((4096 - (v10 & 0xFFF)) & 0xFFFFFFF8) < 0x80
      || !(unsigned int)MiDeleteClusterSection(v20, v10) )
    {
      if ( (unsigned int)MiDeleteTransitionPte(v10, v20) == 3 )
        ++*v53;
LABEL_12:
      v10 += 8LL;
      goto LABEL_13;
    }
    v10 += 128LL;
LABEL_13:
    v6 = v47;
LABEL_14:
    if ( v10 < (unsigned __int64)v11 )
    {
      a2 = v54;
      continue;
    }
    break;
  }
  LOBYTE(v4) = v44;
  v46 = v13;
  v3 = (ULONG_PTR)v52;
  if ( v9 )
    MiUnlockProtoPoolPage(v9, v54);
  if ( v6 )
  {
    v34 = MiDeleteSubsectionLargePages(v3, v6, v49, v16);
    *v53 += v34;
  }
  v8 = v46;
LABEL_49:
  if ( (v4 & 0xA0) != 0x80 )
    return v8;
  v24 = MiDecrementSubsectionViewCount(v3);
  LODWORD(v52) = 0;
  v25 = v24;
  v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  while ( *(_DWORD *)(v3 + 104) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v26 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
        v39 = (v38 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v38;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v26);
    KeYieldProcessorEx(&v52);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  }
  v27 = P;
  if ( P )
  {
    MiUpdateSystemProtoPtesTree(v3 + 120, 0LL);
    *(_QWORD *)(v3 + 8) = 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
  if ( (_DWORD)KiIrqlFlags )
  {
    v40 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v40 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v40 >= 2u )
    {
      v41 = KeGetCurrentPrcb();
      v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
      v43 = v41->SchedulerAssist;
      v39 = (v42 & v43[5]) == 0;
      v43[5] &= v42;
      if ( v39 )
        KiRemoveSystemWorkPriorityKick(v41);
    }
  }
  __writecr8(v26);
  if ( v27 )
    ExFreePoolWithTag(v27, 0);
  if ( v25 )
    MiReturnCrossPartitionSectionCharges(v50, v45, v25);
  return v46;
}
