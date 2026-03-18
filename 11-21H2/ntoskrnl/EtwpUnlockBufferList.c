/*
 * XREFs of EtwpUnlockBufferList @ 0x1402E1B84
 * Callers:
 *     EtwpEnqueueOverflowBuffer @ 0x140259D60 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x14026187C (EtwpAllocateFreeBuffers.c)
 *     EtwpReserveTraceBuffer @ 0x1402ABBF0 (EtwpReserveTraceBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x1402E1140 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x1402E18F8 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1402E1AB0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140635144 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x1406354FC (EtwpReenableCompression.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall EtwpUnlockBufferList(__int64 a1, unsigned __int8 *a2)
{
  bool v2; // zf
  KSPIN_LOCK *v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v2 = *(_DWORD *)(a1 + 300) == 1;
  v3 = (KSPIN_LOCK *)(a1 + 696);
  if ( v2 )
    return ExReleasePushLockEx((ULONG_PTR)v3, 0LL);
  v4 = *a2;
  KxReleaseSpinLock(v3);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
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
  }
  __writecr8(v4);
  return result;
}
