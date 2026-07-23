/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x1407F8004
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1407F7D74 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlSetActiveTimeBias @ 0x14083F4E4 (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BD9CC (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     RtlGetPersistedStateLocation @ 0x1406C5400 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x1406C61F0 (RtlpGetRegistryHandle.c)
 */

int __fastcall RtlpGetTimeZoneInfoHandle(char a1, HANDLE *a2)
{
  int result; // eax
  ULONG BufferLengthOut[4]; // [rsp+40h] [rbp-238h] BYREF
  WCHAR TargetPath[264]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_140C649C8 == 2 )
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  result = RtlGetPersistedStateLocation(
             L"TimeZoneInformationSettings",
             L"TargetNtPath",
             0LL,
             LocationTypeRegistry,
             TargetPath,
             0x208u,
             BufferLengthOut);
  if ( result >= 0 )
  {
    dword_140C649C8 = 1;
    result = RtlpGetRegistryHandle(0, TargetPath, a1, a2);
    if ( result == -1073741772 )
      return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  else if ( result == -1073741772 )
  {
    dword_140C649C8 = 2;
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  return result;
}
