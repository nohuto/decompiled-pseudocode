/*
 * XREFs of sub_1407C45A0 @ 0x1407C45A0
 * Callers:
 *     sub_14065C51C @ 0x14065C51C (sub_14065C51C.c)
 *     sub_14069B700 @ 0x14069B700 (sub_14069B700.c)
 *     sub_1406D2154 @ 0x1406D2154 (sub_1406D2154.c)
 *     sub_140722280 @ 0x140722280 (sub_140722280.c)
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_1407C4180 @ 0x1407C4180 (sub_1407C4180.c)
 *     sub_1407C4460 @ 0x1407C4460 (sub_1407C4460.c)
 *     sub_1407C4990 @ 0x1407C4990 (sub_1407C4990.c)
 *     sub_1407C5F80 @ 0x1407C5F80 (sub_1407C5F80.c)
 *     sub_14091514C @ 0x14091514C (sub_14091514C.c)
 *     sub_140921EA0 @ 0x140921EA0 (sub_140921EA0.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

__int64 __fastcall sub_1407C45A0(__int64 a1, unsigned __int8 *a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 v5; // r11
  unsigned __int16 v6; // r10
  unsigned __int16 *v7; // rbx
  unsigned __int16 v9; // bp
  unsigned int v10; // esi
  _QWORD *v12; // rax
  _QWORD *v13; // rax

  v5 = *(_WORD *)a1 >> 1;
  v6 = a3;
  v7 = *(unsigned __int16 **)(a1 + 8);
  if ( v5 )
  {
    while ( v6 )
    {
      v9 = *v7++;
      v10 = *a2++;
      if ( v9 != (_WORD)v10 )
      {
        if ( (a4 & 1) == 0 && v9 >= 0x61u )
        {
          if ( v9 > 0x7Au )
          {
            v12 = sub_140347DB0();
            v9 = sub_1403477B0(v12[154], v9);
          }
          else
          {
            v9 -= 32;
          }
        }
        if ( (a4 & 2) == 0 && v10 >= 0x61 )
        {
          if ( v10 > 0x7A )
          {
            v13 = sub_140347DB0();
            LOWORD(v10) = sub_1403477B0(v13[154], v10);
          }
          else
          {
            LOWORD(v10) = v10 - 32;
          }
        }
        if ( v9 != (unsigned __int16)v10 )
          return v9 - (unsigned int)(unsigned __int16)v10;
      }
      --v6;
      if ( !--v5 )
        return v5 - (unsigned int)v6;
    }
  }
  return v5 - (unsigned int)v6;
}
