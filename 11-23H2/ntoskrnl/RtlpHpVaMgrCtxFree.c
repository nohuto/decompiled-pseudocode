/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x140210A6C
 * Callers:
 *     RtlpHpFreeVA @ 0x140212158 (RtlpHpFreeVA.c)
 * Callees:
 *     RtlpHpVaMgrRangeFree @ 0x140210970 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpEnvFreeVA @ 0x1402121E0 (RtlpHpEnvFreeVA.c)
 *     MmFreePoolMemory @ 0x140212224 (MmFreePoolMemory.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     RtlSparseArrayElementAllocated @ 0x14024FBEC (RtlSparseArrayElementAllocated.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAcquireLockExclusive @ 0x140316F54 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpVaMgrFree @ 0x14035DBFC (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x140364ECC (RtlpHpVaMgrRangeSplit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlSparseArrayElementFindCapped @ 0x1405B74D0 (RtlSparseArrayElementFindCapped.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxFree(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rsi
  _BYTE *v7; // rax
  __int64 v8; // rbx
  ULONG_PTR v9; // rdi
  __int64 result; // rax
  unsigned __int8 v11; // cl
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  bool v18; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  __int64 Capped; // rbx

  v6 = *a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = (__int64)v7;
  if ( !v7 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               (*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL,
               ~((*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL));
    result = RtlpHpEnvFreeVA(a2, a3, 0x8000LL);
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
    return result;
  }
  v9 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
  if ( (*v7 & 4) != 0 )
  {
    *v7 &= ~1u;
    return RtlpHpVaMgrRangeFree(v9, v8);
  }
  v11 = *(_BYTE *)(v9 + 46);
  if ( (v11 & 0xEu) < 4 || (v11 & 0xEu) >= 0xA )
  {
    MmFreePoolMemory(a2, a3, 0x4000LL);
    v11 = *(_BYTE *)(v9 + 46);
  }
  v12 = v8;
  if ( (*(_BYTE *)v8 & 2) != 0 )
  {
    v15 = v8;
    do
      v8 -= 32LL;
    while ( (*(_BYTE *)v8 & 2) != 0 );
    v11 = *(_BYTE *)(v9 + 46);
  }
  else
  {
    if ( ((v11 >> 5) & (unsigned __int8)~(*(_BYTE *)v8 >> 2) & 1) == 0 )
    {
      v13 = (*(_BYTE *)v8 & 4) != 0 ? *(_QWORD *)(v8 + 24) : *(unsigned __int16 *)(v8 + 24);
      if ( v6 != v13 )
        __int2c();
    }
    if ( (*(_BYTE *)v8 & 4) != 0 )
      v14 = *(_QWORD *)(v8 + 24);
    else
      v14 = *(unsigned __int16 *)(v8 + 24);
    if ( v6 < v14 )
      v15 = v8 + 32 * v6;
    else
      v15 = 0LL;
  }
  v16 = (unsigned __int8)RtlpHpAcquireLockExclusive(v9, v11 & 1);
  if ( v15 )
    RtlpHpVaMgrRangeSplit(v9, v8, (v15 - v8) >> 5);
  v8 = RtlpHpVaMgrFree(v9, v12);
  if ( (*(_BYTE *)(v9 + 46) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v9);
    result = (unsigned int)KiIrqlFlags;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v16 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v18 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v16);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    result = KeAbPostRelease(v9);
    CurrentThread = KeGetCurrentThread();
    v18 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v18 )
    {
      result = (__int64)&CurrentThread->152;
      if ( *(_QWORD *)result != result )
        result = KiCheckForKernelApcDelivery();
    }
  }
  if ( v8 )
    return RtlpHpVaMgrRangeFree(v9, v8);
  return result;
}
