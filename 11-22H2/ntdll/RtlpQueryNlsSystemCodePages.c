/*
 * XREFs of RtlpQueryNlsSystemCodePages @ 0x1800ADFE4
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800DE784 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToInteger @ 0x180076E90 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 */

__int64 __fastcall RtlpQueryNlsSystemCodePages(PULONG Value, PULONG a2)
{
  NTSTATUS v4; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-51h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-49h] BYREF
  _UNICODE_STRING String; // [rsp+50h] [rbp-39h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-19h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+A0h] [rbp+17h] BYREF
  int v13; // [rsp+A4h] [rbp+1Bh]
  WCHAR SourceString[11]; // [rsp+ACh] [rbp+23h] BYREF
  __int16 v15; // [rsp+C2h] [rbp+39h]

  *Value = 65001;
  *a2 = 65001;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\CodePage");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) < 0 )
    goto LABEL_9;
  RtlInitUnicodeString(&ValueName, L"ACP");
  v4 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x24u, &ResultLength);
  if ( v4 >= 0 )
  {
    if ( v13 != 1
      || (v15 = 0,
          RtlInitUnicodeString(&String, SourceString),
          v4 = RtlUnicodeStringToInteger(&String, 0xAu, Value),
          v4 >= 0) )
    {
      RtlInitUnicodeString(&ValueName, L"OEMCP");
      v4 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x24u, &ResultLength);
      if ( v4 >= 0 && v13 == 1 )
      {
        v15 = 0;
        RtlInitUnicodeString(&String, SourceString);
        v4 = RtlUnicodeStringToInteger(&String, 0xAu, a2);
      }
    }
  }
  NtClose(KeyHandle);
  if ( v4 < 0 )
  {
LABEL_9:
    *Value = 65001;
    *a2 = 65001;
  }
  return 0LL;
}
