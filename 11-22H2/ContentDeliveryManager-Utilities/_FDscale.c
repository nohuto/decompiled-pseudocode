/*
 * XREFs of _FDscale @ 0x18000C014
 * Callers:
 *     _Stofx @ 0x180005028 (_Stofx.c)
 *     _FXp_addh @ 0x18000C1D4 (_FXp_addh.c)
 *     _FXp_mulh @ 0x18000C650 (_FXp_mulh.c)
 *     _FXp_setw @ 0x18000C9E0 (_FXp_setw.c)
 * Callees:
 *     _FDnorm @ 0x180021404 (_FDnorm.c)
 */

__int16 __fastcall FDscale(unsigned __int16 *a1, int a2)
{
  __int16 v4; // cx
  __int16 result; // ax
  __int16 v6; // di
  float Float; // xmm0_4
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // r11
  unsigned int v10; // r10d
  unsigned __int16 v11; // si
  __int16 v12; // r10
  unsigned __int16 v13; // r9
  bool v14; // zf

  v4 = (unsigned __int8)(a1[1] >> 7);
  if ( v4 == 255 )
  {
    if ( (a1[1] & 0x7F) != 0 )
      return 2;
    result = 1;
    if ( *a1 )
      return 2;
    return result;
  }
  HIBYTE(v6) = 0;
  if ( !v4 )
  {
    v4 = FDnorm(a1);
    if ( v4 > 0 )
      return 0;
  }
  if ( a2 <= 0 || 255 - v4 > a2 )
  {
    if ( -v4 < a2 )
    {
      a1[1] = a1[1] & 0x807F | ((v4 + (_WORD)a2) << 7);
      return -1;
    }
    v8 = a1[1] & 0x7F | 0x80;
    v9 = a1[1] & 0x8000;
    v10 = v4 + a2 - 1;
    if ( v10 >= 0xFFFFFFE8 )
    {
      v11 = 0;
      if ( (__int16)v10 <= -16 )
      {
        v11 = *a1;
        LOWORD(v10) = v10 + 16;
        *a1 = v8;
        v8 = 0;
      }
      v12 = -(__int16)v10;
      if ( v12 )
      {
        LOBYTE(v6) = v11 != 0;
        v11 = v6 | (*a1 << (16 - v12));
        *a1 = (*a1 >> v12) | (v8 << (16 - v12));
        v8 >>= v12;
      }
      v13 = v9 | v8;
      a1[1] = v13;
      if ( (v11 > 0x8000u || v11 == 0x8000 && (*(_BYTE *)a1 & 1) != 0) && (v14 = *a1 == 0xFFFF, ++*a1, v14) )
      {
        a1[1] = v13 + 1;
      }
      else if ( v13 == v9 )
      {
        return -(*a1 != 0);
      }
      return -1;
    }
    a1[1] = v9;
    *a1 = 0;
    return 0;
  }
  Float = FInf._Float;
  if ( (a1[1] & 0x8000u) != 0 )
    LODWORD(Float) = LODWORD(FInf._Float) ^ _xmm;
  *(float *)a1 = Float;
  return 1;
}
