/*
 * XREFs of sub_1C00100FC @ 0x1C00100FC
 * Callers:
 *     sub_1C00A2D68 @ 0x1C00A2D68 (sub_1C00A2D68.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C00100FC(unsigned __int8 a1)
{
  dword_1C0093AB8[(unsigned __int64)a1 >> 5] |= 1 << (a1 & 0x1F);
}
