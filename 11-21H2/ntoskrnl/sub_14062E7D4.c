/*
 * XREFs of sub_14062E7D4 @ 0x14062E7D4
 * Callers:
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062E7D4(__int64 a1, int a2)
{
  int v2; // eax
  _DWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v4; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v2 = *(_DWORD *)(a1 + 1232);
  v6 = 0;
  v3[0] = v2;
  v3[1] = a2;
  v4 = v3;
  v5 = 8;
  sub_14035EDE4((__int64)&v4, 1u, 0xA0000020, 0xF74u, 0x202u);
}
