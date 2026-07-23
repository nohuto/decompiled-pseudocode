/*
 * XREFs of MiAddViewsForSection @ 0x140288A00
 * Callers:
 *     MiReferenceDataSubsections @ 0x140211CA8 (MiReferenceDataSubsections.c)
 *     MmMapViewInSystemCache @ 0x14029F8C0 (MmMapViewInSystemCache.c)
 *     MiPfPrepareReadList @ 0x1406F64B0 (MiPfPrepareReadList.c)
 *     MiMapViewOfDataSection @ 0x140720480 (MiMapViewOfDataSection.c)
 *     MiPfPrepareSequentialReadList @ 0x1407448D0 (MiPfPrepareSequentialReadList.c)
 *     MiCommitPagefileBackedSection @ 0x1407DC358 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140207740 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiCreatePrototypePtes @ 0x14021BA80 (MiCreatePrototypePtes.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiReferenceActiveSubsection @ 0x140289030 (MiReferenceActiveSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsections @ 0x14029FCC0 (MiDecrementSubsections.c)
 *     MiCheckControlArea @ 0x14029FE50 (MiCheckControlArea.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046B838 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B60C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B904 (MiReturnCrossPartitionSectionCharges.c)
 *     MiAllocateFileExtents @ 0x140A33318 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(ULONG_PTR a1, unsigned __int64 a2, unsigned int a3)
{
  int *v3; // r15
  unsigned int v4; // esi
  ULONG_PTR v5; // rbp
  unsigned int v6; // r13d
  unsigned __int8 CurrentIrql; // r12
  int active; // eax
  unsigned __int64 v9; // rax
  int PrototypePtes; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rbx
  struct _KTHREAD *v19; // r12
  volatile signed __int32 *v20; // r14
  unsigned int AbEntrySummary; // eax
  unsigned int v22; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  ULONG_PTR v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  struct _KTHREAD *v32; // r8
  volatile signed __int32 *v33; // r9
  unsigned int v34; // eax
  unsigned int v35; // ecx
  struct _KPRCB *v36; // rcx
  signed __int32 *v37; // r10
  _KPROCESS **v38; // rcx
  int v39; // eax
  signed __int32 v40; // eax
  signed __int32 v41; // ett
  _DWORD *v42; // r8
  __int64 v43; // rax
  unsigned __int8 v44; // cl
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // edx
  struct _KTHREAD *v48; // r10
  volatile signed __int32 *v49; // r9
  unsigned int v50; // eax
  unsigned int v51; // ecx
  struct _KPRCB *v52; // rcx
  signed __int32 *v53; // r8
  signed __int32 v54; // eax
  signed __int32 v55; // ett
  _KPROCESS **v56; // rcx
  int v57; // eax
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // edx
  int v62; // edx
  unsigned __int8 v63; // dl
  struct _KPRCB *v64; // r10
  _DWORD *v65; // r9
  int v66; // edx
  unsigned __int8 v67; // dl
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // edx
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  struct _KTHREAD *v74; // rcx
  ULONG_PTR v75; // r12
  unsigned __int8 v76; // cl
  struct _KPRCB *v77; // r10
  _DWORD *v78; // r9
  int v79; // edx
  unsigned __int8 v80; // cl
  struct _KPRCB *v81; // r10
  _DWORD *v82; // r9
  int v83; // edx
  unsigned __int64 v84; // rbp
  __int64 v85; // rdi
  unsigned __int8 v86; // cl
  struct _KPRCB *v87; // r9
  int v88; // eax
  _DWORD *v89; // r8
  KIRQL v90; // al
  ULONG_PTR v91; // [rsp+30h] [rbp-B8h]
  _KPROCESS **v92; // [rsp+30h] [rbp-B8h]
  char v93; // [rsp+38h] [rbp-B0h]
  _KPROCESS **v94; // [rsp+40h] [rbp-A8h]
  __int64 v95; // [rsp+40h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2b; // [rsp+48h] [rbp-A0h]
  int v99; // [rsp+50h] [rbp-98h]
  int v100; // [rsp+58h] [rbp-90h]
  __int64 v101; // [rsp+60h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-80h]
  unsigned int v103; // [rsp+70h] [rbp-78h]
  int v104; // [rsp+74h] [rbp-74h] BYREF
  unsigned int v105; // [rsp+78h] [rbp-70h]
  unsigned int v106; // [rsp+7Ch] [rbp-6Ch]
  ULONG_PTR v107; // [rsp+98h] [rbp-50h]
  void *retaddr; // [rsp+E8h] [rbp+0h]
  unsigned int v111; // [rsp+100h] [rbp+18h]
  int FileExtents; // [rsp+100h] [rbp+18h]
  unsigned int v113; // [rsp+108h] [rbp+20h]

  v3 = *(int **)a1;
  v4 = a3;
  v113 = a3;
  v5 = a1;
  v91 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 64LL) )
  {
    v6 = 1;
    CurrentThread = 0LL;
    v101 = 0LL;
  }
  else
  {
    v6 = 0;
    v17 = *(_QWORD *)v3;
    v18 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v101 = v17;
    --CurrentThread->SpecialApcDisable;
    v19 = KeGetCurrentThread();
    v20 = (volatile signed __int32 *)(v17 + 40);
    _disable();
    AbEntrySummary = v19->AbEntrySummary;
    if ( v19->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v17, v19)) != 0 )
    {
      _BitScanForward(&v22, AbEntrySummary);
      v103 = v22;
      v19->AbEntrySummary = AbEntrySummary & ~(1 << v22);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v26 = *SchedulerAssist;
        do
        {
          v27 = v26;
          v26 = _InterlockedCompareExchange(SchedulerAssist, v26 & 0xFFDFFFFF, v26);
        }
        while ( v27 != v26 );
        if ( (v26 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v18 = (__int64)(&v19[1].Process + 12 * v103);
      if ( (unsigned __int64)v20 - qword_140C659E8 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx(v19->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v18 + 8) = SessionId;
      *(_QWORD *)v18 = (unsigned __int64)v20 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64(v20, 0LL) )
      ExfAcquirePushLockExclusiveEx(v20, v18, v20);
    if ( v18 )
      *(_BYTE *)(v18 + 18) = 1;
  }
  v100 = v4 & 0x180;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v42 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v43) = 4;
    else
      v43 = (-1LL << (CurrentIrql + 1)) & 4;
    v42[5] |= v43;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 18, CurrentIrql);
  }
  else
  {
    v104 = 0;
    if ( _interlockedbittestandset(v3 + 18, 0x1Fu) )
      v104 = ExpWaitForSpinLockExclusiveAndAcquire(v3 + 18, CurrentIrql);
    while ( (v3[18] & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v3[18] & 0x40000000) == 0 )
        _InterlockedOr(v3 + 18, 0x40000000u);
      KeYieldProcessorEx(&v104);
    }
    v5 = a1;
  }
  if ( (v4 & 1) != 0 )
  {
    ++*((_QWORD *)v3 + 5);
    ++v3[22];
    v4 |= 4u;
    v113 = v4;
  }
  v93 = CurrentIrql + 1;
  while ( 1 )
  {
    v111 = *(_DWORD *)(v5 + 44);
    v107 = v5;
    if ( !*(_QWORD *)(v5 + 8) )
    {
      v99 = *(_DWORD *)(v5 + 52) & 0x3FFFFFFF;
      ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
      if ( (_DWORD)KiIrqlFlags )
      {
        v44 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v44 <= 0xFu && CurrentIrql <= 0xFu && v44 >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          v46 = v45->SchedulerAssist;
          v47 = ~(unsigned __int16)(-1LL << v93);
          v16 = (v47 & v46[5]) == 0;
          v46[5] &= v47;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
      __writecr8(CurrentIrql);
      if ( !v6 )
      {
        v28 = v101 + 40;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v101 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v28);
          v28 = v101 + 40;
        }
        KeAbPostRelease(v28);
        v16 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v16
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(CurrentThread, v29, v30, v31);
        }
      }
      if ( (v4 & 2) != 0 )
        return 3221225865LL;
      if ( (*((_BYTE *)v3 + 62) & 0xC) != 0 && (v4 & 0x800) != 0 )
        return 3221226218LL;
      PrototypePtes = MiCreatePrototypePtes(v5, v113, v111 - v99, v111);
      FileExtents = PrototypePtes;
      v12 = (unsigned int)PrototypePtes;
      if ( PrototypePtes < 0 )
      {
        if ( PrototypePtes != -1073741302 )
          goto LABEL_178;
        if ( v6 )
          goto LABEL_70;
        v105 = 0;
        v94 = 0LL;
        --CurrentThread->SpecialApcDisable;
        v48 = KeGetCurrentThread();
        v49 = (volatile signed __int32 *)(v101 + 40);
        BugCheckParameter2b = (ULONG_PTR)v48;
        _disable();
        v50 = v48->AbEntrySummary;
        if ( v48->AbEntrySummary )
        {
LABEL_105:
          _BitScanForward(&v51, v50);
          v105 = v51;
          v48->AbEntrySummary = v50 & ~(1 << v51);
          v52 = KeGetCurrentPrcb();
          v53 = (signed __int32 *)v52->SchedulerAssist;
          if ( v53 )
          {
            _m_prefetchw(v53);
            v54 = *v53;
            do
            {
              v55 = v54;
              v54 = _InterlockedCompareExchange(v53, v54 & 0xFFDFFFFF, v54);
            }
            while ( v55 != v54 );
            if ( (v54 & 0x200000) != 0 )
            {
              KiRemoveSystemWorkPriorityKick(v52);
              v49 = (volatile signed __int32 *)(v101 + 40);
              v48 = (struct _KTHREAD *)BugCheckParameter2b;
            }
          }
          _enable();
          v56 = &v48[1].Process + 12 * v105;
          v94 = v56;
          if ( (unsigned __int64)v49 - qword_140C659E8 >= 0x8000000000LL )
          {
            v57 = -1;
          }
          else
          {
            v57 = MmGetSessionIdEx(v48->ApcState.Process);
            v56 = v94;
            v49 = (volatile signed __int32 *)(v101 + 40);
          }
          *((_DWORD *)v56 + 2) = v57;
          *v56 = (_KPROCESS *)((unsigned __int64)v49 & 0x7FFFFFFFFFFFFFFCLL);
        }
        else
        {
          v50 = KiAbTryReclaimOrphanedEntries(v12, v48);
          v49 = (volatile signed __int32 *)(v101 + 40);
          if ( v50 )
          {
            v48 = (struct _KTHREAD *)BugCheckParameter2b;
            goto LABEL_105;
          }
          v56 = 0LL;
        }
        if ( _interlockedbittestandset64(v49, 0LL) )
        {
          ExfAcquirePushLockExclusiveEx(v49, v56, v49);
          v56 = v94;
        }
        if ( v56 )
          *((_BYTE *)v56 + 18) = 1;
LABEL_70:
        ExAcquireSpinLockExclusive(v3 + 18);
        goto LABEL_52;
      }
      if ( v6 )
        goto LABEL_30;
      v106 = 0;
      v92 = 0LL;
      --CurrentThread->SpecialApcDisable;
      v32 = KeGetCurrentThread();
      v33 = (volatile signed __int32 *)(v101 + 40);
      BugCheckParameter2a = (ULONG_PTR)v32;
      _disable();
      v34 = v32->AbEntrySummary;
      if ( !v32->AbEntrySummary )
      {
        v34 = KiAbTryReclaimOrphanedEntries(v12, v32);
        v33 = (volatile signed __int32 *)(v101 + 40);
        if ( !v34 )
        {
          v38 = 0LL;
LABEL_64:
          if ( _interlockedbittestandset64(v33, 0LL) )
          {
            ExfAcquirePushLockExclusiveEx(v33, v38, v33);
            v38 = v92;
          }
          if ( v38 )
            *((_BYTE *)v38 + 18) = 1;
LABEL_30:
          ExAcquireSpinLockExclusive(v3 + 18);
          goto LABEL_17;
        }
        v32 = (struct _KTHREAD *)BugCheckParameter2a;
      }
      _BitScanForward(&v35, v34);
      v106 = v35;
      v32->AbEntrySummary = v34 & ~(1 << v35);
      v36 = KeGetCurrentPrcb();
      v37 = (signed __int32 *)v36->SchedulerAssist;
      if ( v37 )
      {
        _m_prefetchw(v37);
        v40 = *v37;
        do
        {
          v41 = v40;
          v40 = _InterlockedCompareExchange(v37, v40 & 0xFFDFFFFF, v40);
        }
        while ( v41 != v40 );
        if ( (v40 & 0x200000) != 0 )
        {
          KiRemoveSystemWorkPriorityKick(v36);
          v33 = (volatile signed __int32 *)(v101 + 40);
          v32 = (struct _KTHREAD *)BugCheckParameter2a;
        }
      }
      _enable();
      v38 = &v32[1].Process + 12 * v106;
      v92 = v38;
      if ( (unsigned __int64)v33 - qword_140C659E8 < 0x8000000000LL )
      {
        v39 = MmGetSessionIdEx(v32->ApcState.Process);
        v38 = v92;
        v33 = (volatile signed __int32 *)(v101 + 40);
      }
      else
      {
        v39 = -1;
      }
      *((_DWORD *)v38 + 2) = v39;
      *v38 = (_KPROCESS *)((unsigned __int64)v33 & 0x7FFFFFFFFFFFFFFCLL);
      goto LABEL_64;
    }
    if ( (v4 & 0x400) != 0 )
    {
      FileExtents = -1073741800;
      ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
      if ( (_DWORD)KiIrqlFlags )
      {
        v80 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v80 <= 0xFu && CurrentIrql <= 0xFu && v80 >= 2u )
        {
          v81 = KeGetCurrentPrcb();
          v82 = v81->SchedulerAssist;
          v83 = ~(unsigned __int16)(-1LL << v93);
          v16 = (v83 & v82[5]) == 0;
          v82[5] &= v83;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v81);
        }
      }
      __writecr8(CurrentIrql);
      if ( v6 )
        goto LABEL_177;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v101 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v101 + 40);
      KeAbPostRelease(v101 + 40);
      v74 = CurrentThread;
      v16 = CurrentThread->SpecialApcDisable++ == -1;
      if ( !v16
        || ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink == &CurrentThread->152 )
      {
        goto LABEL_177;
      }
      goto LABEL_176;
    }
    active = MiReferenceActiveSubsection(v5);
    FileExtents = active;
    if ( active < 0 )
      break;
    if ( v6 && (*(_DWORD *)(v5 + 52) & 0x40000000) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
      if ( (_DWORD)KiIrqlFlags )
      {
        v58 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v58 <= 0xFu && CurrentIrql <= 0xFu && v58 >= 2u )
        {
          v59 = KeGetCurrentPrcb();
          v60 = v59->SchedulerAssist;
          v61 = ~(unsigned __int16)(-1LL << v93);
          v16 = (v61 & v60[5]) == 0;
          v60[5] &= v61;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v59);
        }
      }
      __writecr8(CurrentIrql);
      if ( (v4 & 0x800) != 0 )
      {
        LODWORD(v12) = -1073741078;
        FileExtents = -1073741078;
LABEL_156:
        v75 = v5;
        goto LABEL_179;
      }
      FileExtents = MiAllocateFileExtents(v5, 0, -1);
      LODWORD(v12) = FileExtents;
      if ( (int)(FileExtents + 0x80000000) >= 0 && FileExtents != -1073741302 )
        goto LABEL_156;
      ExAcquireSpinLockExclusive(v3 + 18);
      if ( FileExtents < 0 )
      {
        v62 = 0;
        if ( (v4 & 5) == 0 )
          v62 = v100 | 8;
        v113 = v62;
        v95 = MiDecrementSubsections(v5);
        if ( !v95 )
          goto LABEL_52;
        ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
        if ( (_DWORD)KiIrqlFlags )
        {
          v63 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v63 <= 0xFu && CurrentIrql <= 0xFu && v63 >= 2u )
          {
            v64 = KeGetCurrentPrcb();
            v65 = v64->SchedulerAssist;
            v66 = ~(unsigned __int16)(-1LL << v93);
            v16 = (v66 & v65[5]) == 0;
            v65[5] &= v66;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v64);
          }
        }
        __writecr8(CurrentIrql);
        MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C673C8 + 8LL * (v3[15] & 0x3FF)), 1LL, v95);
        goto LABEL_70;
      }
    }
LABEL_17:
    if ( a2 )
    {
      v9 = *(unsigned int *)(v5 + 44);
      if ( a2 <= v9 )
        goto LABEL_19;
      a2 -= v9;
    }
    v5 = *(_QWORD *)(v5 + 16);
    v91 = v107;
    if ( !v6 )
    {
      v91 = v107;
      v113 = v100 | 4;
    }
LABEL_52:
    if ( !v5 )
    {
LABEL_19:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 18, retaddr);
      else
        v3[18] = 0;
      if ( (_DWORD)KiIrqlFlags )
      {
        v76 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v76 <= 0xFu && CurrentIrql <= 0xFu && v76 >= 2u )
        {
          v77 = KeGetCurrentPrcb();
          v78 = v77->SchedulerAssist;
          v79 = ~(unsigned __int16)(-1LL << v93);
          v16 = (v79 & v78[5]) == 0;
          v78[5] &= v79;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v77);
        }
      }
      __writecr8(CurrentIrql);
      if ( !v6 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v101 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v101 + 40);
        KeAbPostRelease(v101 + 40);
        v16 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v16
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(CurrentThread, v13, v14, v15);
        }
      }
      return 0LL;
    }
  }
  if ( active == -1073741302 )
    goto LABEL_52;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
  if ( (_DWORD)KiIrqlFlags )
  {
    v67 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v67 <= 0xFu && CurrentIrql <= 0xFu && v67 >= 2u )
    {
      v68 = KeGetCurrentPrcb();
      v69 = v68->SchedulerAssist;
      v70 = ~(unsigned __int16)(-1LL << v93);
      v16 = (v70 & v69[5]) == 0;
      v69[5] &= v70;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(v68);
    }
  }
  __writecr8(CurrentIrql);
  if ( !v6 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v101 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v101 + 40);
    KeAbPostRelease(v101 + 40);
    v74 = CurrentThread;
    v16 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
LABEL_176:
      KiCheckForKernelApcDelivery(v74, v71, v72, v73);
  }
LABEL_177:
  LODWORD(v12) = FileExtents;
LABEL_178:
  v75 = v91;
LABEL_179:
  if ( v75 )
  {
    v84 = ExAcquireSpinLockExclusive(v3 + 18);
    v85 = MiDecrementSubsections(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
    if ( (_DWORD)KiIrqlFlags )
    {
      v86 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v86 <= 0xFu && (unsigned __int8)v84 <= 0xFu && v86 >= 2u )
      {
        v87 = KeGetCurrentPrcb();
        v88 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v84 + 1));
        v89 = v87->SchedulerAssist;
        v16 = (v88 & v89[5]) == 0;
        v89[5] &= v88;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v87);
      }
    }
    __writecr8(v84);
    if ( v85 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C673C8 + 8LL * (v3[15] & 0x3FF)), v6, v85);
    LODWORD(v12) = FileExtents;
  }
  if ( (v4 & 1) != 0 )
  {
    v90 = ExAcquireSpinLockExclusive(v3 + 18);
    --*((_QWORD *)v3 + 5);
    --v3[22];
    MiCheckControlArea(v3, v90);
    LODWORD(v12) = FileExtents;
  }
  return (unsigned int)v12;
}
