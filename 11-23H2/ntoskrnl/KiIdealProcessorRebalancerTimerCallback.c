/*
 * XREFs of KiIdealProcessorRebalancerTimerCallback @ 0x140358450
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402515B0 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void KiIdealProcessorRebalancerTimerCallback()
{
  char v0; // bl

  v0 = 0;
  KxAcquireSpinLock(&qword_140C41848);
  byte_140C41851 |= 1u;
  if ( !byte_140C41850 )
  {
    byte_140C41850 = 1;
    v0 = 1;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C41848);
  if ( v0 )
    ExQueueWorkItem(&stru_140C41828, (WORK_QUEUE_TYPE)48);
}
