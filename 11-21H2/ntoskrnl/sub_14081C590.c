/*
 * XREFs of sub_14081C590 @ 0x14081C590
 * Callers:
 *     sub_1408082AC @ 0x1408082AC (sub_1408082AC.c)
 *     sub_14082910C @ 0x14082910C (sub_14082910C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 */

NTSTATUS __fastcall sub_14081C590(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess)
{
  const WCHAR *v4; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( !KeyHandle )
    return -1073741811;
  v4 = qword_140C23730;
  if ( !qword_140C23730 )
    return -1073741811;
  *KeyHandle = (HANDLE)-1LL;
  RtlInitUnicodeString(&DestinationString, v4);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( (DesiredAccess & 0x20006) == 0x20006 )
    return ZwCreateKey(KeyHandle, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
  else
    return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
