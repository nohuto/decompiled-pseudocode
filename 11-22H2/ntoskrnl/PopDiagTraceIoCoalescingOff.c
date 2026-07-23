/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x14098FCB8
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14058D97C (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopPrintEx @ 0x14032A4CC (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x140366FF0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3u, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
