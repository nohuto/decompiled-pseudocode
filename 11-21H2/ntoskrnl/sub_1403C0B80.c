/*
 * XREFs of sub_1403C0B80 @ 0x1403C0B80
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     sub_140828DE0 @ 0x140828DE0 (sub_140828DE0.c)
 *     sub_140828F18 @ 0x140828F18 (sub_140828F18.c)
 */

__int64 __fastcall sub_1403C0B80(__int64 a1)
{
  bool v1; // di
  __int64 v2; // rcx
  HANDLE KeyHandle; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v8; // [rsp+60h] [rbp-10h]

  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  v8 = 0;
  v1 = 1;
  KeyValueInformation = 0LL;
  if ( (int)sub_140828F18(a1, &KeyHandle) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"LidReliabilityState");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength) >= 0 )
      v1 = BYTE12(KeyValueInformation) != 0;
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  LOBYTE(v2) = v1;
  return sub_140828DE0(v2);
}
