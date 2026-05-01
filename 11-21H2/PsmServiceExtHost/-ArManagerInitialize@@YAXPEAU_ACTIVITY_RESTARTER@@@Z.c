/*
 * XREFs of ?ArManagerInitialize@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180049238
 * Callers:
 *     ?ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@PEAU_WNF_STATE_NAME@@@Z @ 0x1800490CC (-ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@PEAU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     CemRcTableInitialize @ 0x180006914 (CemRcTableInitialize.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

void __fastcall ArManagerInitialize(struct _ACTIVITY_RESTARTER *a1)
{
  memset_0(a1, 0, 0x58uLL);
  CemRcTableInitialize((__int64)HampHostIdStoreSessionDestroy, a1);
  *((_OWORD *)a1 + 3) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 48);
  *((_DWORD *)a1 + 14) = 0;
}
