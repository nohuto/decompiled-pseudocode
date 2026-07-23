/*
 * XREFs of sub_14092AAA4 @ 0x14092AAA4
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 * Callees:
 *     sub_140257280 @ 0x140257280 (sub_140257280.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 */

void __fastcall sub_14092AAA4(ULONG_PTR a1)
{
  sub_140257280(a1, 0LL, 1u);
  KeLeaveCriticalRegion();
}
