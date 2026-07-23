/*
 * XREFs of KiAbForceProcessLockEntry @ 0x1403CC428
 * Callers:
 *     KeAbMarkCrossThreadReleasable @ 0x1403CC3D0 (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     KiAbEntryGetLockedHeadEntry @ 0x14024C730 (KiAbEntryGetLockedHeadEntry.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1402A8350 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KiAbIoBoostOwners @ 0x140318A44 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140318B48 (KiAbCpuBoostOwners.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140318EE4 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140318FC0 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1403190CC (KiAbOwnerComputeCpuPriorityKey.c)
 */

char __fastcall KiAbForceProcessLockEntry(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  _RTL_RB_TREE *LockedHeadEntry; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // si
  char v12; // al
  char v13; // dl
  char CpuPriorityKey; // di
  int v15; // r10d
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  v17 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v9) = 4;
    if ( CurrentIrql != 2 )
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  memset(&v16, 0, sizeof(v16));
  LockedHeadEntry = KiAbEntryGetLockedHeadEntry((__int64)a1, 1, &v16);
  v6 = (__int64)LockedHeadEntry;
  if ( LockedHeadEntry )
  {
    if ( !a1[17] )
    {
LABEL_4:
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v16);
      return KiProcessDeferredReadyList((__int64)CurrentPrcb, &v17, CurrentIrql);
    }
    if ( a1 != (unsigned __int8 *)LockedHeadEntry )
      KiAbEntryUpdateWaiterTreePosition((__int64)a1, LockedHeadEntry);
    v10 = *(_QWORD *)(v6 + 56);
    if ( v10 )
      v11 = *(_BYTE *)(v10 + 24);
    else
      v11 = 30;
    if ( !*(_BYTE *)(v6 + 17) )
    {
      v12 = KiAbOwnerComputeCpuPriorityKey(v6);
      v13 = v11;
      if ( v12 < v11 )
        v13 = v12;
      v11 = v13;
    }
    KiAbTryIncrementIoWaiterCounts(a1, v6, v5);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey(a1);
    if ( v11 < CpuPriorityKey )
    {
      if ( !v15 )
      {
LABEL_25:
        KiAbCpuBoostOwners(v6, CpuPriorityKey, (int)&v17, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        goto LABEL_4;
      }
    }
    else if ( !v15 )
    {
      goto LABEL_4;
    }
    KiAbIoBoostOwners(v6, v15, (int)&v17, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
    goto LABEL_25;
  }
  return KiProcessDeferredReadyList((__int64)CurrentPrcb, &v17, CurrentIrql);
}
