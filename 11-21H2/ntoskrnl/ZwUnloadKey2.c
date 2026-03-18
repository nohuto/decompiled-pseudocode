/*
 * XREFs of ZwUnloadKey2 @ 0x14041F1E0
 * Callers:
 *     PiDrvDbLoadHive @ 0x1407F3F88 (PiDrvDbLoadHive.c)
 *     PiDrvDbUnloadHive @ 0x1407F405C (PiDrvDbUnloadHive.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1407F5F80 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x1407F6200 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x1408073EC (BiUnloadHiveByName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140B26B08 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
