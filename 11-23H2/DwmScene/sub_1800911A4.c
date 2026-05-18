/*
 * XREFs of sub_1800911A4 @ 0x1800911A4
 * Callers:
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 * Callees:
 *     sub_18001112C @ 0x18001112C (sub_18001112C.c)
 */

void __fastcall sub_1800911A4(__int64 a1, float a2)
{
  *(float *)(a1 + 160) = sub_18001112C(a2, 0.0, 1.0);
}
