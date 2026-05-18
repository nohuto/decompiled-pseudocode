/*
 * XREFs of sub_18001112C @ 0x18001112C
 * Callers:
 *     sub_180010E24 @ 0x180010E24 (sub_180010E24.c)
 *     sub_18001C240 @ 0x18001C240 (sub_18001C240.c)
 *     sub_18003C998 @ 0x18003C998 (sub_18003C998.c)
 *     sub_180066B40 @ 0x180066B40 (sub_180066B40.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_1800911A4 @ 0x1800911A4 (sub_1800911A4.c)
 *     sub_180093020 @ 0x180093020 (sub_180093020.c)
 *     sub_180093078 @ 0x180093078 (sub_180093078.c)
 *     sub_180093580 @ 0x180093580 (sub_180093580.c)
 *     sub_180095E20 @ 0x180095E20 (sub_180095E20.c)
 *     sub_18009C708 @ 0x18009C708 (sub_18009C708.c)
 * Callees:
 *     <none>
 */

float __fastcall sub_18001112C(float a1, float a2, float a3)
{
  float v3; // xmm0_4

  v3 = fmaxf(a1, a2);
  return fminf(v3, a3);
}
