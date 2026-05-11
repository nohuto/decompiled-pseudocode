/*
 * XREFs of USBD_QueryUsbCapability @ 0x1C00174F8
 * Callers:
 *     USBHwGetOffloadCapability @ 0x1C0033A44 (USBHwGetOffloadCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001010 (__security_check_cookie.c)
 *     USBDInternal_BuildandSendIoctlSynchronously @ 0x1C0016BD8 (USBDInternal_BuildandSendIoctlSynchronously.c)
 */

NTSTATUS __stdcall USBD_QueryUsbCapability(
        USBD_HANDLE USBDHandle,
        const GUID *CapabilityType,
        ULONG OutputBufferLength,
        PUCHAR OutputBuffer,
        PULONG ResultLength)
{
  NTSTATUS v7; // ebx
  int v8; // eax
  __int64 v9; // rax
  struct _DEVICE_OBJECT *v10; // rdx
  struct _DEVICE_OBJECT *v11; // rcx
  _DWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h]
  GUID v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+50h] [rbp-18h]
  ULONG v17; // [rsp+54h] [rbp-14h]

  if ( ResultLength )
    *ResultLength = 0;
  if ( KeGetCurrentIrql() )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "PASSIVE_LEVEL required\n");
    return -1073741811;
  }
  if ( !USBDHandle )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
    return -1073741811;
  }
  if ( !OutputBuffer )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "OutputBuffer cant be NULL if OutputBufferLength is not zero\n");
    return -1073741811;
  }
  v8 = *((_DWORD *)USBDHandle + 54);
  if ( v8 == -1 )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(
        0x4Du,
        0,
        "Could not exchange an interface with the Underlying USB core stack, querrying for capability is not possible\n");
    return -1073741822;
  }
  if ( v8 == 1536 )
  {
    if ( RtlCompareMemory(
           &GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD,
           &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE,
           0x10uLL) == 16 )
    {
      v7 = -1073741811;
      if ( g_EnableDbgPrints )
        DbgPrintEx(
          0x4Du,
          0,
          "OutputBuffer must be NULL for GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE\n");
    }
    else
    {
      if ( RtlCompareMemory(&GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0x10uLL) != 16 )
      {
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 0, "QueryUsbCapability not supported/implemented by core stack\n");
        return -1073741822;
      }
      v7 = -1073741811;
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "OutputBuffer must be NULL for GUID_USB_CAPABILITY_SELECTIVE_SUSPEND\n");
    }
  }
  else
  {
    v9 = *((_QWORD *)USBDHandle + 6);
    v10 = (struct _DEVICE_OBJECT *)*((_QWORD *)USBDHandle + 26);
    v11 = (struct _DEVICE_OBJECT *)*((_QWORD *)USBDHandle + 7);
    v13[1] = 0;
    v17 = 0;
    v15 = GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD;
    v13[0] = 2621441;
    v14 = v9;
    v16 = 4;
    v7 = USBDInternal_BuildandSendIoctlSynchronously(v11, v10, (struct _IRP *)OutputBuffer, (ULONG_PTR)v13);
    if ( v7 >= 0 && ResultLength )
      *ResultLength = v17;
  }
  return v7;
}
