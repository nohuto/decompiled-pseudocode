/*
 * XREFs of sub_18001636C @ 0x18001636C
 * Callers:
 *     sub_18001B7D0 @ 0x18001B7D0 (sub_18001B7D0.c)
 *     sub_180061AE8 @ 0x180061AE8 (sub_180061AE8.c)
 *     sub_180062298 @ 0x180062298 (sub_180062298.c)
 *     sub_18007E6B0 @ 0x18007E6B0 (sub_18007E6B0.c)
 * Callees:
 *     sub_18001717C @ 0x18001717C (sub_18001717C.c)
 *     sub_1800171E4 @ 0x1800171E4 (sub_1800171E4.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

_QWORD *__fastcall sub_18001636C(__int64 a1, _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  sub_18003E330();
  sub_1800171E4(&v5, *(_QWORD *)(a1 + 376), *(_QWORD *)(a1 + 384));
  if ( v5 == *(_QWORD *)(a1 + 384) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_18001717C(a2);
  }
  return a2;
}
