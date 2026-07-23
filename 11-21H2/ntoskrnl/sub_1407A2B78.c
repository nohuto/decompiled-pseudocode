/*
 * XREFs of sub_1407A2B78 @ 0x1407A2B78
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_1406AB574 @ 0x1406AB574 (sub_1406AB574.c)
 *     sub_1406BB760 @ 0x1406BB760 (sub_1406BB760.c)
 *     sub_1406C5878 @ 0x1406C5878 (sub_1406C5878.c)
 *     sub_1407A2E10 @ 0x1407A2E10 (sub_1407A2E10.c)
 *     sub_1407A41E0 @ 0x1407A41E0 (sub_1407A41E0.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 * Callees:
 *     sub_1402F3584 @ 0x1402F3584 (sub_1402F3584.c)
 *     sub_1407A2BDC @ 0x1407A2BDC (sub_1407A2BDC.c)
 *     sub_1409F92FC @ 0x1409F92FC (sub_1409F92FC.c)
 */

__int64 __fastcall sub_1407A2B78(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebx

  if ( *(_QWORD *)(a1 + 96) )
    sub_1409F92FC(a1, KeGetCurrentThread(), a2, 2LL);
  v6 = sub_1402F3584(a1, a3);
  sub_1407A2BDC(a1, a2, a3);
  return v6;
}
