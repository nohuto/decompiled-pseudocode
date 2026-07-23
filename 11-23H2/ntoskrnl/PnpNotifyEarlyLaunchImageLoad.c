/*
 * XREFs of PnpNotifyEarlyLaunchImageLoad @ 0x140B3E0A4
 * Callers:
 *     PipInitializeDriverDependentDLLs @ 0x140B3C8F8 (PipInitializeDriverDependentDLLs.c)
 *     PnpInitializeBootStartDriver @ 0x140B3DA00 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14033C1F0 (ExNotifyWithProcessing.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall PnpNotifyEarlyLaunchImageLoad(__int64 a1, __int64 a2)
{
  _QWORD v4[4]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v5[120]; // [rsp+40h] [rbp-78h] BYREF

  memset(v5, 0, 0x68uLL);
  if ( PnpBootDriverCallbackObject )
  {
    v4[2] = a2;
    v4[0] = PnpEarlyLaunchImageNotificationPreProcess;
    v4[3] = a1;
    v4[1] = PnpEarlyLaunchImageNotificationPostProcess;
    ExNotifyWithProcessing((__int64)PnpBootDriverCallbackObject, 1LL, (__int64)v5, (__int64)v4);
  }
}
