/*
 * XREFs of sub_1800401E8 @ 0x1800401E8
 * Callers:
 *     sub_1800405C8 @ 0x1800405C8 (sub_1800405C8.c)
 *     sub_18004189C @ 0x18004189C (sub_18004189C.c)
 *     sub_180057870 @ 0x180057870 (sub_180057870.c)
 *     sub_18005793C @ 0x18005793C (sub_18005793C.c)
 *     sub_180057BA8 @ 0x180057BA8 (sub_180057BA8.c)
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 *     sub_180058240 @ 0x180058240 (sub_180058240.c)
 *     sub_180064494 @ 0x180064494 (sub_180064494.c)
 *     sub_1800645EC @ 0x1800645EC (sub_1800645EC.c)
 *     sub_18006DDA0 @ 0x18006DDA0 (sub_18006DDA0.c)
 *     sub_1800922C8 @ 0x1800922C8 (sub_1800922C8.c)
 *     sub_1800A04FC @ 0x1800A04FC (sub_1800A04FC.c)
 *     sub_1800A1558 @ 0x1800A1558 (sub_1800A1558.c)
 *     sub_1800A156C @ 0x1800A156C (sub_1800A156C.c)
 * Callees:
 *     sub_180042DB0 @ 0x180042DB0 (sub_180042DB0.c)
 */

char __fastcall sub_1800401E8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r9

  LOBYTE(a4) = a2;
  sub_180042DB0(a1, a2, a3, a4);
  return v4;
}
