/*
 * XREFs of VslTerminateSecureServices @ 0x14040FCD8
 * Callers:
 *     HalpPowerWriteResetCommand @ 0x140506ABC (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x140506C48 (HalpShutdown.c)
 *     HaliAcpiSleep @ 0x140527F40 (HaliAcpiSleep.c)
 *     HvlEnterSleepState @ 0x140543DB0 (HvlEnterSleepState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 VslTerminateSecureServices()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 271, 0, (__int64)v1);
}
