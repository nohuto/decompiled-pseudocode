/*
 * XREFs of UsbhAssertBusLock @ 0x1C0035D6C
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C001EB50 (UsbhCancelEnumeration.c)
 *     UsbhDropDevice @ 0x1C004C208 (UsbhDropDevice.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C004C6E0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x1C004D320 (UsbhReset1Debounce.c)
 *     UsbhReset1DebounceError @ 0x1C004D4B0 (UsbhReset1DebounceError.c)
 *     UsbhReset1DropDevice @ 0x1C004D590 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C004D680 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C004D800 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C004DA10 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2CycleDevice @ 0x1C004DB10 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x1C004DB80 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C004DC70 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C004DDF0 (UsbhReset2Timeout.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C004DFD0 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 */

void __fastcall UsbhAssertBusLock(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al

  v1 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v2 = KeAcquireSpinLockRaiseToDpc(v1);
  KeReleaseSpinLock(v1, v2);
}
