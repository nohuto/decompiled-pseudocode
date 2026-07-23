/*
 * XREFs of sub_140A92C0C @ 0x140A92C0C
 * Callers:
 *     sub_14056489C @ 0x14056489C (sub_14056489C.c)
 * Callees:
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_140A92CE0 @ 0x140A92CE0 (sub_140A92CE0.c)
 *     sub_140A92D34 @ 0x140A92D34 (sub_140A92D34.c)
 */

__int64 __fastcall sub_140A92C0C(__int64 a1, const void *a2, const void *a3)
{
  unsigned int v5; // ebx
  char v7[80]; // [rsp+30h] [rbp-78h] BYREF

  v5 = a1;
  sub_140A92CE0(a1);
  if ( (int)sub_1403BF7F4(v7, 73LL, (__int64)"CulpritAddress = %p, DeviceObject = %p.\n", a2, a3) >= 0 )
    sub_1405FDF9C(v7);
  return sub_140A92D34(v5, a2, a3, 0LL);
}
