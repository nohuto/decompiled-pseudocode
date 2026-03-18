/*
 * XREFs of PopDiagTraceDevicesWakeEnd @ 0x14098E80C
 * Callers:
 *     PoBroadcastSystemState @ 0x140AA6B28 (PoBroadcastSystemState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140366FF0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceDevicesWakeEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE_END);
}
