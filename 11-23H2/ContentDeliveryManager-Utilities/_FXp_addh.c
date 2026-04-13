/*
 * XREFs of _FXp_addh @ 0x18000C1D4
 * Callers:
 *     _FXp_addx @ 0x18000C52C (_FXp_addx.c)
 *     _FXp_mulh @ 0x18000C650 (_FXp_mulh.c)
 *     _FXp_setn @ 0x18000C958 (_FXp_setn.c)
 * Callees:
 *     _FDscale @ 0x18000C014 (_FDscale.c)
 *     _Feraise @ 0x1800214B8 (_Feraise.c)
 *     _FDtest @ 0x1800214EC (_FDtest.c)
 *     _FDint @ 0x18002153C (_FDint.c)
 *     _FDunscale @ 0x180021618 (_FDunscale.c)
 */

float *__fastcall FXp_addh(float *a1, int a2, float a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int16 v6; // ax
  __int16 v7; // ax
  int v8; // ebx
  float *v9; // r15
  float *v10; // r12
  __int16 v11; // ax
  float v12; // xmm1_4
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rax
  int v16; // edx
  __int64 i; // rdx
  float v18; // xmm1_4
  __int64 v19; // rax
  float v20; // xmm0_4
  __int64 v21; // rdx
  float v22; // xmm0_4
  __int64 v23; // rax
  float v24; // xmm0_4
  int v25; // r15d
  unsigned __int16 *v26; // rbx
  float v27; // xmm1_4
  float v28; // xmm0_4
  int v30; // [rsp+20h] [rbp-28h]
  float v31[3]; // [rsp+24h] [rbp-24h] BYREF
  __int16 v32; // [rsp+90h] [rbp+48h] BYREF
  __int16 v33; // [rsp+98h] [rbp+50h] BYREF
  float v34; // [rsp+A0h] [rbp+58h] BYREF
  float v35; // [rsp+A8h] [rbp+60h] BYREF

  v34 = a3;
  v3 = 0LL;
  v35 = a3;
  v5 = a2;
  if ( !a2 )
    return a1;
  v6 = FDunscale(&v32, &v35);
  if ( v6 <= 0 )
  {
    if ( v6 >= 0 )
      return a1;
    v30 = 256;
    v8 = 0;
    if ( (int)v5 <= 0 )
      return a1;
    v9 = a1 - 1;
    v10 = a1 - 1;
    while ( 1 )
    {
      v31[0] = a1[v3];
      v11 = FDunscale(&v33, v31);
      if ( v11 > 0 )
        return a1;
      if ( !v11 )
      {
        a1[v8] = v34;
        if ( v8 + 1 < (int)v5 )
          a1[v8 + 1] = 0.0;
        return a1;
      }
      v12 = v34;
      v13 = v33 - v32;
      if ( v13 <= -12 )
        break;
      if ( v13 < 12 || v34 == 0.0 )
        goto LABEL_31;
      v30 = v33;
      ++v8;
LABEL_51:
      ++v3;
      ++v10;
LABEL_52:
      if ( v8 >= (int)v5 )
        return a1;
    }
    if ( v34 != 0.0 )
    {
      v14 = v8;
      v15 = v3;
      do
      {
        v16 = v14;
        ++v15;
        ++v14;
      }
      while ( v15 < v5 && a1[v15] != 0.0 );
      if ( v14 >= (int)v5 - 1 )
      {
        if ( v14 == (_DWORD)v5 )
          v14 = v16;
      }
      else
      {
        ++v14;
      }
      for ( i = v14; i > v3; --i )
        a1[i] = v9[i];
      v34 = 0.0;
      a1[v3] = v12;
      goto LABEL_52;
    }
LABEL_31:
    v18 = v34 + a1[v3];
    a1[v3] = v18;
    if ( v18 == 0.0 )
    {
      v19 = v3;
      do
      {
        if ( ++v19 >= v5 )
          break;
        v20 = a1[v19];
        v9[v19] = v20;
      }
      while ( v20 != 0.0 );
      a1[v5 - 1] = 0.0;
      v18 = a1[v3];
      if ( v18 == 0.0 )
        return a1;
    }
    v34 = v18;
    FDunscale(&v32, &v34);
    v21 = (unsigned int)v32;
    if ( v30 - 12 < (int)v21 )
    {
      LOWORD(v21) = v32 - v30 + 12;
      FDint(&v34, v21);
      FDscale((unsigned __int16 *)&v34, v32);
      v22 = a1[v3] - v34;
      a1[v3] = v22;
      if ( v22 == 0.0 )
      {
        v23 = v3;
        do
        {
          if ( ++v23 >= v5 )
            break;
          v24 = a1[v23];
          a1[v23 - 1] = v24;
        }
        while ( v24 != 0.0 );
        a1[v5 - 1] = 0.0;
      }
      --v3;
      --v10;
      if ( --v8 )
      {
        v35 = *v10;
        FDunscale(&v33, &v35);
        v30 = v33;
      }
      else
      {
        v30 = 256;
      }
      v9 = a1 - 1;
      goto LABEL_52;
    }
    v25 = v8 + 1;
    if ( v8 + 1 == (_DWORD)v5 )
      return a1;
    v34 = a1[v3];
    v26 = (unsigned __int16 *)&a1[v8];
    FDunscale(&v33, v26);
    FDint(v26, 12LL);
    FDscale(v26, v33);
    v27 = a1[v3];
    v28 = v34 - v27;
    v30 = v33;
    v34 = v34 - v27;
    if ( v34 == 0.0 )
      v35 = v27;
    else
      v35 = v28;
    FDunscale(&v32, &v35);
    v8 = v25;
    v9 = a1 - 1;
    goto LABEL_51;
  }
  if ( v6 == 2 || (v7 = FDtest(a1), v7 <= 0) )
  {
    *a1 = v34;
  }
  else if ( v7 != 2 && ((*((_WORD *)a1 + 1) ^ HIWORD(v34)) & 0x8000u) != 0 )
  {
    Feraise(1);
    *a1 = FNan._Float;
    if ( (int)v5 > 1 )
      a1[1] = 0.0;
  }
  return a1;
}
