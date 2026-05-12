/*
 * XREFs of sub_1C004150C @ 0x1C004150C
 * Callers:
 *     sub_1C0040D18 @ 0x1C0040D18 (sub_1C0040D18.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C004150C(_DWORD *a1)
{
  return a1[7] || (((__int64)(unsigned int)a1[22] >> 1) & 0x7FFFFFFF) >= a1[1];
}
