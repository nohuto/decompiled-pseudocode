/*
 * XREFs of ?HampHostIdStoreInitialize@@YAXPEAU_TP_CALLBACK_ENVIRON_V3@@PEAU_HAM_HOSTID_STORE@@@Z @ 0x18004EBEC
 * Callers:
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180046EDC (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     CempLockInitialize @ 0x1800114A4 (CempLockInitialize.c)
 *     ?HamRcRootInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@@Z @ 0x1800114D0 (-HamRcRootInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@@Z.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void __fastcall HampHostIdStoreInitialize(struct _TP_CALLBACK_ENVIRON_V3 *a1, struct _HAM_HOSTID_STORE *a2)
{
  memset_0(a2, 0, 0x70uLL);
  CempLockInitialize((__int64)a2);
  HamRcRootInitialize(
    (void (*)(struct _CEM_RC_OBJECT *))HampHostIdStoreSessionDestroy,
    (struct _HAM_HOSTID_STORE *)((char *)a2 + 16));
  *((_QWORD *)a2 + 13) = a1;
}
