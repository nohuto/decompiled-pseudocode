/*
 * XREFs of RtlpHpOverrideGCInterval @ 0x1800FF848
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800AE4B8 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180019500 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

int __fastcall RtlpHpOverrideGCInterval(unsigned __int16 *a1)
{
  const WCHAR *i; // rdx
  int result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD KeyValueInformation[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v9[512]; // [rsp+B0h] [rbp-50h] BYREF

  for ( i = (const WCHAR *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)); *i != 92; --i )
    ;
  RtlInitUnicodeString(&DestinationString, i);
  KeyHandle = 0LL;
  memset_thunk_772440563353939046(v9, 0, 0x200uLL);
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (wchar_t *)v9;
  memset(KeyValueInformation, 0, 24);
  RtlAppendUnicodeStringToString(&Destination, &stru_180132878);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = NtQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_180132898,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x18u,
               &ResultLength);
    if ( result >= 0 )
    {
      result = -10000000 * HIDWORD(KeyValueInformation[0]);
      RtlpHpGCInterval.QuadPart = -10000000LL * *(_QWORD *)((char *)KeyValueInformation + 12);
    }
  }
  if ( KeyHandle )
    return NtClose(KeyHandle);
  return result;
}
