/*
 * XREFs of ?HamRcRootInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@@Z @ 0x1800114D0
 * Callers:
 *     ?HampHostIdStoreInitialize@@YAXPEAU_TP_CALLBACK_ENVIRON_V3@@PEAU_HAM_HOSTID_STORE@@@Z @ 0x18004EBEC (-HampHostIdStoreInitialize@@YAXPEAU_TP_CALLBACK_ENVIRON_V3@@PEAU_HAM_HOSTID_STORE@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void __fastcall HamRcRootInitialize(void (*a1)(struct _CEM_RC_OBJECT *), struct _HAM_RC_TREE_ROOT *a2)
{
  memset_0(a2, 0, 0x58uLL);
  CemRcTableInitialize(a1, (char *)a2 + 40);
}
