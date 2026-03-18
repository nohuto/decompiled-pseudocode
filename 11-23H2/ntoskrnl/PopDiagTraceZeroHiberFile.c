/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x140AA80E4
 * Callers:
 *     PopZeroHiberFile @ 0x140989490 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140367640 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
