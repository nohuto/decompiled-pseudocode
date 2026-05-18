/*
 * XREFs of sub_18004FCE4 @ 0x18004FCE4
 * Callers:
 *     sub_18004FD30 @ 0x18004FD30 (sub_18004FD30.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 */

_QWORD *__fastcall sub_18004FCE4(__int64 a1, _QWORD *a2, int a3)
{
  if ( a3 == -1 )
  {
    *a2 = 0LL;
    a2[2] = 0LL;
    a2[3] = 15LL;
    *(_BYTE *)a2 = 0;
  }
  else
  {
    sub_180017648(a2, a1 + 32 * (a3 + 1LL));
  }
  return a2;
}
