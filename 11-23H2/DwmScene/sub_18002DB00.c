/*
 * XREFs of sub_18002DB00 @ 0x18002DB00
 * Callers:
 *     sub_1800372DC @ 0x1800372DC (sub_1800372DC.c)
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 * Callees:
 *     sub_18001F798 @ 0x18001F798 (sub_18001F798.c)
 */

_QWORD *__fastcall sub_18002DB00(_QWORD *a1, void **a2, _WORD *a3)
{
  unsigned __int64 v4; // r8
  void **v6; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( a3[v4] );
  v6 = sub_18001F798(a2, a3, v4);
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v6;
  *((_OWORD *)a1 + 1) = *((_OWORD *)v6 + 1);
  v6[2] = 0LL;
  v6[3] = (void *)7;
  *(_WORD *)v6 = 0;
  return a1;
}
