/*
 * XREFs of ?RmpProcEntryIsTrimTarget@@YAKPEAU_RM_PROC_ENTRY@@@Z @ 0x1800144D0
 * Callers:
 *     ?RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180013610 (-RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS.c)
 *     ?RmpProcContextRemediatePhysical@@YA?AW4_RM_PROC_REMEDIATION_RESULT@@PEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@PEAU_RM_PROC_METRICS_BUFFER@@PEA_K@Z @ 0x180013820 (-RmpProcContextRemediatePhysical@@YA-AW4_RM_PROC_REMEDIATION_RESULT@@PEAU_RM_PROCESS_MANAGEMENT_.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpProcEntryIsTrimTarget(struct _RM_PROC_ENTRY *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 26);
  return (v1 & 8) == 0 && (v1 & 0x40) != 0 && (v1 & 7u) >= 3;
}
