/*
 * XREFs of ?ArReleaseGlobalLockShared@@YAXXZ @ 0x180001DFC
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180004EF4 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x18006D550 (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 * Callees:
 *     <none>
 */

void ArReleaseGlobalLockShared(void)
{
  __int64 v0; // rdx

  RtlReleaseSRWLockShared(&ArGlobalLock);
  CempLockTrackerMarkReleased(ArLockTrackerId, v0, 0LL);
}
