/*
 * XREFs of PopDiagTraceDevicesWakeEnd @ 0x14098E75C
 * Callers:
 *     PoBroadcastSystemState @ 0x140AA6A68 (PoBroadcastSystemState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140367640 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceDevicesWakeEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE_END);
}
