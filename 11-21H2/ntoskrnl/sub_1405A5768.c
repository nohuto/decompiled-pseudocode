/*
 * XREFs of sub_1405A5768 @ 0x1405A5768
 * Callers:
 *     sub_14029A2A0 @ 0x14029A2A0 (sub_14029A2A0.c)
 *     sub_1402C1900 @ 0x1402C1900 (sub_1402C1900.c)
 *     sub_1402F4B70 @ 0x1402F4B70 (sub_1402F4B70.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1405A5768(__int64 a1, unsigned int a2, int a3)
{
  _QWORD v3[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v4; // [rsp+48h] [rbp-20h] BYREF
  int v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+54h] [rbp-14h]

  v3[2] = a2;
  v3[1] = a1;
  v3[0] = 11LL;
  v4 = v3;
  v6 = 0;
  v5 = 24;
  sub_14035EDE4((__int64)&v4, 1u, 0x20000001u, 633 - (a3 != 0), 0x11401B04u);
}
