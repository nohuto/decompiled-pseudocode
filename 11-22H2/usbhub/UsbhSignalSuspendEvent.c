/*
 * XREFs of UsbhSignalSuspendEvent @ 0x1C00353B4
 * Callers:
 *     Usbh_CheckPortHwPendingStatus @ 0x1C0001F1C (Usbh_CheckPortHwPendingStatus.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000F290 (Usbh_PCE_Suspend_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0017430 (UsbhHubDispatchPortEvent.c)
 *     UsbhRequestPortSuspend @ 0x1C0018D14 (UsbhRequestPortSuspend.c)
 *     UsbhEnumerate1 @ 0x1C001A4E8 (UsbhEnumerate1.c)
 *     UsbhHubIsr @ 0x1C001D8F0 (UsbhHubIsr.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0036434 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhEnumerate2 @ 0x1C004C770 (UsbhEnumerate2.c)
 *     UsbhPortDisconnect @ 0x1C004D690 (UsbhPortDisconnect.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x1C0034208 (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0035294 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhSignalSuspendEvent(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  KIRQL v5; // bl

  if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    *(_DWORD *)(a2 + 448) = 1;
    v5 = v4;
    UsbhSetPcqEventStatus(a1, a2, 0LL, 30);
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}
