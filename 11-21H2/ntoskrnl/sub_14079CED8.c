/*
 * XREFs of sub_14079CED8 @ 0x14079CED8
 * Callers:
 *     sub_14079B3A0 @ 0x14079B3A0 (sub_14079B3A0.c)
 *     sub_14079C640 @ 0x14079C640 (sub_14079C640.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14079CED8(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
