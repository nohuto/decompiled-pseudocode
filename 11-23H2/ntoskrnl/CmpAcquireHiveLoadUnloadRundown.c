/*
 * XREFs of CmpAcquireHiveLoadUnloadRundown @ 0x140AF502C
 * Callers:
 *     CmpInitHiveFromFile @ 0x14068B418 (CmpInitHiveFromFile.c)
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140693350 (CmpLateUnloadHiveWorker.c)
 *     CmLoadKey @ 0x1406957C0 (CmLoadKey.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 *     CmLoadAppKey @ 0x140769830 (CmLoadAppKey.c)
 *     CmpLoadHiveVolatile @ 0x140A0C5E0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A0CB40 (CmpRefreshHive.c)
 *     NtReplaceKey @ 0x140A0E760 (NtReplaceKey.c)
 *     CmpSyncNextBackupHive @ 0x140A1B0B8 (CmpSyncNextBackupHive.c)
 *     CmpLazyCommitWorker @ 0x140A1C370 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 */

BOOLEAN CmpAcquireHiveLoadUnloadRundown()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = ExAcquireRundownProtection_0(&CmpHiveLoadUnloadRundown);
  if ( !v1 )
    KeLeaveCriticalRegion();
  return v1;
}
