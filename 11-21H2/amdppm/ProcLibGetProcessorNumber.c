/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C0002C38
 * Callers:
 *     ProcLibTraceQueryCapabilities @ 0x1C001EB6C (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C001F2F4 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001F518 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C002129C (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C00216D0 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTraceProcessorIds @ 0x1C0021970 (ProcLibTraceProcessorIds.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  return KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), a2);
}
