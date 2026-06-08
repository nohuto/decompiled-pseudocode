/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C0004ED4
 * Callers:
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C00355F0 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C0035814 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C0035CF0 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C0036138 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTraceProcessorIds @ 0x1C0036654 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0036C3C (ProcLibTraceQueryCapabilities.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  return KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), a2);
}
