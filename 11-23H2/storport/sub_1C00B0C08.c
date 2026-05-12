/*
 * XREFs of sub_1C00B0C08 @ 0x1C00B0C08
 * Callers:
 *     sub_1C00B0A6C @ 0x1C00B0A6C (sub_1C00B0A6C.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00B1174 @ 0x1C00B1174 (sub_1C00B1174.c)
 *     sub_1C00B1220 @ 0x1C00B1220 (sub_1C00B1220.c)
 *     sub_1C00B12D0 @ 0x1C00B12D0 (sub_1C00B12D0.c)
 *     sub_1C00B1390 @ 0x1C00B1390 (sub_1C00B1390.c)
 *     sub_1C00B1448 @ 0x1C00B1448 (sub_1C00B1448.c)
 */

__int64 __fastcall sub_1C00B0C08(HANDLE KeyHandle)
{
  _BYTE KeyValueInformation[512]; // [rsp+20h] [rbp-218h] BYREF

  sub_1C00B1174(KeyHandle, KeyValueInformation);
  sub_1C00B1220(KeyHandle, KeyValueInformation);
  sub_1C00B12D0(KeyHandle, KeyValueInformation);
  sub_1C00B1390(KeyHandle, KeyValueInformation);
  return sub_1C00B1448(KeyHandle, KeyValueInformation);
}
