/*
 * XREFs of PiDevCfgConfigureDeviceDriverConfiguration @ 0x140697760
 * Callers:
 *     PiDevCfgConfigureDeviceDriver @ 0x1406976D0 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgMigrateDevice @ 0x1406E2EEC (PiDevCfgMigrateDevice.c)
 * Callees:
 *     PiDevCfgConfigureDeviceKeys @ 0x140697824 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgCopyObjectProperties @ 0x140698298 (PiDevCfgCopyObjectProperties.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceDriverConfiguration(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax

  if ( (a4 & 1) == 0 )
    return PiDevCfgConfigureDeviceKeys(a1, a2, a3, a4, a7, a8);
  result = PiDevCfgCopyObjectProperties(PiPnpRtlCtx, 0, 0, a3);
  if ( (int)result >= 0 )
    return PiDevCfgConfigureDeviceKeys(a1, a2, a3, a4, a7, a8);
  return result;
}
