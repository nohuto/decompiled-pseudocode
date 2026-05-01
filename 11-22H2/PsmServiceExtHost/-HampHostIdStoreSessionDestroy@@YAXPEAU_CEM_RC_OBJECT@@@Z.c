/*
 * XREFs of ?HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18006CCB0
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectCleanup @ 0x180037A00 (CemRcObjectCleanup.c)
 */

void __fastcall HampHostIdStoreSessionDestroy(struct _CEM_RC_OBJECT *a1)
{
  CemRcObjectCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
