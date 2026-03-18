/*
 * XREFs of UsbhWait @ 0x1C002D834
 * Callers:
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 *     UsbhCancelResetTimeout @ 0x1C000DCF0 (UsbhCancelResetTimeout.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0017C10 (UsbhPdoInternalDeviceControl.c)
 *     UsbhReset1Complete @ 0x1C001BA90 (UsbhReset1Complete.c)
 *     UsbhInitializeDevice @ 0x1C001E90C (UsbhInitializeDevice.c)
 *     UsbhInitialize @ 0x1C002C450 (UsbhInitialize.c)
 *     UsbhOvercurrentResetWorker @ 0x1C002F330 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00345D4 (UsbhQueueSoftConnectChange.c)
 *     UsbhFdoSetD0Warm @ 0x1C003B8A0 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003C2B4 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhHardReset_Action @ 0x1C003C838 (UsbhHardReset_Action.c)
 *     UsbhPortConnect @ 0x1C004C820 (UsbhPortConnect.c)
 *     UsbhPortResumeFailed @ 0x1C004D050 (UsbhPortResumeFailed.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhRawWait @ 0x1C001A650 (UsbhRawWait.c)
 */

void __fastcall UsbhWait(__int64 a1, unsigned int a2)
{
  int v2; // r10d

  Log(a1, 8, 2002872692, a2, 0LL);
  UsbhRawWait(v2);
}
