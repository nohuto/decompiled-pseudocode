/*
 * XREFs of ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180043F38
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x180043E3C (RmpCreateResourceManagerServer.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpTelemetryContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180043FF4 (-RmpTelemetryContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z @ 0x180044064 (-RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z.c)
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800440E4 (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044580 (-RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

__int64 __fastcall RmpStartAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v2; // rbx
  int v3; // ebx

  v2 = (char *)a1 + 680;
  RmpAcquireGlobalLock();
  v3 = RtlSubscribeWnfStateChangeNotification(
         v2 + 1384,
         WNF_AUDC_CPUSET_ID_SYSTEM,
         0LL,
         RmpCpuSetManagerAudioCpuWnfCallback,
         v2,
         0LL,
         0,
         0);
  RmpReleaseGlobalLock();
  if ( v3 >= 0 )
  {
    v3 = RmpSystemNotificationContextStart(a1);
    if ( v3 >= 0 )
    {
      v3 = RmpTelemetryContextStart(a1);
      if ( v3 >= 0 )
      {
        v3 = RmpRpExtStart((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 664));
        if ( v3 >= 0 )
        {
          v3 = HampManagerStart((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2248));
          if ( v3 >= 0 )
            return 0;
        }
      }
    }
  }
  return (unsigned int)v3;
}
