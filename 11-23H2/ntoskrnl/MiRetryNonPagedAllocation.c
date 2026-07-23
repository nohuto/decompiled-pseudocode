/*
 * XREFs of MiRetryNonPagedAllocation @ 0x1402E3798
 * Callers:
 *     MiGetPoolPages @ 0x1402E3594 (MiGetPoolPages.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022ECE0 (KeAreInterruptsEnabled.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     MiSufficientAvailablePages @ 0x1402E383C (MiSufficientAvailablePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiRetryNonPagedAllocation()
{
  __int64 v0; // r8
  __int64 v1; // r9
  unsigned int v3; // esi
  LARGE_INTEGER *Timeout; // rbp
  NTSTATUS i; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v18; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( KeGetCurrentIrql() > 1u
    || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
    || !KeAreInterruptsEnabled()
    || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)MiSufficientAvailablePages(&MiSystemPartition, 160LL, v0, v1) )
    return 1LL;
  v3 = 0;
  Timeout = (LARGE_INTEGER *)&Mi30Milliseconds;
  for ( i = 1; ; i = KeWaitForSingleObject(&Object, WrFreePage, 0, 0, Timeout) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C6F240, &LockHandle);
    if ( (unsigned int)MiSufficientAvailablePages(&MiSystemPartition, 160LL, v6, v7) )
      break;
    if ( i == 1 )
    {
      if ( byte_140C6549C )
      {
        if ( dword_140C65498 == dword_140C6F280 )
          goto LABEL_29;
        byte_140C6549C = 0;
      }
    }
    else
    {
      if ( i == 258 )
      {
        if ( !byte_140C6549C )
        {
          dword_140C65498 = dword_140C6F280;
          byte_140C6549C = 1;
        }
        goto LABEL_29;
      }
      Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
    }
    KeResetEvent(&Object);
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
  if ( byte_140C6549C )
    byte_140C6549C = 0;
  v3 = 1;
LABEL_29:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v14 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v15 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v15 <= 0xFu && LockHandle.OldIrql <= 0xFu && v15 >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v13 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
  }
  __writecr8(v14);
  return v3;
}
