/*
 * XREFs of MiInsertInSystemSpace @ 0x140213D10
 * Callers:
 *     MiMapViewInSystemSpace @ 0x1406AD6D4 (MiMapViewInSystemSpace.c)
 * Callees:
 *     MiReferenceDataSubsections @ 0x140211CA8 (MiReferenceDataSubsections.c)
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiControlAreaRequiresCharge @ 0x140214CC4 (MiControlAreaRequiresCharge.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     RtlAvlInsertNodeEx @ 0x140288350 (RtlAvlInsertNodeEx.c)
 *     MiOffsetToProtos @ 0x1402887D0 (MiOffsetToProtos.c)
 *     MiReferenceActiveSubsection @ 0x140289030 (MiReferenceActiveSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MiManageSubsectionView @ 0x1402A0790 (MiManageSubsectionView.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiGetPageTablesForLargeMap @ 0x14038E7D8 (MiGetPageTablesForLargeMap.c)
 *     MiMapWithLargePages @ 0x14038E8F4 (MiMapWithLargePages.c)
 *     MiUnmapLargePages @ 0x1403D6AFC (MiUnmapLargePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiDereferenceDataSubsections @ 0x14066B658 (MiDereferenceDataSubsections.c)
 *     MiAddMappedPtes @ 0x1406AD7D0 (MiAddMappedPtes.c)
 *     MiReferenceFileObjectForMap @ 0x140721018 (MiReferenceFileObjectForMap.c)
 *     MiDereferencePerSessionProtos @ 0x1407B5E98 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1407B5FE0 (MiCreatePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertInSystemSpace(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3,
        char a4,
        __int64 a5,
        ULONG_PTR *a6)
{
  __int64 v9; // rbp
  __int64 v10; // rdi
  unsigned int v11; // r12d
  __int64 v12; // r13
  __int64 v13; // r14
  unsigned int v14; // ebx
  unsigned int v15; // r15d
  unsigned __int64 v16; // rbp
  __int64 v17; // rsi
  int v18; // eax
  int active; // ebx
  __int64 v20; // rax
  __int64 Pool; // rax
  _DWORD *v22; // r11
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // eax
  ULONG_PTR v27; // r12
  __int64 v28; // rcx
  __int64 v29; // r9
  struct _KTHREAD *CurrentThread; // r15
  struct _KTHREAD *v31; // rsi
  char *v32; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v34; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 v37; // rdx
  int SessionId; // eax
  __int64 v40; // r13
  __int64 SharedVm; // rbx
  KIRQL v42; // al
  __int64 v43; // r8
  KIRQL v44; // si
  _QWORD *v45; // r10
  unsigned __int64 v46; // rdx
  _QWORD *v47; // rax
  __int64 v48; // r13
  bool v49; // zf
  unsigned int v50; // edi
  __int64 v51; // rax
  unsigned __int64 v52; // rbx
  unsigned __int64 *v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  signed __int32 v58; // eax
  signed __int32 v59; // ett
  int PerSessionProtos; // eax
  ULONG_PTR PageTablesForLargeMap; // rax
  int v62; // ecx
  volatile LONG *v63; // rbx
  KIRQL v64; // al
  unsigned __int64 v65; // r8
  _QWORD *v66; // rdx
  unsigned __int64 v67; // rsi
  _QWORD *v68; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // edx
  __int64 v73; // rdi
  unsigned __int64 v74; // r14
  int v75; // ebp
  __int64 v76; // rdx
  __int64 v77; // rbx
  __int64 v78; // r15
  __int64 v79; // r8
  int v80; // r12d
  unsigned __int64 v81; // rax
  char v82; // [rsp+40h] [rbp-138h]
  __int64 v83; // [rsp+48h] [rbp-130h]
  unsigned int v84; // [rsp+50h] [rbp-128h] BYREF
  int v85; // [rsp+54h] [rbp-124h]
  unsigned __int64 v86; // [rsp+58h] [rbp-120h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-118h]
  __int64 v88; // [rsp+68h] [rbp-110h]
  __int64 v89; // [rsp+70h] [rbp-108h]
  __int64 v90; // [rsp+78h] [rbp-100h] BYREF
  __int64 AnyMultiplexedVm; // [rsp+80h] [rbp-F8h]
  _QWORD v92[29]; // [rsp+90h] [rbp-E8h] BYREF
  char v93; // [rsp+180h] [rbp+8h]
  unsigned int v94; // [rsp+180h] [rbp+8h]

  v9 = 0LL;
  v90 = 0LL;
  memset(v92, 0, 0x98uLL);
  v10 = 0LL;
  v11 = 3;
  BugCheckParameter1 = 0LL;
  v85 = 0x7FFFF;
  v12 = 0LL;
  v93 = 0;
  *a6 = 0LL;
  v13 = 0LL;
  v82 = 0;
  v84 = 3;
  v83 = MiSectionControlArea(a2);
  v14 = (a1 >> 16) + ((_WORD)a1 != 0);
  if ( v14 >= 0x10000 )
  {
    ++dword_140C683D0;
    return (unsigned int)-1073741793;
  }
  v89 = MiOffsetToProtos(v83, *a3, &v90);
  if ( !v89 )
  {
    ++dword_140C683D0;
    return (unsigned int)-1073741801;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
  v15 = ((a5 & 8) != 0) + 3;
  LOBYTE(v9) = (a1 & 0xFFF) != 0;
  v16 = (a1 >> 12) + v9;
  v86 = 16 * v14;
  v17 = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174));
  v88 = v17;
  if ( (*(_DWORD *)(v83 + 56) & 0x420) != 0 )
    goto LABEL_6;
  v18 = MiReferenceDataSubsections(v83, a3, v16, &v84);
  v11 = v84;
  active = v18;
  if ( v18 < 0 )
  {
LABEL_78:
    v22 = (_DWORD *)v83;
    goto LABEL_79;
  }
  v93 = 1;
  if ( v84 >= 3 )
  {
LABEL_6:
    v20 = MiReservePtes(&unk_140C683B0, (unsigned int)v86);
    v13 = v20;
    if ( !v20 )
    {
      ++dword_140C683D0;
      active = -1073741670;
      goto LABEL_84;
    }
    BugCheckParameter1 = v20 << 25 >> 16;
  }
  else
  {
    PageTablesForLargeMap = MiGetPageTablesForLargeMap(v86, 9LL, v84);
    BugCheckParameter1 = PageTablesForLargeMap;
    if ( !PageTablesForLargeMap )
    {
      ++dword_140C683D0;
      active = -1073741670;
      LODWORD(v22) = v83;
      v62 = 0;
      goto LABEL_86;
    }
    v13 = ((PageTablesForLargeMap >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  Pool = MiAllocatePool(64LL, 104LL, 2002151757LL);
  v22 = (_DWORD *)v83;
  v10 = Pool;
  if ( !Pool )
  {
    active = -1073741670;
    goto LABEL_79;
  }
  *(_DWORD *)(Pool + 56) ^= (*(_DWORD *)(Pool + 56) ^ (8 * v11)) & 0x18;
  v23 = MiControlAreaRequiresCharge(v83, v15);
  v24 = v23;
  if ( !v23 )
  {
    active = -1073740277;
    goto LABEL_79;
  }
  if ( v23 == 2 )
    *(_DWORD *)(v10 + 56) |= 4u;
  if ( (*(_DWORD *)(a2 + 56) & 0x10000000) != 0 )
    *(_DWORD *)(v10 + 56) |= 1u;
  if ( (a4 & 1) != 0 )
    *(_DWORD *)(v10 + 56) |= 2u;
  v25 = v22[14];
  if ( (v25 & 0x20) != 0 )
  {
    if ( (v25 & 0x8000000) == 0 )
    {
LABEL_18:
      v12 = *(_QWORD *)(*(_QWORD *)v22 + 48LL);
      if ( v12 )
      {
        v26 = MiChargeCommit(v88, *(_QWORD *)(*(_QWORD *)v22 + 48LL), 0LL);
        v22 = (_DWORD *)v83;
        if ( !v26 )
        {
          v17 = v88;
          v62 = 0;
          v12 = 0LL;
          active = -1073741523;
LABEL_80:
          ++dword_140C683D0;
          if ( !v13 )
            goto LABEL_85;
          if ( v11 >= 3 )
            MiReleasePtes(&unk_140C683B0, v13, (unsigned int)v86);
          else
            MiUnmapLargePages(BugCheckParameter1, v86 << 12, 9LL);
LABEL_84:
          v22 = (_DWORD *)v83;
          v62 = 0;
LABEL_85:
          if ( !v93 )
          {
LABEL_87:
            if ( v82 )
              MiDereferencePerSessionProtos(v22);
            if ( v12 )
              MiReturnCommit(v17, v12);
            if ( v10 )
              ExFreePoolWithTag((PVOID)v10, 0);
            return (unsigned int)active;
          }
LABEL_86:
          LOBYTE(v62) = v11 < 3;
          MiDereferenceDataSubsections((_DWORD)v22, (_DWORD)a3, v16, v62, v15 != 2);
          v22 = (_DWORD *)v83;
          goto LABEL_87;
        }
      }
      if ( v24 == 2 )
      {
        v89 = (__int64)(v22 + 32);
        active = MiReferenceActiveSubsection((ULONG_PTR)(v22 + 32));
        if ( active < 0 )
        {
          v17 = v88;
          goto LABEL_78;
        }
      }
      goto LABEL_21;
    }
    v85 = -1;
    PerSessionProtos = MiCreatePerSessionProtos(v22, 0xFFFFFFFFLL);
    v22 = (_DWORD *)v83;
    if ( PerSessionProtos >= 0 )
    {
      v82 = 1;
      goto LABEL_18;
    }
    v17 = v88;
    active = -1073741801;
LABEL_79:
    v62 = 0;
    goto LABEL_80;
  }
LABEL_21:
  v27 = BugCheckParameter1;
  *(_QWORD *)(v10 + 32) = v16 << 12;
  *(_QWORD *)(v10 + 48) = v89;
  *(_QWORD *)(v10 + 24) = (unsigned __int64)*a3 >> 12;
  *(_QWORD *)(v10 + 40) = v12;
  *(_QWORD *)(v10 + 88) = v27 | 2;
  *(_DWORD *)(v10 + 96) = v85;
  *(_QWORD *)(v10 + 64) = MiReferenceFileObjectForMap(a2);
  CurrentThread = KeGetCurrentThread();
  if ( v84 || (v48 = v83, (*(_DWORD *)(v83 + 56) & 0x400) != 0) )
  {
    --CurrentThread->SpecialApcDisable;
    v31 = KeGetCurrentThread();
    v32 = 0LL;
    _disable();
    AbEntrySummary = v31->AbEntrySummary;
    if ( v31->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v28, v31)) != 0 )
    {
      _BitScanForward(&v34, AbEntrySummary);
      v94 = v34;
      v31->AbEntrySummary = AbEntrySummary & ~(1 << v34);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v58 = *SchedulerAssist;
        do
        {
          v59 = v58;
          v58 = _InterlockedCompareExchange(SchedulerAssist, v58 & 0xFFDFFFFF, v58);
        }
        while ( v59 != v58 );
        if ( (v58 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v37 = 96LL * v94;
      v32 = (char *)&v31[1].Process + v37;
      if ( (unsigned __int64)&qword_140C68540 - qword_140C659E8 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx(v31->ApcState.Process);
      else
        SessionId = -1;
      *((_DWORD *)v32 + 2) = SessionId;
      *(_QWORD *)v32 = (unsigned __int64)&qword_140C68540 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C68540, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140C68540, v32, &qword_140C68540);
    if ( v32 )
      v32[18] = 1;
    v40 = AnyMultiplexedVm;
    SharedVm = MiGetSharedVm(AnyMultiplexedVm, v37, SchedulerAssist, v29);
    v42 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    LOBYTE(v43) = 0;
    ++dword_140C68550;
    v44 = v42;
    v45 = P;
    if ( P )
    {
      while ( 1 )
      {
        v46 = v45[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( v27 < v46 + v45[4] && v27 < v46 )
        {
          v47 = (_QWORD *)*v45;
          if ( !*v45 )
            break;
        }
        else
        {
          v47 = (_QWORD *)v45[1];
          if ( !v47 )
          {
            LOBYTE(v43) = 1;
            break;
          }
        }
        v45 = v47;
      }
    }
    RtlAvlInsertNodeEx(&P, v45, v43, v10);
    MiUnlockWorkingSetExclusive(v40, v44);
    v48 = v83;
    if ( (*(_DWORD *)(v83 + 56) & 0x400) == 0 )
    {
      v92[0] = v83;
      MiManageSubsectionView(v92, v10 + 72, 3LL);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C68540, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C68540);
    KeAbPostRelease((ULONG_PTR)&qword_140C68540);
    v49 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v49 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  else
  {
    v63 = (volatile LONG *)((char *)&unk_140C68558 + 16 * (unsigned __int8)(v27 >> 30));
    v64 = ExAcquireSpinLockExclusive(v63 + 3);
    ++*((_DWORD *)v63 + 2);
    LOBYTE(v65) = 0;
    v66 = *(_QWORD **)v63;
    v67 = v64;
    if ( *(_QWORD *)v63 )
    {
      while ( 1 )
      {
        v65 = v66[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( v27 >= v65 + v66[4] || v27 >= v65 )
        {
          v68 = (_QWORD *)v66[1];
          if ( !v68 )
          {
            LOBYTE(v65) = 1;
            break;
          }
        }
        else
        {
          v68 = (_QWORD *)*v66;
          if ( !*v66 )
          {
            LOBYTE(v65) = 0;
            break;
          }
        }
        v66 = v68;
      }
    }
    RtlAvlInsertNodeEx(v63, v66, v65, v10);
    ExReleaseSpinLockExclusiveFromDpcLevel(v63 + 3);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v67 <= 0xFu
        && CurrentIrql >= 2u )
      {
        v70 = KeGetCurrentPrcb();
        v71 = v70->SchedulerAssist;
        v72 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v67 + 1));
        v49 = (v72 & v71[5]) == 0;
        v71[5] &= v72;
        if ( v49 )
          KiRemoveSystemWorkPriorityKick(v70);
      }
    }
    __writecr8(v67);
  }
  if ( (*(_DWORD *)(v10 + 56) & 1) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v48 + 92));
  if ( v84 < 3 )
  {
    v73 = MiLargePageSizes[v84];
    v74 = 0LL;
    v75 = v27;
    v76 = *(_QWORD *)(v89 + 8);
    v77 = v76 + 8 * v90;
    v78 = v76 + 8LL * *(unsigned int *)(v89 + 44);
    if ( v86 )
    {
      v80 = MiGetAnyMultiplexedVm(3LL);
      do
      {
        if ( v77 == v78 )
        {
          v89 = *(_QWORD *)(v79 + 16);
          v77 = *(_QWORD *)(v89 + 8);
          v78 = v77 + 8LL * *(unsigned int *)(v89 + 44);
        }
        v81 = MI_READ_PTE_LOCK_FREE(v77);
        MiMapWithLargePages(v80, v75, v81 >> 12, v73, v84, 4, 1);
        v79 = v89;
        v75 += (_DWORD)v73 << 12;
        v77 += 8 * v73;
        v74 += v73;
      }
      while ( v74 < v86 );
      v27 = BugCheckParameter1;
    }
    active = 0;
    goto LABEL_53;
  }
  v50 = 0;
  if ( !v16 )
    goto LABEL_52;
  v51 = 0LL;
  do
  {
    v52 = ZeroPte;
    v53 = (unsigned __int64 *)(v13 + 8 * v51);
    if ( !(unsigned int)MiPteInShadowRange(v53) )
      goto LABEL_49;
    if ( !(unsigned int)MiPteHasShadow(v55, v54, v56) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v52 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_49:
      *v53 = v52;
      goto LABEL_50;
    }
    if ( !HIBYTE(word_140C66CFC) && (ZeroPte & 1) != 0 )
      v52 = ZeroPte | 0x8000000000000000uLL;
    *v53 = v52;
    MiWritePteShadow(v53, v52);
LABEL_50:
    v51 = ++v50;
  }
  while ( v50 < v16 );
  v27 = BugCheckParameter1;
LABEL_52:
  active = MiAddMappedPtes(v13, v16, v48, (_DWORD)a3, v85, 0);
  if ( active < 0 )
  {
    ++dword_140C683D0;
    MiRemoveFromSystemSpace(v27, 0);
  }
  else
  {
LABEL_53:
    *a6 = v27;
  }
  return (unsigned int)active;
}
