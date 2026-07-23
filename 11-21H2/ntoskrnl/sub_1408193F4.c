/*
 * XREFs of sub_1408193F4 @ 0x1408193F4
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     NaptrDnsRecordConvert_1 @ 0x140801108 (NaptrDnsRecordConvert_1.c)
 *     sub_140818E88 @ 0x140818E88 (sub_140818E88.c)
 *     sub_1408292C0 @ 0x1408292C0 (sub_1408292C0.c)
 *     sub_140862D20 @ 0x140862D20 (sub_140862D20.c)
 *     sub_1409895EC @ 0x1409895EC (sub_1409895EC.c)
 *     sub_140990740 @ 0x140990740 (sub_140990740.c)
 *     sub_140994860 @ 0x140994860 (sub_140994860.c)
 *     sub_140995040 @ 0x140995040 (sub_140995040.c)
 *     sub_1409952B8 @ 0x1409952B8 (sub_1409952B8.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403B1A2C @ 0x1403B1A2C (sub_1403B1A2C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1408194D8 @ 0x1408194D8 (sub_1408194D8.c)
 *     sub_1408626B8 @ 0x1408626B8 (sub_1408626B8.c)
 */

__int64 sub_1408193F4()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  __int64 v2; // r9
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-B0h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  memset(KeyValueInformation, 0, 0xF8uLL);
  result = sub_1403B1A2C((__int64)&KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemPowerPolicy");
    v1 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0xF8u,
           &ResultLength);
    if ( v1 < 0 )
    {
      sub_1408626B8(&KeyValueInformation[12]);
      v2 = 232LL;
    }
    else
    {
      v2 = ResultLength - 12;
    }
    ResultLength = v2;
    sub_1408194D8(0LL, 0LL, &KeyValueInformation[12], v2);
    ZwClose(KeyHandle);
    return (unsigned int)v1;
  }
  return result;
}
