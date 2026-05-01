/*
 * XREFs of ?HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180037920
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CemRcObjectCleanup @ 0x180037980 (CemRcObjectCleanup.c)
 */

void __fastcall HampPkgDestroy(struct _CEM_RC_OBJECT *a1)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rcx

  v2 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  CemRcObjectCleanup(a1);
  CemRcObjectDereference((_QWORD *)(v2 - 40));
  v3 = (_QWORD *)*((_QWORD *)a1 + 11);
  if ( v3 )
    CemRcObjectDereference(v3);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
