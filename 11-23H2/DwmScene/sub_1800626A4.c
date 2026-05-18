/*
 * XREFs of sub_1800626A4 @ 0x1800626A4
 * Callers:
 *     sub_1800619C8 @ 0x1800619C8 (sub_1800619C8.c)
 *     sub_180062028 @ 0x180062028 (sub_180062028.c)
 * Callees:
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_1800630F0 @ 0x1800630F0 (sub_1800630F0.c)
 *     sub_180063618 @ 0x180063618 (sub_180063618.c)
 */

_QWORD *__fastcall sub_1800626A4(__int64 a1, _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  sub_18003E330(a1);
  sub_180063618(&v5, *(_QWORD *)(a1 + 376), *(_QWORD *)(a1 + 384));
  if ( v5 == *(_QWORD *)(a1 + 384) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_1800630F0(a2);
  }
  return a2;
}
