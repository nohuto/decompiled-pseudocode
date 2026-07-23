/*
 * XREFs of PoFxSetComponentResidency @ 0x1405CACD0
 * Callers:
 *     sub_140619B10 @ 0x140619B10 (sub_140619B10.c)
 * Callees:
 *     sub_1405D209C @ 0x1405D209C (sub_1405D209C.c)
 *     sub_1405D4D6C @ 0x1405D4D6C (sub_1405D4D6C.c)
 */

__int64 __fastcall PoFxSetComponentResidency(__int64 a1, unsigned int a2, __int64 a3)
{
  sub_1405D209C(*(_QWORD *)(a1 + 48));
  return sub_1405D4D6C(*(_QWORD *)(a1 + 56), a2, a3);
}
