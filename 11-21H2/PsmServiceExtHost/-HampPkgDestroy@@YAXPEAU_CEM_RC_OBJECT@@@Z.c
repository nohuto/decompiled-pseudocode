/*
 * XREFs of ?HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180034A10
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectCleanup @ 0x180034B40 (CemRcObjectCleanup.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 */

void __fastcall HampPkgDestroy(struct _CEM_RC_OBJECT *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx

  v2 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  CemRcObjectCleanup(a1);
  CemRcObjectDereference(v2 - 40);
  v3 = *((_QWORD *)a1 + 11);
  if ( v3 )
    CemRcObjectDereference(v3);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
