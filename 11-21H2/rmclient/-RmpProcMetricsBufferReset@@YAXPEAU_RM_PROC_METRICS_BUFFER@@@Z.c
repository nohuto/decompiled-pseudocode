/*
 * XREFs of ?RmpProcMetricsBufferReset@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180014DE4
 * Callers:
 *     ?RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180012E00 (-RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpProcMetricsBufferCleanup@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180014DC0 (-RmpProcMetricsBufferCleanup@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x1800150BC (CemRcObjectDereference.c)
 */

void __fastcall RmpProcMetricsBufferReset(struct _RM_PROC_METRICS_BUFFER *a1)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)a1 + 3); ++i )
    CemRcObjectDereference(*(_QWORD *)(((unsigned __int64)i << 6) + *(_QWORD *)a1 + 32));
  *((_DWORD *)a1 + 3) = 0;
}
