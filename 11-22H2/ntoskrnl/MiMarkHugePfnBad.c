/*
 * XREFs of MiMarkHugePfnBad @ 0x140621688
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B620 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     RtlAvlInsertNodeEx @ 0x140287FA0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiIsPageInHugePfn @ 0x140336C0C (MiIsPageInHugePfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiHugePfnPartition @ 0x140620CC0 (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x14062103C (MiInsertHugeRangeInList.c)
 *     MiLockHugePfn @ 0x140621464 (MiLockHugePfn.c)
 *     MiUnlinkHugeRange @ 0x140622B2C (MiUnlinkHugeRange.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMarkHugePfnBad(ULONG_PTR a1, int a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rbx
  __int64 v8; // rdi
  struct _KTHREAD *v9; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v11; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  int SessionId; // eax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  ULONG_PTR v20; // r12
  struct _KTHREAD *v21; // r13
  __int64 v22; // rsi
  unsigned int v23; // eax
  unsigned int v24; // ecx
  struct _KPRCB *v25; // r8
  signed __int32 *v26; // rdx
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  int v29; // eax
  unsigned __int8 v30; // r8
  bool v31; // zf
  unsigned int v32; // esi
  volatile LONG *v33; // rsi
  __int64 *v34; // rdi
  int v35; // eax
  __int64 v36; // rsi
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v38; // di
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  PVOID Pool; // rdi
  _QWORD *v43; // rax
  _QWORD *v44; // rdx
  bool v45; // r8
  _QWORD *v46; // rax
  PVOID *v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  signed __int64 *v50; // rax
  unsigned __int8 v51; // cl
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int8 v54; // al
  unsigned __int8 v55; // di
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  unsigned int v60; // [rsp+20h] [rbp-68h]
  PVOID *P; // [rsp+28h] [rbp-60h]
  PEX_SPIN_LOCK SpinLock; // [rsp+30h] [rbp-58h]
  volatile LONG *SpinLocka; // [rsp+30h] [rbp-58h]
  _QWORD *v66; // [rsp+A0h] [rbp+18h]
  unsigned __int8 v67; // [rsp+A0h] [rbp+18h]
  unsigned int v68; // [rsp+A8h] [rbp+20h]

  v2 = 0LL;
  v3 = (a1 >> 18) & 0x3FFFFF;
  P = 0LL;
  v4 = MiSearchNumaNodeTable(a1);
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = *((unsigned int *)v4 + 2);
  --CurrentThread->SpecialApcDisable;
  v9 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v9->AbEntrySummary;
  if ( v9->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v5, (__int64)v9)) != 0 )
  {
    _BitScanForward(&v11, AbEntrySummary);
    v68 = v11;
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
    v7 = (__int64)(&v9[1].Process + 12 * v68);
    if ( (unsigned __int64)&qword_140C67488 - qword_140C65AE8 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
    *(_DWORD *)(v7 + 8) = SessionId;
    *(_QWORD *)v7 = (unsigned __int64)&qword_140C67488 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C67488, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140C67488, v7, (__int64)&qword_140C67488);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v17 = (_QWORD *)(qword_140C67EF0 + 8 * v3);
  v66 = v17;
  while ( 1 )
  {
    v18 = MiHugePfnPartition(v17);
    SpinLock = (PEX_SPIN_LOCK)v18;
    if ( !v18 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67488, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67488);
      KeAbPostRelease((ULONG_PTR)&qword_140C67488);
      v31 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v31
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      return 3221226548LL;
    }
    --CurrentThread->SpecialApcDisable;
    v20 = v18 + 216;
    v21 = KeGetCurrentThread();
    v22 = 0LL;
    _disable();
    v23 = v21->AbEntrySummary;
    if ( v21->AbEntrySummary || (v23 = KiAbTryReclaimOrphanedEntries(v19, (__int64)v21)) != 0 )
    {
      _BitScanForward(&v24, v23);
      v60 = v24;
      v21->AbEntrySummary = v23 & ~(1 << v24);
      v25 = KeGetCurrentPrcb();
      v26 = (signed __int32 *)v25->SchedulerAssist;
      if ( v26 )
      {
        _m_prefetchw(v26);
        v27 = *v26;
        do
        {
          v28 = v27;
          v27 = _InterlockedCompareExchange(v26, v27 & 0xFFDFFFFF, v27);
        }
        while ( v28 != v27 );
        if ( (v27 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v25);
      }
      _enable();
      v22 = (__int64)(&v21[1].Process + 12 * v60);
      if ( v20 - qword_140C65AE8 >= 0x8000000000LL )
        v29 = -1;
      else
        v29 = MmGetSessionIdEx((__int64)v21->ApcState.Process);
      *(_DWORD *)(v22 + 8) = v29;
      *(_QWORD *)v22 = v20 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v20, v22, v20);
    if ( v22 )
      *(_BYTE *)(v22 + 18) = 1;
    if ( SpinLock == (PEX_SPIN_LOCK)MiHugePfnPartition(v66) )
      break;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v20);
    KeAbPostRelease(v20);
    v17 = v66;
    v31 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v31 )
    {
      v17 = v66;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
        v17 = v66;
      }
    }
  }
  if ( ((unsigned __int8)*((_DWORD *)SpinLock + 1) & v30) != 0 )
  {
    v32 = -1073740748;
  }
  else
  {
    v33 = (volatile LONG *)(*((_QWORD *)SpinLock + 2) + 25408 * v8 + 23104);
    SpinLocka = v33;
    while ( 1 )
    {
      v34 = (__int64 *)(qword_140C67EF0 + 8 * v3);
      v67 = MiLockHugePfn((__int64)v34);
      ExAcquireSpinLockExclusiveAtDpcLevel(v33);
      LOBYTE(v35) = MiIsPageInHugePfn(a1);
      if ( !v35 )
      {
        v32 = -1073740748;
        P = (PVOID *)(v2 & -(__int64)(v2 != 0));
        goto LABEL_88;
      }
      v36 = *v34;
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67410);
      if ( (v36 & 8) != 0 )
        break;
      if ( v2 )
      {
        v44 = (_QWORD *)qword_140C67460;
        v45 = 0;
        if ( !qword_140C67460 )
          goto LABEL_66;
        while ( 1 )
        {
          if ( v3 >= (v44[3] & 0x3FFFFFuLL) )
          {
            v46 = (_QWORD *)v44[1];
            if ( !v46 )
            {
              v45 = 1;
LABEL_66:
              RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C67460, (unsigned __int64)v44, v45, v2);
              *v34 = v36 | 8;
              goto LABEL_75;
            }
          }
          else
          {
            v46 = (_QWORD *)*v44;
            if ( !*v44 )
              goto LABEL_66;
          }
          v44 = v46;
        }
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67410);
      v33 = SpinLocka;
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLocka);
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140C67EF8 + 4 * (((((__int64)v34 - qword_140C67EF0) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((((__int64)v34 - qword_140C67EF0) >> 3) & 0x1F)));
      if ( (_DWORD)KiIrqlFlags
        && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
        && CurrentIrql <= 0xFu )
      {
        v38 = v67;
        if ( v67 <= 0xFu && CurrentIrql >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = v39->SchedulerAssist;
          v41 = ~(unsigned __int16)(-1LL << (v67 + 1));
          v31 = (v41 & v40[5]) == 0;
          v40[5] &= v41;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick((__int64)v39);
        }
      }
      else
      {
        v38 = v67;
      }
      __writecr8(v38);
      Pool = MiAllocatePool(64, 0x10000uLL, 0x7048694Du);
      if ( !Pool )
      {
        v32 = -1073741670;
        goto LABEL_98;
      }
      v43 = MiAllocatePool(64, 0x28uLL, 0x7048694Du);
      v2 = (unsigned __int64)v43;
      if ( !v43 )
      {
        ExFreePoolWithTag(Pool, 0);
        v32 = -1073741670;
        goto LABEL_98;
      }
      v43[3] = v3;
      v43[4] = Pool;
    }
    v47 = 0LL;
    if ( v2 )
      v47 = (PVOID *)v2;
    v2 = qword_140C67460;
    P = v47;
    while ( v2 )
    {
      v48 = *(_QWORD *)(v2 + 24) & 0x3FFFFFLL;
      if ( v3 <= v48 )
      {
        if ( v3 >= v48 )
          break;
        v2 = *(_QWORD *)v2;
      }
      else
      {
        v2 = *(_QWORD *)(v2 + 8);
      }
    }
LABEL_75:
    v49 = a1 & 0x3FFFF;
    if ( !_bittest64(*(const signed __int64 **)(v2 + 32), v49) )
    {
      _bittestandset64(*(signed __int64 **)(v2 + 32), v49);
      ++qword_140C67468;
    }
    v50 = (signed __int64 *)(*(_QWORD *)(v2 + 32) + 0x8000LL);
    v51 = _bittest64(v50, v49);
    if ( (a2 & 0x10000000) != 0 )
    {
      if ( !v51 )
        _bittestandset64(v50, v49);
    }
    else if ( v51 )
    {
      _bittestandreset64(v50, v49);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67410);
    v52 = *v34 & 7;
    if ( v52 == 1 || v52 == 2 )
    {
      v53 = MiHugePfnPartition(v34);
      MiUnlinkHugeRange(v53, v3);
      MiInsertHugeRangeInList(0LL, v3, 9);
    }
    else if ( v52 != 4 )
    {
      v32 = 259;
      goto LABEL_88;
    }
    v32 = 0;
LABEL_88:
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLocka);
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140C67EF8 + 4 * (((((__int64)v34 - qword_140C67EF0) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v34 - qword_140C67EF0) >> 3) & 0x1F)));
    if ( (_DWORD)KiIrqlFlags && (v54 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0) && v54 <= 0xFu )
    {
      v55 = v67;
      if ( v67 <= 0xFu && v54 >= 2u )
      {
        v56 = KeGetCurrentPrcb();
        v57 = v56->SchedulerAssist;
        v58 = ~(unsigned __int16)(-1LL << (v67 + 1));
        v31 = (v58 & v57[5]) == 0;
        v57[5] &= v58;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick((__int64)v56);
      }
    }
    else
    {
      v55 = v67;
    }
    __writecr8(v55);
  }
LABEL_98:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v20);
  KeAbPostRelease(v20);
  v31 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v31 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67488, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67488);
  KeAbPostRelease((ULONG_PTR)&qword_140C67488);
  v31 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v31 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( P )
  {
    ExFreePoolWithTag(P[4], 0);
    ExFreePoolWithTag(P, 0);
  }
  if ( v32 == -1073740748 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
  return v32;
}
