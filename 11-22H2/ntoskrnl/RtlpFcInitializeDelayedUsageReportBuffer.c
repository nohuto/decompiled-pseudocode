/*
 * XREFs of RtlpFcInitializeDelayedUsageReportBuffer @ 0x1407EB520
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140B3B6E8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

void *__fastcall RtlpFcInitializeDelayedUsageReportBuffer(void *a1)
{
  return memset(a1, 0, 0x310uLL);
}
