/*
 * XREFs of ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002C654
 * Callers:
 *     ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x1C0060AA4 (-ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0111478 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C0112258 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C0120188 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x1C0120228 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C012EA74 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_0 @ 0x1C002C690 (RtlStringVPrintfWorkerW_0.c)
 */

NTSTATUS RtlStringCchPrintfW(wchar_t *a1, size_t a2, wchar_t *a3, ...)
{
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( a2 - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW_0(a1, a2, (size_t *)a3, a3, va);
  result = -1073741811;
  if ( a2 )
    *a1 = 0;
  return result;
}
