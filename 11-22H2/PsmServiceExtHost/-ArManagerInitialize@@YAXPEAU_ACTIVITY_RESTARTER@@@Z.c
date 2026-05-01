/*
 * XREFs of ?ArManagerInitialize@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180011458
 * Callers:
 *     ?ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18004B164 (-ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     CemRcTableInitialize @ 0x180011588 (CemRcTableInitialize.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

void __fastcall ArManagerInitialize(struct _ACTIVITY_RESTARTER *a1)
{
  memset_0(a1, 0, 0x58uLL);
  CemRcTableInitialize(HampHostIdStoreSessionDestroy, a1);
  *((_OWORD *)a1 + 3) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 48);
  *((_DWORD *)a1 + 14) = 0;
}
