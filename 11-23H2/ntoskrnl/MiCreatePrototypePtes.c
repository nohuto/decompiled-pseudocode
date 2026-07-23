/*
 * XREFs of MiCreatePrototypePtes @ 0x14021BA80
 * Callers:
 *     MiAddViewsForSection @ 0x140288A00 (MiAddViewsForSection.c)
 * Callees:
 *     MiControlAreaRequiresCharge @ 0x140214CC4 (MiControlAreaRequiresCharge.c)
 *     MiGetCommittedPages @ 0x1402197C0 (MiGetCommittedPages.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14021BF30 (MiUpdateSystemProtoPtesTree.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiIncrementSubsectionViewCount @ 0x140289480 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x14029FD60 (MiDecrementSubsectionViewCount.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetSubsectionCharges @ 0x14066B6F8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B904 (MiReturnCrossPartitionSectionCharges.c)
 *     MiInitializePrototypePtes @ 0x1406B0F14 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x140A33318 (MiAllocateFileExtents.c)
 *     MiChargeLargeProtoSubsection @ 0x140A338F4 (MiChargeLargeProtoSubsection.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePrototypePtes(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v5; // r13
  ULONG_PTR v6; // r15
  void *v7; // r14
  char v8; // cl
  BOOL v9; // r12d
  unsigned int v10; // ebp
  unsigned __int64 v11; // rcx
  __int64 CommittedPages; // r12
  int v13; // edi
  volatile LONG *v14; // r14
  unsigned __int64 v15; // rsi
  int v16; // eax
  int v17; // r13d
  int SubsectionCharges; // edi
  int v19; // r15d
  bool v20; // zf
  int v21; // ebp
  unsigned int v22; // esi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdi
  struct _KTHREAD *v27; // rbp
  volatile signed __int32 *v28; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v30; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 v34; // rbp
  signed __int32 v35; // eax
  signed __int32 v36; // ett
  unsigned int v37; // r8d
  __int64 v38; // rax
  __int64 v39; // rbp
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rdi
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  unsigned __int8 v50; // cl
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  unsigned __int8 v54; // cl
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r9
  int v57; // eax
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  int v62; // [rsp+30h] [rbp-78h]
  int v63; // [rsp+34h] [rbp-74h]
  int v64; // [rsp+38h] [rbp-70h]
  __int64 v65; // [rsp+40h] [rbp-68h]
  ULONG_PTR Pool; // [rsp+48h] [rbp-60h]
  unsigned int v67; // [rsp+50h] [rbp-58h]
  __int16 v68; // [rsp+58h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-48h]
  unsigned int v72; // [rsp+C8h] [rbp+20h]

  v5 = *(_QWORD *)BugCheckParameter2;
  v6 = BugCheckParameter2;
  v62 = 0;
  v64 = 0;
  CurrentThread = KeGetCurrentThread();
  v65 = *(_QWORD *)BugCheckParameter2;
  Pool = MiAllocatePool(274LL, 8LL * a4, 1951624525LL);
  v7 = (void *)Pool;
  if ( Pool )
  {
    v8 = *(_BYTE *)(v5 + 62);
    v9 = *(_QWORD *)(v5 + 64) != 0LL;
    v72 = v9;
    if ( (a2 & 0x400) != 0 && (v8 & 0xC) != 0 )
    {
      if ( (v8 & 0xC) == 8 )
      {
        SubsectionCharges = -1073741811;
LABEL_61:
        ExFreePoolWithTag(v7, 0);
        return (unsigned int)SubsectionCharges;
      }
      if ( !(unsigned int)MiChargeLargeProtoSubsection(v6, 1LL) )
      {
        SubsectionCharges = -1073741670;
        goto LABEL_61;
      }
      v62 = 1;
    }
    v10 = a2 | 4;
    if ( (*(_BYTE *)(v5 + 62) & 0xC) != 4 )
      v10 = a2;
    v68 = v10;
    MiInitializePrototypePtes(Pool);
    if ( v9 )
      CommittedPages = a3;
    else
      CommittedPages = MiGetCommittedPages((_QWORD *)v5);
    if ( (v10 & 4) != 0 )
    {
      v13 = 1;
      v63 = 1;
    }
    else
    {
      if ( (v10 & 0x80u) != 0 )
        v24 = 3LL;
      else
        v24 = (v10 >> 7) & 2;
      v63 = MiControlAreaRequiresCharge(v5, v24);
      v13 = v63;
      if ( !v63 )
      {
        CommittedPages = 0LL;
        SubsectionCharges = -1073740277;
LABEL_60:
        v21 = v62;
LABEL_25:
        v22 = v72;
        if ( !v72 && v64 )
        {
          v25 = *(_QWORD *)v5;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v5 + 40LL), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v25 + 40);
          KeAbPostRelease(v25 + 40);
          v20 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v20
            && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          v22 = 0;
        }
        if ( v21 )
          MiChargeLargeProtoSubsection(v6, 0LL);
        if ( CommittedPages )
          MiReturnCrossPartitionSectionCharges(
            *(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)),
            v22,
            CommittedPages);
        if ( !v7 )
          return (unsigned int)SubsectionCharges;
        goto LABEL_61;
      }
    }
    v64 = 0;
    if ( v13 == 2 )
      goto LABEL_77;
    CommittedPages = 0LL;
    v64 = 0;
    while ( 1 )
    {
      if ( !v72 )
      {
        v26 = 0LL;
        v64 = 1;
        --CurrentThread->SpecialApcDisable;
        v27 = KeGetCurrentThread();
        v28 = (volatile signed __int32 *)(*(_QWORD *)v5 + 40LL);
        _disable();
        AbEntrySummary = v27->AbEntrySummary;
        if ( v27->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v11, v27)) != 0 )
        {
          _BitScanForward(&v30, AbEntrySummary);
          v67 = v30;
          v27->AbEntrySummary = AbEntrySummary & ~(1 << v30);
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v35 = *SchedulerAssist;
            do
            {
              v36 = v35;
              v35 = _InterlockedCompareExchange(SchedulerAssist, v35 & 0xFFDFFFFF, v35);
            }
            while ( v36 != v35 );
            if ( (v35 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          _enable();
          v26 = (__int64)(&v27[1].Process + 12 * v67);
          if ( (unsigned __int64)v28 - qword_140C659E8 < 0x8000000000LL )
            SessionId = MmGetSessionIdEx(v27->ApcState.Process);
          else
            SessionId = -1;
          *(_DWORD *)(v26 + 8) = SessionId;
          *(_QWORD *)v26 = (unsigned __int64)v28 & 0x7FFFFFFFFFFFFFFCLL;
        }
        if ( _interlockedbittestandset64(v28, 0LL) )
          ExfAcquirePushLockExclusiveEx(v28, v26, v28);
        if ( v26 )
          *(_BYTE *)(v26 + 18) = 1;
        v13 = v63;
      }
      v14 = (volatile LONG *)(v5 + 72);
      v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
      if ( v13 != 2 )
        break;
      v37 = v72;
      v38 = v72 ? *(_DWORD *)(v6 + 44) - (*(_DWORD *)(v6 + 52) & 0x3FFFFFFFu) : MiGetCommittedPages((_QWORD *)v5);
      if ( CommittedPages == v38 )
        break;
      v39 = (unsigned int)CommittedPages;
      if ( v37 )
        CommittedPages = *(_DWORD *)(v6 + 44) - (*(_DWORD *)(v6 + 52) & 0x3FFFFFFFu);
      else
        CommittedPages = MiGetCommittedPages((_QWORD *)v5);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      v11 = (unsigned int)KiIrqlFlags;
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v15 <= 0xFu
          && CurrentIrql >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v11 = (unsigned int)(v15 + 1);
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v20 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      __writecr8(v15);
      v44 = v72;
      if ( !v72 )
      {
        v45 = *(_QWORD *)v5;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v5 + 40LL), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v45 + 40);
        KeAbPostRelease(v45 + 40);
        v11 = (unsigned __int64)CurrentThread;
        v20 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v20
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        v13 = v63;
        v44 = 0LL;
        v64 = 0;
      }
      if ( (_DWORD)v39 )
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)),
          v44,
          v39);
LABEL_77:
      if ( CommittedPages )
      {
        SubsectionCharges = MiGetSubsectionCharges(v6, CommittedPages);
        if ( SubsectionCharges < 0 )
        {
          CommittedPages = 0LL;
          goto LABEL_59;
        }
        v13 = v63;
      }
    }
    v16 = MiIncrementSubsectionViewCount(v6);
    v17 = v16;
    if ( v16 == 1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v14);
      if ( (_DWORD)KiIrqlFlags )
      {
        v46 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v46 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v46 >= 2u )
        {
          v47 = KeGetCurrentPrcb();
          v48 = v47->SchedulerAssist;
          v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v20 = (v49 & v48[5]) == 0;
          v48[5] &= v49;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v47);
        }
      }
      __writecr8(v15);
      SubsectionCharges = -1073741670;
      goto LABEL_58;
    }
    SubsectionCharges = 0;
    v19 = 0;
    if ( v16 == 3 )
      CommittedPages = 0LL;
    if ( (*(_BYTE *)(v65 + 62) & 0xC) != 0 )
    {
      v19 = 1;
      ExReleaseSpinLockExclusiveFromDpcLevel(v14);
      if ( (_DWORD)KiIrqlFlags )
      {
        v50 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v50 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v50 >= 2u )
        {
          v51 = KeGetCurrentPrcb();
          v52 = v51->SchedulerAssist;
          v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v20 = (v53 & v52[5]) == 0;
          v52[5] &= v53;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v51);
        }
      }
      __writecr8(v15);
      SubsectionCharges = MiAllocateFileExtents(BugCheckParameter2, (v68 & 0x400 | 0x50u) >> 4, -1);
      if ( SubsectionCharges < 0 )
      {
        v6 = BugCheckParameter2;
        goto LABEL_58;
      }
      if ( (*(_BYTE *)(v65 + 62) & 0xC) == 4 )
        return (unsigned int)SubsectionCharges;
      SubsectionCharges = 0;
      LOBYTE(v15) = ExAcquireSpinLockExclusive(v14);
    }
    if ( v72 )
      *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
    v20 = v19 == 0;
    v6 = BugCheckParameter2;
    if ( !v20 || !*(_QWORD *)(BugCheckParameter2 + 8) )
    {
      v5 = v65;
      if ( (*(_BYTE *)(v65 + 62) & 0xC) == 0 )
      {
        *(_QWORD *)(BugCheckParameter2 + 8) = Pool;
        MiUpdateSystemProtoPtesTree(BugCheckParameter2 + ((unsigned __int64)v72 << 6) + 56, 1LL);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v14);
      if ( (_DWORD)KiIrqlFlags )
      {
        v58 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v58 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v58 >= 2u )
        {
          v59 = KeGetCurrentPrcb();
          v60 = v59->SchedulerAssist;
          v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v20 = (v61 & v60[5]) == 0;
          v60[5] &= v61;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v59);
        }
      }
      __writecr8((unsigned __int8)v15);
      v7 = 0LL;
      v21 = 0;
      goto LABEL_25;
    }
    SubsectionCharges = -1073741302;
    v34 = MiDecrementSubsectionViewCount(BugCheckParameter2);
    ExReleaseSpinLockExclusiveFromDpcLevel(v14);
    if ( (_DWORD)KiIrqlFlags )
    {
      v54 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v54 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v54 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v56 = v55->SchedulerAssist;
        v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v20 = (v57 & v56[5]) == 0;
        v56[5] &= v57;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v55);
      }
    }
    __writecr8((unsigned __int8)v15);
    if ( v17 == 3 )
      CommittedPages = v34;
LABEL_58:
    v5 = v65;
LABEL_59:
    v7 = (void *)Pool;
    goto LABEL_60;
  }
  return 3221225626LL;
}
