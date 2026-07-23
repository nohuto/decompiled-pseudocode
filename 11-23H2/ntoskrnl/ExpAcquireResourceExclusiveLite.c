/*
 * XREFs of ExpAcquireResourceExclusiveLite @ 0x14023B5A0
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     CcAcquireByteRangeForWrite @ 0x14029D2C0 (CcAcquireByteRangeForWrite.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140334790 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402611B0 (KxWaitForLockOwnerShip.c)
 *     ExpApplyPrewaitBoost @ 0x1402A7DB0 (ExpApplyPrewaitBoost.c)
 *     KxWaitForLockChainValid @ 0x14031A960 (KxWaitForLockChainValid.c)
 *     ExpBoostIoAfterAcquire @ 0x14031B140 (ExpBoostIoAfterAcquire.c)
 *     ExpWaitForResource @ 0x140341850 (ExpWaitForResource.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14046058E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140571A88 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14058045C (KiHaltOnAddressWakeEntireList.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140600BFC (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1406010D4 (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceExclusiveLite(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r15
  bool v7; // r14
  volatile __int64 *v8; // r8
  unsigned __int8 CurrentIrql; // dl
  __int64 v10; // rdx
  unsigned __int8 v11; // si
  int v12; // eax
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  _DWORD *SchedulerAssist; // r10
  __int64 v17; // r11
  unsigned int v18; // esi
  unsigned int v19; // esi
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  _QWORD *v25; // rcx
  unsigned __int8 v26; // cl
  unsigned __int64 v27; // rbx
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // cl
  unsigned __int8 v30; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v32; // r8
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // cl
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  unsigned __int8 v39; // cl
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  unsigned __int8 v43; // cl
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  __int64 v47; // r8
  __int64 v48; // rcx
  signed __int32 v49[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v50; // [rsp+20h] [rbp-50h] BYREF
  volatile signed __int64 *v51; // [rsp+28h] [rbp-48h]
  __int64 v52; // [rsp+30h] [rbp-40h]
  __int64 v53; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v54; // [rsp+40h] [rbp-30h]
  struct _KTHREAD *v55; // [rsp+48h] [rbp-28h]
  __int64 v56; // [rsp+50h] [rbp-20h]
  _QWORD v57[3]; // [rsp+58h] [rbp-18h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]

  v52 = 0LL;
  v54 = 0LL;
  BYTE3(v56) = 0;
  CurrentThread = KeGetCurrentThread();
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x8A78u);
  v8 = (volatile __int64 *)(a1 + 96);
  v51 = (volatile signed __int64 *)(a1 + 96);
  v50 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v17) = 4;
    else
      v17 = (-1LL << (CurrentIrql + 1)) & 4;
    a4 = (unsigned int)v17 | SchedulerAssist[5];
    SchedulerAssist[5] = a4;
  }
  LOBYTE(v52) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v50, v8);
  }
  else
  {
    v10 = _InterlockedExchange64(v8, (__int64)&v50);
    if ( v10 )
      KxWaitForLockOwnerShip(&v50, v10, v8, a4);
  }
  if ( !*(_DWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_WORD *)(a1 + 24) = 1;
    *(_WORD *)(a1 + 26) |= 0x80u;
    v11 = 1;
    v12 = *(_DWORD *)(a1 + 56) & 7;
    *(_DWORD *)(a1 + 64) = 1;
    *(_DWORD *)(a1 + 56) = v12 | 8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _m_prefetchw(&v50);
      v13 = v50;
      if ( !v50 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v51, 0LL, (signed __int64)&v50) == &v50 )
          goto LABEL_9;
        v13 = KxWaitForLockChainValid(&v50);
      }
      v50 = 0LL;
      v28 = (unsigned __int8)v51;
      if ( ((v28 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v13 + 8), (__int64)v51)) & 4) != 0 )
      {
        _InterlockedOr(v49, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v13 + 8) >> 5) & 0x7F], 0LL));
      }
      goto LABEL_9;
    }
    KiReleaseQueuedSpinLockInstrumented(&v50, retaddr);
LABEL_9:
    v14 = (unsigned __int8)v52;
    if ( (_DWORD)KiIrqlFlags )
    {
      v30 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v30 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v30 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v32 = CurrentPrcb->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
        v34 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v14);
    __incgsdword(0x8A7Cu);
    __incgsdword(0x8A64u);
    if ( v7 )
      PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return v11;
  }
  if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v18 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v18;
    v19 = v18 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _m_prefetchw(&v50);
      v20 = v50;
      if ( !v50 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v51, 0LL, (signed __int64)&v50) == &v50 )
          goto LABEL_22;
        v20 = KxWaitForLockChainValid(&v50);
      }
      v50 = 0LL;
      v29 = (unsigned __int8)v51;
      if ( ((v29 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v20 + 8), (__int64)v51)) & 4) != 0 )
      {
        _InterlockedOr(v49, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v20 + 8) >> 5) & 0x7F], 0LL));
      }
      goto LABEL_22;
    }
    KiReleaseQueuedSpinLockInstrumented(&v50, retaddr);
LABEL_22:
    v21 = (unsigned __int8)v52;
    if ( (_DWORD)KiIrqlFlags )
    {
      v35 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v35 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
        v34 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
    __writecr8(v21);
    __incgsdword(0x8A80u);
    __incgsdword(0x8A64u);
    if ( !v7 )
      return 1;
    v47 = v19;
    v48 = 65585LL;
LABEL_81:
    PerfLogExecutiveResourceAcquire(v48, a1, v47, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    ++*(_DWORD *)(a1 + 76);
    v57[1] = v57;
    v57[0] = v57;
    v22 = *(_QWORD *)(a1 + 40);
    v53 = 0LL;
    v54 = 0LL;
    v56 = 393217LL;
    v55 = CurrentThread;
    v57[2] = 0LL;
    if ( v22 )
    {
      v25 = *(_QWORD **)(v22 + 8);
      if ( *v25 != v22 )
        __fastfail(3u);
      v54 = *(__int64 **)(v22 + 8);
      v53 = v22;
      *v25 = &v53;
      *(_QWORD *)(v22 + 8) = &v53;
    }
    else
    {
      v54 = &v53;
      v53 = (__int64)&v53;
      *(_QWORD *)(a1 + 40) = &v53;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _m_prefetchw(&v50);
      v23 = v50;
      if ( !v50 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v51, 0LL, (signed __int64)&v50) == &v50 )
          goto LABEL_31;
        v23 = KxWaitForLockChainValid(&v50);
      }
      v50 = 0LL;
      v26 = (unsigned __int8)v51;
      if ( ((v26 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v23 + 8), (__int64)v51)) & 4) != 0 )
      {
        _InterlockedOr(v49, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v23 + 8) >> 5) & 0x7F], 0LL));
      }
      goto LABEL_31;
    }
    KiReleaseQueuedSpinLockInstrumented(&v50, retaddr);
LABEL_31:
    v24 = (unsigned __int8)v52;
    if ( (_DWORD)KiIrqlFlags )
    {
      v43 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v43 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v43 >= 2u )
      {
        v44 = KeGetCurrentPrcb();
        v45 = v44->SchedulerAssist;
        v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
        v34 = (v46 & v45[5]) == 0;
        v45[5] &= v46;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
    }
    __writecr8(v24);
    __incgsdword(0x8A84u);
    if ( v7 )
      PerfLogExecutiveResourceWait(65572LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource(a1, &v53, 66084LL, ExpApplyRewaitBoost);
    ExpBoostIoAfterAcquire(a1, CurrentThread, 0LL);
    __incgsdword(0x8A7Cu);
    __incgsdword(0x8A64u);
    if ( !v7 )
      return 1;
    v47 = 1LL;
    v48 = 65569LL;
    goto LABEL_81;
  }
  KxReleaseQueuedSpinLock(&v50);
  v27 = (unsigned __int8)v52;
  if ( (_DWORD)KiIrqlFlags )
  {
    v39 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v39 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v39 >= 2u )
    {
      v40 = KeGetCurrentPrcb();
      v41 = v40->SchedulerAssist;
      v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
      v34 = (v42 & v41[5]) == 0;
      v41[5] &= v42;
      if ( v34 )
        KiRemoveSystemWorkPriorityKick(v40);
    }
  }
  __writecr8(v27);
  __incgsdword(0x8A88u);
  return 0;
}
