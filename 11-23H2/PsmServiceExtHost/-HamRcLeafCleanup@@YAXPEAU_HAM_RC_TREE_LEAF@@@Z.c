/*
 * XREFs of ?HamRcLeafCleanup@@YAXPEAU_HAM_RC_TREE_LEAF@@@Z @ 0x18007F944
 * Callers:
 *     ?HampHostIdStoreLeafDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18007FFB0 (-HampHostIdStoreLeafDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CemRcObjectCleanup @ 0x180037980 (CemRcObjectCleanup.c)
 */

void __fastcall HamRcLeafCleanup(struct _HAM_RC_TREE_LEAF *a1)
{
  unsigned __int64 v1; // rbx

  v1 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  CemRcObjectCleanup(a1);
  CemRcObjectDereference((_QWORD *)(v1 - 40));
}
