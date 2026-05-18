/*
 * XREFs of sub_180013E78 @ 0x180013E78
 * Callers:
 *     sub_180013D44 @ 0x180013D44 (sub_180013D44.c)
 *     sub_1800144E0 @ 0x1800144E0 (sub_1800144E0.c)
 *     sub_180014650 @ 0x180014650 (sub_180014650.c)
 *     sub_180014790 @ 0x180014790 (sub_180014790.c)
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 *     sub_18008E410 @ 0x18008E410 (sub_18008E410.c)
 * Callees:
 *     sub_18001402C @ 0x18001402C (sub_18001402C.c)
 *     sub_180014094 @ 0x180014094 (sub_180014094.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

_QWORD *__fastcall sub_180013E78(__int64 a1, _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  sub_18003E330();
  sub_180014094(&v5, *(_QWORD *)(a1 + 376), *(_QWORD *)(a1 + 384));
  if ( v5 == *(_QWORD *)(a1 + 384) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_18001402C(a2);
  }
  return a2;
}
