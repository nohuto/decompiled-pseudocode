/*
 * XREFs of IopGetOriginalServiceName @ 0x140837094
 * Callers:
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     IopGetRootDeviceId @ 0x140837008 (IopGetRootDeviceId.c)
 * Callees:
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     PipOpenServiceEnumKeys @ 0x14068E904 (PipOpenServiceEnumKeys.c)
 *     _RegRtlQueryValue @ 0x1406CE918 (_RegRtlQueryValue.c)
 */

NTSTATUS __fastcall IopGetOriginalServiceName(UNICODE_STRING *a1, void *a2, unsigned int *a3)
{
  NTSTATUS result; // eax
  int v6; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  Handle = 0LL;
  result = PipOpenServiceEnumKeys(a1, 0x20019u, &Handle, 0LL, 0);
  if ( result >= 0 )
  {
    v6 = RegRtlQueryValue(Handle, L"OriginalServiceName", &v8, a2, a3);
    if ( v6 >= 0 && (v8 != 1 || *a3 <= 2) )
      v6 = -1073741762;
    ZwClose(Handle);
    return v6;
  }
  return result;
}
