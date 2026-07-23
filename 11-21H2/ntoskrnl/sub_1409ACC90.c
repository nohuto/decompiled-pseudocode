/*
 * XREFs of sub_1409ACC90 @ 0x1409ACC90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409ACD20 @ 0x1409ACD20 (sub_1409ACD20.c)
 */

__int64 __fastcall sub_1409ACC90(int a1, int a2, int a3, int a4, char a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v9; // r11d
  int v10; // ecx

  v9 = a6 & 1 | 2;
  if ( (a7 & 1) == 0 )
    v9 = a6 & 1;
  v10 = v9 | 4;
  if ( !a5 )
    v10 = v9;
  return sub_1409ACD20(a1, a2, a3, a4, v10, a6, a7, a8);
}
