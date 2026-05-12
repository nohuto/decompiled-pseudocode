/*
 * XREFs of sub_1C0078B80 @ 0x1C0078B80
 * Callers:
 *     sub_1C0035A4C @ 0x1C0035A4C (sub_1C0035A4C.c)
 * Callees:
 *     sub_1C001AE00 @ 0x1C001AE00 (sub_1C001AE00.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C0078B80(int a1)
{
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR SourceString[256]; // [rsp+80h] [rbp-80h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  sub_1C001AE00(
    SourceString,
    0x200uLL,
    (__int64)L"%s\\Scsi Port %d",
    L"\\Registry\\Machine\\Hardware\\DeviceMap\\Scsi",
    a1);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  v2 = result;
  if ( result >= 0 )
  {
    ZwDeleteKey(KeyHandle);
    ZwClose(KeyHandle);
    return v2;
  }
  return result;
}
