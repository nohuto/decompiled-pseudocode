/*
 * XREFs of sub_1800A2CEC @ 0x1800A2CEC
 * Callers:
 *     sub_1800729F8 @ 0x1800729F8 (sub_1800729F8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800A2CEC(__int64 a1, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(a2, -1.5533431);
  *(float *)(a1 + 1824) = fminf(v3, 1.5533431);
}
