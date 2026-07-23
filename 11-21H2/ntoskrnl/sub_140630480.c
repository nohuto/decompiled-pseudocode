/*
 * XREFs of sub_140630480 @ 0x140630480
 * Callers:
 *     sub_140423360 @ 0x140423360 (sub_140423360.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140630480(int a1)
{
  int *v1; // [rsp+30h] [rbp-28h] BYREF
  int v2; // [rsp+38h] [rbp-20h]
  int v3; // [rsp+3Ch] [rbp-1Ch]
  int v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  v3 = 0;
  v1 = &v4;
  v2 = 2;
  sub_14035EDE4((__int64)&v1, 1u, 0x20004000u, 0xF5Cu, 0x400A02u);
}
