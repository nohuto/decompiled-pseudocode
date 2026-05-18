/*
 * XREFs of sub_18009F580 @ 0x18009F580
 * Callers:
 *     sub_18009FB00 @ 0x18009FB00 (sub_18009FB00.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18009F580(__int64 a1)
{
  __int128 v1; // xmm0

  v1 = *(_OWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 56) = 1;
  *(_OWORD *)(a1 + 8) = v1;
}
