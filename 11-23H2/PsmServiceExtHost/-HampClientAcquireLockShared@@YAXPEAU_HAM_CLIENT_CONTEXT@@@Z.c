/*
 * XREFs of ?HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DAB0
 * Callers:
 *     ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@K@Z @ 0x180019670 (-HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_.c)
 *     ?HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18001C0B0 (-HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18004BD0C (-HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E100 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E280 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@K@Z @ 0x180051260 (-HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x1800211E0 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampClientAcquireLockShared(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired(HampLockTrackerId, a2, 9u, 0);
  RtlAcquireSRWLockShared((char *)a1 + 40);
}
