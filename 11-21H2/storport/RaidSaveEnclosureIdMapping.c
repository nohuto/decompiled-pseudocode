/*
 * XREFs of RaidSaveEnclosureIdMapping @ 0x1C003F7D4
 * Callers:
 *     ShimGetMsftId @ 0x1C0065350 (ShimGetMsftId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSaveEnclosureIdMapping(PVOID ValueData, ULONG ValueLength, const GUID *Guid)
{
  char v6; // di
  NTSTATUS v7; // ebx
  struct _UNICODE_STRING GuidString; // [rsp+48h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF
  void *KeyHandle; // [rsp+D0h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v6 = 0;
  DestinationString = 0LL;
  GuidString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\EnclosureIdMappings");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v7 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v7 >= 0 )
  {
    v6 = 1;
    v7 = RtlStringFromGUID(Guid, &GuidString);
    if ( v7 >= 0 )
      v7 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, GuidString.Buffer, 3u, ValueData, ValueLength);
  }
  RtlFreeUnicodeString(&GuidString);
  if ( v6 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v7;
}
