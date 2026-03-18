/*
 * XREFs of PiDevCfgSetDeviceRegProp @ 0x14087BDDC
 * Callers:
 *     PpDevCfgProcessDeviceOperations @ 0x1407D8F50 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140842950 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgProcessDevice @ 0x14087A1F0 (PiDevCfgProcessDevice.c)
 *     PiDevCfgMigrateDevice @ 0x14087BF7C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgInitDeviceCallback @ 0x14095E4F0 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgProcessDeviceClass @ 0x1409628FC (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140962C74 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x1409633BC (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     PiPnpRtlSetDeviceRegProperty @ 0x14087C704 (PiPnpRtlSetDeviceRegProperty.c)
 */

__int64 __fastcall PiDevCfgSetDeviceRegProp(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, int a6)
{
  return PiPnpRtlSetDeviceRegProperty(
           *(_QWORD *)&PiPnpRtlCtx,
           *(_QWORD *)(a2 + 8),
           *(_QWORD *)(a2 + 16),
           a3,
           a4,
           a5,
           a6,
           (*(_DWORD *)a2 & 1u) << 17);
}
