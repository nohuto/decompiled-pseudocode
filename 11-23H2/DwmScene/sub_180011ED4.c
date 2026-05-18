/*
 * XREFs of sub_180011ED4 @ 0x180011ED4
 * Callers:
 *     sub_180011E04 @ 0x180011E04 (sub_180011E04.c)
 *     sub_1800131D0 @ 0x1800131D0 (sub_1800131D0.c)
 *     sub_180062160 @ 0x180062160 (sub_180062160.c)
 *     sub_18008EA40 @ 0x18008EA40 (sub_18008EA40.c)
 * Callees:
 *     sub_180012288 @ 0x180012288 (sub_180012288.c)
 *     sub_1800122F0 @ 0x1800122F0 (sub_1800122F0.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

_QWORD *__fastcall sub_180011ED4(__int64 a1, _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  sub_18003E330();
  sub_1800122F0(&v5, *(_QWORD *)(a1 + 376), *(_QWORD *)(a1 + 384));
  if ( v5 == *(_QWORD *)(a1 + 384) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180012288(a2);
  }
  return a2;
}
