/*
 * XREFs of sub_140717780 @ 0x140717780
 * Callers:
 *     sub_14065C51C @ 0x14065C51C (sub_14065C51C.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_1406D2154 @ 0x1406D2154 (sub_1406D2154.c)
 *     sub_140717660 @ 0x140717660 (sub_140717660.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_1407C4990 @ 0x1407C4990 (sub_1407C4990.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

__int64 __fastcall sub_140717780(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 *v4; // rsi
  unsigned __int16 *v5; // r14
  unsigned __int16 v6; // di
  unsigned __int16 v7; // r10
  unsigned __int16 v8; // r11
  unsigned __int16 v9; // bx
  _QWORD *v11; // rax
  unsigned __int16 v12; // r11
  _QWORD *v13; // rax

  v4 = *(unsigned __int16 **)(a1 + 8);
  v5 = *(unsigned __int16 **)(a2 + 8);
  v6 = *(_WORD *)a2 >> 1;
  v7 = *(_WORD *)a1 >> 1;
  if ( v7 )
  {
    while ( v6 )
    {
      v8 = *v4++;
      v9 = *v5++;
      if ( v8 != v9 )
      {
        if ( (a3 & 1) == 0 && v8 >= 0x61u )
        {
          if ( v8 > 0x7Au )
          {
            v11 = sub_140347DB0();
            v8 = sub_1403477B0(v11[154], v12);
          }
          else
          {
            v8 -= 32;
          }
        }
        if ( (a3 & 2) == 0 && v9 >= 0x61u )
        {
          if ( v9 <= 0x7Au )
          {
            v9 -= 32;
          }
          else
          {
            v13 = sub_140347DB0();
            v9 = sub_1403477B0(v13[154], v9);
          }
        }
        if ( v8 != v9 )
          return v8 - (unsigned int)v9;
      }
      --v6;
      if ( !--v7 )
        return v7 - (unsigned int)v6;
    }
  }
  return v7 - (unsigned int)v6;
}
