/*
 * XREFs of EtwpLockBufferList @ 0x1402280C8
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140227DF0 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140227FA8 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140228520 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpReserveTraceBuffer @ 0x140234100 (EtwpReserveTraceBuffer.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14036D7C8 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x1403713D8 (EtwpAllocateFreeBuffers.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140602708 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x1406029B4 (EtwpReenableCompression.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KxAcquireSpinLock @ 0x1402515B0 (KxAcquireSpinLock.c)
 */

void __fastcall EtwpLockBufferList(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r9
  _DWORD *SchedulerAssist; // r11
  __int64 v5; // rdx

  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 696, 0LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v5) = 0x8000;
      else
        v5 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v5;
    }
    *a2 = CurrentIrql;
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 696));
  }
}
