/*
 * XREFs of ?RmpProcContextGetFirst@@YAPEAU_RM_PROC_ENTRY@@PEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013434
 * Callers:
 *     ?RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180013610 (-RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS.c)
 *     ?RmpProcContextRundown@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013ACC (-RmpProcContextRundown@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z.c)
 * Callees:
 *     CempRcTableGetFirstActiveObject @ 0x1800154D4 (CempRcTableGetFirstActiveObject.c)
 */

struct _RM_PROC_ENTRY *__fastcall RmpProcContextGetFirst(unsigned __int64 a1)
{
  char *v1; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 FirstActiveObject; // rbx

  v1 = (char *)(a1 + 16);
  RtlAcquireSRWLockShared(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      v4 = 0LL;
    else
      v4 = v3 ^ (a1 | 1);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
  }
  FirstActiveObject = CempRcTableGetFirstActiveObject(v4);
  RtlReleaseSRWLockShared(v1);
  return (struct _RM_PROC_ENTRY *)FirstActiveObject;
}
