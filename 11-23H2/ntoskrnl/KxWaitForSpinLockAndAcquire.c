/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x140250F20
 * Callers:
 *     IopQueueIrpToFileObject @ 0x14022E420 (IopQueueIrpToFileObject.c)
 *     IopQueueThreadIrp @ 0x14022ED60 (IopQueueThreadIrp.c)
 *     KiExecuteAllDpcs @ 0x1402444C0 (KiExecuteAllDpcs.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x1402515B0 (KxAcquireSpinLock.c)
 *     KiInsertQueueDpc @ 0x140254790 (KiInsertQueueDpc.c)
 *     IopCompleteRequest @ 0x1402AB480 (IopCompleteRequest.c)
 *     IopDequeueIrpFromThread @ 0x1402AF730 (IopDequeueIrpFromThread.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402AFB50 (IopCancelIrpsInFileObjectList.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
 *     KiCallInterruptServiceRoutine @ 0x140324950 (KiCallInterruptServiceRoutine.c)
 *     PsGetThreadProperty @ 0x1403324F0 (PsGetThreadProperty.c)
 *     KiAcquireSpinLockInstrumented @ 0x140460430 (KiAcquireSpinLockInstrumented.c)
 * Callees:
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD2C0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD2F0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForSpinLockAndAcquire(volatile signed __int32 *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  do
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
    {
      HvlNotifyLongSpinWait(v2);
    }
    else
    {
      _mm_pause();
    }
  }
  while ( *(_QWORD *)a1 || _interlockedbittestandset64(a1, 0LL) );
  return v2;
}
