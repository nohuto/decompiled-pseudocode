/*
 * XREFs of RegistryReadPnPKeyValue @ 0x1C002A07C
 * Callers:
 *     USBHwGetCaptureRequestSize @ 0x1C002A008 (USBHwGetCaptureRequestSize.c)
 *     USBHwGetDeviceIDString @ 0x1C0032210 (USBHwGetDeviceIDString.c)
 * Callees:
 *     RegistryGetValue @ 0x1C003093C (RegistryGetValue.c)
 */

__int64 __fastcall RegistryReadPnPKeyValue(struct _DEVICE_OBJECT *a1)
{
  NTSTATUS Value; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-18h] BYREF

  Handle = 0LL;
  Value = IoOpenDeviceRegistryKey(a1, 2u, 0xF003Fu, &Handle);
  if ( Value >= 0 )
  {
    Value = RegistryGetValue(Handle);
    ZwClose(Handle);
  }
  return (unsigned int)Value;
}
