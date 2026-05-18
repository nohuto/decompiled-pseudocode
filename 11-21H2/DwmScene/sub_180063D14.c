/*
 * XREFs of sub_180063D14 @ 0x180063D14
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 *     sub_180063D5C @ 0x180063D5C (sub_180063D5C.c)
 *     sub_180063E30 @ 0x180063E30 (sub_180063E30.c)
 *     sub_180065080 @ 0x180065080 (sub_180065080.c)
 *     sub_18009DA30 @ 0x18009DA30 (sub_18009DA30.c)
 * Callees:
 *     sub_180065FB8 @ 0x180065FB8 (sub_180065FB8.c)
 */

__int64 __fastcall sub_180063D14(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx

  v3 = a3;
  v5 = a2;
  sub_180065FB8();
  return ((v3 + 4 * v5) << 6) + a1 + 548;
}
