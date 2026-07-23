/*
 * XREFs of VslTerminateSecureServices @ 0x14040FEB8
 * Callers:
 *     HalpPowerWriteResetCommand @ 0x14050700C (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x140507198 (HalpShutdown.c)
 *     HaliAcpiSleep @ 0x140528490 (HaliAcpiSleep.c)
 *     HvlEnterSleepState @ 0x140544470 (HvlEnterSleepState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 VslTerminateSecureServices()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 271, 0, (__int64)v1);
}
