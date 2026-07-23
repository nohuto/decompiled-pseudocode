/*
 * XREFs of sub_14068C7E0 @ 0x14068C7E0
 * Callers:
 *     sub_14068C544 @ 0x14068C544 (sub_14068C544.c)
 *     sub_1408410FC @ 0x1408410FC (sub_1408410FC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14068C7E0(_DWORD *a1, int a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v4; // r9d

  v3 = a1[2];
  v4 = a1[1];
  return v4 + v3 <= a3 && v4 + v3 >= v3 && v3 >= 0x1000 && (v3 & 0xFFF) == 0 && *a1 == 1852400232 && v4 == a2;
}
