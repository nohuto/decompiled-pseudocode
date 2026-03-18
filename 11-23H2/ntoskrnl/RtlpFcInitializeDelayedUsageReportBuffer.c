/*
 * XREFs of RtlpFcInitializeDelayedUsageReportBuffer @ 0x1407EAFA0
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140B37FF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

void *__fastcall RtlpFcInitializeDelayedUsageReportBuffer(void *a1)
{
  return memset(a1, 0, 0x310uLL);
}
