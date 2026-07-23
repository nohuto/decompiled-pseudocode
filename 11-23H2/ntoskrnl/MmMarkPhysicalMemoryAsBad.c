/*
 * XREFs of MmMarkPhysicalMemoryAsBad @ 0x14062BB00
 * Callers:
 *     MiScrubLargePage @ 0x14065EEBC (MiScrubLargePage.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140A0844C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x1402186C0 (MiIsPageOnBadList.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     MiReturnResavailToPrcb @ 0x1402DC450 (MiReturnResavailToPrcb.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiSetPfnPteFrame @ 0x1402E1830 (MiSetPfnPteFrame.c)
 *     MiAcquireNonPagedResources @ 0x1402E45A4 (MiAcquireNonPagedResources.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiIsPageInHugePfn @ 0x14033703C (MiIsPageInHugePfn.c)
 *     MiFindContiguousPagesEx @ 0x1403BB1F8 (MiFindContiguousPagesEx.c)
 *     MiFreeContiguousPages @ 0x1403C3BBC (MiFreeContiguousPages.c)
 *     KeGenericCallDpcEx @ 0x1403C68D0 (KeGenericCallDpcEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiMarkHugePfnBad @ 0x140621B68 (MiMarkHugePfnBad.c)
 *     MiReferencePagePartition @ 0x140629B54 (MiReferencePagePartition.c)
 *     MiMarkFileOnlyPfnBad @ 0x14063E590 (MiMarkFileOnlyPfnBad.c)
 *     MiSetPfnRemovalRequested @ 0x14064E404 (MiSetPfnRemovalRequested.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsBad(int *a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // eax
  unsigned __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v7; // rbx
  int v8; // esi
  struct _KTHREAD *v9; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v11; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  int SessionId; // eax
  __int64 v17; // r13
  int v18; // eax
  signed __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r10
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rcx
  int v25; // esi
  struct _KTHREAD *v26; // rdi
  unsigned __int64 v27; // rbx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  struct _KPRCB *v30; // rcx
  signed __int32 *v31; // r8
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  int v34; // eax
  unsigned __int64 v35; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  __int64 v40; // r12
  unsigned __int8 v41; // cl
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  unsigned __int8 v45; // cl
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  PVOID Pool; // rbx
  unsigned __int64 v50; // rdi
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  unsigned __int64 v55; // r8
  struct _KPRCB *v56; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v58; // eax
  char v59; // al
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r10
  _DWORD *v62; // r9
  int v63; // eax
  unsigned __int64 v64; // r8
  struct _KPRCB *v65; // r9
  __int64 v66; // rdx
  signed __int32 v67; // eax
  unsigned __int64 v68; // r15
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // eax
  unsigned __int64 v73; // r8
  struct _KPRCB *v74; // r9
  __int64 v75; // rdx
  signed __int32 v76; // eax
  BOOL v77; // ebx
  unsigned __int8 v78; // cl
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // eax
  unsigned __int64 v82; // rbx
  __int64 v83; // rcx
  int ContiguousPages; // esi
  struct _KTHREAD *v85; // rdi
  unsigned int v86; // eax
  unsigned int v87; // ecx
  struct _KPRCB *v88; // rcx
  signed __int32 *v89; // r8
  signed __int32 v90; // eax
  signed __int32 v91; // ett
  int v92; // eax
  unsigned __int64 v93; // rbx
  ULONG_PTR v94; // rcx
  char v95; // cl
  unsigned __int8 v96; // al
  struct _KPRCB *v97; // r10
  _DWORD *v98; // r9
  int v99; // eax
  unsigned __int8 v100; // al
  struct _KPRCB *v101; // r10
  _DWORD *v102; // r9
  int v103; // eax
  unsigned __int64 v104; // rax
  unsigned int v105; // ebx
  unsigned int v106; // edi
  int v107; // [rsp+70h] [rbp-90h]
  int v108; // [rsp+74h] [rbp-8Ch]
  unsigned int v109; // [rsp+78h] [rbp-88h]
  unsigned int v110; // [rsp+7Ch] [rbp-84h]
  unsigned int v111; // [rsp+80h] [rbp-80h]
  int v112; // [rsp+84h] [rbp-7Ch]
  unsigned __int64 v113; // [rsp+98h] [rbp-68h]
  struct _KTHREAD *v114; // [rsp+A0h] [rbp-60h]
  __int64 v115; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v116; // [rsp+C8h] [rbp-38h]
  _QWORD *v117; // [rsp+D0h] [rbp-30h]
  _QWORD v118[12]; // [rsp+E0h] [rbp-20h] BYREF

  v2 = *a1;
  v3 = *a1;
  v117 = a2;
  v115 = 0LL;
  if ( (v3 & 0xFFFu) > 1 )
    return 3221225711LL;
  if ( (*a2 & 0xFFF) != 0 )
    return 3221225712LL;
  if ( (MiFlags & 0x10000000) == 0 )
    return 3221225474LL;
  v5 = *(_QWORD *)a1 >> 12;
  v116 = *(_QWORD *)a2 >> 12;
  v113 = v5 + v116;
  if ( v5 >= v5 + v116 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v107 = 0;
  v7 = 0LL;
  v8 = (((v2 & 1) == 0) << 28) + 739246080;
  --CurrentThread->SpecialApcDisable;
  v9 = KeGetCurrentThread();
  v108 = v8;
  v112 = 0;
  v114 = CurrentThread;
  _disable();
  AbEntrySummary = v9->AbEntrySummary;
  if ( v9->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)a1, (__int64)v9)) != 0 )
  {
    _BitScanForward(&v11, AbEntrySummary);
    v109 = v11;
    v9->AbEntrySummary = AbEntrySummary & ~(1 << v11);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v14 = *SchedulerAssist;
      do
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange(SchedulerAssist, v14 & 0xFFDFFFFF, v14);
      }
      while ( v15 != v14 );
      if ( (v14 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v7 = (unsigned __int64)(&v9[1].Process + 12 * v109);
    if ( (unsigned __int64)&qword_140C6B518 - qword_140C659E8 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
    *(_DWORD *)(v7 + 8) = SessionId;
    *(_QWORD *)v7 = (unsigned __int64)&qword_140C6B518 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B518, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C6B518, 0LL, v7, (__int64)&qword_140C6B518);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v17 = 48 * v5 - 0x220000000000LL;
  while ( 1 )
  {
    LOBYTE(v18) = MiIsPageInHugePfn(v5);
    if ( v18 )
    {
      if ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B518, 0LL, v19) )
        ExfReleasePushLockShared((signed __int64 *)&qword_140C6B518);
      KeAbPostRelease((ULONG_PTR)&qword_140C6B518);
      v22 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v22
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v23 = MiMarkHugePfnBad(v5, v8);
      --CurrentThread->SpecialApcDisable;
      v25 = v23;
      v107 = v23;
      v26 = KeGetCurrentThread();
      v27 = 0LL;
      _disable();
      v28 = v26->AbEntrySummary;
      if ( v26->AbEntrySummary || (v28 = KiAbTryReclaimOrphanedEntries(v24, (__int64)v26)) != 0 )
      {
        _BitScanForward(&v29, v28);
        v110 = v29;
        v26->AbEntrySummary = v28 & ~(1 << v29);
        v30 = KeGetCurrentPrcb();
        v31 = (signed __int32 *)v30->SchedulerAssist;
        if ( v31 )
        {
          _m_prefetchw(v31);
          v32 = *v31;
          do
          {
            v33 = v32;
            v32 = _InterlockedCompareExchange(v31, v32 & 0xFFDFFFFF, v32);
          }
          while ( v33 != v32 );
          if ( (v32 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v30);
        }
        _enable();
        v27 = (unsigned __int64)(&v26[1].Process + 12 * v110);
        if ( (unsigned __int64)&qword_140C6B518 - qword_140C659E8 >= 0x8000000000LL )
          v34 = -1;
        else
          v34 = MmGetSessionIdEx((__int64)v26->ApcState.Process);
        *(_DWORD *)(v27 + 8) = v34;
        *(_QWORD *)v27 = (unsigned __int64)&qword_140C6B518 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B518, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C6B518, 0LL, v27, (__int64)&qword_140C6B518);
      if ( v27 )
        *(_BYTE *)(v27 + 18) = 1;
      v22 = v25 == -1073740748;
      v8 = v108;
      if ( v22 )
      {
        --v5;
        v17 -= 48LL;
      }
      goto LABEL_124;
    }
    if ( v5 > qword_140C65BA0 || (v21 & *(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL)) == 0 )
    {
      v107 = -1073741584;
      goto LABEL_124;
    }
    if ( (v20 & *(_QWORD *)(v17 + 40)) != 0 )
    {
      v8 = v108;
      v107 = MiMarkFileOnlyPfnBad(v17);
      if ( v107 == -1073740748 )
      {
        --v5;
        v17 -= 48LL;
      }
      goto LABEL_124;
    }
    v35 = (unsigned __int8)MiLockPageInline(v17);
    if ( (*(_QWORD *)(v17 + 40) & 0x20000000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v35 <= 0xFu
          && CurrentIrql >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
          v22 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v37);
        }
      }
      __writecr8(v35);
      --v5;
      v17 -= 48LL;
      goto LABEL_124;
    }
    v40 = MiReferencePagePartition(v17, 1);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v40 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v41 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v41 <= 0xFu && (unsigned __int8)v35 <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
          v22 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v42);
        }
      }
      __writecr8(v35);
      v107 = -1073741558;
      goto LABEL_124;
    }
    if ( (_DWORD)KiIrqlFlags )
    {
      v45 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v45 <= 0xFu && (unsigned __int8)v35 <= 0xFu && v45 >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        v47 = v46->SchedulerAssist;
        v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
        v22 = (v48 & v47[5]) == 0;
        v47[5] &= v48;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)v46);
      }
    }
    __writecr8(v35);
    if ( (int)MiAcquireNonPagedResources(v40, 2uLL, 0LL, 0) < 0 )
    {
      v105 = -1073741670;
      v106 = -1073741670;
      PsDereferencePartition(*(_QWORD *)(v40 + 200));
      goto LABEL_214;
    }
    Pool = MiAllocatePool(64, 0x20uLL, 0x6C42694Du);
    v50 = (unsigned __int8)MiLockPageInline(v17);
    if ( *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL)) != v40 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        v51 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v51 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v51 >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
          v22 = (v54 & v53[5]) == 0;
          v53[5] &= v54;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v52);
        }
      }
      __writecr8(v50);
      MiReturnCommit(v40, 2LL);
      v55 = 2LL;
      if ( (unsigned __int16 *)v40 != MiSystemPartition )
        goto LABEL_95;
      v56 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v56->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_95;
      if ( (unsigned __int64)(CachedResidentAvailable + 2) <= 0x100 )
      {
        do
        {
          v58 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v56->CachedResidentAvailable,
                  CachedResidentAvailable + 2,
                  CachedResidentAvailable);
          v22 = (_DWORD)CachedResidentAvailable == v58;
          LODWORD(CachedResidentAvailable) = v58;
          if ( v22 )
            goto LABEL_96;
        }
        while ( v58 != -1 && (unsigned __int64)(v58 + 2LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v56->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v55 = (int)CachedResidentAvailable - 192 + 2LL;
      }
      if ( v55 )
LABEL_95:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 17280), v55);
LABEL_96:
      PsDereferencePartition(*(_QWORD *)(v40 + 200));
      if ( Pool )
        ExFreePoolWithTag(Pool, 0);
      --v5;
      v17 -= 48LL;
      goto LABEL_124;
    }
    if ( (v8 & 0x10000000) != 0 )
    {
      v59 = *(_BYTE *)(v17 + 35);
      if ( v59 >= 0 )
        *(_BYTE *)(v17 + 35) = v59 | 0x80;
    }
    if ( (*(_BYTE *)(v17 + 35) & 0x40) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        v60 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v60 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v60 >= 2u )
        {
          v61 = KeGetCurrentPrcb();
          v62 = v61->SchedulerAssist;
          v63 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
          v22 = (v63 & v62[5]) == 0;
          v62[5] &= v63;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v61);
        }
      }
      __writecr8(v50);
      MiReturnCommit(v40, 2LL);
      v64 = 2LL;
      if ( (unsigned __int16 *)v40 != MiSystemPartition )
        goto LABEL_120;
      v65 = KeGetCurrentPrcb();
      v66 = (int)v65->CachedResidentAvailable;
      if ( (_DWORD)v66 == -1 )
        goto LABEL_120;
      if ( (unsigned __int64)(v66 + 2) <= 0x100 )
      {
        do
        {
          v67 = _InterlockedCompareExchange((volatile signed __int32 *)&v65->CachedResidentAvailable, v66 + 2, v66);
          v22 = (_DWORD)v66 == v67;
          LODWORD(v66) = v67;
          if ( v22 )
            goto LABEL_121;
        }
        while ( v67 != -1 && (unsigned __int64)(v67 + 2LL) <= 0x100 );
      }
      if ( (int)v66 > 192
        && (_DWORD)v66 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v65->CachedResidentAvailable,
                            192,
                            v66) )
      {
        v64 = (int)v66 - 192 + 2LL;
      }
      if ( v64 )
LABEL_120:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 17280), v64);
LABEL_121:
      PsDereferencePartition(*(_QWORD *)(v40 + 200));
      if ( Pool )
        ExFreePoolWithTag(Pool, 0);
      v107 = 259;
      goto LABEL_124;
    }
    if ( (*(_BYTE *)(v17 + 34) & 7) == 5
      && (_bittest64((const signed __int64 *)(v17 + 40), 0x35u) || MiIsPageOnBadList(v17)) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        v69 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v69 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v69 >= 2u )
        {
          v70 = KeGetCurrentPrcb();
          v71 = v70->SchedulerAssist;
          v72 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
          v22 = (v72 & v71[5]) == 0;
          v71[5] &= v72;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v70);
        }
      }
      __writecr8(v50);
      MiReturnCommit(v40, 2LL);
      v73 = 2LL;
      if ( (unsigned __int16 *)v40 != MiSystemPartition )
        goto LABEL_146;
      v74 = KeGetCurrentPrcb();
      v75 = (int)v74->CachedResidentAvailable;
      if ( (_DWORD)v75 == -1 )
        goto LABEL_146;
      if ( (unsigned __int64)(v75 + 2) <= 0x100 )
      {
        do
        {
          v76 = _InterlockedCompareExchange((volatile signed __int32 *)&v74->CachedResidentAvailable, v75 + 2, v75);
          v22 = (_DWORD)v75 == v76;
          LODWORD(v75) = v76;
          if ( v22 )
            goto LABEL_147;
        }
        while ( v76 != -1 && (unsigned __int64)(v76 + 2LL) <= 0x100 );
      }
      if ( (int)v75 > 192
        && (_DWORD)v75 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v74->CachedResidentAvailable,
                            192,
                            v75) )
      {
        v73 = (int)v75 - 192 + 2LL;
      }
      if ( v73 )
LABEL_146:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 17280), v73);
LABEL_147:
      PsDereferencePartition(*(_QWORD *)(v40 + 200));
      if ( Pool )
        ExFreePoolWithTag(Pool, 0);
      goto LABEL_124;
    }
    MiSetPfnRemovalRequested(v17, 1LL, 0LL);
    v77 = 0;
    if ( (unsigned int)MiCheckSlabPfnBitmap(v17, 1LL, 0) )
      v77 = MiCheckSlabPfnBitmap(v17, 1LL, 1) == 0;
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      v78 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v78 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v78 >= 2u )
      {
        v79 = KeGetCurrentPrcb();
        v80 = v79->SchedulerAssist;
        v81 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
        v22 = (v81 & v80[5]) == 0;
        v80[5] &= v81;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)v79);
      }
    }
    __writecr8(v50);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B518, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C6B518);
    KeAbPostRelease((ULONG_PTR)&qword_140C6B518);
    v22 = v114->SpecialApcDisable++ == -1;
    if ( v22 && ($C71981A45BEB2B45F82C232A7085991E *)v114->ApcState.ApcListHead[0].Flink != &v114->152 )
      KiCheckForKernelApcDelivery();
    if ( v77 )
    {
      memset(v118, 0, 0x58uLL);
      v118[0] = v40;
      v118[10] = v5;
      KeGenericCallDpcEx((__int64)MiDemoteSlabEntriesDpc, (__int64)v118);
    }
    v82 = 0LL;
    ContiguousPages = MiFindContiguousPagesEx(v40, v5, v5, 0LL, 0, 1uLL, 1u, 0x80000000, 0x80000000, v8, 0, 0LL, &v115);
    v107 = 0;
    --v114->SpecialApcDisable;
    v85 = KeGetCurrentThread();
    _disable();
    v86 = v85->AbEntrySummary;
    if ( v85->AbEntrySummary || (v86 = KiAbTryReclaimOrphanedEntries(v83, (__int64)v85)) != 0 )
    {
      _BitScanForward(&v87, v86);
      v111 = v87;
      v85->AbEntrySummary = v86 & ~(1 << v87);
      v88 = KeGetCurrentPrcb();
      v89 = (signed __int32 *)v88->SchedulerAssist;
      if ( v89 )
      {
        _m_prefetchw(v89);
        v90 = *v89;
        do
        {
          v91 = v90;
          v90 = _InterlockedCompareExchange(v89, v90 & 0xFFDFFFFF, v90);
        }
        while ( v91 != v90 );
        if ( (v90 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v88);
      }
      _enable();
      v82 = (unsigned __int64)(&v85[1].Process + 12 * v111);
      if ( (unsigned __int64)&qword_140C6B518 - qword_140C659E8 >= 0x8000000000LL )
        v92 = -1;
      else
        v92 = MmGetSessionIdEx((__int64)v85->ApcState.Process);
      *(_DWORD *)(v82 + 8) = v92;
      *(_QWORD *)v82 = (unsigned __int64)&qword_140C6B518 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B518, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C6B518, 0LL, v82, (__int64)&qword_140C6B518);
    if ( v82 )
      *(_BYTE *)(v82 + 18) = 1;
    if ( v5 <= qword_140C65BA0 && _bittest64((const signed __int64 *)(48 * v5 - 0x21FFFFFFFFD8LL), 0x36u) )
    {
      v93 = (unsigned __int8)MiLockPageInline(v17);
      if ( ContiguousPages < 0 )
      {
        if ( MiIsPageOnBadList(v17) )
        {
          ContiguousPages = 0;
        }
        else if ( (*(_BYTE *)(v17 + 35) & 0x40) != 0 )
        {
          byte_140C67F40 = 1;
          ContiguousPages = 0;
          v112 = 1;
          v107 = 259;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v95 = (char)KiIrqlFlags;
        if ( !(_DWORD)KiIrqlFlags )
          goto LABEL_191;
      }
      else
      {
        if ( (*(_BYTE *)(v17 + 35) & 0x40) == 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)KiIrqlFlags )
          {
            v100 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v100 <= 0xFu && (unsigned __int8)v93 <= 0xFu && v100 >= 2u )
            {
              v101 = KeGetCurrentPrcb();
              v102 = v101->SchedulerAssist;
              v103 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v93 + 1));
              v22 = (v103 & v102[5]) == 0;
              v102[5] &= v103;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick((__int64)v101);
            }
          }
          __writecr8(v93);
          MiFreeContiguousPages(v5, 1uLL);
          goto LABEL_209;
        }
        *(_WORD *)(v17 + 32) = 0;
        MiSetPfnPteFrame(v17, 0LL);
        MiInsertPageInList(v94, 0x20u);
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v95 = (char)KiIrqlFlags;
        if ( !(_DWORD)KiIrqlFlags )
          goto LABEL_191;
      }
      v96 = KeGetCurrentIrql();
      if ( (v95 & 1) != 0 && v96 <= 0xFu && (unsigned __int8)v93 <= 0xFu && v96 >= 2u )
      {
        v97 = KeGetCurrentPrcb();
        v98 = v97->SchedulerAssist;
        v99 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v93 + 1));
        v22 = (v99 & v98[5]) == 0;
        v98[5] &= v99;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)v97);
      }
LABEL_191:
      __writecr8(v93);
      goto LABEL_207;
    }
    v107 = -1073741584;
LABEL_207:
    MiReturnCommit(v40, 1LL);
    v104 = MiReturnResavailToPrcb((void *)v40, 1uLL);
    if ( v104 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 17280), v104);
LABEL_209:
    PsDereferencePartition(*(_QWORD *)(v40 + 200));
    if ( ContiguousPages == -1073741523 || ContiguousPages == -1073741670 )
    {
      v105 = ContiguousPages;
      v106 = ContiguousPages;
LABEL_214:
      v68 = v113;
      goto LABEL_217;
    }
    v8 = v108;
LABEL_124:
    v68 = v113;
    ++v5;
    v17 += 48LL;
    if ( v5 >= v113 )
      break;
    CurrentThread = v114;
  }
  v105 = v107;
  v106 = 0;
LABEL_217:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B518, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C6B518);
  KeAbPostRelease((ULONG_PTR)&qword_140C6B518);
  v22 = v114->SpecialApcDisable++ == -1;
  if ( v22 && ($C71981A45BEB2B45F82C232A7085991E *)v114->ApcState.ApcListHead[0].Flink != &v114->152 )
    KiCheckForKernelApcDelivery();
  if ( v112 )
    ZwUpdateWnfStateData(&WNF_MM_BAD_MEMORY_PENDING_REMOVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  v22 = v116 == 1;
  *v117 = (v116 + v5 - v68) << 12;
  if ( v22 )
    return v105;
  return v106;
}
