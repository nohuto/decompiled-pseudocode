/*
 * XREFs of UsbhSyncResetDeviceInternal @ 0x1C0003078
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0009FA0 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoResetPdoPort @ 0x1C002FF70 (UsbhFdoResetPdoPort.c)
 *     UsbhPortResumeTimeout @ 0x1C0038490 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C003B8A0 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003C2B4 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C00548CC (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C00552A0 (UsbhPdoPnp_QueryInterface.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C00015D0 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0001734 (UsbhPCE_QueueDriverReset.c)
 *     Usbh_HubRestoreDevice @ 0x1C0001800 (Usbh_HubRestoreDevice.c)
 *     UsbhQueueWorkItemEx @ 0x1C0002868 (UsbhQueueWorkItemEx.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0003470 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C00036C0 (UsbhRefPdoDeviceHandle.c)
 *     Usbh_SSH_Event @ 0x1C0004D80 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhAcquireEnumBusLock @ 0x1C000CBC8 (UsbhAcquireEnumBusLock.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000E150 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhGetPortData @ 0x1C000F370 (UsbhGetPortData.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000FB0C (UsbhReleaseEnumBusLockEx.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0011440 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhLinkPdoDeviceHandle @ 0x1C001BE4C (UsbhLinkPdoDeviceHandle.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002DFC0 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_q @ 0x1C002E090 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C002E354 (WPP_RECORDER_SF_qd.c)
 *     UsbhWaitForBootDevice @ 0x1C0039BD8 (UsbhWaitForBootDevice.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 *     UsbhFreeID @ 0x1C004FAE8 (UsbhFreeID.c)
 *     UsbhGetSerialNumber @ 0x1C00500D4 (UsbhGetSerialNumber.c)
 */

__int64 __fastcall UsbhSyncResetDeviceInternal(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  bool v4; // r14
  __int64 v6; // rbp
  int v7; // r8d
  __int64 v8; // r15
  KSPIN_LOCK *v9; // r15
  KIRQL v10; // bl
  __int64 v11; // r12
  int v12; // r9d
  unsigned __int16 v13; // dx
  __int64 PortData; // rax
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // r15
  KIRQL v20; // al
  int v21; // edx
  int v23; // edx
  int v24; // r8d
  int v25; // r10d
  int v26; // edx
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-68h]
  SIZE_T Length[2]; // [rsp+58h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-50h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+20h]

  v4 = 0;
  memset(&Event, 0, sizeof(Event));
  v6 = PdoExt(a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 71, (__int64)"FKh&");
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)"FKh&",
        v7,
        72,
        (__int64)"FKh&",
        *(_WORD *)(v6 + 1428),
        a3);
  }
  v8 = FdoExt(DeviceObject);
  UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_START, 0LL);
  v9 = (KSPIN_LOCK *)(v8 + 5168);
  SpinLock = v9;
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( *(_QWORD *)(v6 + 864) )
  {
    Log((_DWORD)DeviceObject, 4, 1380214068, 0, *(_QWORD *)(v6 + 864));
    KeReleaseSpinLock(v9, v10);
    LODWORD(v17) = -2147483631;
    goto LABEL_24;
  }
  *(_DWORD *)(v6 + 872) = -1;
  *(_QWORD *)(v6 + 864) = &Event;
  *(_QWORD *)(v6 + 880) = KeGetCurrentThread();
  KeReleaseSpinLock(v9, v10);
  v11 = UsbhRefPdoDeviceHandle(DeviceObject, a3, a3, 1212443759LL);
  UsbhUnlinkPdoDeviceHandle((__int64)DeviceObject, a3, 2017740898, 0);
  Log((_DWORD)DeviceObject, 4, 1869374568, 0, v11);
  Usbh_SSH_Event(DeviceObject, (unsigned int)(v12 + 6), a2);
  v13 = *(_WORD *)(v6 + 1428);
  *(_DWORD *)(v6 + 1420) &= ~0x8000u;
  UsbhPCE_QueueDriverReset((__int64)DeviceObject, v13, 0x20000LL, a2, a3);
  Log((_DWORD)DeviceObject, 4, 1380218740, 0, 0LL);
  PortData = UsbhGetPortData(DeviceObject, *(unsigned __int16 *)(v6 + 1428));
  UsbhWaitEventWithTimeoutEx(DeviceObject, &Event, 0LL, 1380210548LL, 11, PortData);
  v17 = *(int *)(v6 + 872);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qd(WPP_GLOBAL_Control->DeviceExtension, v15, v16, 73, (__int64)"FKh&", a3, *(_DWORD *)(v6 + 872));
  if ( (v17 & 0xC0000000) == 0xC0000000 )
  {
    Log((_DWORD)DeviceObject, 4, 1380214124, 0, v17);
    UsbhUnlinkPdoDeviceHandle((__int64)DeviceObject, a3, 2017740856, 1);
    if ( v11 )
    {
      UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
      UsbhDerefPdoDeviceHandle(DeviceObject, v11, a3, 1212443759LL);
    }
    if ( !(unsigned __int8)Usb_Disconnected((unsigned int)v17) )
      UsbhException((int)DeviceObject, *(unsigned __int16 *)(v6 + 1428), 67, 0, 0, v17, -1, usbfile_bus_c, 6797, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qd(WPP_GLOBAL_Control->DeviceExtension, v23, v24, 74, (__int64)"FKh&", a3, v17);
  }
  else
  {
    UsbhAcquireEnumBusLock(DeviceObject, a2, *(unsigned __int16 *)(v6 + 1428));
    v31 = UsbhRefPdoDeviceHandle(DeviceObject, a3, a3, 1212446574LL);
    if ( v31 )
    {
      if ( v11 )
      {
        UsbhDerefPdoDeviceHandle(DeviceObject, v11, a3, 1212443759LL);
        Log((_DWORD)DeviceObject, 4, 1381192786, v11, v31);
        v18 = Usbh_HubRestoreDevice((__int64)DeviceObject, a3, v11, v31);
        v19 = v18;
        if ( *(_BYTE *)(v6 + 2740) )
        {
          if ( v18 < 0 )
          {
            v4 = v18 == -1073741823;
          }
          else if ( (*(_DWORD *)(v6 + 1420) & 0x204) == 0x200 )
          {
            *(_OWORD *)Length = 0LL;
            UsbhGetSerialNumber((int)DeviceObject);
            if ( *(_DWORD *)(v6 + 2132) )
            {
              v4 = 1;
            }
            else if ( Length[1]
                   && RtlCompareMemory((const void *)Length[1], *(const void **)(v6 + 2136), HIDWORD(Length[0])) != HIDWORD(Length[0]) )
            {
              v4 = 1;
            }
            UsbhFreeID(Length);
          }
        }
        Log((_DWORD)DeviceObject, 4, 1380217445, 0, v19);
        UsbhDerefPdoDeviceHandle(DeviceObject, v31, a3, 1212446574LL);
        if ( (v19 & 0xC0000000) == 0xC0000000 )
        {
          UsbhException((int)DeviceObject, *(unsigned __int16 *)(v6 + 1428), 66, 0, 0, v19, -1, usbfile_bus_c, 6876, 0);
          UsbhUnlinkPdoDeviceHandle((__int64)DeviceObject, a3, 2017740899, 1);
          UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
        }
      }
      else
      {
        Log((_DWORD)DeviceObject, 4, 1380216684, 0, v17);
        LODWORD(v19) = v25;
        UsbhDerefPdoDeviceHandle(DeviceObject, v31, a3, 1212446574LL);
      }
      LODWORD(v17) = v19;
      if ( (int)v19 >= 0 )
      {
        if ( *(_BYTE *)(v6 + 2740) )
        {
          if ( !v4 )
          {
            if ( byte_1C006A6C8 )
            {
              if ( (*(_DWORD *)(v6 + 1420) & 4) == 0 )
              {
                WmiFireEvent(DeviceObject, &GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION, 0, 0, 0LL);
                LODWORD(v17) = UsbhQueueWorkItemEx(
                                 (__int64)DeviceObject,
                                 1u,
                                 (int)UsbhUpdateRegSurpriseRemovalCount,
                                 (__int64)&byte_1C006A6C8,
                                 *(unsigned __int16 *)(v6 + 1428),
                                 2001555795,
                                 0LL);
                if ( (v17 & 0xC0000000) == 0xC0000000 )
                {
                  byte_1C006A6C8 = 0;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 75, (__int64)"FKh&", v17);
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      Log((_DWORD)DeviceObject, 4, 1380200497, 0, v11);
      UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
      UsbhDerefPdoDeviceHandle(DeviceObject, v11, a3, 1212443759LL);
      LODWORD(v17) = -1073741823;
    }
    UsbhReleaseEnumBusLockEx(DeviceObject, a2, *(unsigned __int16 *)(v6 + 1428));
    v9 = SpinLock;
  }
  v20 = KeAcquireSpinLockRaiseToDpc(v9);
  *(_QWORD *)(v6 + 864) = 0LL;
  KeReleaseSpinLock(v9, v20);
  if ( !v4 )
    goto LABEL_21;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v21, 3, 76, (__int64)"FKh&", (char)DeviceObject);
  Log((_DWORD)DeviceObject, 4, 1397905220, v17, (__int64)DeviceObject);
  UsbhWaitForBootDevice(DeviceObject, a3, 0xFFFFFFFFLL, 1LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v26, 3, 77, (__int64)"FKh&", (char)DeviceObject);
LABEL_21:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 78, (__int64)"FKh&", v17);
  }
LABEL_24:
  UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_COMPLETE, (unsigned int)v17);
  return (unsigned int)v17;
}
