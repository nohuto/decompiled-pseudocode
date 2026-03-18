/*
 * XREFs of MiMarkHugePfnBad @ 0x1405879D8
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     MiIsPageInHugePfn @ 0x1402166E0 (MiIsPageInHugePfn.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiHugePfnPartition @ 0x14058727C (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x1405875A0 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1405891A4 (MiUnlinkHugeRange.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMarkHugePfnBad(ULONG_PTR a1, int a2)
{
  _QWORD *v2; // r15
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rax
  struct _KTHREAD *CurrentThread; // r13
  __int64 v6; // rdi
  volatile LONG *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbp
  ULONG_PTR v10; // r12
  struct _KTHREAD *v11; // rbp
  unsigned int v12; // ecx
  __int64 v13; // r14
  unsigned int v14; // edx
  bool v15; // zf
  int v16; // r8d
  unsigned int v17; // r14d
  __int64 v18; // rcx
  volatile LONG *v19; // rax
  unsigned __int64 *v20; // r14
  unsigned __int64 v21; // rbp
  int v22; // edx
  __int64 v23; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  PVOID Pool; // rdi
  _QWORD *v29; // rax
  void *v30; // rbp
  _QWORD *v31; // rdx
  bool v32; // r8
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int8 v38; // al
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  struct _KTHREAD *v46; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rdi
  unsigned int v49; // edx
  int v50; // r8d
  struct _KTHREAD *v51; // rdi
  unsigned int v52; // r8d
  __int64 v53; // rbx
  unsigned int v54; // ecx
  int v55; // r8d
  struct _KTHREAD *v57; // rdi
  unsigned int v58; // r8d
  __int64 v59; // rbx
  unsigned int v60; // ecx
  int v61; // r8d
  PEX_SPIN_LOCK SpinLock; // [rsp+30h] [rbp-58h]
  volatile LONG *SpinLocka; // [rsp+30h] [rbp-58h]
  void *v66; // [rsp+A8h] [rbp+20h]

  v66 = 0LL;
  v2 = 0LL;
  v3 = (a1 >> 18) & 0x3FFFFF;
  v4 = MiSearchNumaNodeTable(a1);
  CurrentThread = KeGetCurrentThread();
  v6 = *((unsigned int *)v4 + 2);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51F08, 0LL);
  v7 = (volatile LONG *)(qword_140C52968 + 8 * v3);
  SpinLock = v7;
  while ( 1 )
  {
    v8 = MiHugePfnPartition(v7);
    v9 = v8;
    if ( !v8 )
      break;
    --CurrentThread->SpecialApcDisable;
    v10 = v8 + 192;
    ExAcquirePushLockExclusiveEx(v8 + 192, 0LL);
    if ( v9 == MiHugePfnPartition(v7) )
    {
      if ( (*(_DWORD *)(v9 + 4) & 1) != 0 )
      {
        v17 = -1073740748;
      }
      else
      {
        v18 = *(_QWORD *)(v9 + 16) + 24512 * v6;
        v19 = (volatile LONG *)(v18 + 22848);
        SpinLocka = (volatile LONG *)(v18 + 22848);
        v20 = (unsigned __int64 *)(v18 + 22640);
        while ( 1 )
        {
          v21 = ExAcquireSpinLockExclusive(v19);
          if ( !MiIsPageInHugePfn(a1) )
          {
            v17 = -1073740748;
            goto LABEL_73;
          }
          v23 = qword_140C52968 + 8 * v3;
          if ( (*(_BYTE *)(v23 + 6) & 1) != 0 )
            break;
          if ( v2 )
          {
            v31 = (_QWORD *)*v20;
            v32 = 0;
            if ( !*v20 )
              goto LABEL_51;
            while ( 1 )
            {
              if ( v3 >= (v31[3] & 0x3FFFFFuLL) )
              {
                v33 = (_QWORD *)v31[1];
                if ( !v33 )
                {
                  v32 = 1;
LABEL_51:
                  RtlAvlInsertNodeEx(v20, (unsigned __int64)v31, v32, v2);
                  v22 = a1;
                  *(_QWORD *)v23 |= 0x1000000000000uLL;
                  goto LABEL_60;
                }
              }
              else
              {
                v33 = (_QWORD *)*v31;
                if ( !*v31 )
                  goto LABEL_51;
              }
              v31 = v33;
            }
          }
          ExReleaseSpinLockExclusiveFromDpcLevel(SpinLocka);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
                v15 = (v27 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v27;
                if ( v15 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v21);
          Pool = MiAllocatePool(64, 0x10000uLL, 0x7048694Du);
          if ( !Pool )
          {
            v17 = -1073741670;
            goto LABEL_81;
          }
          v29 = MiAllocatePool(64, 0x28uLL, 0x7048694Du);
          v2 = v29;
          if ( !v29 )
          {
            v30 = Pool;
            v17 = -1073741670;
            goto LABEL_82;
          }
          v29[3] = v3;
          v29[4] = Pool;
          v19 = SpinLocka;
        }
        v34 = 0LL;
        if ( v2 )
          v34 = v2;
        v2 = (_QWORD *)*v20;
        v66 = v34;
        while ( v2 )
        {
          v35 = v2[3] & 0x3FFFFFLL;
          if ( v3 <= v35 )
          {
            if ( v3 >= v35 )
              break;
            v2 = (_QWORD *)*v2;
          }
          else
          {
            v2 = (_QWORD *)v2[1];
          }
        }
LABEL_60:
        v36 = v2[4];
        v37 = v22 & 0x3FFFF;
        if ( !_bittest64((const signed __int64 *)v36, v37) )
        {
          _bittestandset64((signed __int64 *)v36, v37);
          v36 = v2[4];
        }
        v38 = _bittest64((const signed __int64 *)(v36 + 0x8000), v37);
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( !v38 )
            _bittestandset64((signed __int64 *)(v36 + 0x8000), v37);
        }
        else if ( v38 )
        {
          _bittestandreset64((signed __int64 *)(v36 + 0x8000), v37);
        }
        if ( (*(_QWORD *)v23 & 0x1C00000LL) == 0x400000 || (*(_QWORD *)v23 & 0x1C00000LL) == 0x800000 )
        {
          v39 = MiHugePfnPartition((_QWORD *)v23);
          MiUnlinkHugeRange(v39, v3, v40, v41);
          MiInsertHugeRangeInList(0LL, v3, 9);
        }
        else if ( (*(_QWORD *)v23 & 0x1C00000LL) != 0x1000000 )
        {
          v17 = 259;
          goto LABEL_73;
        }
        v17 = 0;
LABEL_73:
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLocka);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v42 = KeGetCurrentIrql();
            if ( v42 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v42 >= 2u )
            {
              v43 = KeGetCurrentPrcb();
              v44 = v43->SchedulerAssist;
              v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
              v15 = (v45 & v44[5]) == 0;
              v44[5] &= v45;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick((__int64)v43);
            }
          }
        }
        __writecr8(v21);
      }
LABEL_81:
      v30 = v66;
LABEL_82:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v10);
      v46 = KeGetCurrentThread();
      if ( v10 - qword_140C50630 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)v46->ApcState.Process);
      _disable();
      p_Process = (__int64)&v46[1].Process;
      v49 = 0;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v10 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(p_Process + 18)
           || (*(_DWORD *)p_Process & 1) != 0
           || *(_DWORD *)(p_Process + 8) != SessionId )
      {
        ++v49;
        p_Process += 96LL;
        if ( v49 >= 6 )
          goto LABEL_94;
      }
      *(_BYTE *)(p_Process + 18) = 0;
      if ( !p_Process )
      {
LABEL_94:
        if ( (*((_DWORD *)&v46->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v46, v10, SessionId, 0LL);
        _enable();
        goto LABEL_102;
      }
      if ( *(__int64 *)p_Process < 0 )
      {
        *(_BYTE *)p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process);
        _disable();
      }
      v50 = *(_DWORD *)(p_Process + 88);
      *(_DWORD *)(p_Process + 88) = 0;
      *(_BYTE *)(p_Process + 17) = 0;
      *(_QWORD *)p_Process = 0LL;
      v46->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
      _enable();
      if ( v50 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v46, v10, v50);
LABEL_102:
      v15 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v15
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C51F08);
      v51 = KeGetCurrentThread();
      if ( (unsigned __int64)&qword_140C51F08 - qword_140C50630 >= 0x8000000000LL )
        v52 = -1;
      else
        v52 = MmGetSessionIdEx((__int64)v51->ApcState.Process);
      _disable();
      v53 = (__int64)&v51[1].Process;
      v54 = 0;
      while ( (*(_QWORD *)v53 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C51F08 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v53 + 18)
           || (*(_DWORD *)v53 & 1) != 0
           || *(_DWORD *)(v53 + 8) != v52 )
      {
        ++v54;
        v53 += 96LL;
        if ( v54 >= 6 )
          goto LABEL_116;
      }
      *(_BYTE *)(v53 + 18) = 0;
      if ( !v53 )
      {
LABEL_116:
        if ( (*((_DWORD *)&v51->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v51, (ULONG_PTR)&qword_140C51F08, v52, 0LL);
        _enable();
        goto LABEL_124;
      }
      if ( *(__int64 *)v53 < 0 )
      {
        *(_BYTE *)v53 |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(v53);
        _disable();
      }
      v55 = *(_DWORD *)(v53 + 88);
      *(_DWORD *)(v53 + 88) = 0;
      *(_BYTE *)(v53 + 17) = 0;
      *(_QWORD *)v53 = 0LL;
      v51->AbEntrySummary |= 1 << *(_BYTE *)(v53 + 16);
      _enable();
      if ( v55 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v51, (__int64)&qword_140C51F08, v55);
LABEL_124:
      v15 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v15
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v30 )
        ExFreePoolWithTag(v30, 0);
      if ( v17 == -1073740748 )
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
      return v17;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    v11 = KeGetCurrentThread();
    if ( v10 - qword_140C50630 >= 0x8000000000LL )
      v12 = -1;
    else
      v12 = MmGetSessionIdEx((__int64)v11->ApcState.Process);
    _disable();
    v13 = (__int64)&v11[1].Process;
    v14 = 0;
    while ( (*(_QWORD *)v13 & 0x7FFFFFFFFFFFFFFCLL) != (v10 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v13 + 18)
         || (*(_DWORD *)v13 & 1) != 0
         || *(_DWORD *)(v13 + 8) != v12 )
    {
      ++v14;
      v13 += 96LL;
      if ( v14 >= 6 )
        goto LABEL_15;
    }
    *(_BYTE *)(v13 + 18) = 0;
    if ( !v13 )
    {
LABEL_15:
      if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v11, v10, v12, 0LL);
      _enable();
      goto LABEL_17;
    }
    if ( *(__int64 *)v13 < 0 )
    {
      *(_BYTE *)v13 |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(v13);
      _disable();
    }
    v16 = *(_DWORD *)(v13 + 88);
    *(_DWORD *)(v13 + 88) = 0;
    *(_BYTE *)(v13 + 17) = 0;
    *(_QWORD *)v13 = 0LL;
    v11->AbEntrySummary |= 1 << *(_BYTE *)(v13 + 16);
    _enable();
    if ( v16 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v11, v10, v16);
LABEL_17:
    v7 = SpinLock;
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C51F08);
  v57 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C51F08 - qword_140C50630 >= 0x8000000000LL )
    v58 = -1;
  else
    v58 = MmGetSessionIdEx((__int64)v57->ApcState.Process);
  _disable();
  v59 = (__int64)&v57[1].Process;
  v60 = 0;
  while ( (*(_QWORD *)v59 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C51F08 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v59 + 18)
       || (*(_DWORD *)v59 & 1) != 0
       || *(_DWORD *)(v59 + 8) != v58 )
  {
    ++v60;
    v59 += 96LL;
    if ( v60 >= 6 )
      goto LABEL_143;
  }
  *(_BYTE *)(v59 + 18) = 0;
  if ( !v59 )
  {
LABEL_143:
    if ( (*((_DWORD *)&v57->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v57, (ULONG_PTR)&qword_140C51F08, v58, 0LL);
    _enable();
    goto LABEL_151;
  }
  if ( *(__int64 *)v59 < 0 )
  {
    *(_BYTE *)v59 |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(v59);
    _disable();
  }
  v61 = *(_DWORD *)(v59 + 88);
  *(_DWORD *)(v59 + 88) = 0;
  *(_BYTE *)(v59 + 17) = 0;
  *(_QWORD *)v59 = 0LL;
  v57->AbEntrySummary |= 1 << *(_BYTE *)(v59 + 16);
  _enable();
  if ( v61 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v57, (__int64)&qword_140C51F08, v61);
LABEL_151:
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return 3221226548LL;
}
