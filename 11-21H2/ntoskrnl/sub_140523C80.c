/*
 * XREFs of sub_140523C80 @ 0x140523C80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14023AAF0 @ 0x14023AAF0 (sub_14023AAF0.c)
 *     sub_14023AB60 @ 0x14023AB60 (sub_14023AB60.c)
 */

__int64 __fastcall sub_140523C80(char a1, int a2, unsigned int a3, _WORD *a4)
{
  unsigned int v4; // ebx
  int v6; // r11d
  __int64 v7; // r8

  v4 = 0;
  if ( a2 == 3320 )
  {
    dword_140D017B0 = *(_DWORD *)a4;
    byte_140D017B4 = 1;
  }
  else if ( (unsigned int)(a2 - 3324) <= 3 && byte_140D017B4 )
  {
    v6 = (dword_140D017B0 & 0xFC) + a2 - 3324;
    v7 = (dword_140D017B0 & 0x700 | ((unsigned int)dword_140D017B0 >> 8) & 0xF8) >> 3;
    if ( a1 )
      sub_14023AAF0(0LL, BYTE2(dword_140D017B0), v7, a4, v6, a3);
    else
      sub_14023AB60(0LL, BYTE2(dword_140D017B0), v7, a4, v6, a3, 1);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
