/*
 * XREFs of ExpAcquireSharedStarveExclusive @ 0x1402632C0
 * Callers:
 *     CcPinFileData @ 0x140263770 (CcPinFileData.c)
 *     ExAcquireSharedStarveExclusive @ 0x140348830 (ExAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExpFindCurrentThread @ 0x1402600E0 (ExpFindCurrentThread.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     ExpApplyPrewaitBoost @ 0x1402A7A00 (ExpApplyPrewaitBoost.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     ExpBoostIoAfterAcquire @ 0x14031ACD0 (ExpBoostIoAfterAcquire.c)
 *     ExpGetThreadResourceHint @ 0x140337910 (ExpGetThreadResourceHint.c)
 *     ExpWaitForResource @ 0x1403410D0 (ExpWaitForResource.c)
 *     ExpFindEmptyEntry @ 0x1403411A4 (ExpFindEmptyEntry.c)
 *     RtlInsertHeadCircularList @ 0x14034F040 (RtlInsertHeadCircularList.c)
 *     ExpTryAcquireResourceSharedStarveExclusive @ 0x14035497C (ExpTryAcquireResourceSharedStarveExclusive.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14060071C (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140600BF4 (PerfLogExecutiveResourceWait.c)
 */

char __fastcall ExpAcquireSharedStarveExclusive(__int64 a1, char a2)
{
  __int64 CurrentThread; // r14
  bool v5; // si
  volatile __int64 *v6; // r8
  unsigned int v7; // ebx
  unsigned __int8 CurrentIrql; // dl
  __int64 v9; // r12
  signed __int64 *v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  _DWORD *SchedulerAssist; // r10
  __int64 v16; // r11
  unsigned int ThreadResourceHint; // eax
  _QWORD *EmptyEntry; // rax
  unsigned int v19; // r14d
  unsigned int v20; // r14d
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  int v24; // eax
  unsigned __int64 v25; // r15
  unsigned __int8 v26; // cl
  int v27; // eax
  unsigned __int64 v28; // r15
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rbx
  unsigned __int8 v33; // cl
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  bool v38; // zf
  unsigned __int8 v39; // cl
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  __int64 v43; // r8
  __int64 v44; // rcx
  unsigned __int8 v45; // cl
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  int v52; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  unsigned __int8 v57; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v59; // r8
  int v60; // eax
  signed __int32 v61[8]; // [rsp+0h] [rbp-80h] BYREF
  volatile signed __int64 *v62; // [rsp+30h] [rbp-50h] BYREF
  volatile signed __int64 *v63; // [rsp+38h] [rbp-48h]
  __int64 v64; // [rsp+40h] [rbp-40h]
  __int128 v65; // [rsp+48h] [rbp-38h] BYREF
  __int128 v66; // [rsp+58h] [rbp-28h]
  __int128 v67; // [rsp+68h] [rbp-18h] BYREF
  __int64 v68; // [rsp+78h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  v64 = 0LL;
  v68 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  CurrentThread = (__int64)KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x8AA4u);
  v6 = (volatile __int64 *)(a1 + 96);
  v7 = 0;
  v63 = (volatile signed __int64 *)(a1 + 96);
  v62 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = (unsigned __int8)v62 - 1LL;
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v16) = 4;
    else
      v16 = (v9 << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v16;
  }
  LOBYTE(v64) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v62, v6);
  }
  else
  {
    v10 = (signed __int64 *)_InterlockedExchange64(v6, (__int64)&v62);
    if ( v10 )
      KxWaitForLockOwnerShip((signed __int64)&v62, v10);
  }
  do
  {
    if ( !*(_DWORD *)(a1 + 64) )
    {
      *(_WORD *)(a1 + 24) = 1;
      *(_DWORD *)(a1 + 64) = 1;
      v11 = *(_DWORD *)(a1 + 56) & 7;
      *(_QWORD *)(a1 + 48) = CurrentThread;
      *(_DWORD *)(a1 + 56) = v11 | 8;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v62, retaddr);
        goto LABEL_9;
      }
      _m_prefetchw(&v62);
      v12 = (__int64)v62;
      if ( !v62 )
      {
        if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v63, 0LL, (signed __int64)&v62) == &v62 )
          goto LABEL_9;
        v12 = KxWaitForLockChainValid(&v62);
      }
      v62 = 0LL;
      v26 = (unsigned __int8)v63;
      if ( ((v26 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v12 + 8), (__int64)v63)) & 4) != 0 )
      {
        _InterlockedOr(v61, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v12 + 8) >> 5) & 0x7F], 0LL));
      }
LABEL_9:
      v13 = (unsigned __int8)v64;
      if ( (_DWORD)KiIrqlFlags )
      {
        v57 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v57 <= 0xFu && (unsigned __int8)v64 <= 0xFu && v57 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v59 = CurrentPrcb->SchedulerAssist;
          v60 = ~(unsigned __int16)(v9 << ((unsigned __int8)v64 + 1));
          v38 = (v60 & v59[5]) == 0;
          v59[5] &= v60;
          if ( v38 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v13);
      __incgsdword(0x8AACu);
      __incgsdword(0x8A64u);
      if ( !v5 )
        return 1;
      goto LABEL_92;
    }
    if ( *(char *)(a1 + 26) < 0 )
    {
      if ( *(_QWORD *)(a1 + 48) == CurrentThread )
      {
        v29 = *(_DWORD *)(a1 + 56) + 8;
        *(_DWORD *)(a1 + 56) = v29;
        v30 = v29 >> 3;
        KxReleaseQueuedSpinLock(&v62);
        v31 = (unsigned __int8)v64;
        if ( (_DWORD)KiIrqlFlags )
        {
          v34 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v34 <= 0xFu && (unsigned __int8)v64 <= 0xFu && v34 >= 2u )
          {
            v35 = KeGetCurrentPrcb();
            v36 = v35->SchedulerAssist;
            v37 = ~(unsigned __int16)(v9 << ((unsigned __int8)v64 + 1));
            v38 = (v37 & v36[5]) == 0;
            v36[5] &= v37;
            if ( v38 )
              KiRemoveSystemWorkPriorityKick(v35);
          }
        }
        __writecr8(v31);
        __incgsdword(0x8AA8u);
        __incgsdword(0x8A64u);
        if ( v5 )
        {
          v43 = v30;
          v44 = 65585LL;
          goto LABEL_93;
        }
        return 1;
      }
      EmptyEntry = (_QWORD *)ExpFindEmptyEntry(a1, &v62);
    }
    else
    {
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      EmptyEntry = ExpFindCurrentThread(
                     a1,
                     CurrentThread,
                     (__int64)&v62,
                     1,
                     *(_DWORD *)(a1 + 76) != 0,
                     ThreadResourceHint);
    }
  }
  while ( !EmptyEntry );
  if ( *EmptyEntry == CurrentThread )
  {
    v19 = *((_DWORD *)EmptyEntry + 2) + 8;
    *((_DWORD *)EmptyEntry + 2) = v19;
    v20 = v19 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v62, retaddr);
      goto LABEL_23;
    }
    _m_prefetchw(&v62);
    v21 = (__int64)v62;
    if ( !v62 )
    {
      if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v63, 0LL, (signed __int64)&v62) == &v62 )
        goto LABEL_23;
      v21 = KxWaitForLockChainValid(&v62);
    }
    v62 = 0LL;
    v33 = (unsigned __int8)v63;
    if ( ((v33 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v21 + 8), (__int64)v63)) & 4) != 0 )
    {
      _InterlockedOr(v61, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v21 + 8) >> 5) & 0x7F], 0LL));
    }
LABEL_23:
    v22 = (unsigned __int8)v64;
    if ( (_DWORD)KiIrqlFlags )
    {
      v39 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v39 <= 0xFu && (unsigned __int8)v64 <= 0xFu && v39 >= 2u )
      {
        v40 = KeGetCurrentPrcb();
        v41 = v40->SchedulerAssist;
        v42 = ~(unsigned __int16)(v9 << ((unsigned __int8)v64 + 1));
        v38 = (v42 & v41[5]) == 0;
        v41[5] &= v42;
        if ( v38 )
          KiRemoveSystemWorkPriorityKick(v40);
      }
    }
    __writecr8(v22);
    __incgsdword(0x8AB0u);
    __incgsdword(0x8A64u);
    if ( v5 )
    {
      v43 = v20;
      v44 = 65617LL;
      goto LABEL_93;
    }
    return 1;
  }
  if ( (unsigned __int8)ExpTryAcquireResourceSharedStarveExclusive(a1, EmptyEntry) )
  {
    v24 = *(_DWORD *)(v23 + 8) & 7;
    *(_QWORD *)v23 = CurrentThread;
    *(_DWORD *)(v23 + 8) = v24 | 8;
    KxReleaseQueuedSpinLock(&v62);
    v25 = (unsigned __int8)v64;
    if ( (_DWORD)KiIrqlFlags )
    {
      v45 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v45 <= 0xFu && (unsigned __int8)v64 <= 0xFu && v45 >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        v47 = v46->SchedulerAssist;
        v48 = ~(unsigned __int16)(v9 << ((unsigned __int8)v64 + 1));
        v38 = (v48 & v47[5]) == 0;
        v47[5] &= v48;
        if ( v38 )
          KiRemoveSystemWorkPriorityKick(v46);
      }
    }
    __writecr8(v25);
LABEL_29:
    if ( (CurrentThread & 3) == 0 )
      v7 = *(unsigned __int8 *)(CurrentThread + 1120);
    ExpBoostIoAfterAcquire(a1, CurrentThread, v7);
    __incgsdword(0x8AACu);
    __incgsdword(0x8A64u);
    if ( !v5 )
      return 1;
LABEL_92:
    v43 = 1LL;
    v44 = 65601LL;
LABEL_93:
    PerfLogExecutiveResourceAcquire(v44, a1, v43, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    v27 = *(_DWORD *)(v23 + 8);
    *(_QWORD *)v23 = CurrentThread;
    *(_DWORD *)(v23 + 8) = v27 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    *((_QWORD *)&v67 + 1) = &v67;
    *(_QWORD *)&v67 = &v67;
    *((_QWORD *)&v65 + 1) = 0LL;
    *((_QWORD *)&v66 + 1) = 393217LL;
    *(_QWORD *)&v66 = CurrentThread;
    v68 = 0LL;
    RtlInsertHeadCircularList(a1 + 32, &v65);
    KxReleaseQueuedSpinLock(&v62);
    v28 = (unsigned __int8)v64;
    if ( (_DWORD)KiIrqlFlags )
    {
      v53 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v53 <= 0xFu && (unsigned __int8)v64 <= 0xFu && v53 >= 2u )
      {
        v54 = KeGetCurrentPrcb();
        v55 = v54->SchedulerAssist;
        v56 = ~(unsigned __int16)(v9 << ((unsigned __int8)v64 + 1));
        v38 = (v56 & v55[5]) == 0;
        v55[5] &= v56;
        if ( v38 )
          KiRemoveSystemWorkPriorityKick(v54);
      }
    }
    __writecr8(v28);
    __incgsdword(0x8AB4u);
    if ( v5 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource(a1, &v65, 66116LL, ExpApplyRewaitBoost);
    goto LABEL_29;
  }
  KxReleaseQueuedSpinLock(&v62);
  v32 = (unsigned __int8)v64;
  if ( (_DWORD)KiIrqlFlags )
  {
    v49 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v49 <= 0xFu && (unsigned __int8)v64 <= 0xFu && v49 >= 2u )
    {
      v50 = KeGetCurrentPrcb();
      v51 = v50->SchedulerAssist;
      v52 = ~(unsigned __int16)(v9 << ((unsigned __int8)v64 + 1));
      v38 = (v52 & v51[5]) == 0;
      v51[5] &= v52;
      if ( v38 )
        KiRemoveSystemWorkPriorityKick(v50);
    }
  }
  __writecr8(v32);
  __incgsdword(0x8AB8u);
  return 0;
}
