/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x180009644
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x180009444 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1800F9D28 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlpGetRegistryHandle @ 0x18000A5F4 (RtlpGetRegistryHandle.c)
 *     RtlGetPersistedStateLocation @ 0x180050B20 (RtlGetPersistedStateLocation.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetTimeZoneInfoHandle(char a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp-238h] BYREF
  _BYTE v7[528]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_18017AA4C == 2 )
    goto LABEL_2;
  result = RtlGetPersistedStateLocation(L"TimeZoneInformationSettings", v7, 520, (__int64)&v6);
  if ( (int)result >= 0 )
  {
    dword_18017AA4C = 1;
    LOBYTE(a3) = a1;
    result = RtlpGetRegistryHandle(0LL, v7, a3, a2);
    if ( (_DWORD)result != -1073741772 )
      return result;
    goto LABEL_2;
  }
  if ( (_DWORD)result == -1073741772 )
  {
    dword_18017AA4C = 2;
LABEL_2:
    LOBYTE(a3) = a1;
    return RtlpGetRegistryHandle(2LL, L"TimeZoneInformation", a3, a2);
  }
  return result;
}
