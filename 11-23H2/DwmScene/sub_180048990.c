/*
 * XREFs of sub_180048990 @ 0x180048990
 * Callers:
 *     sub_18004806C @ 0x18004806C (sub_18004806C.c)
 *     sub_180048240 @ 0x180048240 (sub_180048240.c)
 *     sub_180048594 @ 0x180048594 (sub_180048594.c)
 * Callees:
 *     sub_1800473C0 @ 0x1800473C0 (sub_1800473C0.c)
 */

_QWORD *__fastcall sub_180048990(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 272);
  if ( v3 )
  {
    sub_1800473C0(v3, (__int64)a2, a3);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
