/*
 * XREFs of sub_14062E3A0 @ 0x14062E3A0
 * Callers:
 *     sub_140AB83A0 @ 0x140AB83A0 (sub_140AB83A0.c)
 *     sub_140AB8500 @ 0x140AB8500 (sub_140AB8500.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062E3A0(__int64 a1)
{
  __int64 v1; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v2; // [rsp+38h] [rbp-20h] BYREF
  int v3; // [rsp+40h] [rbp-18h]
  int v4; // [rsp+44h] [rbp-14h]

  v1 = a1;
  v2 = &v1;
  v4 = 0;
  v3 = 8;
  sub_14035EDE4((__int64)&v2, 1u, 0xA0000002, 0xF6Eu, 0x400A02u);
}
