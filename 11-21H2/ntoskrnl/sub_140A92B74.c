/*
 * XREFs of sub_140A92B74 @ 0x140A92B74
 * Callers:
 *     sub_14056489C @ 0x14056489C (sub_14056489C.c)
 * Callees:
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_140A92CE0 @ 0x140A92CE0 (sub_140A92CE0.c)
 *     sub_140A92D34 @ 0x140A92D34 (sub_140A92D34.c)
 */

__int64 __fastcall sub_140A92B74(__int64 a1, const void *a2, const void *a3, const void *a4)
{
  char v8[112]; // [rsp+30h] [rbp-98h] BYREF

  sub_140A92CE0(585LL);
  if ( (int)sub_1403BF7F4(
              v8,
              110LL,
              (__int64)"CulpritAddress = %p, DeviceObject1 = %p, DeviceObject2 = %p.\n",
              a2,
              a3,
              a4) >= 0 )
    sub_1405FDF9C(v8);
  return sub_140A92D34(585LL, a2, a3, a4);
}
