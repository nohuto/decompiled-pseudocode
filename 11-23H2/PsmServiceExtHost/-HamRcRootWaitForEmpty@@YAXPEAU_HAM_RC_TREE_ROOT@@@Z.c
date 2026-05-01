/*
 * XREFs of ?HamRcRootWaitForEmpty@@YAXPEAU_HAM_RC_TREE_ROOT@@@Z @ 0x18007F96C
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180074B80 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     CemRcTableBeginRundown @ 0x180097438 (CemRcTableBeginRundown.c)
 */

void __fastcall HamRcRootWaitForEmpty(struct _HAM_RC_TREE_ROOT *a1)
{
  char *v1; // rbx

  v1 = (char *)a1 + 40;
  CemRcTableBeginRundown((char *)a1 + 40);
  CemRcTableWaitForEmpty(v1);
}
