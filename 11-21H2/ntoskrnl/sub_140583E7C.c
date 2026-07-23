/*
 * XREFs of sub_140583E7C @ 0x140583E7C
 * Callers:
 *     sub_14096B2A0 @ 0x14096B2A0 (sub_14096B2A0.c)
 *     sub_14096C0AC @ 0x14096C0AC (sub_14096C0AC.c)
 *     sub_14096CDB8 @ 0x14096CDB8 (sub_14096CDB8.c)
 *     sub_14096D0B8 @ 0x14096D0B8 (sub_14096D0B8.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140583E7C(unsigned __int16 a1, unsigned int a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  v7 = 0;
  v5 = a3;
  v6 = a4;
  sub_14035EDE4((__int64)&v5, 1u, a2, a1, a5 | 0x11000200);
}
