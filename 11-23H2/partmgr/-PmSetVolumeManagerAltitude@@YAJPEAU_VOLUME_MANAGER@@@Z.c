/*
 * XREFs of ?PmSetVolumeManagerAltitude@@YAJPEAU_VOLUME_MANAGER@@@Z @ 0x1C0022F08
 * Callers:
 *     ?PmVolumeManagerArrival@@YAJPEAU_CONTROL_EXTENSION@@PEAU_UNICODE_STRING@@@Z @ 0x1C000AEE4 (-PmVolumeManagerArrival@@YAJPEAU_CONTROL_EXTENSION@@PEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 */

__int64 __fastcall PmSetVolumeManagerAltitude(struct _VOLUME_MANAGER *a1)
{
  __int64 v2; // rcx
  _QWORD *DeviceExtension; // rsi
  NTSTATUS DevicePropertyData; // ebx
  __int64 v5; // rcx
  unsigned int v6; // ecx
  int v7; // eax
  ULONG ResultLength; // [rsp+40h] [rbp-29h] BYREF
  ULONG Type; // [rsp+44h] [rbp-25h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-21h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+98h] [rbp+2Fh] BYREF
  int v16; // [rsp+9Ch] [rbp+33h]
  int v17; // [rsp+A0h] [rbp+37h]
  int v18; // [rsp+A4h] [rbp+3Bh]

  KeyHandle = 0LL;
  Type = 0;
  v2 = *((_QWORD *)a1 + 6);
  DeviceExtension = PmControlObject->DeviceExtension;
  Handle = 0LL;
  ResultLength = 0;
  ValueName = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DevicePropertyData = IoGetDevicePropertyData(
                         *(PDEVICE_OBJECT *)(v2 + 8),
                         &DEVPKEY_Device_Service,
                         0,
                         0,
                         0,
                         0LL,
                         &ResultLength,
                         &Type);
  if ( DevicePropertyData == -1073741789 )
  {
    ValueName.Buffer = (PWSTR)ExAllocatePool2(64LL, ResultLength, 1163291984LL);
    if ( !ValueName.Buffer )
      return (unsigned int)-1073741670;
    v5 = *((_QWORD *)a1 + 6);
    ValueName.MaximumLength = ResultLength;
    ValueName.Length = ResultLength - 2;
    DevicePropertyData = IoGetDevicePropertyData(
                           *(PDEVICE_OBJECT *)(v5 + 8),
                           &DEVPKEY_Device_Service,
                           0,
                           0,
                           ResultLength,
                           ValueName.Buffer,
                           &ResultLength,
                           &Type);
  }
  if ( DevicePropertyData >= 0 )
  {
    DevicePropertyData = IoOpenDriverRegistryKey(DeviceExtension[1], 0LL, 131097LL, 0LL, &Handle);
    if ( DevicePropertyData >= 0 )
    {
      ObjectAttributes.RootDirectory = Handle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)VolmgrAltitudes;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      DevicePropertyData = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      ZwClose(Handle);
      if ( DevicePropertyData >= 0 )
      {
        DevicePropertyData = ZwQueryValueKey(
                               KeyHandle,
                               &ValueName,
                               KeyValuePartialInformation,
                               KeyValueInformation,
                               0x10u,
                               &ResultLength);
        ZwClose(KeyHandle);
        if ( DevicePropertyData >= 0 && v16 == 4 && v17 == 4 )
        {
          v6 = v18;
        }
        else
        {
          v6 = 31;
          v18 = 31;
        }
        v7 = v6;
        if ( v6 > 0x20 )
          v7 = 31;
        *((_DWORD *)a1 + 14) = v7;
      }
    }
  }
  if ( ValueName.Buffer )
    ExFreePoolWithTag(ValueName.Buffer, 0);
  return (unsigned int)DevicePropertyData;
}
