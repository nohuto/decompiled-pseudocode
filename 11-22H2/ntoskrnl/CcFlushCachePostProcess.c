/*
 * XREFs of CcFlushCachePostProcess @ 0x14029DC1C
 * Callers:
 *     CcFlushCachePriv @ 0x14029CC14 (CcFlushCachePriv.c)
 *     CcWriteBehindAsync @ 0x14053A530 (CcWriteBehindAsync.c)
 *     CcQueueAsyncLazywriteCompletion @ 0x14053B7C4 (CcQueueAsyncLazywriteCompletion.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x14029CA00 (CcDecrementOpenCount.c)
 *     CcUpdateLazyWriterPerf @ 0x14034C634 (CcUpdateLazyWriterPerf.c)
 *     CcPostDeferredWrites @ 0x1403C17E8 (CcPostDeferredWrites.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcFlushCachePostProcess(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rsi
  __int64 v4; // rdi
  char v5; // r15
  int *v6; // r14
  unsigned __int64 OldIrql; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *a1;
  v2 = a1[1];
  v4 = a1[2];
  v5 = *((_BYTE *)a1 + 132);
  v6 = (int *)a1[14];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *((_DWORD *)a1 + 13) && *(_QWORD *)a1[22] != a1[22] )
    CcPostDeferredWrites(v1, v2);
  if ( a1[29] )
    CcUpdateLazyWriterPerf(
      v2,
      a1 + 28,
      a1 + 29,
      *((unsigned int *)a1 + 60),
      LockHandle.LockQueue.Next,
      LockHandle.LockQueue.Lock);
  if ( v4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
    CcDecrementOpenCount(v4);
    if ( !v5 )
      --*(_DWORD *)(v4 + 524);
    if ( *((_BYTE *)a1 + 138) && *v6 >= 0 && *((int *)a1 + 32) >= 0 && (*(_DWORD *)(v4 + 112) || *(_DWORD *)(v4 + 524)) )
      *((_DWORD *)a1 + 32) = -1073741740;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  result = *((unsigned int *)a1 + 32);
  if ( (int)result < 0 )
    *v6 = result;
  return result;
}
