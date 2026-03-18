/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x14065B354
 * Callers:
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402F3DC0 (MiReturnCrossPartitionCloneCharges.c)
 *     MiFreeContiguousLargePageRun @ 0x140649DB8 (MiFreeContiguousLargePageRun.c)
 *     MiCreateLargePfnList @ 0x1406679EC (MiCreateLargePfnList.c)
 *     MiFreeLargePages @ 0x140668250 (MiFreeLargePages.c)
 *     MiGetSubsectionCharges @ 0x14066B1A8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B3B4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiDeleteAweInfoPages @ 0x140A41A90 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A42320 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionCharge @ 0x14065B2D8 (MiReturnCrossPartitionCharge.c)
 */

void __fastcall MiReturnCrossPartitionCharges(__int64 a1, int a2, char a3, __int64 a4)
{
  volatile LONG *v4; // r14
  struct _KEVENT *v9; // rdi
  unsigned __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf

  v4 = (volatile LONG *)(a1 + 1408);
  v9 = 0LL;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1408));
  v11 = MiReturnCrossPartitionCharge(a1, a2, a4);
  if ( (a3 & 1) != 0 )
    v11 = MiReturnCrossPartitionCharge(a1, a2 + 1, v12);
  if ( v11 )
    v9 = *(struct _KEVENT **)(a1 + 2408);
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v10);
  if ( v9 )
    KeSetEvent(v9, 1, 0);
}
