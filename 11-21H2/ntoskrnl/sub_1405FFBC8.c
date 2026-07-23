/*
 * XREFs of sub_1405FFBC8 @ 0x1405FFBC8
 * Callers:
 *     sub_140A8BD60 @ 0x140A8BD60 (sub_140A8BD60.c)
 *     sub_140AA6400 @ 0x140AA6400 (sub_140AA6400.c)
 *     sub_140AA66E0 @ 0x140AA66E0 (sub_140AA66E0.c)
 *     sub_140AA6CA0 @ 0x140AA6CA0 (sub_140AA6CA0.c)
 * Callees:
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_140A92CE0 @ 0x140A92CE0 (sub_140A92CE0.c)
 *     sub_140A92D34 @ 0x140A92D34 (sub_140A92D34.c)
 */

__int64 __fastcall sub_1405FFBC8(unsigned int a1, const void *a2, const void *a3, const void *a4)
{
  char v9[112]; // [rsp+30h] [rbp-A8h] BYREF

  sub_140A92CE0();
  if ( (int)sub_1403BF7F4(v9, 99LL, (__int64)"CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", a2, a3, a4) >= 0 )
    sub_1405FDF9C(v9);
  return sub_140A92D34(a1, a2, a3, a4);
}
