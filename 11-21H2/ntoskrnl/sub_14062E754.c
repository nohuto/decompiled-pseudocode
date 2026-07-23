/*
 * XREFs of sub_14062E754 @ 0x14062E754
 * Callers:
 *     sub_140573740 @ 0x140573740 (sub_140573740.c)
 *     sub_140575600 @ 0x140575600 (sub_140575600.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062E754(__int64 a1, char a2, __int16 a3)
{
  int v3; // [rsp+30h] [rbp-28h] BYREF
  __int16 v4; // [rsp+34h] [rbp-24h]
  char v5; // [rsp+36h] [rbp-22h]
  char v6; // [rsp+37h] [rbp-21h]
  int *v7; // [rsp+38h] [rbp-20h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  v3 = *(_DWORD *)(a1 + 1232);
  v5 = a2;
  v7 = &v3;
  v9 = 0;
  v4 = a3;
  v6 = 0;
  v8 = 8;
  sub_14035EDE4((__int64)&v7, 1u, 0xA0000100, 0xF79u, 0x202u);
}
