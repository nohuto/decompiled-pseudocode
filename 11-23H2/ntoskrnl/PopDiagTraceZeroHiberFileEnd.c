/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x140AA8100
 * Callers:
 *     PopZeroHiberFile @ 0x140989490 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140367640 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
