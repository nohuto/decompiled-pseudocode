/*
 * XREFs of PiDevCfgSetObjectProperty @ 0x14087B980
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14087A430 (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x14087A974 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateDevice @ 0x14087C1BC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x14087C634 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E664 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14095FC08 (PiDevCfgRequestDriverConfigurations.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095FD50 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140962E74 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgInit @ 0x140B3FC30 (PpDevCfgInit.c)
 * Callees:
 *     PiPnpRtlSetObjectProperty @ 0x140796978 (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgSetObjectProperty(
        __int64 a1,
        _DWORD *a2,
        const WCHAR *a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        const wchar_t *a9,
        unsigned int a10,
        int a11)
{
  int v11; // eax

  if ( a1 == *(_QWORD *)&PiPnpRtlCtx && a4 == 1 && a2 && (*a2 & 1) != 0 )
    v11 = a11 | 0x20000;
  else
    v11 = a11;
  return PiPnpRtlSetObjectProperty(a1, a3, a4, a5, 0LL, a7, a8, a9, a10, v11);
}
