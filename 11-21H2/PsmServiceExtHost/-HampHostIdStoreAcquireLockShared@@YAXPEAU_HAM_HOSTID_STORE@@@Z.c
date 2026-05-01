/*
 * XREFs of ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180076EA4
 * Callers:
 *     ?HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180076F18 (-HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 *     ?HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z @ 0x18007730C (-HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampHostIdStoreAcquireLockShared(struct _HAM_HOSTID_STORE *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired(HampLockTrackerId, a2, 0xBu, 0);
  RtlAcquireSRWLockShared(a1);
}
