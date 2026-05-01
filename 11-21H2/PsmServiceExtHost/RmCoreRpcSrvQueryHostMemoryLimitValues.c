/*
 * XREFs of RmCoreRpcSrvQueryHostMemoryLimitValues @ 0x180087D10
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?RmpCoreApiQueryHostMemoryLimitValues@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_KPEAW4_RM_ACTIVITY_HOST_CALLBACK_TYPE@@@Z @ 0x180092064 (-RmpCoreApiQueryHostMemoryLimitValues@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_KPEAW4_RM_ACTIVITY_HOST.c)
 */

__int64 __fastcall RmCoreRpcSrvQueryHostMemoryLimitValues(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        enum _RM_ACTIVITY_HOST_CALLBACK_TYPE *a4)
{
  struct _RM_SERVICE_GLOBALS *v7; // rcx
  _BYTE v9[144]; // [rsp+20h] [rbp-B8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v9);
  LODWORD(a2) = RmpCoreApiQueryHostMemoryLimitValues(v7, a2, a3, a4);
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)a2;
}
