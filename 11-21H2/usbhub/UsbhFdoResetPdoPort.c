/*
 * XREFs of UsbhFdoResetPdoPort @ 0x1C002FF70
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0017C10 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhAcquireFdoPwrLock @ 0x1C00019E0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhUnlatchPdo @ 0x1C0002650 (UsbhUnlatchPdo.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003078 (UsbhSyncResetDeviceInternal.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000E150 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDecPdoIoCount @ 0x1C000EE64 (UsbhDecPdoIoCount.c)
 *     UsbhLatchPdo @ 0x1C000F240 (UsbhLatchPdo.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     Usbh__TestPoint__Ulong @ 0x1C002F940 (Usbh__TestPoint__Ulong.c)
 *     UsbhAcquirePdoStateLock @ 0x1C00312E4 (UsbhAcquirePdoStateLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C00313A8 (UsbhReleaseFdoPwrLock.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoResetPdoPort(
        PDEVICE_OBJECT DeviceObject,
        ULONG_PTR BugCheckParameter3,
        IRP *BugCheckParameter4)
{
  _DWORD *v6; // rsi
  __int64 v7; // r15
  int v8; // ebx
  KIRQL CurrentIrql; // al
  int v10; // edx
  __int64 v11; // rcx
  bool v12; // zf
  KIRQL v13; // dl
  int v14; // eax
  bool v15; // cc
  __int64 v17; // [rsp+98h] [rbp+20h]

  Log((__int64)DeviceObject, 4, 1919251233, (__int64)BugCheckParameter4, BugCheckParameter3);
  v6 = PdoExt(BugCheckParameter3);
  v7 = (__int64)(v6 + 236);
  UsbhEtwLogDeviceIrpEvent(
    (__int64)v6,
    (__int64)BugCheckParameter4,
    &USBHUB_ETW_EVENT_DEVICE_IOCTL_INTERNAL_USB_RESET_PORT_START,
    0);
  UsbhAcquireFdoPwrLock((__int64)DeviceObject, (__int64)(v6 + 236), 134, 1936028228);
  if ( PdoExt(BugCheckParameter3)[282] == 1 )
  {
    UsbhReleaseFdoPwrLock(DeviceObject, v7);
    CurrentIrql = KeGetCurrentIrql();
    v10 = *((unsigned __int16 *)v6 + 714);
    if ( CurrentIrql )
    {
      v8 = -1073741811;
      UsbhException((int)DeviceObject, v10, 68, 0, 0, -1073741811, -1, usbfile_dioctl_c, 769, 0);
    }
    else
    {
      v8 = -1073741810;
      v17 = UsbhLatchPdo((__int64)DeviceObject, v10, (__int64)BugCheckParameter4, 0x64545352u);
      Log((__int64)DeviceObject, 8, 1920169068, *((unsigned __int16 *)v6 + 714), v17);
      if ( !v17 )
        goto LABEL_26;
      if ( BugCheckParameter3 == v17 )
      {
        UsbhAcquirePdoStateLock(v11, v7, 13LL);
        v12 = PdoExt(BugCheckParameter3)[281] == 3;
        v6[270] = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        v6[258] = 1734964085;
        v13 = *((_BYTE *)v6 + 1076);
        if ( v12 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v13);
          Usbh__TestPoint__Ulong((__int64)DeviceObject, 0, 0xC000000E, *((unsigned __int16 *)v6 + 714));
          v14 = UsbhSyncResetDeviceInternal(DeviceObject, v7, BugCheckParameter3);
          ++v6[597];
          v8 = v14;
          v15 = v6[597] <= 0xAu;
          v6[596] = 1;
          if ( !v15 )
          {
            UsbhException(
              (int)DeviceObject,
              *((unsigned __int16 *)v6 + 714),
              76,
              0,
              0,
              v14,
              -1,
              usbfile_dioctl_c,
              803,
              0);
            v6[597] = 0;
          }
          if ( v8 >= 0 )
            Usbh__TestPoint__Ulong((__int64)DeviceObject, 1u, v8, *((unsigned __int16 *)v6 + 714));
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v13);
        }
      }
      UsbhUnlatchPdo((__int64)DeviceObject, v17, (__int64)BugCheckParameter4, 0x64545352u);
      if ( (v8 & 0xC0000000) == 0xC0000000 )
      {
LABEL_26:
        if ( !Usb_Disconnected(v8) )
          UsbhException((int)DeviceObject, *((unsigned __int16 *)v6 + 714), 77, 0, 0, v8, -1, usbfile_dioctl_c, 828, 0);
      }
    }
  }
  else
  {
    v8 = -1073741101;
    UsbhException(
      (int)DeviceObject,
      *((unsigned __int16 *)v6 + 714),
      69,
      0,
      0,
      -1073741101,
      -1,
      usbfile_dioctl_c,
      749,
      0);
    UsbhReleaseFdoPwrLock(DeviceObject, v7);
  }
  UsbhEtwLogDeviceIrpEvent(
    (__int64)v6,
    (__int64)BugCheckParameter4,
    &USBHUB_ETW_EVENT_DEVICE_IOCTL_INTERNAL_USB_RESET_PORT_COMPLETE,
    v8);
  if ( *((_BYTE *)v6 + 2740) && v8 < 0 )
  {
    Log((__int64)DeviceObject, 8, 1920169062, (__int64)v6, v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        3u,
        0xBu,
        (__int64)&WPP_6755297163953fe01245bafdfc38d5a5_Traceguids);
    UsbhException((int)DeviceObject, 0, 62, 0, 0, -1073741823, -1073704960, usbfile_dioctl_c, 841, 1);
    *((_QWORD *)v6 + 348) = BugCheckParameter4;
    v8 = 259;
    BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  else
  {
    BugCheckParameter4->IoStatus.Status = v8;
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  return (unsigned int)v8;
}
