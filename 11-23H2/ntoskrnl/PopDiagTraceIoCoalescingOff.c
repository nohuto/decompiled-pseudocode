/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x14098FC08
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14058D8EC (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopPrintEx @ 0x14032A6AC (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x140367640 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3LL, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
