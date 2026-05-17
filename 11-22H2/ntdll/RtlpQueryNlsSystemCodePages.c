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

__int64 __fastcall RtlpQueryNlsSystemCodePages(int *a1, int *a2)
{
  int ValueKey; // ebx
  HANDLE Handle; // [rsp+38h] [rbp-51h]
  UNICODE_STRING v7; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING v8; // [rsp+50h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  int v10; // [rsp+70h] [rbp-19h]
  __int64 v11; // [rsp+78h] [rbp-11h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-9h]
  int v13; // [rsp+88h] [rbp-1h]
  __int128 v14; // [rsp+90h] [rbp+7h]
  int v15; // [rsp+A4h] [rbp+1Bh]
  WCHAR SourceString[11]; // [rsp+ACh] [rbp+23h] BYREF
  __int16 v17; // [rsp+C2h] [rbp+39h]

  *a1 = 65001;
  *a2 = 65001;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\CodePage");
  v10 = 48;
  p_DestinationString = &DestinationString;
  v13 = 576;
  v11 = 0LL;
  v14 = 0LL;
  if ( (int)NtOpenKey() < 0 )
    goto LABEL_9;
  RtlInitUnicodeString(&v7, L"ACP");
  ValueKey = NtQueryValueKey();
  if ( ValueKey >= 0 )
  {
    if ( v15 != 1
      || (v17 = 0,
          RtlInitUnicodeString(&v8, SourceString),
          ValueKey = RtlUnicodeStringToInteger(&v8.Length, 0xAu, a1),
          ValueKey >= 0) )
    {
      RtlInitUnicodeString(&v7, L"OEMCP");
      ValueKey = NtQueryValueKey();
      if ( ValueKey >= 0 && v15 == 1 )
      {
        v17 = 0;
        RtlInitUnicodeString(&v8, SourceString);
        ValueKey = RtlUnicodeStringToInteger(&v8.Length, 0xAu, a2);
      }
    }
  }
  NtClose(Handle);
  if ( ValueKey < 0 )
  {
LABEL_9:
    *a1 = 65001;
    *a2 = 65001;
  }
  return 0LL;
}
