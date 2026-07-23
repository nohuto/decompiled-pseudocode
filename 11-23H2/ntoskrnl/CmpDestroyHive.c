/*
 * XREFs of CmpDestroyHive @ 0x140A1CF50
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402F682C (CmpLoadKeyCommon.c)
 *     CmLoadKey @ 0x1406957C0 (CmLoadKey.c)
 *     CmpCreateHive @ 0x1407025DC (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140703230 (CmpReorganizeHive.c)
 *     CmRestoreKey @ 0x140A0AEF4 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140A0BC40 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140A0C034 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140A0C5E0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A0CB40 (CmpRefreshHive.c)
 *     CmpFreeAllMemory @ 0x140A115DC (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x140A159A4 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140A1AB98 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140A1CD70 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x140207A48 (CmpUnJoinClassOfTrust.c)
 *     CmpVolumeContextDecrementRefCount @ 0x140688C2C (CmpVolumeContextDecrementRefCount.c)
 *     CmpDestroySecurityCache @ 0x140689124 (CmpDestroySecurityCache.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1406891D8 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpCmdHiveClose @ 0x14068B0E4 (CmpCmdHiveClose.c)
 *     HvHiveCleanup @ 0x1407098E0 (HvHiveCleanup.c)
 *     CmpDeleteHive @ 0x14074E8C4 (CmpDeleteHive.c)
 */

void __fastcall CmpDestroyHive(volatile signed __int32 *P)
{
  struct _PRIVILEGE_SET *v2; // rcx

  CmpDestroySecurityCache((__int64)P);
  CmpUnJoinClassOfTrust((__int64)P);
  CmpVERemoveHiveFromSIDMappingTable((__int64)P);
  HvHiveCleanup((__int64)P);
  CmpCmdHiveClose((__int64)P);
  v2 = (struct _PRIVILEGE_SET *)*((_QWORD *)P + 599);
  if ( v2 )
    CmpVolumeContextDecrementRefCount(v2);
  if ( _InterlockedExchangeAdd(P + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
}
