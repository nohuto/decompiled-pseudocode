/*
 * XREFs of sub_1C007E890 @ 0x1C007E890
 * Callers:
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C007D268 @ 0x1C007D268 (sub_1C007D268.c)
 *     sub_1C007F44C @ 0x1C007F44C (sub_1C007F44C.c)
 */

__int64 __fastcall sub_1C007E890(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _OWORD v5[2]; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+60h] [rbp-18h]

  v6 = 0;
  memset(v5, 0, sizeof(v5));
  result = sub_1C007D268(a1, a2, 0xB00008402LL, 3u, (__int64)v5 + 4, 32, v5);
  if ( (int)result >= 0 )
    return sub_1C007F44C(a1, a2, 0x900000006LL, v5);
  return result;
}
