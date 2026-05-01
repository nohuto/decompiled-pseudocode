/*
 * XREFs of ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C548
 * Callers:
 *     ?HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU1@@Z @ 0x180074A24 (-HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180074B80 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007DB50 (-HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007DEB0 (-HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007E430 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007E990 (-HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x1800211E0 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampManagerAcquireLockShared(struct _HOST_ACTIVITY_MANAGER *a1)
{
  CempLockTrackerMarkAcquired(HampLockTrackerId);
  RtlAcquireSRWLockShared(a1);
}
