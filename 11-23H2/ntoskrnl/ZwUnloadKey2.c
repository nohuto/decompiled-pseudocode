/*
 * XREFs of ZwUnloadKey2 @ 0x14041E860
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14077A7E8 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x14077BECC (VrpUnloadDifferencingHive.c)
 *     PiDrvDbUnloadHive @ 0x14086721C (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x140867268 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A5D59C (BiUnloadHiveByName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140B6B2A8 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
