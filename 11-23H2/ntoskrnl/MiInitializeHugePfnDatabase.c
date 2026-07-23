/*
 * XREFs of MiInitializeHugePfnDatabase @ 0x1406212A0
 * Callers:
 *     MiInsertPartitionPages @ 0x14065A9D0 (MiInsertPartitionPages.c)
 *     MiHotAddHugeRange @ 0x140A2E0F8 (MiHotAddHugeRange.c)
 *     MiCreateHugeIoRanges @ 0x140B6173C (MiCreateHugeIoRanges.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeHugePfnDatabase()
{
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v4; // edx
  bool v5; // zf
  __int64 v6; // rcx
  unsigned __int64 *Pool; // rax
  unsigned __int64 *v8; // rbx
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r9
  _DWORD *v11; // r8
  int v12; // eax
  __int64 result; // rax
  unsigned __int64 *v14; // rdi
  PVOID v15; // rax
  unsigned __int64 v16; // rdi
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C67E00, &LockHandle);
  if ( qword_140C67DF0 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !(_DWORD)KiIrqlFlags )
      goto LABEL_35;
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 )
      goto LABEL_35;
    if ( CurrentIrql > 0xFu )
      goto LABEL_35;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_35;
    if ( CurrentIrql < 2u )
      goto LABEL_35;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v4 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v5 = (v4 & SchedulerAssist[5]) == 0;
    SchedulerAssist[5] &= v4;
    if ( !v5 )
      goto LABEL_35;
    v6 = (__int64)CurrentPrcb;
LABEL_34:
    KiRemoveSystemWorkPriorityKick(v6);
LABEL_35:
    result = 1LL;
LABEL_36:
    __writecr8(OldIrql);
    return result;
  }
  Pool = (unsigned __int64 *)MiAllocatePool(64, 0x100000uLL, 0x7048694Du);
  v8 = Pool;
  if ( !Pool )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v9 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v9 <= 0xFu && LockHandle.OldIrql <= 0xFu && v9 >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        v11 = v10->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v5 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v5 )
          KiRemoveSystemWorkPriorityKick((__int64)v10);
      }
    }
    result = 0LL;
    goto LABEL_36;
  }
  v14 = Pool + 0x10000;
  v15 = MiAllocatePool(64, 0x2000000uLL, 0x7048694Du);
  if ( v15 )
  {
    qword_140C67DF8 = (__int64)v8;
    stru_140C67DE0.SizeOfBitMap = 0x400000LL;
    stru_140C67DE0.Buffer = v14;
    qword_140C67DF0 = (__int64)v15;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !(_DWORD)KiIrqlFlags )
      goto LABEL_35;
    v21 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 )
      goto LABEL_35;
    if ( v21 > 0xFu )
      goto LABEL_35;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_35;
    if ( v21 < 2u )
      goto LABEL_35;
    v22 = KeGetCurrentPrcb();
    v23 = v22->SchedulerAssist;
    v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v5 = (v24 & v23[5]) == 0;
    v23[5] &= v24;
    if ( !v5 )
      goto LABEL_35;
    v6 = (__int64)v22;
    goto LABEL_34;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v16 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v5 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v5 )
        KiRemoveSystemWorkPriorityKick((__int64)v18);
    }
  }
  __writecr8(v16);
  ExFreePoolWithTag(v8, 0);
  return 0LL;
}
