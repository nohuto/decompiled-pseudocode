/*
 * XREFs of PiDevCfgSetObjectProperty @ 0x14077139C
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140679BEC (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x140698298 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgMigrateDevice @ 0x1406E2EEC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgProcessDevice @ 0x140747740 (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x1407702BC (PiDevCfgConfigureDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14094D7E8 (PiDevCfgRequestDriverConfigurations.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14094D930 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14094ED84 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgInit @ 0x140B0ED44 (PpDevCfgInit.c)
 * Callees:
 *     PiPnpRtlSetObjectProperty @ 0x140771524 (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgSetObjectProperty(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        int a11)
{
  int v11; // eax

  if ( a1 == *(_QWORD *)&PiPnpRtlCtx && a4 == 1 && a2 && (*a2 & 1) != 0 )
    v11 = a11 | 0x20000;
  else
    v11 = a11;
  return PiPnpRtlSetObjectProperty(a1, a3, a4, a5, 0LL, a7, a8, a9, a10, v11);
}
