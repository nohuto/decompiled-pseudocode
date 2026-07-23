/*
 * XREFs of CmpForceFlushForCoalescing @ 0x1408ABA80
 * Callers:
 *     CmpCoalescingCallback @ 0x140616500 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x140747300 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void CmpForceFlushForCoalescing()
{
  int v0; // eax

  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    if ( CmpWorkerDataInitialized )
    {
      v0 = CmpForceFlushPending;
      if ( !CmpForceFlushPending && !_InterlockedCompareExchange(&CmpForceFlushPending, 1, 0) )
        ExQueueWorkItem(&CmpForceFlushWorkItem, (WORK_QUEUE_TYPE)(v0 + 1));
    }
  }
}
