/*
 * XREFs of sub_18004EC38 @ 0x18004EC38
 * Callers:
 *     sub_18004E370 @ 0x18004E370 (sub_18004E370.c)
 *     sub_18004E6B8 @ 0x18004E6B8 (sub_18004E6B8.c)
 * Callees:
 *     sub_18004D458 @ 0x18004D458 (sub_18004D458.c)
 */

_QWORD *__fastcall sub_18004EC38(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 240);
  if ( v3 )
  {
    sub_18004D458(v3, a2, a3);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
