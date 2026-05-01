/*
 * XREFs of ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x18007FD78
 * Callers:
 *     ?HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x18007FDB0 (-HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 *     ?HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z @ 0x18008007C (-HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x1800211E0 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampHostIdStoreAcquireLockShared(struct _HAM_HOSTID_STORE *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired(HampLockTrackerId, a2, 0xBu, 0);
  RtlAcquireSRWLockShared(a1);
}
