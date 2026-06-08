/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C0002BA8
 * Callers:
 *     ProcLibTraceQueryCapabilities @ 0x1C001F0FC (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C001F268 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001F48C (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C0021ED0 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C0022318 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTraceProcessorIds @ 0x1C00225B8 (ProcLibTraceProcessorIds.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  return KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), a2);
}
