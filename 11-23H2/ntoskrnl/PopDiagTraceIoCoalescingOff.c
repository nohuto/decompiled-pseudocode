/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x14098FE08
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14058DDDC (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopPrintEx @ 0x14032A93C (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1403677E0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3u, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
