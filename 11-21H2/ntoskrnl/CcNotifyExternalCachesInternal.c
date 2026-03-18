/*
 * XREFs of CcNotifyExternalCachesInternal @ 0x14039ED00
 * Callers:
 *     CcQueueLazyWriteScanThread @ 0x1403C7DE0 (CcQueueLazyWriteScanThread.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x14053D400 (CcQueueLazyWriteScanThreadForVolume.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     CcCalculatePagesToWrite @ 0x1402392D8 (CcCalculatePagesToWrite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcNotifyExternalCachesInternal(unsigned int a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 *v4; // rdi
  unsigned __int64 v7; // rbp
  unsigned int v8; // eax
  unsigned __int64 v9; // rsi
  __int64 *i; // rbx
  __int64 result; // rax
  __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v3 = (_QWORD *)(a2 + 992);
  v4 = (__int64 *)(a3 + 1248);
  if ( CcEnablePerVolumeLazyWriter != 1 )
    v4 = &CcExternalCacheList;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a2 + 704);
  v7 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a2 + 704));
  v8 = CcCalculatePagesToWrite(a2, a1, (__int64)v3, (unsigned __int64 *)(a2 + 1016), 0);
  if ( v8 == 0xFFFFFFFFLL )
  {
    LODWORD(v9) = 100;
  }
  else if ( *v3 )
  {
    v9 = 100 * (unsigned __int64)v8 / *v3;
  }
  else
  {
    LODWORD(v9) = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (_DWORD)v9 )
  {
    for ( i = (__int64 *)*v4; i != v4; i = (__int64 *)*i )
    {
      v12 = *(i - 3);
      if ( v12 )
        ((void (__fastcall *)(__int64 *, unsigned __int64, _QWORD))*(i - 4))(
          i - 4,
          v12 * (unsigned __int64)(unsigned int)v9 / 0x64,
          a1);
    }
  }
  KxReleaseSpinLock(&CcExternalCacheListLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
