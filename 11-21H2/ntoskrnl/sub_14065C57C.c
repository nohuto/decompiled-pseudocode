/*
 * XREFs of sub_14065C57C @ 0x14065C57C
 * Callers:
 *     sub_14065C51C @ 0x14065C51C (sub_14065C51C.c)
 *     sub_140722280 @ 0x140722280 (sub_140722280.c)
 *     sub_1407C4180 @ 0x1407C4180 (sub_1407C4180.c)
 *     sub_1407C4460 @ 0x1407C4460 (sub_1407C4460.c)
 *     sub_1407C5F80 @ 0x1407C5F80 (sub_1407C5F80.c)
 *     sub_14091514C @ 0x14091514C (sub_14091514C.c)
 *     sub_140921EA0 @ 0x140921EA0 (sub_140921EA0.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

__int64 __fastcall sub_14065C57C(unsigned __int8 *a1, unsigned __int16 a2, unsigned __int8 *a3, unsigned __int16 a4)
{
  unsigned __int16 v6; // bx
  unsigned int v8; // r10d
  unsigned int v9; // r11d
  _QWORD *v11; // rax
  unsigned __int16 v12; // r10
  _QWORD *v13; // rax
  unsigned __int16 v14; // r11

  v6 = a2;
  if ( a2 )
  {
    while ( a4 )
    {
      v8 = *a1++;
      v9 = *a3++;
      if ( (_WORD)v8 != (_WORD)v9 )
      {
        if ( v8 >= 0x61 )
        {
          if ( v8 > 0x7A )
          {
            v11 = sub_140347DB0();
            LOWORD(v8) = sub_1403477B0(v11[154], v12);
          }
          else
          {
            LOWORD(v8) = v8 - 32;
          }
        }
        if ( v9 >= 0x61 )
        {
          if ( v9 > 0x7A )
          {
            v13 = sub_140347DB0();
            LOWORD(v9) = sub_1403477B0(v13[154], v14);
          }
          else
          {
            LOWORD(v9) = v9 - 32;
          }
        }
        if ( (unsigned __int16)v8 != (unsigned __int16)v9 )
          return (unsigned __int16)v8 - (unsigned int)(unsigned __int16)v9;
      }
      --a4;
      if ( !--v6 )
        return v6 - (unsigned int)a4;
    }
  }
  return v6 - (unsigned int)a4;
}
