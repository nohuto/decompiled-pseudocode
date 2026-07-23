/*
 * XREFs of sub_1405FFD00 @ 0x1405FFD00
 * Callers:
 *     sub_140A82730 @ 0x140A82730 (sub_140A82730.c)
 *     sub_140A82930 @ 0x140A82930 (sub_140A82930.c)
 *     sub_140A8BD60 @ 0x140A8BD60 (sub_140A8BD60.c)
 *     sub_140A8C1BC @ 0x140A8C1BC (sub_140A8C1BC.c)
 * Callees:
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_140A92CE0 @ 0x140A92CE0 (sub_140A92CE0.c)
 *     sub_140A92D34 @ 0x140A92D34 (sub_140A92D34.c)
 */

__int64 __fastcall sub_1405FFD00(__int64 a1, const void *a2, const void *a3, int a4)
{
  __int64 v4; // rbp
  unsigned int v7; // ebx
  char v9[96]; // [rsp+30h] [rbp-98h] BYREF

  v4 = a4;
  v7 = a1;
  sub_140A92CE0(a1);
  if ( (int)sub_1403BF7F4(v9, 87LL, (__int64)"CulpritAddress = %p, Irp = %p, Status = 0x%x.\n", a2, a3, v4) >= 0 )
    sub_1405FDF9C(v9);
  return sub_140A92D34(v7, a2, a3, v4);
}
