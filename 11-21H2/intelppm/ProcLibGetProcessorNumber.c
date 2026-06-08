/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C0006CA4
 * Callers:
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C0034470 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C0034694 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C0034B70 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C0034FA4 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTraceProcessorIds @ 0x1C00354B4 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0035A9C (ProcLibTraceQueryCapabilities.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  return KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), a2);
}
