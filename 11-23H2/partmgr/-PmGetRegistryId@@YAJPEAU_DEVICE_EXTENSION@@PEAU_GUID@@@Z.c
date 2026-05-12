/*
 * XREFs of ?PmGetRegistryId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_GUID@@@Z @ 0x1C0021DEC
 * Callers:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     memset @ 0x1C000BA40 (memset.c)
 *     ?PmOpenDeviceParameter@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAX@Z @ 0x1C0022170 (-PmOpenDeviceParameter@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAX@Z.c)
 */

__int64 __fastcall PmGetRegistryId(struct _DEVICE_EXTENSION *a1, struct _GUID *a2)
{
  NTSTATUS v4; // ebx
  int RegistryValues; // eax
  NTSTATUS v6; // eax
  PCWSTR Path; // [rsp+30h] [rbp-69h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v10[14]; // [rsp+50h] [rbp-49h] BYREF
  UUID Uuid; // [rsp+C0h] [rbp+27h] BYREF

  Path = 0LL;
  Uuid = 0LL;
  GuidString = 0LL;
  memset(v10, 0, sizeof(v10));
  *a2 = GUID_NULL;
  v4 = PmOpenDeviceParameter(a1, (void **)&Path);
  if ( v4 >= 0 )
  {
    v10[0] = 0LL;
    v10[2] = L"DiskId";
    v10[3] = &GuidString;
    LODWORD(v10[1]) = 292;
    LODWORD(v10[4]) = 0x1000000;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Path, v10);
    v4 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      v6 = RtlGUIDFromString(&GuidString, &Uuid);
    }
    else
    {
      if ( RegistryValues != -1073741772 )
        goto LABEL_9;
      v4 = ExUuidCreate(&Uuid);
      if ( v4 < 0 )
        goto LABEL_9;
      v4 = RtlStringFromGUID(&Uuid, &GuidString);
      if ( v4 < 0 )
        goto LABEL_9;
      v6 = RtlWriteRegistryValue(0x40000000u, Path, L"DiskId", 1u, GuidString.Buffer, GuidString.MaximumLength);
    }
    v4 = v6;
    if ( v6 >= 0 )
      *a2 = Uuid;
  }
LABEL_9:
  RtlFreeUnicodeString(&GuidString);
  if ( Path )
    ZwClose((HANDLE)Path);
  return (unsigned int)v4;
}
