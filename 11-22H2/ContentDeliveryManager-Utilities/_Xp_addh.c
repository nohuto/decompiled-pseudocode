/*
 * XREFs of _Xp_addh @ 0x18000CEE4
 * Callers:
 *     _Xp_addx @ 0x18000D248 (_Xp_addx.c)
 *     _Xp_mulh @ 0x18000D374 (_Xp_mulh.c)
 * Callees:
 *     _Dscale @ 0x18000CC68 (_Dscale.c)
 *     _Feraise @ 0x1800214B8 (_Feraise.c)
 *     _Dtest @ 0x180021828 (_Dtest.c)
 *     _Dint @ 0x180021890 (_Dint.c)
 *     _Dunscale @ 0x1800219AC (_Dunscale.c)
 */

double *__fastcall Xp_addh(double *a1, int a2, double a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int16 v6; // ax
  __int16 v7; // ax
  int v8; // ebx
  double *v9; // r15
  double *v10; // r12
  __int16 v11; // ax
  double v12; // xmm1_8
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rax
  int v16; // edx
  __int64 i; // rdx
  double v18; // xmm1_8
  __int64 v19; // rax
  double v20; // xmm0_8
  __int64 v21; // rdx
  double v22; // xmm0_8
  __int64 v23; // rax
  double v24; // xmm0_8
  int v25; // r15d
  unsigned __int16 *v26; // rbx
  double v27; // xmm1_8
  double v28; // xmm0_8
  double v30; // [rsp+20h] [rbp-28h] BYREF
  double v31; // [rsp+28h] [rbp-20h] BYREF
  __int16 v32; // [rsp+90h] [rbp+48h] BYREF
  __int16 v33; // [rsp+98h] [rbp+50h] BYREF
  double v34; // [rsp+A0h] [rbp+58h] BYREF
  int v35; // [rsp+A8h] [rbp+60h]

  v34 = a3;
  v3 = 0LL;
  v30 = a3;
  v5 = a2;
  if ( !a2 )
    return a1;
  v6 = Dunscale(&v32, &v30);
  if ( v6 <= 0 )
  {
    if ( v6 >= 0 )
      return a1;
    v35 = 2048;
    v8 = 0;
    if ( (int)v5 <= 0 )
      return a1;
    v9 = a1 - 1;
    v10 = a1 - 1;
    while ( 1 )
    {
      v31 = a1[v3];
      v11 = Dunscale(&v33, &v31);
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
      if ( v13 <= -26 )
        break;
      if ( v13 < 26 || v34 == 0.0 )
        goto LABEL_31;
      v35 = v33;
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
      a1[v3] = v12;
      v34 = 0.0;
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
    Dunscale(&v32, &v34);
    v21 = (unsigned int)v32;
    if ( v35 - 26 < (int)v21 )
    {
      LOWORD(v21) = v32 - v35 + 26;
      Dint(&v34, v21);
      Dscale((unsigned __int16 *)&v34, v32);
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
        v30 = *v10;
        Dunscale(&v33, &v30);
        v35 = v33;
      }
      else
      {
        v35 = 2048;
      }
      v9 = a1 - 1;
      goto LABEL_52;
    }
    v25 = v8 + 1;
    if ( v8 + 1 == (_DWORD)v5 )
      return a1;
    v34 = a1[v3];
    v26 = (unsigned __int16 *)&a1[v8];
    Dunscale(&v33, v26);
    Dint(v26, 26LL);
    Dscale(v26, v33);
    v27 = a1[v3];
    v28 = v34 - v27;
    v35 = v33;
    v34 = v34 - v27;
    if ( v34 == 0.0 )
      v30 = v27;
    else
      v30 = v28;
    Dunscale(&v32, &v30);
    v8 = v25;
    v9 = a1 - 1;
    goto LABEL_51;
  }
  if ( v6 == 2 || (v7 = Dtest(a1), v7 <= 0) )
  {
    *a1 = v34;
  }
  else if ( v7 != 2 && ((*((_WORD *)a1 + 3) ^ HIWORD(v34)) & 0x8000u) != 0 )
  {
    Feraise(1);
    *a1 = Nan._Double;
    if ( (int)v5 > 1 )
      a1[1] = 0.0;
  }
  return a1;
}
