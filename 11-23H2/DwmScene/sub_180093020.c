/*
 * XREFs of sub_180093020 @ 0x180093020
 * Callers:
 *     sub_180068E68 @ 0x180068E68 (sub_180068E68.c)
 * Callees:
 *     sub_18001112C @ 0x18001112C (sub_18001112C.c)
 */

void __fastcall sub_180093020(__int64 a1, float a2)
{
  *(float *)(a1 + 1820) = sub_18001112C(a2, -1.5533431, 1.5533431);
}
