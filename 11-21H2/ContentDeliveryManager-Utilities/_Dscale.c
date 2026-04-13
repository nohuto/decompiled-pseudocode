/*
 * XREFs of _Dscale @ 0x18000C574
 * Callers:
 *     _Stodx @ 0x180005594 (_Stodx.c)
 *     _Xp_addh @ 0x18000C7F8 (_Xp_addh.c)
 *     _Xp_mulh @ 0x18000CC80 (_Xp_mulh.c)
 *     _Xp_setw @ 0x18000CFBC (_Xp_setw.c)
 *     _LDscale @ 0x18000D354 (_LDscale.c)
 * Callees:
 *     _Dnorm @ 0x180020F80 (_Dnorm.c)
 */

__int64 __fastcall Dscale(_WORD *a1, int a2)
{
  __int16 v4; // cx
  double Double; // xmm0_8
  __int16 v8; // r11
  __int16 v9; // r15
  unsigned __int16 v10; // r11
  unsigned int v11; // ebp
  unsigned __int16 v12; // r14
  __int16 v13; // cx
  __int16 v14; // dx
  __int16 v15; // r9
  __int64 v16; // r8
  __int16 v17; // bp
  unsigned __int16 v18; // r9
  unsigned __int16 v19; // dx
  __int16 v20; // r11
  bool v21; // zf

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
      return 0LL;
  }
  if ( a2 <= 0 || 2047 - v4 > a2 )
  {
    v8 = a1[3];
    if ( -v4 < a2 )
    {
      a1[3] = v8 & 0x800F | (16 * (v4 + a2));
      return 0xFFFFFFFFLL;
    }
    v9 = v8 & 0x8000;
    v10 = a1[3] & 0xF | 0x10;
    v11 = v4 + a2 - 1;
    if ( v11 <= 0xFFFFFFCA )
    {
      a1[3] = v9;
      *(_DWORD *)(a1 + 1) = 0;
      *a1 = 0;
    }
    else
    {
      v12 = 0;
      if ( (__int16)v11 <= -16 )
      {
        v13 = a1[2];
        v14 = a1[1];
        v15 = a1[3] & 0xF | 0x10;
        v16 = (unsigned __int16)(((unsigned __int16)(-16 - v11) >> 4) + 1);
        LOWORD(v11) = 16 * v16 + v11;
        do
        {
          v12 = *a1 | (v12 != 0);
          *a1 = v14;
          v14 = v13;
          v13 = v15;
          v15 = 0;
          --v16;
        }
        while ( v16 );
        a1[2] = v13;
        v10 = 0;
        a1[1] = v14;
      }
      v17 = -(__int16)v11;
      if ( v17 )
      {
        v18 = a1[1];
        v19 = a1[2];
        v12 = (v12 != 0) | (unsigned __int16)(*a1 << (16 - v17));
        *a1 = (*a1 >> v17) | (v18 << (16 - v17));
        a1[1] = (v18 >> v17) | (v19 << (16 - v17));
        a1[2] = (v19 >> v17) | (v10 << (16 - v17));
        v10 >>= v17;
      }
      v20 = v9 | v10;
      a1[3] = v20;
      if ( v12 > 0x8000u || v12 == 0x8000 && (*(_BYTE *)a1 & 1) != 0 )
      {
        v21 = (*a1)++ == 0xFFFF;
        if ( v21 )
        {
          v21 = a1[1]++ == 0xFFFF;
          if ( v21 )
          {
            v21 = a1[2]++ == 0xFFFF;
            if ( v21 )
            {
              a1[3] = v20 + 1;
              return 0xFFFFFFFFLL;
            }
          }
        }
      }
      if ( v20 != v9 || a1[2] || a1[1] || *a1 )
        return 0xFFFFFFFFLL;
    }
    return 0LL;
  }
  Double = Inf._Double;
  if ( (__int16)a1[3] < 0 )
    *(_QWORD *)&Double = *(_QWORD *)&Inf._Double ^ _xmm;
  *(double *)a1 = Double;
  return 1LL;
}
