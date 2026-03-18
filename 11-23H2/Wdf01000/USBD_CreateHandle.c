/*
 * XREFs of USBD_CreateHandle @ 0x1C0087C0C
 * Callers:
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C005FFC8 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     USBDInternal_BuildAndSendQueryInterfaceSynchronously @ 0x1C008752C (USBDInternal_BuildAndSendQueryInterfaceSynchronously.c)
 *     USBDInternal_BuildServicePath @ 0x1C00876A8 (USBDInternal_BuildServicePath.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C0087980 (USBDInternal_QueryUsbVerifierSettings.c)
 */

__int64 __fastcall USBD_CreateHandle(
        _DEVICE_OBJECT *DeviceObject,
        _DEVICE_OBJECT *TargetDeviceObject,
        unsigned int USBDClientContractVersion,
        ULONG PoolTag,
        USBD_HANDLE__ **USBDHandle)
{
  USBD_HANDLE__ **v5; // r14
  wchar_t *v6; // rsi
  int v11; // ebx
  USBD_HANDLE__ *PoolWithTag; // rax
  USBD_HANDLE__ *v13; // rdi
  _WORD *v14; // r14
  int InterfaceSynchronously; // eax
  char v16; // r14
  int v17; // eax
  int v19; // eax
  bool v20; // zf
  unsigned __int8 IsDeviceHighSpeed; // al
  void (__fastcall *v22)(_QWORD); // rax
  wchar_t *servicePath; // [rsp+38h] [rbp-C8h] BYREF
  USBD_HANDLE__ **v24; // [rsp+40h] [rbp-C0h]
  _USB_BUS_INTERFACE_USBDI_V1 usbBusInterface; // [rsp+50h] [rbp-B0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+A0h] [rbp-60h] BYREF

  v5 = USBDHandle;
  v24 = USBDHandle;
  v6 = 0LL;
  servicePath = 0LL;
  if ( KeGetCurrentIrql() )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Irql Too High\n");
    v11 = -1073741496;
LABEL_24:
    if ( !USBDHandle )
      goto LABEL_47;
    goto LABEL_64;
  }
  if ( !g_NonPagedPoolInitialized )
  {
    g_NonPagedPoolType = NonPagedPool;
    memset(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
    VersionInformation.dwOSVersionInfoSize = 284;
    if ( RtlGetVersion(&VersionInformation) >= 0
      && (VersionInformation.dwMajorVersion > 6
       || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
    {
      g_NonPagedPoolType = NonPagedPoolNx;
    }
  }
  g_NonPagedPoolInitialized = 1;
  if ( !DeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "DeviceObject cannot be NULL\n");
LABEL_23:
    v11 = -1073741811;
    goto LABEL_24;
  }
  if ( !TargetDeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "TargetDeviceObject cannot be NULL\n");
    goto LABEL_23;
  }
  if ( USBDClientContractVersion < 0x602 )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDClientContractVersion %d not supported\n", USBDClientContractVersion);
    goto LABEL_23;
  }
  if ( !PoolTag )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "PoolTag must be specified\n");
    goto LABEL_23;
  }
  if ( USBDHandle )
  {
    USBDInternal_BuildServicePath(DeviceObject, &servicePath, PoolTag);
    PoolWithTag = (USBD_HANDLE__ *)ExAllocatePoolWithTag(g_NonPagedPoolType, 0xE8uLL, PoolTag);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Allocation Failed\n");
      v6 = servicePath;
      v11 = -1073741670;
LABEL_64:
      *v5 = 0LL;
LABEL_47:
      if ( v6 )
        ExFreePoolWithTag(v6, PoolTag);
      return (unsigned int)v11;
    }
    memset(PoolWithTag, 0, 0xE8uLL);
    v6 = servicePath;
    v14 = v13 + 2;
    if ( servicePath )
      USBDInternal_QueryUsbVerifierSettings(DeviceObject, servicePath, (_USBD_INTERFACE_V3 *)(v13 + 2), PoolTag);
    *(_DWORD *)v13 = 1145197397;
    *v14 = 200;
    *((_DWORD *)v13 + 10) = USBDClientContractVersion;
    *((_WORD *)v13 + 5) = 1539;
    *((_DWORD *)v13 + 54) = 1539;
    *((_QWORD *)v13 + 7) = DeviceObject;
    *((_DWORD *)v13 + 16) = PoolTag;
    *((_QWORD *)v13 + 9) = v13;
    *((_QWORD *)v13 + 26) = TargetDeviceObject;
    *((_DWORD *)v13 + 55) = 1;
    InterfaceSynchronously = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                               DeviceObject,
                               TargetDeviceObject,
                               &GUID_USBD_INTERFACE,
                               (_INTERFACE *)(v13 + 2));
    v11 = InterfaceSynchronously;
    if ( InterfaceSynchronously < 0 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(
          0x4Du,
          3u,
          "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_603, 0x%x\n",
          TargetDeviceObject,
          InterfaceSynchronously);
      *v14 = 152;
      *((_WORD *)v13 + 5) = 1538;
      *((_DWORD *)v13 + 54) = 1538;
      v19 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
              DeviceObject,
              TargetDeviceObject,
              &GUID_USBD_INTERFACE,
              (_INTERFACE *)(v13 + 2));
      v11 = v19;
      if ( v19 < 0 )
      {
        v20 = g_EnableDbgPrints == 0;
        *((_DWORD *)v13 + 54) = 1536;
        if ( !v20 )
          DbgPrintEx(
            0x4Du,
            3u,
            "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_602, 0x%x\n",
            TargetDeviceObject,
            v19);
        v11 = 0;
        v16 = 0;
LABEL_39:
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 3u, "USBD_CreateHandle Successful: usbdHandleInfo 0x%p\n", v13);
        if ( *((_DWORD *)v13 + 54) == 1536 )
        {
          memset(&usbBusInterface, 0, sizeof(usbBusInterface));
          *(_DWORD *)&usbBusInterface.Size = 65608;
          v17 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                  DeviceObject,
                  TargetDeviceObject,
                  &USB_BUS_INTERFACE_USBDI_GUID,
                  (_INTERFACE *)&usbBusInterface);
          v11 = v17;
          if ( v17 >= 0 )
          {
            IsDeviceHighSpeed = (unsigned __int8)usbBusInterface.IsDeviceHighSpeed;
            if ( usbBusInterface.IsDeviceHighSpeed )
              IsDeviceHighSpeed = usbBusInterface.IsDeviceHighSpeed(usbBusInterface.BusContext);
            *((_BYTE *)v13 + 224) = IsDeviceHighSpeed;
            usbBusInterface.InterfaceDereference(usbBusInterface.BusContext);
          }
          else
          {
            if ( g_EnableDbgPrints )
              DbgPrintEx(
                0x4Du,
                0,
                "Core stack (TargetDevieObject 0x%p) failed query to USB_BUS_INTERFACE_USBDI_GUID : USB_BUSIF_USBDI_VERSION_1, 0x%x\n",
                TargetDeviceObject,
                v17);
            *((_DWORD *)v13 + 54) = -1;
            v11 = 0;
          }
        }
        else if ( v11 < 0 )
        {
          if ( v16 )
          {
            v22 = (void (__fastcall *)(_QWORD))*((_QWORD *)v13 + 14);
            if ( v22 )
              v22(*((_QWORD *)v13 + 6));
          }
          ExFreePoolWithTag(v13, PoolTag);
          v5 = v24;
          goto LABEL_64;
        }
        *v24 = v13;
        goto LABEL_47;
      }
    }
    else
    {
      *((_DWORD *)v13 + 54) = *((unsigned __int16 *)v13 + 5);
    }
    v16 = 1;
    goto LABEL_39;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "USBDHandle cannot be NULL\n");
  return (unsigned int)-1073741811;
}
