/*
 * XREFs of sub_140A919A8 @ 0x140A919A8
 * Callers:
 *     sub_140A807FC @ 0x140A807FC (sub_140A807FC.c)
 * Callees:
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_140A91FDC @ 0x140A91FDC (sub_140A91FDC.c)
 *     sub_140A92CE0 @ 0x140A92CE0 (sub_140A92CE0.c)
 *     sub_140A92D34 @ 0x140A92D34 (sub_140A92D34.c)
 */

__int64 __fastcall sub_140A919A8(_QWORD *a1, const void *a2)
{
  char v5[80]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a1[3] )
  {
    sub_140A92CE0(514LL);
    if ( (int)sub_1403BF7F4(v5, 73LL, (__int64)"CulpritAddress = %p, DeviceObject = %p.\n", a2, a1) >= 0 )
      sub_1405FDF9C(v5);
    sub_140A92D34(514LL, a2, a1, 0LL);
  }
  return sub_140A91FDC(a1);
}
