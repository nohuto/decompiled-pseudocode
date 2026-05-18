/*
 * XREFs of sub_180044E24 @ 0x180044E24
 * Callers:
 *     sub_18004500C @ 0x18004500C (sub_18004500C.c)
 *     sub_1800451CC @ 0x1800451CC (sub_1800451CC.c)
 * Callees:
 *     sub_180044C60 @ 0x180044C60 (sub_180044C60.c)
 */

__int64 *__fastcall sub_180044E24(__int64 *a1, __int64 a2, _DWORD *a3)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_180044C60(a1, a2, a3);
  return a1;
}
