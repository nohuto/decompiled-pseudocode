/*
 * XREFs of PopPreSleepNotifyWorker @ 0x14099BFD0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14032ED60 (PopOkayToQueueNextWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 */

__int64 PopPreSleepNotifyWorker()
{
  ++PopPreSleepWnfPayload;
  ZwUpdateWnfStateData(&WNF_PO_PRESLEEP_NOTIFICATION, &PopPreSleepWnfPayload, 8u, 0LL, 0LL, 0, 0);
  return PopOkayToQueueNextWorkItem((__int64)&PopPreSleepNotifyWorkItem);
}
