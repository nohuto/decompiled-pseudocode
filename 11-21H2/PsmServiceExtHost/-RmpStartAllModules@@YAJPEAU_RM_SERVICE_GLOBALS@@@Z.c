/*
 * XREFs of ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004953C
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x1800494DC (RmpCreateResourceManagerServer.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800495F8 (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z @ 0x18004998C (-RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z.c)
 *     ?RmpTelemetryContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180049A0C (-RmpTelemetryContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180049A7C (-RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
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
