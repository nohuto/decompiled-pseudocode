/*
 * XREFs of UsbhPortResumeTimeout @ 0x1C0038490
 * Callers:
 *     UsbhWaitForPortResume @ 0x1C0039CEC (UsbhWaitForPortResume.c)
 * Callees:
 *     UsbhUnlatchPdo @ 0x1C0002650 (UsbhUnlatchPdo.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003078 (UsbhSyncResetDeviceInternal.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C000F240 (UsbhLatchPdo.c)
 *     UsbhQueryPortState @ 0x1C0018E60 (UsbhQueryPortState.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x1C001E2AC (UsbhSendSynchronousUsbIoctlRequest.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00345D4 (UsbhQueueSoftConnectChange.c)
 *     UsbhGetPortStatusBits @ 0x1C0037C98 (UsbhGetPortStatusBits.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

__int64 __fastcall UsbhPortResumeTimeout(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // ebx
  int v8; // eax
  int v9; // r10d
  unsigned int v10; // r10d
  struct _DEVICE_OBJECT *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 PortStatusBits; // al
  __int64 v16; // r9
  char v17; // r11
  int v18; // eax
  int v19; // ebp
  _DWORD *v20; // rax
  _DWORD *v21; // rax
  int v22; // [rsp+90h] [rbp+18h] BYREF
  int v23; // [rsp+98h] [rbp+20h] BYREF

  v3 = *(unsigned __int16 *)(a3 + 4);
  v4 = 0;
  v22 = 0;
  v23 = 0;
  FdoExt((__int64)DeviceObject);
  v8 = UsbhQueryPortState((__int64)DeviceObject, *(_WORD *)(a3 + 4), (__int64)&v23, &v22);
  Log((__int64)DeviceObject, 16, 1920233265, v8, 0LL);
  if ( Usb_Disconnected(v9) )
    return v10;
  UsbhException((int)DeviceObject, *(unsigned __int16 *)(a3 + 4), 124, 0, 0, v10, v22, usbfile_bus_c, 7419, 0);
  v12 = (struct _DEVICE_OBJECT *)UsbhLatchPdo((__int64)DeviceObject, v3, 0LL, 0x7761726Du);
  Log((__int64)DeviceObject, 16, 1920233266, v3, (__int64)v12);
  if ( v12 )
  {
    PortStatusBits = UsbhGetPortStatusBits(v14, v13, (__int16 *)&v23, (__int64)v12);
    Log((__int64)DeviceObject, 16, 1347899987, PortStatusBits, v3);
    if ( v17 == 25 )
    {
      Log((__int64)DeviceObject, 16, 1920233267, v16, 0LL);
    }
    else if ( v17 == 31 )
    {
      v4 = -1073741810;
      Log((__int64)DeviceObject, 16, 1920233268, v16, -1073741810LL);
    }
    else
    {
      v18 = UsbhSyncResetDeviceInternal(DeviceObject, a2, (__int64)v12);
      v19 = v18;
      if ( (v18 & 0xC0000000) == 0xC0000000 )
      {
        Log((__int64)DeviceObject, 16, 1920233269, 0LL, v18);
        UsbhQueueSoftConnectChange((__int64)DeviceObject, v3, a2, 1);
        v20 = PdoExt((__int64)v12);
        v20[355] &= ~0x4000u;
        UsbhException((int)DeviceObject, 0, 125, 0, 0, v19, 0, usbfile_bus_c, 7479, 0);
      }
      else
      {
        v21 = PdoExt((__int64)v12);
        v21[355] &= ~0x4000u;
        if ( (PdoExt((__int64)v12)[355] & 4) != 0 )
          UsbhSendSynchronousUsbIoctlRequest((__int64)DeviceObject, v12, 0x220FA7u);
      }
    }
    UsbhUnlatchPdo((__int64)DeviceObject, (__int64)v12, 0LL, 0x7761726Du);
  }
  return v4;
}
