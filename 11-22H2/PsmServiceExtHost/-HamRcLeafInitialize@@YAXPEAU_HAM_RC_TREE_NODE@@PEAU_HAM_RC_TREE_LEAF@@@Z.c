/*
 * XREFs of ?HamRcLeafInitialize@@YAXPEAU_HAM_RC_TREE_NODE@@PEAU_HAM_RC_TREE_LEAF@@@Z @ 0x180015A70
 * Callers:
 *     ?HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_ENTRY@@@Z @ 0x180015978 (-HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STOR.c)
 * Callees:
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

void __fastcall HamRcLeafInitialize(struct _HAM_RC_TREE_NODE *a1, struct _HAM_RC_TREE_LEAF *a2)
{
  memset_0(a2, 0, 0x58uLL);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = -1LL;
  *((_QWORD *)a2 + 3) = 1LL;
  *((_QWORD *)a2 + 4) = (char *)a1 + 40;
}
