/*
 * XREFs of sub_1C001E2F8 @ 0x1C001E2F8
 * Callers:
 *     sub_1C001DFEC @ 0x1C001DFEC (sub_1C001DFEC.c)
 * Callees:
 *     sub_1C001AE00 @ 0x1C001AE00 (sub_1C001AE00.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C001E2F8(int a1, int a2, int a3, int a4)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR SourceString[256]; // [rsp+90h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  sub_1C001AE00(
    SourceString,
    0x200uLL,
    (__int64)L"%s\\Scsi Port %d\\SCSI Bus %d\\Target Id %d\\Logical Unit Id %d",
    L"\\Registry\\Machine\\Hardware\\DeviceMap\\Scsi",
    a1,
    a2,
    a3,
    a4);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  v5 = result;
  if ( result >= 0 )
  {
    ZwDeleteKey(KeyHandle);
    ZwClose(KeyHandle);
    return v5;
  }
  return result;
}
