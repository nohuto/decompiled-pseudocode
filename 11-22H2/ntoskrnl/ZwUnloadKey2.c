/*
 * XREFs of ZwUnloadKey2 @ 0x14041E1A0
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14077ACF8 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x14077C3DC (VrpUnloadDifferencingHive.c)
 *     PiDrvDbUnloadHive @ 0x1408676EC (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x140867738 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A5D60C (BiUnloadHiveByName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140B6C1F8 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
