/*
 * XREFs of MiMakePartitionActive @ 0x140292890
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140706060 (MmCreateProcessAddressSpace.c)
 *     MiEnablePartitionMappedWrites @ 0x140746D88 (MiEnablePartitionMappedWrites.c)
 *     MiInsertPageFileInList @ 0x140834390 (MiInsertPageFileInList.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiSetSlabAllocatorPolicy @ 0x1403B6408 (MiSetSlabAllocatorPolicy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     SmCreatePartition @ 0x140706638 (SmCreatePartition.c)
 */

__int64 __fastcall MiMakePartitionActive(unsigned __int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  unsigned __int64 v15; // rdi
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r11
  _DWORD *v18; // r9
  int v19; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 200);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (int)SmCreatePartition(v2) >= 0 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C67380, &LockHandle);
    if ( (*(_DWORD *)(a1 + 4) & 0x10) == 0 )
    {
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
          v8 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      return 1LL;
    }
    if ( (unsigned int)MiChargeCommit(a1, 0xA0uLL, 0LL) )
    {
      *(_DWORD *)(a1 + 4) &= ~0x10u;
      *(_QWORD *)(a1 + 16432) = 160LL;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v15 = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v16 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      __writecr8(v15);
      MiReturnCommit(a1, 160LL);
      if ( (_UNKNOWN *)a1 != &MiSystemPartition )
        MiSetSlabAllocatorPolicy(a1);
      return 1LL;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v10 = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v11 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v11 <= 0xFu && LockHandle.OldIrql <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    __writecr8(v10);
  }
  return 0LL;
}
