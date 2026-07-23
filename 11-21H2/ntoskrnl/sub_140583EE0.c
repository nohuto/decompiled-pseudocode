/*
 * XREFs of sub_140583EE0 @ 0x140583EE0
 * Callers:
 *     sub_140218310 @ 0x140218310 (sub_140218310.c)
 *     sub_140331CC0 @ 0x140331CC0 (sub_140331CC0.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140583D60 @ 0x140583D60 (sub_140583D60.c)
 */

void __fastcall sub_140583EE0(__int64 a1, int a2)
{
  unsigned __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 *v3; // [rsp+38h] [rbp-20h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v2 = 0LL;
  sub_140583D60(&v2, a2, a1);
  v5 = 0;
  v3 = &v2;
  v4 = 8;
  sub_14035EDE4((__int64)&v3, 1u, 0x28000000u, 0x283u, 0x11401B02u);
}
