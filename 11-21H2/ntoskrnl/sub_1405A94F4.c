/*
 * XREFs of sub_1405A94F4 @ 0x1405A94F4
 * Callers:
 *     sub_1405A9744 @ 0x1405A9744 (sub_1405A9744.c)
 * Callees:
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 */

void __fastcall sub_1405A94F4(__int64 a1, unsigned __int64 a2, int a3)
{
  if ( a2 != -1LL )
  {
    if ( (a3 & 0x20000000) == 0 && !*(_DWORD *)(a1 + 12) )
      sub_1402CF280(a1, a2, 1LL, 0);
    sub_14032F1B0(a1);
  }
}
