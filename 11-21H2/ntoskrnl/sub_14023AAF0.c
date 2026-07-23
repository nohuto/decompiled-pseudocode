/*
 * XREFs of sub_14023AAF0 @ 0x14023AAF0
 * Callers:
 *     sub_1403B0FD0 @ 0x1403B0FD0 (sub_1403B0FD0.c)
 *     sub_140523C80 @ 0x140523C80 (sub_140523C80.c)
 * Callees:
 *     sub_14023AB60 @ 0x14023AB60 (sub_14023AB60.c)
 */

__int64 __fastcall sub_14023AAF0(__int64 a1, unsigned int a2, __int64 a3, _WORD *a4, int a5, unsigned int a6)
{
  unsigned __int8 v7; // di

  v7 = a2;
  sub_14023AB60(a2 >> 8);
  if ( a6 >= 2 && *a4 != 0xFFFF && v7 > (unsigned int)dword_140C54BA0 )
    dword_140C54BA0 = v7;
  return a6;
}
