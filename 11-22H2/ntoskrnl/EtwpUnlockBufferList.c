/*
 * XREFs of EtwpUnlockBufferList @ 0x14022809C
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
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall EtwpUnlockBufferList(__int64 a1, unsigned __int8 *a2)
{
  bool v2; // zf
  ULONG_PTR v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v2 = *(_DWORD *)(a1 + 300) == 1;
  v3 = a1 + 696;
  if ( v2 )
    return ExReleasePushLockEx(v3, 0LL);
  v4 = *a2;
  result = KxReleaseSpinLock(v3);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v2 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v2 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  return result;
}
