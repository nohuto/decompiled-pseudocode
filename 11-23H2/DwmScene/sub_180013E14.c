/*
 * XREFs of sub_180013E14 @ 0x180013E14
 * Callers:
 *     sub_180013C74 @ 0x180013C74 (sub_180013C74.c)
 *     sub_180014790 @ 0x180014790 (sub_180014790.c)
 *     sub_1800148B0 @ 0x1800148B0 (sub_1800148B0.c)
 *     sub_180042604 @ 0x180042604 (sub_180042604.c)
 *     sub_18004BDC0 @ 0x18004BDC0 (sub_18004BDC0.c)
 *     sub_18004C8D0 @ 0x18004C8D0 (sub_18004C8D0.c)
 *     sub_18006B8F4 @ 0x18006B8F4 (sub_18006B8F4.c)
 *     sub_18006BADC @ 0x18006BADC (sub_18006BADC.c)
 *     sub_18008E410 @ 0x18008E410 (sub_18008E410.c)
 * Callees:
 *     sub_180013FC4 @ 0x180013FC4 (sub_180013FC4.c)
 *     sub_180014138 @ 0x180014138 (sub_180014138.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

_QWORD *__fastcall sub_180013E14(__int64 a1, _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  sub_18003E330();
  sub_180014138(&v5, *(_QWORD *)(a1 + 376), *(_QWORD *)(a1 + 384));
  if ( v5 == *(_QWORD *)(a1 + 384) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180013FC4(a2);
  }
  return a2;
}
