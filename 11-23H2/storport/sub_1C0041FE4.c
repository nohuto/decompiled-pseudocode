/*
 * XREFs of sub_1C0041FE4 @ 0x1C0041FE4
 * Callers:
 *     sub_1C0074730 @ 0x1C0074730 (sub_1C0074730.c)
 * Callees:
 *     sub_1C00135CC @ 0x1C00135CC (sub_1C00135CC.c)
 */

_OWORD *__fastcall sub_1C0041FE4(_OWORD *a1, __int64 a2)
{
  PVOID *v2; // rbx

  v2 = (PVOID *)qword_1C00939F0;
  *a1 = 0LL;
  while ( v2 != &qword_1C00939F0 )
  {
    if ( !(unsigned int)sub_1C00135CC(a2, (__int64)v2[2]) )
    {
      *a1 = *(_OWORD *)(v2 + 3);
      return a1;
    }
    v2 = (PVOID *)*v2;
  }
  return a1;
}
