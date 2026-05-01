/*
 * XREFs of ?RmpProcMetricsBufferCleanup@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180014DC0
 * Callers:
 *     ?RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180012E00 (-RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180013610 (-RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS.c)
 * Callees:
 *     ?RmpProcMetricsBufferReset@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180014DE4 (-RmpProcMetricsBufferReset@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z.c)
 */

void __fastcall RmpProcMetricsBufferCleanup(struct _RM_PROC_METRICS_BUFFER *a1)
{
  RmpProcMetricsBufferReset(a1);
  CempHeapFree(*(_QWORD *)a1);
}
