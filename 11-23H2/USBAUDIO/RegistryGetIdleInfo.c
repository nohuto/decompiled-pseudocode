/*
 * XREFs of RegistryGetIdleInfo @ 0x1C00306C0
 * Callers:
 *     DeviceStart @ 0x1C002A450 (DeviceStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegistryGetIdleInfo(struct _DEVICE_OBJECT *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *Pool2; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-29h] BYREF
  struct _UNICODE_STRING v11; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING v12; // [rsp+60h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+D8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+E0h] [rbp+77h] BYREF
  void *DeviceRegKey; // [rsp+E8h] [rbp+7Fh] BYREF

  *a3 = 0;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  *a2 = 30;
  *a4 = 4;
  if ( IoOpenDeviceRegistryKey(a1, 2u, 0x20019u, &DeviceRegKey) >= 0 )
  {
    *(&ObjectAttributes.Attributes + 1) = 0;
    *(&ObjectAttributes.Length + 1) = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"PowerSettings");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ResultLength = 0;
      ValueName = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      RtlInitUnicodeString(&ValueName, L"ConservationIdleTime");
      RtlInitUnicodeString(&v11, L"PerformanceIdleTime");
      RtlInitUnicodeString(&v12, L"IdlePowerState");
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 1096972357LL);
      if ( Pool2 )
      {
        if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, 0x14u, &ResultLength) >= 0
          && Pool2[2] == 4 )
        {
          *a2 = Pool2[3];
        }
        if ( ZwQueryValueKey(KeyHandle, &v11, KeyValuePartialInformation, Pool2, 0x14u, &ResultLength) >= 0
          && Pool2[2] == 4 )
        {
          *a3 = Pool2[3];
        }
        if ( ZwQueryValueKey(KeyHandle, &v12, KeyValuePartialInformation, Pool2, 0x14u, &ResultLength) >= 0
          && Pool2[2] == 4 )
        {
          switch ( Pool2[3] )
          {
            case 1:
              *a4 = 2;
              break;
            case 2:
              *a4 = 3;
              break;
            case 3:
              *a4 = 4;
              break;
            default:
              *a4 = 1;
              break;
          }
        }
        ExFreePool(Pool2);
      }
      ZwClose(KeyHandle);
    }
    ZwClose(DeviceRegKey);
  }
  return 0LL;
}
