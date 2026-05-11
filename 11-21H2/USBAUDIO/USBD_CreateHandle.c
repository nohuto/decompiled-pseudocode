/*
 * XREFs of USBD_CreateHandle @ 0x1C0017070
 * Callers:
 *     USBHwGetOffloadCapability @ 0x1C0033A44 (USBHwGetOffloadCapability.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0034D38 (USBHwSelectStreamingAudioInterfaceSideband.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001010 (__security_check_cookie.c)
 *     USBDInternal_BuildAndSendQueryInterfaceSynchronously @ 0x1C001683C (USBDInternal_BuildAndSendQueryInterfaceSynchronously.c)
 *     USBDInternal_BuildServicePath @ 0x1C00169B8 (USBDInternal_BuildServicePath.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C0016D3C (USBDInternal_QueryUsbVerifierSettings.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019940 (memset.c)
 */

NTSTATUS __stdcall USBD_CreateHandle(
        PDEVICE_OBJECT DeviceObject,
        PDEVICE_OBJECT TargetDeviceObject,
        ULONG USBDClientContractVersion,
        ULONG PoolTag,
        USBD_HANDLE *USBDHandle)
{
  void *v5; // rsi
  NTSTATUS v9; // ebx
  USBD_HANDLE PoolWithTag; // rax
  USBD_HANDLE v11; // rdi
  int InterfaceSynchronously; // eax
  int v13; // eax
  int v15; // eax
  bool v16; // zf
  char v17; // al
  void (__fastcall *v18)(_QWORD); // rax
  char v19; // [rsp+30h] [rbp-D0h]
  void *v20; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v21[10]; // [rsp+40h] [rbp-C0h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+90h] [rbp-70h] BYREF

  v19 = 0;
  v5 = 0LL;
  v20 = 0LL;
  if ( KeGetCurrentIrql() )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Irql Too High\n");
    v9 = -1073741496;
LABEL_18:
    if ( !USBDHandle )
      goto LABEL_41;
    goto LABEL_58;
  }
  if ( !byte_1C0022D9C )
  {
    PoolType = NonPagedPool;
    memset(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
    VersionInformation.dwOSVersionInfoSize = 284;
    if ( RtlGetVersion(&VersionInformation) >= 0
      && (VersionInformation.dwMajorVersion > 6
       || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
    {
      PoolType = 512;
    }
  }
  byte_1C0022D9C = 1;
  if ( !DeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "DeviceObject cannot be NULL\n");
LABEL_17:
    v9 = -1073741811;
    goto LABEL_18;
  }
  if ( !TargetDeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "TargetDeviceObject cannot be NULL\n");
    goto LABEL_17;
  }
  if ( USBDHandle )
  {
    USBDInternal_BuildServicePath((__int64)DeviceObject, &v20, PoolTag);
    PoolWithTag = (USBD_HANDLE)ExAllocatePoolWithTag(PoolType, 0xE8uLL, PoolTag);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Allocation Failed\n");
      v5 = v20;
      v9 = -1073741670;
LABEL_58:
      *USBDHandle = 0LL;
LABEL_41:
      if ( v5 )
        ExFreePoolWithTag(v5, PoolTag);
      return v9;
    }
    memset(PoolWithTag, 0, 0xE8uLL);
    v5 = v20;
    if ( v20 )
      USBDInternal_QueryUsbVerifierSettings((__int64)DeviceObject, (__int64)v20, (__int64)(v11 + 2), PoolTag);
    *(_DWORD *)v11 = 1145197397;
    *((_DWORD *)v11 + 54) = 1539;
    *((_DWORD *)v11 + 2) = 100860104;
    *((_QWORD *)v11 + 7) = DeviceObject;
    *((_DWORD *)v11 + 16) = PoolTag;
    *((_DWORD *)v11 + 10) = 1538;
    *((_QWORD *)v11 + 9) = v11;
    *((_QWORD *)v11 + 26) = TargetDeviceObject;
    *((_DWORD *)v11 + 55) = 1;
    InterfaceSynchronously = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                               DeviceObject,
                               TargetDeviceObject,
                               (ULONG_PTR)&GUID_USBD_INTERFACE,
                               (USHORT *)v11 + 4);
    v9 = InterfaceSynchronously;
    if ( InterfaceSynchronously < 0 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(
          0x4Du,
          3u,
          "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_603, 0x%x\n",
          TargetDeviceObject,
          InterfaceSynchronously);
      *((_WORD *)v11 + 4) = 152;
      *((_WORD *)v11 + 5) = 1538;
      *((_DWORD *)v11 + 54) = 1538;
      v15 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
              DeviceObject,
              TargetDeviceObject,
              (ULONG_PTR)&GUID_USBD_INTERFACE,
              (USHORT *)v11 + 4);
      v9 = v15;
      if ( v15 < 0 )
      {
        v16 = g_EnableDbgPrints == 0;
        *((_DWORD *)v11 + 54) = 1536;
        if ( !v16 )
          DbgPrintEx(
            0x4Du,
            3u,
            "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_602, 0x%x\n",
            TargetDeviceObject,
            v15);
        v9 = 0;
LABEL_33:
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 3u, "USBD_CreateHandle Successful: usbdHandleInfo 0x%p\n", v11);
        if ( *((_DWORD *)v11 + 54) == 1536 )
        {
          memset(v21, 0, 0x48uLL);
          LODWORD(v21[0]) = 65608;
          v13 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                  DeviceObject,
                  TargetDeviceObject,
                  (ULONG_PTR)&USB_BUS_INTERFACE_USBDI_GUID,
                  (USHORT *)v21);
          v9 = v13;
          if ( v13 >= 0 )
          {
            v17 = v21[8];
            if ( v21[8] )
              v17 = ((__int64 (__fastcall *)(_QWORD))v21[8])(v21[1]);
            *((_BYTE *)v11 + 224) = v17;
            ((void (__fastcall *)(_QWORD))v21[3])(v21[1]);
          }
          else
          {
            if ( g_EnableDbgPrints )
              DbgPrintEx(
                0x4Du,
                0,
                "Core stack (TargetDevieObject 0x%p) failed query to USB_BUS_INTERFACE_USBDI_GUID : USB_BUSIF_USBDI_VERSION_1, 0x%x\n",
                TargetDeviceObject,
                v13);
            *((_DWORD *)v11 + 54) = -1;
            v9 = 0;
          }
        }
        else if ( v9 < 0 )
        {
          if ( v19 )
          {
            v18 = (void (__fastcall *)(_QWORD))*((_QWORD *)v11 + 14);
            if ( v18 )
              v18(*((_QWORD *)v11 + 6));
          }
          ExFreePoolWithTag(v11, PoolTag);
          goto LABEL_58;
        }
        *USBDHandle = v11;
        goto LABEL_41;
      }
    }
    else
    {
      *((_DWORD *)v11 + 54) = *((unsigned __int16 *)v11 + 5);
    }
    v19 = 1;
    goto LABEL_33;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "USBDHandle cannot be NULL\n");
  return -1073741811;
}
