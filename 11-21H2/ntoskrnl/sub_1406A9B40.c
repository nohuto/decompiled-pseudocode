/*
 * XREFs of sub_1406A9B40 @ 0x1406A9B40
 * Callers:
 *     sub_1406A97F0 @ 0x1406A97F0 (sub_1406A97F0.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     sub_1407A3190 @ 0x1407A3190 (sub_1407A3190.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1406A9C60 @ 0x1406A9C60 (sub_1406A9C60.c)
 */

__int64 __fastcall sub_1406A9B40(unsigned __int16 *a1, unsigned int a2, __int64 *a3)
{
  unsigned __int16 *v4; // rdi
  unsigned int v6; // r11d
  unsigned __int64 v8; // rbx
  __int64 v9; // r10
  unsigned int v10; // r10d
  unsigned int v11; // edx
  int v12; // r10d
  __int64 v13; // rcx
  _QWORD *v15; // rax
  unsigned __int16 v16; // dx
  __int64 v17; // rsi
  unsigned int v18; // edx
  _QWORD *v19; // rax
  unsigned __int16 v20; // dx
  __int128 v21; // rt0

  v4 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v6 = *a1 >> 1;
  if ( v6 < 4 )
  {
    v10 = 0;
  }
  else
  {
    v8 = 0LL;
    do
    {
      v9 = *(_QWORD *)v4;
      if ( (*(_QWORD *)v4 & 0xFF80FF80FF80FF80uLL) != 0 )
      {
        v17 = 4LL;
        do
        {
          v18 = (unsigned __int16)v9;
          if ( (unsigned __int16)v9 >= 0x61u )
          {
            if ( (unsigned __int16)v9 <= 0x7Au )
            {
              v18 = (unsigned __int16)v9 - 32;
            }
            else
            {
              v19 = sub_140347DB0();
              v18 = sub_1403477B0(v19[154], v20);
            }
          }
          *(_QWORD *)&v21 = v9;
          *((_QWORD *)&v21 + 1) = v18;
          v9 = v21 >> 16;
          --v17;
        }
        while ( v17 );
      }
      else
      {
        v9 &= 0xFFDFFFDFFFDFFFDFuLL;
      }
      v4 += 4;
      v6 -= 4;
      v8 = v9 + (v8 >> 1) + 3 * v8;
    }
    while ( v6 >= 4 );
    v10 = v8 + HIDWORD(v8);
  }
  while ( v6 )
  {
    v11 = *v4;
    v12 = (v10 >> 1) + 3 * v10;
    ++v4;
    --v6;
    if ( v11 >= 0x61 )
    {
      if ( v11 > 0x7A )
      {
        v15 = sub_140347DB0();
        v11 = sub_1403477B0(v15[154], v16);
      }
      else
      {
        v12 -= 32;
      }
    }
    v10 = v11 + v12;
  }
  *((_DWORD *)a3 + 4) = v10;
  v13 = *a3;
  *((_BYTE *)a3 + 20) = v10 % 0x25;
  return sub_1406A9C60(v13, a1, a3, a2);
}
