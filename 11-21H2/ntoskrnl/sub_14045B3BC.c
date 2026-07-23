/*
 * XREFs of sub_14045B3BC @ 0x14045B3BC
 * Callers:
 *     sub_14023BA30 @ 0x14023BA30 (sub_14023BA30.c)
 *     sub_140308640 @ 0x140308640 (sub_140308640.c)
 *     sub_1403419B0 @ 0x1403419B0 (sub_1403419B0.c)
 *     sub_14045B3DA @ 0x14045B3DA (sub_14045B3DA.c)
 *     sub_1405740C4 @ 0x1405740C4 (sub_1405740C4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14045B3BC(int a1)
{
  return ((a1 - 1) & 0xFFFFFFFA) == 0 && a1 != 6;
}
