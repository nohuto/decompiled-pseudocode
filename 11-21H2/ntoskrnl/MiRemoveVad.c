/*
 * XREFs of MiRemoveVad @ 0x14030DA80
 * Callers:
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x14096D8A8 (MiCoalescePlaceholderAllocations.c)
 *     MiPreparePlaceholderVadReplacement @ 0x14097F038 (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiClearVadCellBits @ 0x14030E0A0 (MiClearVadCellBits.c)
 *     MiInsertVad @ 0x14030E390 (MiInsertVad.c)
 *     MiVadMapsLargeImage @ 0x14030EC40 (MiVadMapsLargeImage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     MiCaptureDeleteHierarchy @ 0x14032CB70 (MiCaptureDeleteHierarchy.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140461B20 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiReturnPageTablePageCommitment @ 0x1407B92D0 (MiReturnPageTablePageCommitment.c)
 */

__int64 __fastcall MiRemoveVad(unsigned __int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v5; // r15
  _KPROCESS *Process; // rdx
  unsigned __int64 i; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 j; // rsi
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rax
  ULONG_PTR v13; // r13
  unsigned __int8 v14; // al
  volatile __int32 *v15; // r12
  unsigned __int8 v16; // r10
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *v18; // rcx
  signed __int32 v19; // ett
  unsigned __int8 CurrentIrql; // r12
  char v21; // dl
  __int64 v22; // rdx
  volatile LONG *v23; // rcx
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // r13
  unsigned int v26; // ebp
  _KPROCESS *v27; // rcx
  __int64 v28; // r14
  int v29; // eax
  _KPROCESS *v30; // r12
  struct _KTHREAD *v31; // rdi
  __int64 SessionId; // rdx
  char *p_Process; // rbx
  __int64 v34; // r8
  int v35; // r8d
  struct _KTHREAD *v36; // rcx
  bool v37; // zf
  int v38; // eax
  __int64 result; // rax
  _DWORD *v40; // rcx
  _DWORD *SchedulerAssist; // r9
  _DWORD *v42; // r9
  int v43; // eax
  int v44; // eax
  unsigned __int8 v45; // al
  KIRQL v46; // r12
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  _KPROCESS *v50; // [rsp+40h] [rbp-98h]
  int v51; // [rsp+48h] [rbp-90h]
  unsigned __int8 v52; // [rsp+50h] [rbp-88h]
  struct _KPRCB *v53; // [rsp+50h] [rbp-88h]
  int v54; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v55; // [rsp+60h] [rbp-78h]
  unsigned __int64 v56; // [rsp+68h] [rbp-70h]
  unsigned __int64 *v57; // [rsp+70h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-60h]
  struct _KTHREAD *v59; // [rsp+80h] [rbp-58h]
  unsigned __int8 v60; // [rsp+E0h] [rbp+8h]
  KIRQL v61; // [rsp+E0h] [rbp+8h]
  int v64; // [rsp+F8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a1;
  v64 = 0;
  Process = CurrentThread->ApcState.Process;
  v59 = CurrentThread;
  v50 = Process;
  v57 = &Process[1].ActiveProcessors.StaticBitmap[26];
  if ( !a2 )
  {
    v8 = 0LL;
    v56 = 0LL;
    v9 = 0LL;
    v55 = 0LL;
    i = 0LL;
LABEL_19:
    j = 0LL;
    goto LABEL_20;
  }
  i = *(_QWORD *)a1;
  v8 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v9 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
  v56 = v8;
  v55 = v9;
  if ( i )
  {
    for ( ; *(_QWORD *)(i + 8); i = *(_QWORD *)(i + 8) )
      ;
  }
  else
  {
    for ( i = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(_QWORD *)(i + 8) == a1 )
        break;
      a1 = i;
    }
  }
  j = *(_QWORD *)(v5 + 8);
  v11 = v5;
  if ( !i )
    i = 0LL;
  if ( j )
  {
    v12 = *(_QWORD **)j;
    if ( *(_QWORD *)j )
    {
      do
      {
        j = (unsigned __int64)v12;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
    }
  }
  else
  {
    for ( j = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(_QWORD *)j == v11 )
        break;
      v11 = j;
    }
  }
  if ( !j )
    goto LABEL_19;
LABEL_20:
  --*(_QWORD *)&Process[1].Spare2[31];
  --CurrentThread->SpecialApcDisable;
  v52 = 17;
  v13 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[8];
  BugCheckParameter2 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.StaticBitmap[8], 0LL);
  if ( a2 )
  {
    v14 = v57[23] & 7;
    if ( v14 > 4u )
    {
      if ( v14 != 5 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v52 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        goto LABEL_31;
      }
    }
    else if ( v14 == 2 )
    {
      v15 = (volatile __int32 *)&unk_140C53D00;
      goto LABEL_24;
    }
    v15 = (volatile __int32 *)(v57 + 24);
LABEL_24:
    v16 = KeGetCurrentIrql();
    v60 = v16;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v16 <= 0xFu )
    {
      v42 = KeGetCurrentPrcb()->SchedulerAssist;
      v42[5] |= (-1 << (v16 + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v15, v16);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v53 = CurrentPrcb;
      v18 = CurrentPrcb->SchedulerAssist;
      if ( v18 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v43 = v18[6];
          v18[6] = v43 + 1;
          if ( v43 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            CurrentPrcb = v53;
            v16 = v60;
          }
        }
      }
      _m_prefetchw((const void *)v15);
      v19 = *v15 & 0x7FFFFFFF;
      if ( v19 == _InterlockedCompareExchange(v15, v19 + 1, v19) )
        goto LABEL_28;
      v40 = CurrentPrcb->SchedulerAssist;
      if ( v40 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v44 = v40[6] - 1;
          v40[6] = v44;
          if ( !v44 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v16 = v60;
          }
        }
      }
      ExpWaitForSpinLockSharedAndAcquire(v15, v16);
    }
    v16 = v60;
LABEL_28:
    if ( *((_DWORD *)v15 + 1) )
      _InterlockedExchange(v15 + 1, 0);
    CurrentIrql = v16;
    v52 = v16;
LABEL_31:
    MiCaptureDeleteHierarchy(v8, v9, CurrentIrql, &v64);
    v21 = 3;
    goto LABEL_32;
  }
  v21 = 2;
LABEL_32:
  v22 = v21 & 1;
  v51 = v22;
  v23 = (volatile LONG *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 284);
  if ( (_DWORD)v22 )
  {
    LOBYTE(v22) = -1;
    v61 = 17;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v23, v22);
    else
      ExpAcquireSpinLockExclusive(v23, v22);
  }
  else
  {
    v61 = ExAcquireSpinLockExclusive(v23);
  }
  RtlAvlRemoveNode((unsigned __int64 *)&v50[1].Spare2[15], (unsigned __int64 *)v5);
  if ( *(_QWORD *)&v50[1].Spare2[23] == v5 )
    *(_QWORD *)&v50[1].Spare2[23] = *(_QWORD *)&v50[1].Spare2[15];
  *(_QWORD *)(v5 + 16) = -2LL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                       + 284));
  if ( !v51 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v45 = KeGetCurrentIrql(), v45 <= 0xFu) )
    {
      v46 = v61;
      if ( v61 <= 0xFu && v45 >= 2u )
      {
        v47 = KeGetCurrentPrcb();
        v48 = v47->SchedulerAssist;
        v49 = ~(unsigned __int16)(-1LL << (v61 + 1));
        v37 = (v49 & v48[5]) == 0;
        v48[5] &= v49;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick(v47);
      }
    }
    else
    {
      v46 = v61;
    }
    __writecr8(v46);
  }
  if ( !a2 )
  {
    v30 = v50;
    goto LABEL_49;
  }
  MiUnlockWorkingSetShared((__int64)v57, v52);
  if ( !a3 )
  {
    v24 = v8 >> 16;
    v25 = v9 >> 16;
    if ( i
      && ((v8 ^ ((*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      LODWORD(v24) = v24 + 1;
    }
    if ( j
      && ((v9 ^ ((*(unsigned int *)(j + 24) | ((unsigned __int64)*(unsigned __int8 *)(j + 32) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      if ( !v25 )
      {
LABEL_111:
        v30 = v50;
        MiReturnPageTablePageCommitment(v8, v9, (_DWORD)v50, i, j, v5, (__int64)&v64);
        v13 = BugCheckParameter2;
        goto LABEL_49;
      }
      LODWORD(v25) = v25 - 1;
    }
    v26 = 0;
    v54 = 0;
    v27 = KeGetCurrentThread()->ApcState.Process;
    v28 = v27[1].ActiveProcessors.StaticBitmap[28] + 48;
    if ( *(_QWORD *)(v27[1].ActiveProcessors.StaticBitmap[28] + 264) )
    {
      v29 = 0;
      do
      {
        MiClearVadCellBits(v28 + 72 * v29, v24, v25, i, j, (__int64)&v54);
        v29 = ++v26;
      }
      while ( (unsigned __int64)v26 < *(_QWORD *)(v28 + 216) );
      v30 = v50;
      MiReturnPageTablePageCommitment(v56, v55, (_DWORD)v50, i, j, v5, (__int64)&v64);
      v13 = BugCheckParameter2;
      goto LABEL_49;
    }
    LODWORD(v9) = v55;
    LODWORD(v8) = v56;
    goto LABEL_111;
  }
  v30 = v50;
  MiReturnPageTablePageCommitment(v8, v9, (_DWORD)v50, i, j, v5, (__int64)&v64);
  MiInsertVad(a3, v50, 2LL);
LABEL_49:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13);
  v31 = KeGetCurrentThread();
  if ( v13 - qword_140C50630 < 0x8000000000LL )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v31->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  _disable();
  p_Process = (char *)&v31[1].Process;
  v34 = 0LL;
  do
  {
    if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
      && p_Process[18]
      && (*(_DWORD *)p_Process & 1) == 0
      && *((_DWORD *)p_Process + 2) == (_DWORD)SessionId )
    {
      p_Process[18] = 0;
      if ( *(__int64 *)p_Process < 0 )
      {
        *p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process, SessionId, v34);
        _disable();
      }
      v35 = *((_DWORD *)p_Process + 22);
      *((_DWORD *)p_Process + 22) = 0;
      p_Process[17] = 0;
      *(_QWORD *)p_Process = 0LL;
      v31->AbEntrySummary |= 1 << p_Process[16];
      _enable();
      if ( v35 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v31, v13, v35);
      goto LABEL_62;
    }
    v34 = (unsigned int)(v34 + 1);
    p_Process += 96;
  }
  while ( (unsigned int)v34 < 6 );
  if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v31, v13, (unsigned int)SessionId, 0LL);
  _enable();
LABEL_62:
  v36 = v59;
  v37 = v59->SpecialApcDisable++ == -1;
  if ( v37 && ($CEA84C04E3712D858E5667A507841A2A *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
    KiCheckForKernelApcDelivery();
  v38 = *(_DWORD *)(v5 + 48);
  if ( (v38 & 0x200000) != 0 && ((v38 & 0x800000) != 0 || (v38 & 0x180000u) >= 0x100000)
    || (result = MiVadMapsLargeImage(v5), (_DWORD)result) )
  {
    result = (*(_DWORD *)(v5 + 48) >> 19) & 3;
    if ( (unsigned __int64)MiVadPageSizes[result] >= 0x200 )
      --HIDWORD(v30[1].EndPadding[0]);
  }
  return result;
}
