/*
 * XREFs of UsbhModuleDispatch @ 0x1C0043D00
 * Callers:
 *     DriverEntry @ 0x1C0041964 (DriverEntry.c)
 *     UsbhAddDevice @ 0x1C0041E10 (UsbhAddDevice.c)
 *     UsbhDriverUnload @ 0x1C00429E0 (UsbhDriverUnload.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x1C00443E0 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C0044500 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C00446A0 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0044890 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0044A00 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_PnpRemove @ 0x1C0044B44 (Usbh_PnpRemove.c)
 * Callees:
 *     UsbhCallModule @ 0x1C0042708 (UsbhCallModule.c)
 */

__int64 __fastcall UsbhModuleDispatch(__int64 a1, __int64 a2, _LIST_ENTRY *a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // edi
  unsigned int v7; // ebp
  char v10; // r14
  unsigned int v11; // ebx
  int v12; // eax

  v6 = 0;
  v7 = 0;
  v10 = a1;
  v11 = (_BYTE)a1 == 0 ? 9 : 0;
  do
  {
    v12 = UsbhCallModule(a1, (__int64)&HubModule + 56 * v11, (__int64)a3, a3, a4, a5, a6);
    if ( a4 == 1 )
    {
      if ( v12 < 0 )
        v6 = v12;
    }
    else if ( v12 < 0 )
    {
      break;
    }
    ++v7;
    a1 = v11++ - 1;
    if ( !v10 )
      v11 = a1;
  }
  while ( v7 < 0xA );
  if ( a4 != 1 )
    return (unsigned int)v12;
  return v6;
}
