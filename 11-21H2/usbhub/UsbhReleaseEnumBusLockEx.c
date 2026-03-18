/*
 * XREFs of UsbhReleaseEnumBusLockEx @ 0x1C000FB0C
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003078 (UsbhSyncResetDeviceInternal.c)
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0016AF0 (UsbhHubDispatchPortEvent.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C001BF60 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhCancelEnumeration @ 0x1C001EB50 (UsbhCancelEnumeration.c)
 *     UsbhPCE_Close @ 0x1C0033AA0 (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x1C0033D98 (UsbhPCE_HW_Stop.c)
 *     UsbhDropDevice @ 0x1C004C208 (UsbhDropDevice.c)
 *     UsbhHardErrorInvalidData @ 0x1C004C5F0 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C004C6E0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortConnect @ 0x1C004C820 (UsbhPortConnect.c)
 *     UsbhPortRecycle @ 0x1C004CF80 (UsbhPortRecycle.c)
 *     UsbhReset1Debounce @ 0x1C004D320 (UsbhReset1Debounce.c)
 *     UsbhReset2CycleDevice @ 0x1C004DB10 (UsbhReset2CycleDevice.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E0C8 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhDecHubBusy @ 0x1C0010740 (UsbhDecHubBusy.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhReleaseEnumBusLockEx(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rbp
  _DWORD *v6; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  KIRQL v9; // r10

  v3 = a3;
  v6 = FdoExt(a1);
  Log(a1, 4, 1967281491, (unsigned int)v6[768], v3);
  if ( *((_QWORD *)v6 + 550) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 383);
    if ( v6[768] == (_DWORD)v3 && *((_QWORD *)v6 + 385) == a2 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v7);
      UsbhDecHubBusy(a1, v8, *((_QWORD *)v6 + 386));
      *((_QWORD *)v6 + 386) = 0LL;
      v6[768] = 0;
      *((_QWORD *)v6 + 385) = 0LL;
      _InterlockedDecrement(v6 + 774);
      (*((void (__fastcall **)(_QWORD))v6 + 550))(*((_QWORD *)v6 + 529));
    }
    else
    {
      Log(a1, 4, 1967281016, (unsigned int)v6[768], *((_QWORD *)v6 + 385));
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v9);
    }
  }
}
