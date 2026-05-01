/*
 * XREFs of ?ArAcquireGlobalLockShared@@YAXXZ @ 0x1800036D8
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180002E48 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x18006CBC8 (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x1800211E0 (CempLockTrackerMarkAcquired.c)
 */

void ArAcquireGlobalLockShared(void)
{
  CempLockTrackerMarkAcquired(ArLockTrackerId);
  RtlAcquireSRWLockShared(&ArGlobalLock);
}
