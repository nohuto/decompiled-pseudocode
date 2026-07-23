/*
 * XREFs of PoFxSetComponentWake @ 0x1405CAD20
 * Callers:
 *     sub_140619C40 @ 0x140619C40 (sub_140619C40.c)
 * Callees:
 *     sub_1405D218C @ 0x1405D218C (sub_1405D218C.c)
 *     sub_1405D4E64 @ 0x1405D4E64 (sub_1405D4E64.c)
 */

__int64 __fastcall PoFxSetComponentWake(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // r8

  sub_1405D218C(*(_QWORD *)(a1 + 48));
  LOBYTE(v6) = a3;
  return sub_1405D4E64(*(_QWORD *)(a1 + 56), a2, v6);
}
