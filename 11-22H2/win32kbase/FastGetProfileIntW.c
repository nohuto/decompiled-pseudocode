/*
 * XREFs of FastGetProfileIntW @ 0x1C0033AC0
 * Callers:
 *     xxxRemoteConnect @ 0x1C00115D0 (xxxRemoteConnect.c)
 *     FastGetProfileIntsW @ 0x1C00618A0 (FastGetProfileIntsW.c)
 *     FastGetProfileIntFromID @ 0x1C0061E60 (FastGetProfileIntFromID.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00A2650 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     FastGetProfileStringW @ 0x1C0037000 (FastGetProfileStringW.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileIntW(__int64 a1, __int64 a2, __int64 a3, ULONG a4, PULONG Value, int a6)
{
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  WCHAR SourceString[40]; // [rsp+50h] [rbp-78h] BYREF

  DestinationString = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, a2, a3, 0LL, SourceString, 40, a6) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0xAu, Value);
    return 1LL;
  }
  if ( (a6 & 0x10) == 0 )
  {
    *Value = a4;
    return 1LL;
  }
  return 0LL;
}
