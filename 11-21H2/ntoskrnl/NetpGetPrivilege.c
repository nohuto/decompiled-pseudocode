/*
 * XREFs of NetpGetPrivilege @ 0x14093FF38
 * Callers:
 *     sub_140746270 @ 0x140746270 (sub_140746270.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     sub_14082EC0C @ 0x14082EC0C (sub_14082EC0C.c)
 */

bool __fastcall NetpGetPrivilege(PCWSTR SourceString)
{
  int v2; // eax
  HANDLE v3; // rdi
  NTSTATUS v4; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+2Fh] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  v2 = sub_14082EC0C((__int64)SourceString, 0xF003Fu, &Handle);
  v3 = Handle;
  v4 = v2;
  if ( v2 >= 0 )
  {
    *(_DWORD *)&DestinationString.Length = 1572886;
    DestinationString.Buffer = L"ComputerIds";
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = Handle;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v4 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v4 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValueBasicInformation,
             &KeyValueInformation,
             0x10u,
             &ResultLength);
      if ( v4 == -2147483643 )
        v4 = 0;
    }
  }
  if ( v3 )
    ZwClose(v3);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4 >= 0;
}
