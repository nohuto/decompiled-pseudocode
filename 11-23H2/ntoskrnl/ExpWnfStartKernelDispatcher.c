/*
 * XREFs of ExpWnfStartKernelDispatcher @ 0x1407DC50C
 * Callers:
 *     ExpWnfNotifySubscription @ 0x140711098 (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140714428 (ExpWnfNotifyNameSubscribers.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1407DC5B4 (ExpWnfDispatchKernelSubscription.c)
 */

void __fastcall ExpWnfStartKernelDispatcher(int a1)
{
  if ( a1 )
  {
    ExpWnfDispatchKernelSubscription();
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(ExpWnfDispatcher + 40), 2u);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(ExpWnfDispatcher + 40), 3, 2) == 2 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(ExpWnfDispatcher + 8), DelayedWorkQueue);
  }
}
