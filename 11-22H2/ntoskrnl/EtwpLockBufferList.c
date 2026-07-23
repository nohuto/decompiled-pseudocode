/*
 * XREFs of EtwpLockBufferList @ 0x1402280E8
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140227E10 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140227FC8 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140228540 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpReserveTraceBuffer @ 0x1402340E0 (EtwpReserveTraceBuffer.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14036D178 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x140370D88 (EtwpAllocateFreeBuffers.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140602778 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x140602A24 (EtwpReenableCompression.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
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
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
