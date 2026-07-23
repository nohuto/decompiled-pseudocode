/*
 * XREFs of sub_14068FEF0 @ 0x14068FEF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14068FF20 @ 0x14068FF20 (sub_14068FF20.c)
 */

__int64 __fastcall sub_14068FEF0(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 72);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 80);
  return sub_14068FF20();
}
