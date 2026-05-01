/*
 * XREFs of CemRcTableGetObjectCount @ 0x180015404
 * Callers:
 *     ?RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180013610 (-RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CemRcTableGetObjectCount(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx

  v1 = a1 + 16;
  RtlAcquireSRWLockShared(a1 + 16);
  v3 = *(_QWORD *)(a1 + 40) >> 1;
  RtlReleaseSRWLockShared(v1);
  return v3;
}
