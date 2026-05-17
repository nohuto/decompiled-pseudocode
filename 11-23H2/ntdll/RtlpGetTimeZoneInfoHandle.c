/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x18005E310
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x18005E110 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1800FB238 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlpGetRegistryHandle @ 0x18000AAF8 (RtlpGetRegistryHandle.c)
 *     RtlGetPersistedStateLocation @ 0x18000B480 (RtlGetPersistedStateLocation.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetTimeZoneInfoHandle(char a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp-238h] BYREF
  _BYTE v6[528]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_180187D5C == 2 )
    return RtlpGetRegistryHandle(2, (__int64)L"TimeZoneInformation", a1, a2);
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
    dword_180187D5C = 1;
    result = RtlpGetRegistryHandle(0, (__int64)v6, a1, a2);
    if ( (_DWORD)result == -1073741772 )
      return RtlpGetRegistryHandle(2, (__int64)L"TimeZoneInformation", a1, a2);
  }
  else if ( (_DWORD)result == -1073741772 )
  {
    dword_180187D5C = 2;
    return RtlpGetRegistryHandle(2, (__int64)L"TimeZoneInformation", a1, a2);
  }
  return result;
}
