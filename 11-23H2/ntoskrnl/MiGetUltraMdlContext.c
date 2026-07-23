/*
 * XREFs of MiGetUltraMdlContext @ 0x140661F1C
 * Callers:
 *     MmMapMdl @ 0x14062F5F0 (MmMapMdl.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     MiDeleteUltraMapContext @ 0x1402E956C (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402EC6FC (MiCreateUltraThreadContextHelper.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY MiGetUltraMdlContext()
{
  unsigned int v0; // ebx
  unsigned int v1; // esi
  unsigned __int64 v2; // rdi
  PSLIST_ENTRY result; // rax
  PVOID Pool; // rdi
  int v5; // ebx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v12 = 0LL;
  v0 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v1 = 0;
  v2 = __rdtsc() >> 4;
  do
  {
    LODWORD(v2) = v2 & 7;
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(qword_140C68538 + ((8LL * v0 + (unsigned int)v2) << 6)));
    if ( result )
      return result;
    LOBYTE(v2) = v2 + 1;
    ++v1;
  }
  while ( v1 < 8 );
  if ( (unsigned int)dword_140C68530 >= 0x80 )
    return 0LL;
  Pool = MiAllocatePool(64, 0x28uLL, 0x6D55694Du);
  if ( !Pool )
    return 0LL;
  MiInitializePageColorBase(0LL, v0 + 1, (__int64)&v12);
  if ( !(unsigned int)MiCreateUltraThreadContextHelper((__int64)Pool + 8, 3u, (__int64)&v12, 0) )
  {
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  v5 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_140C684F0, &LockHandle);
  if ( (unsigned int)dword_140C68530 >= 0x80 )
    v5 = 1;
  else
    ++dword_140C68530;
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
      v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v5 )
  {
    MiDeleteUltraMapContext((__int64)Pool + 8, 3u);
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  return (PSLIST_ENTRY)Pool;
}
