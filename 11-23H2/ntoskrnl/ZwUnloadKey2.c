/*
 * XREFs of ZwUnloadKey2 @ 0x14041EBF0
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14077A9D8 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x14077C0BC (VrpUnloadDifferencingHive.c)
 *     PiDrvDbUnloadHive @ 0x14086745C (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x1408674A8 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A5D84C (BiUnloadHiveByName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140B6B2A8 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
