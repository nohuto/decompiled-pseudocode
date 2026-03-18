/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x1407F7D34
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1407F7AA4 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlSetActiveTimeBias @ 0x14083F1E4 (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BD7CC (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     RtlGetPersistedStateLocation @ 0x1406C53D0 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x1406C61C0 (RtlpGetRegistryHandle.c)
 */

__int64 __fastcall RtlpGetTimeZoneInfoHandle(char a1, HANDLE *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp-238h] BYREF
  WCHAR v6[264]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_140C649C8 == 2 )
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  result = RtlGetPersistedStateLocation(
             L"TimeZoneInformationSettings",
             L"TargetNtPath",
             0LL,
             0,
             v6,
             0x208u,
             (unsigned int *)&v5);
  if ( (int)result >= 0 )
  {
    dword_140C649C8 = 1;
    result = RtlpGetRegistryHandle(0, v6, a1, a2);
    if ( (_DWORD)result == -1073741772 )
      return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  else if ( (_DWORD)result == -1073741772 )
  {
    dword_140C649C8 = 2;
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  return result;
}
