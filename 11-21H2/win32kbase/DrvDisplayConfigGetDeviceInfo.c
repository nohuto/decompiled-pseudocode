/*
 * XREFs of DrvDisplayConfigGetDeviceInfo @ 0x1C00C4CF0
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BD3E0 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 * Callees:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0070820 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfo(struct DISPLAYCONFIG_DEVICE_INFO_HEADER *a1)
{
  return DrvDisplayConfigGetDeviceInfoInternal(a1, 0);
}
