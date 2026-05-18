/*
 * XREFs of sub_18003BFF8 @ 0x18003BFF8
 * Callers:
 *     sub_18003C0D0 @ 0x18003C0D0 (sub_18003C0D0.c)
 *     sub_180066CA0 @ 0x180066CA0 (sub_180066CA0.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

_QWORD *__fastcall sub_18003BFF8(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdx

  sub_18003E330(a1);
  v4 = *(_QWORD **)(a1 + 32);
  if ( v4 == *(_QWORD **)(a1 + 40) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_18001246C(a2, v4);
  }
  return a2;
}
