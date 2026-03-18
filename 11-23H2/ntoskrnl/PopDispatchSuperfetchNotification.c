/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x140989790
 * Callers:
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140367640 (PopDiagTraceEventNoPayload.c)
 *     PfPowerActionNotify @ 0x140A9FE74 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x140AAA4E8 (PopCheckpointSystemSleep.c)
 */

__int64 PopDispatchSuperfetchNotification()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_START);
  PopCheckpointSystemSleep(6LL);
  PfPowerActionNotify(1LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_STOP);
  return PopCheckpointSystemSleep(7LL);
}
