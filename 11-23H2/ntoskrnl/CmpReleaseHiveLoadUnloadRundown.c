/*
 * XREFs of CmpReleaseHiveLoadUnloadRundown @ 0x140AF5008
 * Callers:
 *     CmpInitHiveFromFile @ 0x14068B418 (CmpInitHiveFromFile.c)
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140693350 (CmpLateUnloadHiveWorker.c)
 *     CmLoadKey @ 0x1406957C0 (CmLoadKey.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 *     CmLoadAppKey @ 0x140769640 (CmLoadAppKey.c)
 *     CmpLoadHiveVolatile @ 0x140A0C330 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A0C890 (CmpRefreshHive.c)
 *     NtReplaceKey @ 0x140A0E4B0 (NtReplaceKey.c)
 *     CmpSyncNextBackupHive @ 0x140A1AE08 (CmpSyncNextBackupHive.c)
 *     CmpLazyCommitWorker @ 0x140A1C0C0 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 */

void CmpReleaseHiveLoadUnloadRundown()
{
  ExReleaseRundownProtection_0(&CmpHiveLoadUnloadRundown);
  KeLeaveCriticalRegion();
}
