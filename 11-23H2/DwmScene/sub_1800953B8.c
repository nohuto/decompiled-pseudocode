/*
 * XREFs of sub_1800953B8 @ 0x1800953B8
 * Callers:
 *     sub_1800946B8 @ 0x1800946B8 (sub_1800946B8.c)
 * Callees:
 *     sub_180095490 @ 0x180095490 (sub_180095490.c)
 */

__int64 __fastcall sub_1800953B8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  __int64 v7; // rbx
  __int64 v8; // r11
  __int64 v9; // r11

  for ( i = a4; i > 32; a1 = v9 )
  {
    v7 = i - 32;
    v8 = 32LL;
    if ( v7 < 32 )
      v8 = v7;
    i = v7 - v8;
    a3 = sub_180095490(a1, a1 + 512, a1 + 512 + 16 * v8, a3);
  }
  return sub_180095530(a1, a2, a3);
}
