/*
 * XREFs of sub_1402501E8 @ 0x1402501E8
 * Callers:
 *     sub_1402129C0 @ 0x1402129C0 (sub_1402129C0.c)
 *     sub_140212E00 @ 0x140212E00 (sub_140212E00.c)
 *     sub_140214694 @ 0x140214694 (sub_140214694.c)
 *     sub_140214A58 @ 0x140214A58 (sub_140214A58.c)
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     sub_140641F58 @ 0x140641F58 (sub_140641F58.c)
 *     sub_140B0ABEC @ 0x140B0ABEC (sub_140B0ABEC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402501E8(int a1)
{
  __int64 v1; // r11
  __int64 v2; // r9
  __int64 v4; // rdx

  v1 = -1LL << (dword_140CE1E44 & 0x1F);
  v2 = (unsigned int)v1 & a1;
  if ( (unsigned int)dword_140CE1E44 >> 5 )
  {
    v4 = qword_140CE1E48
       + 8LL
       * ((37
         * (BYTE6(v2)
          + 37
          * (BYTE5(v2)
           + 37
           * (BYTE4(v2) + 37 * (BYTE3(v2) + 37 * (BYTE2(v2) + 37 * (BYTE1(v2) + 37 * ((unsigned __int8)v2 + 11623883)))))))
         + HIBYTE(v2)) & (((unsigned int)dword_140CE1E44 >> 5) - 1));
    while ( 1 )
    {
      v4 = *(_QWORD *)v4;
      if ( (v4 & 1) != 0 )
        break;
      if ( v2 == (v1 & *(_QWORD *)(v4 + 8)) )
      {
        if ( !v4 )
          return 0LL;
        return v4;
      }
    }
  }
  return 0LL;
}
