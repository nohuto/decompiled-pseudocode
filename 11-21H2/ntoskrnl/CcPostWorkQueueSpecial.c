/*
 * XREFs of CcPostWorkQueueSpecial @ 0x140539A1C
 * Callers:
 *     CcQueueLazyWriteScanThreadForVolume @ 0x14053D400 (CcQueueLazyWriteScanThreadForVolume.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x1402EF060 (ExQueueWorkItemToPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403AE50C (CcPerfLogWorkItemEnqueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcPostWorkQueueSpecial(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rsi
  _QWORD *v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rsi
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r10
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 152);
  v5 = *(_QWORD *)(a1 + 144);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (xmmword_140D06910 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, a1, 0, ((*(_BYTE *)(a1 + 128) - 2) & 0xFD) == 0);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 768), &LockHandle);
  if ( !*(_BYTE *)(v4 + 196) )
  {
    v7 = (_QWORD *)(v5 + 1544);
    v8 = *(__int64 **)(v5 + 1544);
    if ( v8 != (__int64 *)(v5 + 1544) )
    {
      v3 = *(_QWORD **)(v5 + 1544);
      v9 = *v8;
      if ( (_QWORD *)v3[1] != v7 || *(_QWORD **)(v9 + 8) != v3 )
        __fastfail(3u);
      *v7 = v9;
      *(_QWORD *)(v9 + 8) = v7;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 1232)) <= 1 )
        __fastfail(0xEu);
      if ( v5 && _InterlockedIncrement64((volatile signed __int64 *)(v5 + 8)) <= 1 )
        __fastfail(0xEu);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v3 )
  {
    *v3 = 0LL;
    v3[6] = a1;
    return ExQueueWorkItemToPartition((ULONG_PTR)v3, 0, *(_DWORD *)(v4 + 24), *(_QWORD *)(v2 + 8));
  }
  return result;
}
