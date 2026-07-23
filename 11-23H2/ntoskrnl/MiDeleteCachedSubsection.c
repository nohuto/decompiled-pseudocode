/*
 * XREFs of MiDeleteCachedSubsection @ 0x140624098
 * Callers:
 *     MiRemoveUnusedSegments @ 0x140626074 (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiDestroySection @ 0x14020184C (MiDestroySection.c)
 *     MiRemoveUnusedSegment @ 0x140219970 (MiRemoveUnusedSegment.c)
 *     MiDeleteControlArea @ 0x1402199D0 (MiDeleteControlArea.c)
 *     MiReduceUnusedSubsectionCount @ 0x14021BA00 (MiReduceUnusedSubsectionCount.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14021BF30 (MiUpdateSystemProtoPtesTree.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiFlushSectionInternal @ 0x1402759E0 (MiFlushSectionInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSubsection @ 0x14028BF90 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x14029FD60 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSegment @ 0x1402A0F28 (MiInsertUnusedSegment.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2790 (ObFastDereferenceObjectDeferDelete.c)
 *     MiReleaseControlAreaWaiters @ 0x1402E41BC (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x1402F4AB4 (MiDecrementModifiedWriteCount.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140312480 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiIsSubsectionClean @ 0x140624FE4 (MiIsSubsectionClean.c)
 *     MiPreventControlAreaDelete @ 0x14062530C (MiPreventControlAreaDelete.c)
 *     MiPurgeSubsection @ 0x140625C24 (MiPurgeSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B904 (MiReturnCrossPartitionSectionCharges.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407B47A8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407B4A48 (FsRtlReleaseFileForCcFlush.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteCachedSubsection(__int64 a1)
{
  volatile LONG *v1; // rbp
  __int64 v3; // rsi
  ULONG_PTR v4; // rdi
  _QWORD **v5; // r15
  unsigned __int64 v6; // r14
  _QWORD *i; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  __int64 result; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  __int64 inserted; // rdi
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  int v27; // ebx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  int IsSubsectionClean; // eax
  int v33; // r15d
  KIRQL v34; // al
  unsigned __int64 v35; // r14
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  unsigned __int64 v44; // r14
  signed __int64 v45; // r12
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  unsigned __int64 v50; // r14
  unsigned __int8 v51; // cl
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  unsigned __int64 v55; // r14
  int v56; // eax
  unsigned __int8 v57; // cl
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // eax
  BOOL v61; // r12d
  KIRQL v62; // al
  int v63; // ecx
  __int64 *v64; // rdi
  unsigned __int8 v65; // cl
  struct _KPRCB *v66; // r9
  _DWORD *v67; // r8
  int v68; // eax
  __int64 v69; // r12
  __int64 v70; // rdx
  __int64 *v71; // rdi
  unsigned __int8 v72; // cl
  bool v73; // cf
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r9
  _DWORD *v76; // r8
  int v77; // eax
  ULONG_PTR v78; // [rsp+40h] [rbp-68h]
  struct _IO_STATUS_BLOCK v79; // [rsp+48h] [rbp-60h] BYREF
  struct _FILE_OBJECT *Object; // [rsp+B8h] [rbp+10h]
  PVOID P; // [rsp+C0h] [rbp+18h]
  __int64 v83; // [rsp+C8h] [rbp+20h]

  v1 = (volatile LONG *)(a1 + 1408);
  v3 = 1LL;
  v79 = 0LL;
  v4 = 1LL;
  v5 = (_QWORD **)(a1 + 1784);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1408));
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v4 = (ULONG_PTR)(i - 10);
    v3 = *(i - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      break;
  }
  if ( i == v5 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v6 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    result = 3221226021LL;
LABEL_25:
    __writecr8(v6);
    return result;
  }
  v14 = (_QWORD *)(v4 + 80);
  v15 = *(_QWORD *)(v4 + 80);
  v16 = *(_QWORD **)(v4 + 88);
  if ( *(_QWORD *)(v15 + 8) != v4 + 80 || (_QWORD *)*v16 != v14 )
    __fastfail(3u);
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  *(_WORD *)(v4 + 34) &= ~8u;
  *(_QWORD *)(v4 + 88) = v4 + 80;
  *v14 = v14;
  MiReduceUnusedSubsectionCount((unsigned int *)v4);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v17 = *(_DWORD *)(v3 + 56);
  if ( (v17 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( (_DWORD)KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v19);
      }
    }
    result = 3221225587LL;
    goto LABEL_25;
  }
  if ( (v17 & 8) != 0 )
  {
    if ( *(int *)(v4 + 52) < 0 )
    {
      inserted = MiInsertUnusedSubsection(v4);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( (_DWORD)KiIrqlFlags )
      {
        v23 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v23 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v24);
        }
      }
      __writecr8(v6);
      if ( inserted )
        MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
      return 3221225504LL;
    }
    v27 = 1;
  }
  else
  {
    v27 = 0;
  }
  if ( *(_QWORD *)(v4 + 96) )
    KeBugCheckEx(0x1Au, 0x42004uLL, v4, 0LL, 0LL);
  *(_QWORD *)(v4 + 96) = 1LL;
  *(_WORD *)(v4 + 32) &= ~1u;
  MiRemoveUnusedSegment(v3);
  *(_DWORD *)(v3 + 56) |= 0x100u;
  P = *(PVOID *)(v4 + 8);
  if ( v27 )
  {
    ++*(_DWORD *)(v3 + 76);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( (_DWORD)KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v28 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v29);
      }
    }
    __writecr8(v6);
    IsSubsectionClean = MiIsSubsectionClean(v4);
    if ( IsSubsectionClean )
    {
      if ( IsSubsectionClean == 1 )
      {
        v34 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        *(_DWORD *)(v4 + 52) |= 0x80000000;
        v35 = v34;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        if ( (_DWORD)KiIrqlFlags )
        {
          v36 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v36 <= 0xFu && (unsigned __int8)v35 <= 0xFu && v36 >= 2u )
          {
            v37 = KeGetCurrentPrcb();
            v38 = v37->SchedulerAssist;
            v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
            v12 = (v39 & v38[5]) == 0;
            v38[5] &= v39;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v37);
          }
        }
        __writecr8(v35);
      }
      v33 = -1073741792;
    }
    else
    {
      v33 = 0;
    }
  }
  else
  {
    Object = (struct _FILE_OBJECT *)MiPreventControlAreaDelete(v3);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( (_DWORD)KiIrqlFlags )
    {
      v40 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v40 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v40 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->SchedulerAssist;
        v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v43 & v42[5]) == 0;
        v42[5] &= v43;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v41);
      }
    }
    __writecr8(v6);
    v78 = *(_QWORD *)(v4 + 8);
    v83 = v78 - 8 + 8LL * *(unsigned int *)(v4 + 44);
    v33 = FsRtlAcquireFileForCcFlushEx(Object);
    v44 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v45 = _InterlockedDecrement64((volatile signed __int64 *)(v3 + 112));
    *(_QWORD *)(*(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) + 1752LL) = 0LL;
    if ( v33 < 0 || (*(_DWORD *)(v3 + 56) & 1) != 0 )
    {
      if ( v45 )
        ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( (_DWORD)KiIrqlFlags )
      {
        v51 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v51 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v51 >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
          v12 = (v54 & v53[5]) == 0;
          v53[5] &= v54;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v52);
        }
      }
      __writecr8(v44);
      v50 = (unsigned __int64)Object;
      if ( v33 >= 0 )
      {
        FsRtlReleaseFileForCcFlush(Object);
        v33 = -1073741431;
      }
      if ( !v45 )
      {
        MiDeleteControlArea((PVOID)v3);
        ObfDereferenceObjectWithTag(Object, 0x63536D4Du);
        return (unsigned int)v33;
      }
    }
    else
    {
      ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( (_DWORD)KiIrqlFlags )
      {
        v46 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v46 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v46 >= 2u )
        {
          v47 = KeGetCurrentPrcb();
          v48 = v47->SchedulerAssist;
          v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
          v12 = (v49 & v48[5]) == 0;
          v48[5] &= v49;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v47);
        }
      }
      __writecr8(v44);
      KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
      v50 = (unsigned __int64)Object;
      v33 = MiFlushSectionInternal(v78, v83, (_QWORD *)v4, v4, 0LL, 2u, &v79);
      KeGetCurrentThread()[1].TrapFrame = 0LL;
      FsRtlReleaseFileForCcFlush(Object);
    }
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v3 + 64), v50, 0x63536D4Du);
  }
  v55 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v56 = *(_DWORD *)(v3 + 56);
  if ( (v56 & 1) != 0 )
  {
    *(_DWORD *)(v3 + 56) = v56 & 0xFFFFFEFF;
    goto LABEL_110;
  }
  if ( v33 < 0 )
    goto LABEL_108;
  if ( *(_QWORD *)(v4 + 96) != 1LL || (*(_BYTE *)(v4 + 32) & 1) != 0 )
  {
    v33 = -1073741823;
LABEL_108:
    v63 = 1;
    goto LABEL_109;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( (_DWORD)KiIrqlFlags )
  {
    v57 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v57 <= 0xFu && (unsigned __int8)v55 <= 0xFu && v57 >= 2u )
    {
      v58 = KeGetCurrentPrcb();
      v59 = v58->SchedulerAssist;
      v60 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
      v12 = (v60 & v59[5]) == 0;
      v59[5] &= v60;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)v58);
    }
  }
  __writecr8(v55);
  v61 = MiPurgeSubsection(v4) == 0;
  v62 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v63 = v61;
  LOBYTE(v55) = v62;
LABEL_109:
  *(_DWORD *)(v3 + 56) &= ~0x100u;
  if ( (*(_DWORD *)(v3 + 56) & 1) == 0 )
  {
    v69 = 0LL;
    if ( v63 || *(_QWORD *)(v4 + 96) != 1LL || *(_DWORD *)(v4 + 104) || (*(_BYTE *)(v4 + 32) & 1) != 0 )
    {
      v33 = -1073741823;
      v69 = MiDecrementSubsectionViewCount((__int64 *)v4, 0);
      if ( !*(_QWORD *)(v4 + 96) )
        v69 += MiInsertUnusedSubsection(v4);
      P = 0LL;
    }
    else
    {
      MiUpdateSystemProtoPtesTree(v4 + 120, 0);
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)(v4 + 96) = 0LL;
    }
    v71 = MiDecrementModifiedWriteCount(v3, 1);
    if ( *(_QWORD *)(v3 + 24) | *(_QWORD *)(v3 + 40) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( (_DWORD)KiIrqlFlags )
      {
        v72 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v72 <= 0xFu && (unsigned __int8)v55 <= 0xFu )
        {
          v73 = v72 < 2u;
LABEL_140:
          if ( !v73 )
          {
            v75 = KeGetCurrentPrcb();
            v76 = v75->SchedulerAssist;
            v77 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
            v12 = (v77 & v76[5]) == 0;
            v76[5] &= v77;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v75);
          }
        }
      }
    }
    else
    {
      if ( !*(_QWORD *)(v3 + 32) )
      {
        LOBYTE(v70) = v55;
        MiDestroySection(v3, v70, 0LL);
        goto LABEL_145;
      }
      v69 += MiInsertUnusedSegment(v3);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( (_DWORD)KiIrqlFlags )
      {
        v74 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v74 <= 0xFu && (unsigned __int8)v55 <= 0xFu )
        {
          v73 = v74 < 2u;
          goto LABEL_140;
        }
      }
    }
    __writecr8((unsigned __int8)v55);
LABEL_145:
    if ( v71 )
      MiReleaseControlAreaWaiters(v71);
    if ( v69 )
      MiReturnCrossPartitionSectionCharges(a1, 1LL, v69);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)v33;
  }
LABEL_110:
  MiDecrementSubsectionViewCount((__int64 *)v4, 0);
  v64 = MiDecrementModifiedWriteCount(v3, 1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( (_DWORD)KiIrqlFlags )
  {
    v65 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v65 <= 0xFu && (unsigned __int8)v55 <= 0xFu && v65 >= 2u )
    {
      v66 = KeGetCurrentPrcb();
      v67 = v66->SchedulerAssist;
      v68 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
      v12 = (v68 & v67[5]) == 0;
      v67[5] &= v68;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)v66);
    }
  }
  __writecr8((unsigned __int8)v55);
  if ( v64 )
    MiReleaseControlAreaWaiters(v64);
  return 3221225473LL;
}
