/*
 * XREFs of CmpArmDelayedCloseTimer @ 0x1402B956C
 * Callers:
 *     CmpDeleteKeyObject @ 0x1406DB340 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmpAddToDelayedClose @ 0x14073E5C8 (CmpAddToDelayedClose.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void CmpArmDelayedCloseTimer()
{
  if ( !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
    ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
}
