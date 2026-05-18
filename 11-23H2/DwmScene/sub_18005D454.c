/*
 * XREFs of sub_18005D454 @ 0x18005D454
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_180072FD0 @ 0x180072FD0 (sub_180072FD0.c)
 *     sub_18008EA40 @ 0x18008EA40 (sub_18008EA40.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18005D454(__int64 a1, _OWORD *a2)
{
  *(_OWORD *)(a1 + 372) = *a2;
  *(_BYTE *)(a1 + 388) = 1;
}
