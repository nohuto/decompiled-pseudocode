/*
 * XREFs of sub_140376830 @ 0x140376830
 * Callers:
 *     sub_140A483FC @ 0x140A483FC (sub_140A483FC.c)
 *     sub_140A484F0 @ 0x140A484F0 (sub_140A484F0.c)
 *     sub_140A6AD80 @ 0x140A6AD80 (sub_140A6AD80.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140376830(int a1, int a2)
{
  int v4; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v6; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r8
  bool v9; // zf
  struct _KPRCB *v10; // r10
  __int64 v11; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C52B80, &LockHandle);
  dword_140C52B68 = a1;
  dword_140C52B6C = a2;
  if ( a1 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LOBYTE(v4) = dword_140D06B08;
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        LOBYTE(v4) = KeGetCurrentIrql();
        if ( (unsigned __int8)v4 <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)v4 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = *((_QWORD *)CurrentPrcb + 4375);
          v4 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v4 & *(_DWORD *)(v8 + 20)) == 0;
          *(_DWORD *)(v8 + 20) &= v4;
          if ( v9 )
            LOBYTE(v4) = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !ListEntry )
      LOBYTE(v4) = KeInsertQueueDpc(&stru_140C52E20, 0LL, 0LL);
  }
  else
  {
    if ( stru_140C52B48.Parameter )
    {
      if ( stru_140C52B48.Parameter == (PVOID)2 )
        stru_140C52B48.Parameter = (PVOID)3;
    }
    else
    {
      stru_140C52B48.List.Flink = 0LL;
      stru_140C52B48.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140375ED0;
      stru_140C52B48.Parameter = (PVOID)1;
      ExQueueWorkItem(&stru_140C52B48, DelayedWorkQueue);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LOBYTE(v4) = dword_140D06B08;
    v6 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        LOBYTE(v4) = KeGetCurrentIrql();
        if ( (unsigned __int8)v4 <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)v4 >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = *((_QWORD *)v10 + 4375);
          v4 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v4 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v4;
          if ( v9 )
            LOBYTE(v4) = sub_140418E4C(v10);
        }
      }
    }
    __writecr8(v6);
  }
  return v4;
}
