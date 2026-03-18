/*
 * XREFs of MmMarkPhysicalMemoryAsBad @ 0x14058F250
 * Callers:
 *     MiScrubNodeLargePageList @ 0x1405AF6F0 (MiScrubNodeLargePageList.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140A08FFC (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x140213FA8 (MiFreeContiguousPages.c)
 *     MiIsPageInHugePfn @ 0x1402166E0 (MiIsPageInHugePfn.c)
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 *     MiIsPageOnBadList @ 0x140273354 (MiIsPageOnBadList.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiReturnResavailToPrcb @ 0x14028CD10 (MiReturnResavailToPrcb.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     MiMarkHugePfnBad @ 0x1405879D8 (MiMarkHugePfnBad.c)
 *     MiReferencePagePartition @ 0x14058DED4 (MiReferencePagePartition.c)
 *     MiMarkFileOnlyPfnBad @ 0x14059F908 (MiMarkFileOnlyPfnBad.c)
 *     MiSetPfnRemovalRequested @ 0x1405ADDA8 (MiSetPfnRemovalRequested.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsBad(int *a1, _DWORD *a2)
{
  int v2; // ebx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // r13
  int v7; // ebx
  unsigned int v8; // r12d
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  bool v12; // zf
  unsigned __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  __int64 v18; // r15
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  PVOID Pool; // rsi
  unsigned __int64 v28; // rbx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  unsigned __int64 v33; // r8
  struct _KPRCB *v34; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v36; // eax
  char v37; // al
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  unsigned __int64 v42; // r8
  struct _KPRCB *v43; // r9
  __int64 v44; // rdx
  signed __int32 v45; // eax
  unsigned int v46; // ebx
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  unsigned __int64 v51; // r8
  struct _KPRCB *v52; // r9
  __int64 v53; // rdx
  signed __int32 v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  int ContiguousPages; // esi
  unsigned __int64 v60; // rbx
  ULONG_PTR v61; // rcx
  char v62; // al
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  _DWORD *v65; // r9
  int v66; // eax
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // eax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // [rsp+78h] [rbp-60h]
  __int64 v73; // [rsp+80h] [rbp-58h] BYREF
  __int64 v74; // [rsp+88h] [rbp-50h]
  int v75; // [rsp+E0h] [rbp+8h]
  int v77; // [rsp+F0h] [rbp+18h]

  v2 = *a1;
  v73 = 0LL;
  if ( (v2 & 0xFFFu) > 1 )
    return 3221225711LL;
  if ( (*a2 & 0xFFF) != 0 )
    return 3221225712LL;
  if ( (MiFlags & 0x20000000) == 0 )
    return 3221225474LL;
  v4 = *(_QWORD *)a1 >> 12;
  v74 = *(_QWORD *)a2 >> 12;
  v5 = v4 + v74;
  v72 = v4 + v74;
  if ( v4 >= v4 + v74 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v77 = 0;
  v7 = (((v2 & 1) == 0) << 28) + 739246080;
  v8 = 0;
  --CurrentThread->SpecialApcDisable;
  v75 = v7;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C55040, 0LL);
  v9 = 48 * v4 - 0x220000000000LL;
  while ( 1 )
  {
    if ( MiIsPageInHugePfn(v4) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
      KeAbPostRelease((ULONG_PTR)&qword_140C55040);
      v12 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v12
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v8 = MiMarkHugePfnBad(v4, v7);
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C55040, 0LL);
      v12 = v8 == -1073740748;
      goto LABEL_15;
    }
    if ( v4 > qword_140C50840 )
      goto LABEL_176;
    if ( (*(_QWORD *)(48 * v4 - 0x21FFFFFFFFD8LL) & v11) == 0 )
    {
      v5 = v72;
LABEL_176:
      v8 = -1073741584;
      goto LABEL_95;
    }
    if ( (v10 & *(_QWORD *)(v9 + 40)) != 0 )
    {
      v5 = v72;
      v8 = MiMarkFileOnlyPfnBad(v9);
      v12 = v8 == -1073740748;
LABEL_15:
      if ( v12 )
      {
        --v4;
        v9 -= 48LL;
      }
      goto LABEL_95;
    }
    v13 = (unsigned __int8)MiLockPageInline(v9);
    if ( (*(_QWORD *)(v9 + 40) & 0x20000000000000LL) == 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v12 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
    --v4;
    v9 -= 48LL;
LABEL_94:
    v7 = v75;
    v5 = v72;
LABEL_95:
    ++v4;
    v9 += 48LL;
    if ( v4 >= v5 )
    {
      v46 = 0;
      goto LABEL_97;
    }
  }
  v18 = MiReferencePagePartition(v9, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v18 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v12 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v20);
        }
      }
    }
    __writecr8(v13);
    v8 = -1073741558;
    goto LABEL_94;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v12 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v24);
      }
    }
  }
  __writecr8(v13);
  if ( (int)MiAcquireNonPagedResources(v18, 2LL, 0LL, 0) >= 0 )
  {
    Pool = MiAllocatePool(64, 0x20uLL, 0x6C42694Du);
    v28 = (unsigned __int8)MiLockPageInline(v9);
    if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != v18 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v29 = KeGetCurrentIrql();
          if ( v29 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v29 >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            v31 = v30->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
            v12 = (v32 & v31[5]) == 0;
            v31[5] &= v32;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v30);
          }
        }
      }
      __writecr8(v28);
      MiReturnCommit(v18, 2LL);
      v33 = 2LL;
      if ( (ULONG_PTR *)v18 != &MiSystemPartition )
        goto LABEL_65;
      v34 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v34->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_65;
      if ( (unsigned __int64)(CachedResidentAvailable + 2) <= 0x100 )
      {
        do
        {
          v36 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v34->CachedResidentAvailable,
                  CachedResidentAvailable + 2,
                  CachedResidentAvailable);
          v12 = (_DWORD)CachedResidentAvailable == v36;
          LODWORD(CachedResidentAvailable) = v36;
          if ( v12 )
            goto LABEL_66;
        }
        while ( v36 != -1 && (unsigned __int64)(v36 + 2LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v34->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v33 = (int)CachedResidentAvailable - 192 + 2LL;
      }
      if ( v33 )
LABEL_65:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 16960), v33);
LABEL_66:
      PsDereferencePartition(*(_QWORD *)(v18 + 176));
      if ( Pool )
        ExFreePoolWithTag(Pool, 0);
      --v4;
      v9 -= 48LL;
      goto LABEL_94;
    }
    if ( (v75 & 0x10000000) != 0 )
    {
      v37 = *(_BYTE *)(v9 + 35);
      if ( v37 >= 0 )
        *(_BYTE *)(v9 + 35) = v37 | 0x80;
    }
    if ( (*(_BYTE *)(v9 + 35) & 0x40) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v38 = KeGetCurrentIrql();
          if ( v38 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v38 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v40 = v39->SchedulerAssist;
            v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
            v12 = (v41 & v40[5]) == 0;
            v40[5] &= v41;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v39);
          }
        }
      }
      __writecr8(v28);
      MiReturnCommit(v18, 2LL);
      v42 = 2LL;
      if ( (ULONG_PTR *)v18 != &MiSystemPartition )
        goto LABEL_90;
      v43 = KeGetCurrentPrcb();
      v44 = (int)v43->CachedResidentAvailable;
      if ( (_DWORD)v44 == -1 )
        goto LABEL_90;
      if ( (unsigned __int64)(v44 + 2) <= 0x100 )
      {
        do
        {
          v45 = _InterlockedCompareExchange((volatile signed __int32 *)&v43->CachedResidentAvailable, v44 + 2, v44);
          v12 = (_DWORD)v44 == v45;
          LODWORD(v44) = v45;
          if ( v12 )
            goto LABEL_91;
        }
        while ( v45 != -1 && (unsigned __int64)(v45 + 2LL) <= 0x100 );
      }
      if ( (int)v44 > 192
        && (_DWORD)v44 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v43->CachedResidentAvailable,
                            192,
                            v44) )
      {
        v42 = (int)v44 - 192 + 2LL;
      }
      if ( v42 )
LABEL_90:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 16960), v42);
LABEL_91:
      PsDereferencePartition(*(_QWORD *)(v18 + 176));
      if ( Pool )
        ExFreePoolWithTag(Pool, 0);
      v8 = 259;
      goto LABEL_94;
    }
    if ( (*(_BYTE *)(v9 + 34) & 7) == 5
      && (_bittest64((const signed __int64 *)(v9 + 40), 0x35u) || MiIsPageOnBadList(v9)) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v47 = KeGetCurrentIrql();
          if ( v47 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v47 >= 2u )
          {
            v48 = KeGetCurrentPrcb();
            v49 = v48->SchedulerAssist;
            v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
            v12 = (v50 & v49[5]) == 0;
            v49[5] &= v50;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v48);
          }
        }
      }
      __writecr8(v28);
      MiReturnCommit(v18, 2LL);
      v51 = 2LL;
      if ( (ULONG_PTR *)v18 != &MiSystemPartition )
        goto LABEL_127;
      v52 = KeGetCurrentPrcb();
      v53 = (int)v52->CachedResidentAvailable;
      if ( (_DWORD)v53 == -1 )
        goto LABEL_127;
      if ( (unsigned __int64)(v53 + 2) <= 0x100 )
      {
        do
        {
          v54 = _InterlockedCompareExchange((volatile signed __int32 *)&v52->CachedResidentAvailable, v53 + 2, v53);
          v12 = (_DWORD)v53 == v54;
          LODWORD(v53) = v54;
          if ( v12 )
            goto LABEL_128;
        }
        while ( v54 != -1 && (unsigned __int64)(v54 + 2LL) <= 0x100 );
      }
      if ( (int)v53 > 192
        && (_DWORD)v53 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v52->CachedResidentAvailable,
                            192,
                            v53) )
      {
        v51 = (int)v53 - 192 + 2LL;
      }
      if ( v51 )
LABEL_127:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 16960), v51);
LABEL_128:
      PsDereferencePartition(*(_QWORD *)(v18 + 176));
      if ( Pool )
        ExFreePoolWithTag(Pool, 0);
      goto LABEL_94;
    }
    MiSetPfnRemovalRequested(v9, 1LL, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = 0;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v55 = KeGetCurrentIrql();
        if ( v55 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v55 >= 2u )
        {
          v56 = KeGetCurrentPrcb();
          v57 = v56->SchedulerAssist;
          v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
          v12 = (v58 & v57[5]) == 0;
          v57[5] &= v58;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v56);
        }
      }
    }
    __writecr8(v28);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
    KeAbPostRelease((ULONG_PTR)&qword_140C55040);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    ContiguousPages = MiFindContiguousPagesEx(v18, v4, v4, 0LL, 0, 1uLL, 1u, 0x80000000, 0x80000000, v75, 0, 0LL, &v73);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C55040, 0LL);
    if ( v4 <= qword_140C50840 && (*(_QWORD *)(48 * v4 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
    {
      v60 = (unsigned __int8)MiLockPageInline(v9);
      if ( ContiguousPages >= 0 )
      {
        if ( (*(_BYTE *)(v9 + 35) & 0x40) != 0 )
        {
          *(_WORD *)(v9 + 32) = 0;
          MiSetPfnPteFrame(v9, 0LL);
          MiInsertPageInList(v61, 0x20u);
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v62 = KiIrqlFlags;
          if ( KiIrqlFlags )
            goto LABEL_147;
          goto LABEL_153;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v67 = KeGetCurrentIrql();
            if ( v67 <= 0xFu && (unsigned __int8)v60 <= 0xFu && v67 >= 2u )
            {
              v68 = KeGetCurrentPrcb();
              v69 = v68->SchedulerAssist;
              v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
              v12 = (v70 & v69[5]) == 0;
              v69[5] &= v70;
              if ( v12 )
                KiRemoveSystemWorkPriorityKick((__int64)v68);
            }
          }
        }
        __writecr8(v60);
        MiFreeContiguousPages(v4, 1uLL);
LABEL_171:
        PsDereferencePartition(*(_QWORD *)(v18 + 176));
        if ( ContiguousPages == -1073741523 || ContiguousPages == -1073741670 )
        {
          v8 = ContiguousPages;
          v46 = ContiguousPages;
          goto LABEL_174;
        }
        goto LABEL_94;
      }
      if ( MiIsPageOnBadList(v9) )
      {
        ContiguousPages = 0;
      }
      else if ( (*(_BYTE *)(v9 + 35) & 0x40) != 0 )
      {
        v8 = 259;
        byte_140C52B30 = 1;
        ContiguousPages = 0;
        v77 = 1;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v62 = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
LABEL_147:
        if ( (v62 & 1) != 0 )
        {
          v63 = KeGetCurrentIrql();
          if ( v63 <= 0xFu && (unsigned __int8)v60 <= 0xFu && v63 >= 2u )
          {
            v64 = KeGetCurrentPrcb();
            v65 = v64->SchedulerAssist;
            v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
            v12 = (v66 & v65[5]) == 0;
            v65[5] &= v66;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v64);
          }
        }
      }
LABEL_153:
      __writecr8(v60);
    }
    else
    {
      v8 = -1073741584;
    }
    MiReturnCommit(v18, 1LL);
    v71 = MiReturnResavailToPrcb((ULONG_PTR *)v18, 1uLL);
    if ( v71 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 16960), v71);
    goto LABEL_171;
  }
  v8 = -1073741670;
  v46 = -1073741670;
  PsDereferencePartition(*(_QWORD *)(v18 + 176));
LABEL_174:
  v5 = v72;
LABEL_97:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
  KeAbPostRelease((ULONG_PTR)&qword_140C55040);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v77 )
    ZwUpdateWnfStateData((__int64)&WNF_MM_BAD_MEMORY_PENDING_REMOVAL, 0LL);
  v12 = v74 == 1;
  *(_QWORD *)a2 = (v74 + v4 - v5) << 12;
  if ( v12 )
    return v8;
  return v46;
}
