/*
 * XREFs of ?HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z @ 0x18007730C
 * Callers:
 *     ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x180071598 (-HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z.c)
 * Callees:
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180027DFC (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180076EA4 (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800772D8 (-HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 */

__int64 __fastcall HampHostIdStoreRetrieveDynamicId(
        struct _HAM_HOSTID_STORE *a1,
        union _RM_SID *a2,
        unsigned int a3,
        __int64 a4,
        struct _GUID *a5)
{
  __int64 v7; // rdx
  _QWORD v9[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
  v10 = 0LL;
  v9[1] = a5;
  v9[0] = a4;
  HampHostIdStoreAcquireLockShared(a1, (__int64)a2);
  HampHostIdStoreEnumerateMatchingEntries(
    a1,
    &v11,
    a2,
    0LL,
    (unsigned int (*)(struct _HAM_HOSTID_ENTRY *, void *))HampHostIdStoreRetrieveDynamicIdCallback,
    v9);
  HampHostIdStoreReleaseLockShared(a1, v7);
  return (_DWORD)v10 == 0 ? 0xC0000225 : 0;
}
