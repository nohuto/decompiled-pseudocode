/*
 * XREFs of sub_1405FFB44 @ 0x1405FFB44
 * Callers:
 *     sub_140A82730 @ 0x140A82730 (sub_140A82730.c)
 *     sub_140A82930 @ 0x140A82930 (sub_140A82930.c)
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 *     sub_140A8BD60 @ 0x140A8BD60 (sub_140A8BD60.c)
 *     sub_140A8C08C @ 0x140A8C08C (sub_140A8C08C.c)
 *     sub_140A8C1BC @ 0x140A8C1BC (sub_140A8C1BC.c)
 *     sub_140A8C5D4 @ 0x140A8C5D4 (sub_140A8C5D4.c)
 *     sub_140A8C740 @ 0x140A8C740 (sub_140A8C740.c)
 *     sub_140A8CA78 @ 0x140A8CA78 (sub_140A8CA78.c)
 *     sub_140A8CEB8 @ 0x140A8CEB8 (sub_140A8CEB8.c)
 *     sub_140A8D070 @ 0x140A8D070 (sub_140A8D070.c)
 *     sub_140AA6270 @ 0x140AA6270 (sub_140AA6270.c)
 *     sub_140AA6400 @ 0x140AA6400 (sub_140AA6400.c)
 *     sub_140AA6600 @ 0x140AA6600 (sub_140AA6600.c)
 *     sub_140AA66E0 @ 0x140AA66E0 (sub_140AA66E0.c)
 *     sub_140AA69F0 @ 0x140AA69F0 (sub_140AA69F0.c)
 *     sub_140AA6AE0 @ 0x140AA6AE0 (sub_140AA6AE0.c)
 *     sub_140AA6B20 @ 0x140AA6B20 (sub_140AA6B20.c)
 *     sub_140AA6C20 @ 0x140AA6C20 (sub_140AA6C20.c)
 *     sub_140AA6D30 @ 0x140AA6D30 (sub_140AA6D30.c)
 * Callees:
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_140A92CE0 @ 0x140A92CE0 (sub_140A92CE0.c)
 *     sub_140A92D34 @ 0x140A92D34 (sub_140A92D34.c)
 */

__int64 __fastcall sub_1405FFB44(unsigned int a1, const void *a2, const void *a3)
{
  char v7[64]; // [rsp+30h] [rbp-68h] BYREF

  sub_140A92CE0();
  if ( (int)sub_1403BF7F4(v7, 64LL, (__int64)"CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    sub_1405FDF9C(v7);
  return sub_140A92D34(a1, a2, a3, 0LL);
}
