/*
 * XREFs of CemRcTableGetNext @ 0x180015364
 * Callers:
 *     ?RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180013610 (-RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS.c)
 *     ?RmpProcContextRundown@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013ACC (-RmpProcContextRundown@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x1800150BC (CemRcObjectDereference.c)
 *     CempRcTableGetFirstActiveObject @ 0x1800154D4 (CempRcTableGetFirstActiveObject.c)
 */

__int64 __fastcall CemRcTableGetNext(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  __int64 i; // rcx
  __int64 FirstActiveObject; // rbx

  v2 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
  RtlAcquireSRWLockShared(v2 + 16);
  v3 = a1[1];
  v4 = a1;
  if ( v3 )
  {
    v5 = *(_QWORD **)v3;
    if ( *(_QWORD *)v3 )
    {
      do
      {
        v3 = (unsigned __int64)v5;
        v5 = (_QWORD *)*v5;
      }
      while ( v5 );
    }
  }
  else
  {
    for ( i = a1[2]; ; i = *(_QWORD *)(v3 + 16) )
    {
      v3 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v3 || *(_QWORD **)v3 == v4 )
        break;
      v4 = (_QWORD *)v3;
    }
  }
  FirstActiveObject = CempRcTableGetFirstActiveObject(v3);
  RtlReleaseSRWLockShared(v2 + 16);
  CemRcObjectDereference(a1);
  return FirstActiveObject;
}
