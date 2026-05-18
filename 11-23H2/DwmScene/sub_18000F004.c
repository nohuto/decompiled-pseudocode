/*
 * XREFs of sub_18000F004 @ 0x18000F004
 * Callers:
 *     sub_18000E3DC @ 0x18000E3DC (sub_18000E3DC.c)
 *     sub_18000F82C @ 0x18000F82C (sub_18000F82C.c)
 * Callees:
 *     sub_18000CBC8 @ 0x18000CBC8 (sub_18000CBC8.c)
 */

__int64 __fastcall sub_18000F004(int a1, int a2, __int64 a3, int a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return sub_18000CBC8(a1, a2, a3, a4, v5, retaddr);
}
