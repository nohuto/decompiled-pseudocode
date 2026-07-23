/*
 * XREFs of IoAcquireCancelSpinLock @ 0x140339CB0
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402611B0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14046058E (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall IoAcquireCancelSpinLock(PKIRQL Irql)
{
  UCHAR CurrentIrql; // bl
  void *ArbitraryUserPointer; // rcx
  volatile __int64 *v4; // r8
  __int64 v5; // rcx
  signed __int64 *v6; // rdx
  _DWORD *SchedulerAssist; // r8
  __int64 v8; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v8) = 4;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v4 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 15);
  v5 = (__int64)ArbitraryUserPointer + 112;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5, v4);
  }
  else
  {
    v6 = (signed __int64 *)_InterlockedExchange64(v4, v5);
    if ( v6 )
      KxWaitForLockOwnerShip(v5, v6);
  }
  *Irql = CurrentIrql;
}
