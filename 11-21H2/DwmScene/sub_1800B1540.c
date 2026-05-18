/*
 * XREFs of sub_1800B1540 @ 0x1800B1540
 * Callers:
 *     sub_1800B1AC0 @ 0x1800B1AC0 (sub_1800B1AC0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B1540(__int64 a1)
{
  __int128 v1; // xmm0

  v1 = *(_OWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 56) = 1;
  *(_OWORD *)(a1 + 8) = v1;
}
