/*
 * XREFs of PopDiagTraceDevicesWakeEnd @ 0x14098E95C
 * Callers:
 *     PoBroadcastSystemState @ 0x140AA68D8 (PoBroadcastSystemState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1403677E0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceDevicesWakeEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE_END);
}
