/*
 * XREFs of sub_1409E2E08 @ 0x1409E2E08
 * Callers:
 *     sub_1406792F4 @ 0x1406792F4 (sub_1406792F4.c)
 *     sub_1407AC250 @ 0x1407AC250 (sub_1407AC250.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1409E2E08(__int64 a1, __int16 a2)
{
  __int64 *v2; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+38h] [rbp-20h]
  int v4; // [rsp+3Ch] [rbp-1Ch]
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  v2 = &v5;
  v4 = 0;
  v3 = 8;
  sub_14035EDE4((__int64)&v2, 1u, 0x80000400, a2 + 864, 0x501902u);
}
