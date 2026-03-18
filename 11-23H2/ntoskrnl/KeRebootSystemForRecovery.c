/*
 * XREFs of KeRebootSystemForRecovery @ 0x14057A3AC
 * Callers:
 *     ExRebootSystemForRecovery @ 0x140606674 (ExRebootSystemForRecovery.c)
 * Callees:
 *     KiSendThawExecution @ 0x14020D210 (KiSendThawExecution.c)
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     HalReturnToFirmware @ 0x140506960 (HalReturnToFirmware.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x140569B58 (KiBugcheckUnloadDebugSymbols.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD240 (MiDeleteAllHardwareEnclaves.c)
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
