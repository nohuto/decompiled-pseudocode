/*
 * XREFs of USBD_UrbFree @ 0x1C008876C
 * Callers:
 *     ??1FxUsbDeviceControlContext@@UEAA@XZ @ 0x1C000F564 (--1FxUsbDeviceControlContext@@UEAA@XZ.c)
 *     ?Dispose@FxUsbUrb@@MEAAEXZ @ 0x1C000F610 (-Dispose@FxUsbUrb@@MEAAEXZ.c)
 *     ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x1C00599E0 (--1FxUsbPipeRequestContext@@UEAA@XZ.c)
 *     ??1FxUsbPipeTransferContext@@UEAA@XZ @ 0x1C0059A40 (--1FxUsbPipeTransferContext@@UEAA@XZ.c)
 *     ?Dispose@FxUsbPipeRequestContext@@UEAAXXZ @ 0x1C0059CD0 (-Dispose@FxUsbPipeRequestContext@@UEAAXXZ.c)
 *     ?Dispose@FxUsbPipeTransferContext@@UEAAXXZ @ 0x1C0059D20 (-Dispose@FxUsbPipeTransferContext@@UEAAXXZ.c)
 *     ??1FxUsbDeviceStringContext@@UEAA@XZ @ 0x1C005C4CC (--1FxUsbDeviceStringContext@@UEAA@XZ.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C005CDE0 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C005D024 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?Dispose@FxUsbDeviceStringContext@@UEAAXXZ @ 0x1C005D4B0 (-Dispose@FxUsbDeviceStringContext@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall USBD_UrbFree(USBD_HANDLE__ *USBDHandle, _URB *Urb)
{
  void (__fastcall *v4)(_URB *); // rdx
  void (__fastcall *v5)(_QWORD); // rax

  if ( Urb )
  {
    if ( USBDHandle )
    {
      v4 = (void (__fastcall *)(_URB *))*((_QWORD *)USBDHandle + 19);
      if ( v4 )
        v4(Urb);
      else
        ExFreePoolWithTag(Urb, *((_DWORD *)USBDHandle + 16));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)USBDHandle + 55, 0xFFFFFFFF) <= 1 )
      {
        if ( *((_BYTE *)USBDHandle + 225) )
        {
          v5 = (void (__fastcall *)(_QWORD))*((_QWORD *)USBDHandle + 14);
          if ( v5 )
            v5(*((_QWORD *)USBDHandle + 6));
          ExFreePoolWithTag(USBDHandle, *((_DWORD *)USBDHandle + 16));
        }
        else if ( g_EnableDbgPrints )
        {
          DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", USBDHandle);
        }
      }
    }
    else if ( g_EnableDbgPrints )
    {
      DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
    }
  }
  else if ( g_EnableDbgPrints )
  {
    DbgPrintEx(0x4Du, 0, "Urb cant be NULL\n");
  }
}
