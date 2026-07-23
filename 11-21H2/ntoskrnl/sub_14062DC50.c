/*
 * XREFs of sub_14062DC50 @ 0x14062DC50
 * Callers:
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062DC50(int a1, char a2)
{
  int v2; // [rsp+30h] [rbp-28h] BYREF
  char v3; // [rsp+34h] [rbp-24h]
  __int16 v4; // [rsp+35h] [rbp-23h]
  char v5; // [rsp+37h] [rbp-21h]
  int *v6; // [rsp+38h] [rbp-20h] BYREF
  int v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+44h] [rbp-14h]

  v4 = 0;
  v5 = 0;
  v2 = a1;
  v6 = &v2;
  v8 = 0;
  v3 = a2;
  v7 = 8;
  sub_14035EDE4((__int64)&v6, 1u, 0x20040000u, 0xF76u, 0x400A02u);
}
