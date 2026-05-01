/*
 * XREFs of CempHeapFree @ 0x180019A90
 * Callers:
 *     ?RmpProcContextEntryDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180013320 (-RmpProcContextEntryDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?RmpProcMetricsBufferCleanup@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180014DC0 (-RmpProcMetricsBufferCleanup@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z.c)
 *     RmDisconnectProcessManager @ 0x18001B670 (RmDisconnectProcessManager.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall CempHeapFree(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
