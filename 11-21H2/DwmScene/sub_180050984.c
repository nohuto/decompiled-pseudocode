/*
 * XREFs of sub_180050984 @ 0x180050984
 * Callers:
 *     sub_180015360 @ 0x180015360 (sub_180015360.c)
 *     sub_180052534 @ 0x180052534 (sub_180052534.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180050984(__int64 a1, __int64 a2)
{
  *(_OWORD *)(a1 + 88) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 16);
}
