/*
 * XREFs of RegistryReadName @ 0x1C0031850
 * Callers:
 *     PropertyGetPinName @ 0x1C002F750 (PropertyGetPinName.c)
 * Callees:
 *     RegistryReadNameValue @ 0x1C0031A24 (RegistryReadNameValue.c)
 */

NTSTATUS __fastcall RegistryReadName(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // rdi
  struct _DEVICE_OBJECT *v9; // rcx
  NTSTATUS result; // eax
  NTSTATUS v11; // ebx
  NTSTATUS NameValue; // ebx
  void *DeviceRegKey; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  void *KeyHandle; // [rsp+A0h] [rbp+20h] BYREF

  v5 = a5;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  *a5 = 0;
  v9 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  result = IoOpenDeviceRegistryKey(v9, 2u, 0x20019u, &DeviceRegKey);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"MediaCategories");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    ZwClose(DeviceRegKey);
    DeviceRegKey = 0LL;
    if ( v11 < 0
      || (NameValue = RegistryReadNameValue(KeyHandle, a2, a3, a4, v5),
          ZwClose(KeyHandle),
          KeyHandle = 0LL,
          NameValue < 0)
      && NameValue != -2147483643
      && NameValue != -1073741789 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\MediaCategories");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      NameValue = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( NameValue >= 0 )
      {
        NameValue = RegistryReadNameValue(KeyHandle, a2, a3, a4, v5);
        ZwClose(KeyHandle);
      }
    }
    return NameValue;
  }
  return result;
}
