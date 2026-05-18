/*
 * XREFs of sub_18004A604 @ 0x18004A604
 * Callers:
 *     sub_1800148B0 @ 0x1800148B0 (sub_1800148B0.c)
 *     sub_18004BDC0 @ 0x18004BDC0 (sub_18004BDC0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18004A604(__int64 a1, __int64 a2)
{
  *(_OWORD *)(a1 + 88) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 16);
}
