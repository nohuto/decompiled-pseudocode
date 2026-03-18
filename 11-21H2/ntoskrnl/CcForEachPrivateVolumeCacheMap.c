/*
 * XREFs of CcForEachPrivateVolumeCacheMap @ 0x14053C3E4
 * Callers:
 *     CcForEachPartition @ 0x140363C8C (CcForEachPartition.c)
 *     CcNotifyWriteBehindInternal @ 0x140389160 (CcNotifyWriteBehindInternal.c)
 *     CcExitPartition @ 0x14053E098 (CcExitPartition.c)
 *     CcPartitionTelemetryCallback @ 0x1406E14E0 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char __fastcall CcForEachPrivateVolumeCacheMap(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _QWORD *, __int64),
        __int64 a3)
{
  _QWORD **v3; // r13
  char v4; // r12
  _QWORD *v5; // rdi
  struct _KEVENT *v6; // rbx
  signed __int64 Flink; // rax
  unsigned __int64 i; // rcx
  signed __int64 v9; // rtt
  char v10; // si
  unsigned __int64 OldIrql; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  __int128 v25; // [rsp+38h] [rbp-18h]
  __int64 v26; // [rsp+48h] [rbp-8h]

  v3 = (_QWORD **)(a1 + 32);
  v26 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  v25 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
  v5 = *v3;
  while ( v5 != v3 )
  {
    v6 = (struct _KEVENT *)(v5 - 72);
    if ( v5 == (_QWORD *)576 )
    {
LABEL_10:
      v10 = 1;
    }
    else
    {
      _m_prefetchw(&v6->Header.WaitListHead);
      Flink = (signed __int64)v6->Header.WaitListHead.Flink;
      for ( i = Flink + 1; i > 1; i = Flink + 1 )
      {
        v9 = Flink;
        Flink = _InterlockedCompareExchange64((volatile signed __int64 *)&v6->Header.WaitListHead, i, Flink);
        if ( v9 == Flink )
          goto LABEL_10;
      }
      if ( i != 1 )
        __fastfail(0xEu);
      v10 = 0;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v10 )
    {
      v4 = a2(a1, v5 - 72, a3);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
      if ( v5 != (_QWORD *)576 )
      {
        v17 = _InterlockedDecrement64((volatile signed __int64 *)&v6->Header.WaitListHead);
        if ( v17 <= 0 )
        {
          if ( v17 )
            __fastfail(0xEu);
          KeSetEvent(v6 + 50, 0, 0);
        }
      }
      v5 = (_QWORD *)*v5;
      if ( !v4 )
        break;
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
      v5 = (_QWORD *)*v5;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v18 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && LockHandle.OldIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v16 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v20);
      }
    }
  }
  __writecr8(v18);
  return v4;
}
