/*
 * XREFs of KeRebootSystemForRecovery @ 0x14057A89C
 * Callers:
 *     ExRebootSystemForRecovery @ 0x140606BC4 (ExRebootSystemForRecovery.c)
 * Callees:
 *     KiSendThawExecution @ 0x14020D210 (KiSendThawExecution.c)
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalReturnToFirmware @ 0x140506EB0 (HalReturnToFirmware.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x14056A218 (KiBugcheckUnloadDebugSymbols.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD0B0 (MiDeleteAllHardwareEnclaves.c)
 */

void __noreturn KeRebootSystemForRecovery()
{
  _BYTE v0[112]; // [rsp+20h] [rbp-88h] BYREF

  MiDeleteAllHardwareEnclaves();
  memset(v0, 0, 0x68uLL);
  VslpEnterIumSecureMode(2u, 262, 0, (__int64)v0);
  KiBugcheckUnloadDebugSymbols();
  KiResumeForReboot = 1;
  KiSendThawExecution(0);
  HalReturnToFirmware(3);
}
