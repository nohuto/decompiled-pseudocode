/*
 * XREFs of USBD_CreateHandle @ 0x1C0018624
 * Callers:
 *     USBHwGetOffloadCapability @ 0x1C0032540 (USBHwGetOffloadCapability.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0032A24 (USBHwSelectStreamingAudioInterfaceSideband.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009730 (__security_check_cookie.c)
 *     USBDInternal_BuildAndSendQueryInterfaceSynchronously @ 0x1C0017EC0 (USBDInternal_BuildAndSendQueryInterfaceSynchronously.c)
 *     USBDInternal_BuildServicePath @ 0x1C001803C (USBDInternal_BuildServicePath.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C0018314 (USBDInternal_QueryUsbVerifierSettings.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AF80 (memset.c)
 */

NTSTATUS __stdcall USBD_CreateHandle(
        PDEVICE_OBJECT DeviceObject,
        PDEVICE_OBJECT TargetDeviceObject,
        ULONG USBDClientContractVersion,
        ULONG PoolTag,
        USBD_HANDLE *USBDHandle)
{
  USBD_HANDLE *v5; // r14
  void *v6; // rsi
  NTSTATUS v10; // ebx
  USBD_HANDLE PoolWithTag; // rax
  USBD_HANDLE v12; // rdi
  _WORD *v13; // r14
  int InterfaceSynchronously; // eax
  char v15; // r14
  int v16; // eax
  int v18; // eax
  bool v19; // zf
  char v20; // al
  void (__fastcall *v21)(_QWORD); // rax
  void *v22; // [rsp+38h] [rbp-C8h] BYREF
  USBD_HANDLE *v23; // [rsp+40h] [rbp-C0h]
  _QWORD v24[10]; // [rsp+50h] [rbp-B0h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+A0h] [rbp-60h] BYREF

  v5 = USBDHandle;
  v23 = USBDHandle;
  v6 = 0LL;
  v22 = 0LL;
  if ( KeGetCurrentIrql() )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Irql Too High\n");
    v10 = -1073741496;
LABEL_18:
    if ( !USBDHandle )
      goto LABEL_41;
    goto LABEL_58;
  }
  if ( !byte_1C0024D9C )
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
  byte_1C0024D9C = 1;
  if ( !DeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "DeviceObject cannot be NULL\n");
LABEL_17:
    v10 = -1073741811;
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
    USBDInternal_BuildServicePath((__int64)DeviceObject, &v22, PoolTag);
    PoolWithTag = (USBD_HANDLE)ExAllocatePoolWithTag(PoolType, 0xE8uLL, PoolTag);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Allocation Failed\n");
      v6 = v22;
      v10 = -1073741670;
LABEL_58:
      *v5 = 0LL;
LABEL_41:
      if ( v6 )
        ExFreePoolWithTag(v6, PoolTag);
      return v10;
    }
    memset(PoolWithTag, 0, 0xE8uLL);
    v6 = v22;
    v13 = v12 + 2;
    if ( v22 )
      USBDInternal_QueryUsbVerifierSettings((__int64)DeviceObject, (__int64)v22, (__int64)(v12 + 2), PoolTag);
    *(_DWORD *)v12 = 1145197397;
    *v13 = 200;
    *((_QWORD *)v12 + 7) = DeviceObject;
    *((_WORD *)v12 + 5) = 1539;
    *((_DWORD *)v12 + 16) = PoolTag;
    *((_QWORD *)v12 + 9) = v12;
    *((_QWORD *)v12 + 26) = TargetDeviceObject;
    *((_DWORD *)v12 + 10) = 1538;
    *((_DWORD *)v12 + 54) = 1539;
    *((_DWORD *)v12 + 55) = 1;
    InterfaceSynchronously = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                               DeviceObject,
                               TargetDeviceObject,
                               (ULONG_PTR)&GUID_USBD_INTERFACE,
                               (USHORT *)v12 + 4);
    v10 = InterfaceSynchronously;
    if ( InterfaceSynchronously < 0 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(
          0x4Du,
          3u,
          "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_603, 0x%x\n",
          TargetDeviceObject,
          InterfaceSynchronously);
      *v13 = 152;
      *((_WORD *)v12 + 5) = 1538;
      *((_DWORD *)v12 + 54) = 1538;
      v18 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
              DeviceObject,
              TargetDeviceObject,
              (ULONG_PTR)&GUID_USBD_INTERFACE,
              (USHORT *)v12 + 4);
      v10 = v18;
      if ( v18 < 0 )
      {
        v19 = g_EnableDbgPrints == 0;
        *((_DWORD *)v12 + 54) = 1536;
        if ( !v19 )
          DbgPrintEx(
            0x4Du,
            3u,
            "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_602, 0x%x\n",
            TargetDeviceObject,
            v18);
        v10 = 0;
        v15 = 0;
LABEL_33:
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 3u, "USBD_CreateHandle Successful: usbdHandleInfo 0x%p\n", v12);
        if ( *((_DWORD *)v12 + 54) == 1536 )
        {
          memset(v24, 0, 0x48uLL);
          LODWORD(v24[0]) = 65608;
          v16 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                  DeviceObject,
                  TargetDeviceObject,
                  (ULONG_PTR)&USB_BUS_INTERFACE_USBDI_GUID,
                  (USHORT *)v24);
          v10 = v16;
          if ( v16 >= 0 )
          {
            v20 = v24[8];
            if ( v24[8] )
              v20 = ((__int64 (__fastcall *)(_QWORD))v24[8])(v24[1]);
            *((_BYTE *)v12 + 224) = v20;
            ((void (__fastcall *)(_QWORD))v24[3])(v24[1]);
          }
          else
          {
            if ( g_EnableDbgPrints )
              DbgPrintEx(
                0x4Du,
                0,
                "Core stack (TargetDevieObject 0x%p) failed query to USB_BUS_INTERFACE_USBDI_GUID : USB_BUSIF_USBDI_VERSION_1, 0x%x\n",
                TargetDeviceObject,
                v16);
            *((_DWORD *)v12 + 54) = -1;
            v10 = 0;
          }
        }
        else if ( v10 < 0 )
        {
          if ( v15 )
          {
            v21 = (void (__fastcall *)(_QWORD))*((_QWORD *)v12 + 14);
            if ( v21 )
              v21(*((_QWORD *)v12 + 6));
          }
          ExFreePoolWithTag(v12, PoolTag);
          v5 = v23;
          goto LABEL_58;
        }
        *v23 = v12;
        goto LABEL_41;
      }
    }
    else
    {
      *((_DWORD *)v12 + 54) = *((unsigned __int16 *)v12 + 5);
    }
    v15 = 1;
    goto LABEL_33;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "USBDHandle cannot be NULL\n");
  return -1073741811;
}
