/*
 * XREFs of sub_18009F354 @ 0x18009F354
 * Callers:
 *     sub_18009F410 @ 0x18009F410 (sub_18009F410.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18009F354(float *a1, float *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2] || a1[3] != a2[3] || a1[4] != a2[4] || a1[5] != a2[5];
}
