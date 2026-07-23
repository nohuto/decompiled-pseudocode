/*
 * XREFs of sub_1405FFC5C @ 0x1405FFC5C
 * Callers:
 *     sub_140A8BD60 @ 0x140A8BD60 (sub_140A8BD60.c)
 * Callees:
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_140A92CE0 @ 0x140A92CE0 (sub_140A92CE0.c)
 *     sub_140A92D34 @ 0x140A92D34 (sub_140A92D34.c)
 */

__int64 __fastcall sub_1405FFC5C(__int64 a1, const void *a2, const void **a3, int a4, int a5)
{
  __int64 v5; // rsi
  char v9[128]; // [rsp+40h] [rbp-A8h] BYREF

  v5 = a4;
  sub_140A92CE0(548LL);
  if ( (int)sub_1403BF7F4(
              v9,
              124LL,
              (__int64)"CulpritAddress = %p, Irp = %p, ExpectedStatus = 0x%x, ActualStatus = 0x%x.\n",
              a2,
              *a3,
              v5,
              a5) >= 0 )
    sub_1405FDF9C(v9);
  return sub_140A92D34(548LL, a2, *a3, v5);
}
