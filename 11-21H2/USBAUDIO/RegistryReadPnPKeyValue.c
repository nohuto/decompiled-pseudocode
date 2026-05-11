/*
 * XREFs of RegistryReadPnPKeyValue @ 0x1C0031C44
 * Callers:
 *     USBDeviceStart @ 0x1C0032B50 (USBDeviceStart.c)
 *     USBHwGetDeviceIDString @ 0x1C00338CC (USBHwGetDeviceIDString.c)
 * Callees:
 *     RegistryGetValue @ 0x1C003161C (RegistryGetValue.c)
 */

__int64 __fastcall RegistryReadPnPKeyValue(struct _DEVICE_OBJECT *a1, const WCHAR *a2, __int64 a3, _QWORD *a4)
{
  int Value; // ebx
  __int64 v7; // r8
  HANDLE Handle; // [rsp+20h] [rbp-18h] BYREF

  Handle = 0LL;
  Value = IoOpenDeviceRegistryKey(a1, 2u, 0xF003Fu, &Handle);
  if ( Value >= 0 )
  {
    Value = RegistryGetValue(Handle, a2, v7, a4);
    ZwClose(Handle);
  }
  return (unsigned int)Value;
}
