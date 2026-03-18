/*
 * XREFs of MiDeleteSubsectionPages @ 0x140273390
 * Callers:
 *     MiDeleteSegmentPages @ 0x14027034C (MiDeleteSegmentPages.c)
 *     MiExtendSection @ 0x1406A3A68 (MiExtendSection.c)
 * Callees:
 *     MiUpdateSystemProtoPtesTree @ 0x14026EA80 (MiUpdateSystemProtoPtesTree.c)
 *     MiInvalidPteConforms @ 0x140273A80 (MiInvalidPteConforms.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiDeleteClusterSection @ 0x140276E5C (MiDeleteClusterSection.c)
 *     MiDecrementSubsectionViewCount @ 0x1402869C0 (MiDecrementSubsectionViewCount.c)
 *     MiDeleteTransitionPte @ 0x1402C3100 (MiDeleteTransitionPte.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14059A31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiDeleteSubsectionLargePages @ 0x1405AED7C (MiDeleteSubsectionLargePages.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteSubsectionPages(__int64 *BugCheckParameter2, __int64 a2)
{
  __int64 v2; // r13
  ULONG_PTR v3; // rbx
  char *v4; // rcx
  __int64 v5; // r12
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rbp
  unsigned __int64 v10; // r12
  ULONG_PTR v11; // rsi
  char *v12; // r15
  unsigned __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int64 v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rsi
  KIRQL v25; // al
  unsigned __int64 v26; // rbx
  KIRQL v27; // r14
  PVOID v28; // r12
  __int64 v30; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  char v36; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v40; // edx
  bool v41; // zf
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r9
  int v44; // eax
  _DWORD *v45; // r8
  int v46; // [rsp+20h] [rbp-98h] BYREF
  __int64 v47; // [rsp+28h] [rbp-90h]
  __int64 v48; // [rsp+30h] [rbp-88h] BYREF
  BOOL v49; // [rsp+38h] [rbp-80h]
  __int64 v50; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-70h]
  __int64 v52; // [rsp+50h] [rbp-68h]
  __int64 v53; // [rsp+58h] [rbp-60h]
  PVOID P; // [rsp+60h] [rbp-58h]
  _QWORD *v56; // [rsp+C8h] [rbp+10h]
  unsigned __int8 v57; // [rsp+D0h] [rbp+18h] BYREF
  int v58; // [rsp+D8h] [rbp+20h] BYREF

  v56 = (_QWORD *)a2;
  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  v4 = (char *)BugCheckParameter2[1];
  LOBYTE(a2) = 17;
  v50 = 0LL;
  v5 = *(_QWORD *)(v2 + 64);
  v6 = *(_WORD *)(v2 + 60) & 0x3FF;
  LODWORD(v7) = *(_DWORD *)(v2 + 56);
  v57 = 17;
  v46 = v7;
  v53 = *(_QWORD *)(qword_140C51F48 + 8 * v6);
  P = v4;
  v8 = 0LL;
  v49 = v5 != 0;
  v9 = 0LL;
  v51 = 0LL;
  v10 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v47 = 0LL;
  v52 = 0LL;
  if ( !v4 )
    goto LABEL_50;
  v11 = (ULONG_PTR)v4;
  v12 = &v4[8 * *(unsigned int *)(v3 + 44)];
  if ( v4 >= v12 )
    goto LABEL_50;
  v7 = 0LL;
  while ( 2 )
  {
    v13 = 0xFFFFDE0000000000uLL;
    v14 = 0x40000000000000LL;
    v15 = 0xFFFFDE0000000028uLL;
    v16 = 0xFFFFFFFFFFLL;
    if ( (v11 & 0xFFF) != 0 )
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
        v23 = MI_READ_PTE_LOCK_FREE(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v50 = v23;
        if ( (v23 & 1) == 0 && (v23 & 0x400) != 0 && (v23 & 2) != 0 )
        {
          v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          goto LABEL_15;
        }
      }
      v9 = MiLockProtoPoolPage(v11, &v57);
      if ( v9 )
        break;
      MmAccessFault(2uLL, v11);
    }
    v14 = 0x40000000000000LL;
    v13 = 0xFFFFDE0000000000uLL;
    v15 = 0xFFFFDE0000000028uLL;
    v16 = 0xFFFFFFFFFFLL;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_6:
        v17 = *(_QWORD *)v11;
        v18 = *(_QWORD *)v11;
        if ( (*(_QWORD *)v11 & 1) != 0 )
          goto LABEL_21;
        if ( (*(_QWORD *)v11 & 0xC00LL) != 0x800 )
        {
          v19 = 0LL;
          goto LABEL_9;
        }
        if ( (unsigned int)MiInvalidPteConforms(*(_QWORD *)v11, a2, v16, v15) )
        {
          v18 = v17;
          if ( qword_140C50780 && (v17 & 0x10) == 0 )
            v18 = v17 & ~qword_140C50780;
LABEL_21:
          v21 = v16 & (v18 >> 12);
          if ( v21 <= qword_140C50840 )
          {
            a2 = 6 * v21;
            if ( (v14 & *(_QWORD *)(v15 + 48 * v21)) != 0 )
              break;
          }
        }
      }
      v19 = v13 + 48 * v21;
      v58 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v58);
          while ( *(__int64 *)(v19 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
        v16 = 0xFFFFFFFFFFLL;
        v15 = 0xFFFFDE0000000028uLL;
        v13 = 0xFFFFDE0000000000uLL;
        v14 = 0x40000000000000LL;
      }
      if ( *(_QWORD *)v11 == v17 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v19 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
      v19 = MiLockSpecialPurposeMemoryCachedPage(v19, 0LL);
LABEL_9:
    v20 = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL
      && v11 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v20 & 1) != 0
      && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v32 = *((_QWORD *)&Flink->Flink + ((v11 >> 3) & 0x1FF));
        if ( (v32 & 0x20) != 0 )
          v20 |= 0x20uLL;
        if ( (v32 & 0x42) != 0 )
          v20 |= 0x42uLL;
      }
    }
    v50 = v20;
    if ( (v20 & 1) != 0 )
    {
      v33 = MI_READ_PTE_LOCK_FREE(&v50);
      if ( *(_WORD *)(v19 + 32) > 2u )
        ++v52;
      if ( (v33 & 0x1FF000) == 0 )
      {
        v34 = *(_QWORD *)v19;
        v35 = *(_QWORD *)v19 ^ (v51 >> 3);
        v51 = v19;
        *(_QWORD *)v19 = v34 ^ v35 & 0xFFFFFFFFFFELL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_13;
    }
    if ( (v20 & 0x400) != 0 )
      goto LABEL_13;
    if ( (v20 & 0x800) == 0 )
    {
      v48 = v20;
      if ( (v20 & 4) != 0 || (v20 & 2) != 0 )
      {
        v30 = MI_READ_PTE_LOCK_FREE(&v48);
        v48 = v30;
        if ( v30 )
          MiReleasePageFileInfo(v53, v30, 0LL);
      }
      else
      {
        v48 = 0LL;
      }
      goto LABEL_13;
    }
    if ( qword_140C50780 && (v20 & 0x10) == 0 )
      LOWORD(v20) = ~(_WORD)qword_140C50780 & v20;
    v22 = *(unsigned int *)(v2 + 56);
    if ( (_bittest64((const signed __int64 *)(v19 + 16), 0xAu) & ((v22 & 0x20) == 0)) != 0 )
    {
      v36 = *(_BYTE *)(v19 + 34);
      if ( (v36 & 0x10) != 0 || (v36 & 8) != 0 )
        ++v7;
    }
    if ( v10
      || (v20 & 0xF000) != 0
      || (__int64)((unsigned __int64)&v12[-v11] & 0xFFFFFFFFFFFFFFF8uLL) < 128
      || ((4096 - (v11 & 0xFFF)) & 0xFFFFFFF8) < 0x80
      || !(unsigned int)MiDeleteClusterSection(v19, v11, v22, v15) )
    {
      if ( (unsigned int)MiDeleteTransitionPte(v11) == 3 )
        ++*v56;
LABEL_13:
      v11 += 8LL;
      goto LABEL_14;
    }
    v11 += 128LL;
LABEL_14:
    v3 = (ULONG_PTR)BugCheckParameter2;
LABEL_15:
    if ( v11 < (unsigned __int64)v12 )
    {
      a2 = v57;
      continue;
    }
    break;
  }
  v47 = v7;
  LOBYTE(v7) = v46;
  if ( v9 )
    MiUnlockProtoPoolPage(v9, v57);
  if ( v51 )
    *v56 += MiDeleteSubsectionLargePages(v3, v51, v52, v15);
  v8 = v47;
LABEL_50:
  if ( (v7 & 0xA0) != 0x80 )
    return v8;
  v46 = 0;
  v24 = MiDecrementSubsectionViewCount(v3);
  v25 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  v26 = v25;
  v27 = v25;
  while ( *((_DWORD *)BugCheckParameter2 + 26) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v26 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << (v27 + 1));
          v41 = (v40 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v40;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v26);
    KeYieldProcessorEx(&v46);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  }
  v28 = P;
  if ( P )
  {
    MiUpdateSystemProtoPtesTree((__int64)(BugCheckParameter2 + 15), 0);
    BugCheckParameter2[1] = 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v42 = KeGetCurrentIrql();
      if ( v42 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v42 >= 2u )
      {
        v43 = KeGetCurrentPrcb();
        v44 = ~(unsigned __int16)(-1LL << (v27 + 1));
        v45 = v43->SchedulerAssist;
        v41 = (v44 & v45[5]) == 0;
        v45[5] &= v44;
        if ( v41 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
  }
  __writecr8(v26);
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
  if ( v24 )
    MiReturnCrossPartitionSectionCharges(v53, v49, v24);
  return v47;
}
