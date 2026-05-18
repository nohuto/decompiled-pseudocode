/*
 * XREFs of sub_180024B5C @ 0x180024B5C
 * Callers:
 *     sub_18002DB6C @ 0x18002DB6C (sub_18002DB6C.c)
 *     sub_18006B29C @ 0x18006B29C (sub_18006B29C.c)
 *     sub_18006E6E0 @ 0x18006E6E0 (sub_18006E6E0.c)
 * Callees:
 *     sub_180025178 @ 0x180025178 (sub_180025178.c)
 *     sub_1800252A8 @ 0x1800252A8 (sub_1800252A8.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

_QWORD *__fastcall sub_180024B5C(__int64 a1, _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  sub_18003E330();
  sub_1800252A8(&v5, *(_QWORD *)(a1 + 376), *(_QWORD *)(a1 + 384));
  if ( v5 == *(_QWORD *)(a1 + 384) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180025178(a2);
  }
  return a2;
}
