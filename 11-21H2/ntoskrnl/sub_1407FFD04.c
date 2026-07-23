/*
 * XREFs of sub_1407FFD04 @ 0x1407FFD04
 * Callers:
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 * Callees:
 *     sub_140256CA0 @ 0x140256CA0 (sub_140256CA0.c)
 *     sub_1407FE82C @ 0x1407FE82C (sub_1407FE82C.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 */

__int64 __fastcall sub_1407FFD04(_DWORD *a1)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  sub_140256CA0(&stru_14000F058);
  sub_140A4B974(4LL);
  a1[4] = 3;
  sub_1407FE82C(a1, (__int64)&v3);
  sub_140256CA0(&stru_14000F068);
  return sub_140A4B974(5LL);
}
