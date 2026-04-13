/*
 * XREFs of _Dscale @ 0x18000CC68
 * Callers:
 *     _Stodx @ 0x180005C24 (_Stodx.c)
 *     _Xp_addh @ 0x18000CEE4 (_Xp_addh.c)
 *     _Xp_mulh @ 0x18000D374 (_Xp_mulh.c)
 *     _Xp_setw @ 0x18000D6B0 (_Xp_setw.c)
 *     _LDscale @ 0x18000DA48 (_LDscale.c)
 * Callees:
 *     _Dnorm @ 0x1800216A8 (_Dnorm.c)
 */

__int16 __fastcall Dscale(unsigned __int16 *a1, int a2)
{
  __int16 v4; // cx
  double Double; // xmm0_8
  unsigned __int16 v8; // r11
  unsigned __int16 v9; // r15
  unsigned __int16 v10; // r11
  unsigned int v11; // ebp
  unsigned __int16 v12; // r14
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // r8
  __int64 v15; // rcx
  __int16 v16; // bp
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // r11
  bool v20; // zf

  v4 = (a1[3] >> 4) & 0x7FF;
  if ( v4 == 2047 )
  {
    if ( (a1[3] & 0xF) != 0 || a1[2] || a1[1] || *a1 )
      return 2;
    else
      return 1;
  }
  if ( !v4 )
  {
    v4 = Dnorm(a1);
    if ( v4 > 0 )
      return 0;
  }
  if ( a2 <= 0 || 2047 - v4 > a2 )
  {
    v8 = a1[3];
    if ( -v4 < a2 )
    {
      a1[3] = v8 & 0x800F | (16 * (v4 + a2));
      return -1;
    }
    v9 = v8 & 0x8000;
    v10 = a1[3] & 0xF | 0x10;
    v11 = v4 + a2 - 1;
    if ( v11 > 0xFFFFFFCA )
    {
      v12 = 0;
      if ( (__int16)v11 <= -16 )
      {
        v13 = a1[2];
        v14 = a1[1];
        v15 = (unsigned __int16)(((unsigned __int16)(-16 - v11) >> 4) + 1);
        LOWORD(v11) = 16 * v15 + v11;
        do
        {
          v12 = *a1 | (v12 != 0);
          *a1 = v14;
          v14 = v13;
          v13 = v10;
          v10 = 0;
          --v15;
        }
        while ( v15 );
        a1[2] = v13;
        a1[1] = v14;
      }
      v16 = -(__int16)v11;
      if ( v16 )
      {
        v17 = a1[1];
        v18 = a1[2];
        v12 = (v12 != 0) | (unsigned __int16)(*a1 << (16 - v16));
        *a1 = (*a1 >> v16) | (v17 << (16 - v16));
        a1[1] = (v17 >> v16) | (v18 << (16 - v16));
        a1[2] = (v18 >> v16) | (v10 << (16 - v16));
        v10 >>= v16;
      }
      v19 = v9 | v10;
      a1[3] = v19;
      if ( (v12 > 0x8000u || v12 == 0x8000 && (*(_BYTE *)a1 & 1) != 0)
        && (v20 = *a1 == 0xFFFF, ++*a1, v20)
        && (v20 = a1[1] == 0xFFFF, ++a1[1], v20)
        && (v20 = a1[2] == 0xFFFF, ++a1[2], v20) )
      {
        a1[3] = v19 + 1;
      }
      else if ( v19 == v9 && !a1[2] && !a1[1] )
      {
        return -(*a1 != 0);
      }
      return -1;
    }
    a1[3] = v9;
    *(_DWORD *)(a1 + 1) = 0;
    *a1 = 0;
    return 0;
  }
  Double = Inf._Double;
  if ( (a1[3] & 0x8000u) != 0 )
    *(_QWORD *)&Double = *(_QWORD *)&Inf._Double ^ _xmm;
  *(double *)a1 = Double;
  return 1;
}
