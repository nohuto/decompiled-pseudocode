/*
 * XREFs of RtlpHpOverrideGCInterval @ 0x1800FFC1C
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800B0C34 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     memset @ 0x1800AAE00 (memset.c)
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
  memset(v9, 0, sizeof(v9));
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (wchar_t *)v9;
  memset(KeyValueInformation, 0, 24);
  RtlAppendUnicodeStringToString(&Destination, &stru_18012D820);
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
               (PUNICODE_STRING)&stru_18012D840,
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
