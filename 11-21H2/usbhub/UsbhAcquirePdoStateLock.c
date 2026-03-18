/*
 * XREFs of UsbhAcquirePdoStateLock @ 0x1C00312E4
 * Callers:
 *     UsbhWaitConnect @ 0x1C0019D60 (UsbhWaitConnect.c)
 *     UsbhFdoResetPdoPort @ 0x1C002FF70 (UsbhFdoResetPdoPort.c)
 *     UsbhCycleDevicePort @ 0x1C003681C (UsbhCycleDevicePort.c)
 *     UsbhSoftDisconnectPdo @ 0x1C003975C (UsbhSoftDisconnectPdo.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C00398B8 (UsbhSyncResumeDeviceInternal.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C0039DEC (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C0039F80 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C003A10C (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C003A2BC (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C003A55C (Usbh_Disconnect_PdoEvent.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C003A660 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003A7CC (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003AA28 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhSetPdo_AllowIo @ 0x1C003CE78 (UsbhSetPdo_AllowIo.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E0C8 (UsbhSetEnumerationFailed.c)
 *     UsbhEtwRundown @ 0x1C005B5E4 (UsbhEtwRundown.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall UsbhAcquirePdoStateLock(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax

  *(_BYTE *)(a2 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(a2 + 136) = 1;
  *(_DWORD *)(a2 + 92) = a3;
  *(_DWORD *)(a2 + 88) = 2018460752;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))a2;
  result = KeGetCurrentThread();
  *(_QWORD *)(a2 + 24) = result;
  return result;
}
