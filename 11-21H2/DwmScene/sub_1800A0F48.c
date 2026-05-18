/*
 * XREFs of sub_1800A0F48 @ 0x1800A0F48
 * Callers:
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800A0F48(__int64 a1, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(a2, 0.0);
  *(float *)(a1 + 160) = fminf(v3, 1.0);
}
