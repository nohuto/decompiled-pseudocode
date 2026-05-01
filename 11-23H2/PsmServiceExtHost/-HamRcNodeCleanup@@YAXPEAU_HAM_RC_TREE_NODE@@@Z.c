/*
 * XREFs of ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x18003802C
 * Callers:
 *     ?HampHostIdStoreApplicationDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180002CD0 (-HampHostIdStoreApplicationDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampUserDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180040940 (-HampUserDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CemRcObjectCleanup @ 0x180037980 (CemRcObjectCleanup.c)
 */

void __fastcall HamRcNodeCleanup(struct _HAM_RC_TREE_NODE *a1)
{
  unsigned __int64 v1; // rbx

  v1 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  CemRcObjectCleanup(a1);
  CemRcObjectDereference((_QWORD *)(v1 - 40));
}
