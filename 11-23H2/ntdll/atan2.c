/*
 * XREFs of atan2 @ 0x1800917D0
 * Callers:
 *     <none>
 * Callees:
 *     _controlfp @ 0x18009746C (_controlfp.c)
 *     _handle_error @ 0x1800975A8 (_handle_error.c)
 */

double __cdecl atan2(double Y, double X)
{
  double v2; // xmm8_8
  double v3; // rdi
  double v4; // xmm9_8
  __int64 v5; // r15
  __int64 v6; // rdx
  int v7; // esi
  unsigned __int64 v8; // r13
  int v9; // r8d
  unsigned __int64 v10; // rbx
  __int64 v11; // xmm6_8
  __int64 v12; // xmm0_8
  double v13; // xmm0_8
  unsigned __int64 v14; // rcx
  __int64 v15; // xmm0_8
  double v16; // xmm0_8
  double v17; // rsi
  unsigned int v18; // edx
  unsigned int v19; // ecx
  double v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  int v23; // r9d
  double v24; // xmm0_8
  double v25; // xmm5_8
  __int64 v26; // rcx
  double v27; // xmm7_8
  double v28; // xmm10_8
  double v29; // xmm6_8
  int v30; // kr00_4
  __int64 v31; // rdx
  __int64 v32; // rcx
  double v33; // xmm4_8
  double v34; // xmm10_8

  v2 = Y;
  v3 = Y;
  v4 = X;
  v5 = (*(_QWORD *)&X >> 52) & 0x7FFLL;
  v6 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  v7 = ((*(_QWORD *)&Y >> 52) & 0x7FF) - v5;
  v8 = *(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
  {
    v9 = LODWORD(X);
LABEL_3:
    handle_error((unsigned int)"atan2", 16, v9, 1, 0, 33, *(__int64 *)&X, *(__int64 *)&Y, 2);
    return Y;
  }
  v10 = 0LL;
  if ( v8 > 0x7FF0000000000000LL )
  {
    v9 = LODWORD(Y);
    goto LABEL_3;
  }
  if ( !v8 )
  {
    if ( X >= 0.0 )
      return Y;
    goto LABEL_8;
  }
  if ( !v6 )
  {
    if ( Y < 0.0 )
    {
      v11 = qword_180181A60;
      goto LABEL_32;
    }
    controlfp(0x10u, 0x10u);
    v6 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  }
  if ( (unsigned int)v5 < 0x3FD && ((unsigned __int16)(*(_QWORD *)&Y >> 52) & 0x7FFu) < 0x3FD )
  {
    if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0 )
    {
      v14 = *(_QWORD *)&X + 0x4000000000000000LL;
    }
    else
    {
      v12 = *(_QWORD *)&X | 0x4010000000000000LL;
      if ( X >= 0.0 )
        v13 = *(double *)&v12 + -4.0;
      else
        v13 = *(double *)&v12 + 4.0;
      *(double *)&v14 = v13;
    }
    if ( (*(_QWORD *)&v3 & 0x7FF0000000000000LL) != 0 )
    {
      *(_QWORD *)&v17 = *(_QWORD *)&v3 + 0x4000000000000000LL;
    }
    else
    {
      v15 = *(_QWORD *)&v3 | 0x4010000000000000LL;
      if ( v3 >= 0.0 )
        v16 = *(double *)&v15 + -4.0;
      else
        v16 = *(double *)&v15 + 4.0;
      v17 = v16;
    }
    v4 = *(double *)&v14;
    v2 = v17;
    v7 = ((*(_QWORD *)&v17 >> 52) & 0x7FF) - ((v14 >> 52) & 0x7FF);
  }
  if ( v7 > 56 )
  {
    v11 = qword_180181A60;
    goto LABEL_31;
  }
  if ( v7 >= -28 || X < 0.0 )
  {
    if ( v7 < -56 && X < 0.0 )
    {
LABEL_8:
      v11 = qword_180181A58;
      if ( v3 < 0.0 )
        v11 = qword_180181A58 ^ _xmm;
      goto LABEL_33;
    }
    if ( v8 == 0x7FF0000000000000LL && v6 == 0x7FF0000000000000LL )
    {
      if ( X >= 0.0 )
        v11 = qword_180181A68;
      else
        v11 = qword_180181A70;
LABEL_31:
      if ( v3 >= 0.0 )
      {
LABEL_33:
        v18 = 16;
        v19 = 16;
LABEL_34:
        controlfp(v19, v18);
        return *(double *)&v11;
      }
LABEL_32:
      v11 ^= _xmm;
      goto LABEL_33;
    }
    if ( X < 0.0 )
      *(_QWORD *)&v4 ^= _xmm;
    if ( v3 < 0.0 )
      *(_QWORD *)&v2 ^= _xmm;
    v23 = 0;
    LOBYTE(v23) = v2 > v4;
    if ( v2 > v4 )
    {
      v24 = v4;
      v4 = v2;
      v2 = v24;
    }
    v25 = v2 / v4;
    if ( v2 / v4 <= 0.0625 )
    {
      v28 = 0.0;
      if ( v25 >= 0.00000001 )
        v25 = v25
            + (v2
             - COERCE_DOUBLE(*(_QWORD *)&v25 & 0xFFFFFFFF00000000uLL)
             * COERCE_DOUBLE(*(_QWORD *)&v4 & 0xFFFFFFFF00000000uLL)
             - (v4 - COERCE_DOUBLE(*(_QWORD *)&v4 & 0xFFFFFFFF00000000uLL))
             * COERCE_DOUBLE(*(_QWORD *)&v25 & 0xFFFFFFFF00000000uLL)
             - (v25 - COERCE_DOUBLE(*(_QWORD *)&v25 & 0xFFFFFFFF00000000uLL)) * v4)
            / v4
            - (0.3333333333333317
             - (0.1999999999939322
              - (0.1428571356180717 - (0.1111073628351453 - v25 * v25 * 0.09002981028544979) * (v25 * v25))
              * (v25
               * v25))
             * (v25
              * v25))
            * (v25
             * v25
             * v25);
    }
    else
    {
      v26 = (unsigned int)((int)(v25 * 256.0 + 0.5) - 16);
      v27 = qword_18013AEF0[v26];
      v28 = qword_18013A760[v26];
      v29 = (double)(int)(v25 * 256.0 + 0.5) * 0.00390625;
      v30 = 1023 - ((*(_QWORD *)&v4 >> 52) & 0x7FF);
      v31 = (__int64)(v30 / 2) << 52;
      v32 = (__int64)(v30 - v30 / 2) << 52;
      v33 = (COERCE_DOUBLE(v31 + 0x3FF0000000000000LL) * v2 * COERCE_DOUBLE(v32 + 0x3FF0000000000000LL)
           - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(COERCE_DOUBLE(v31 + 0x3FF0000000000000LL) * v4 * COERCE_DOUBLE(v32 + 0x3FF0000000000000LL)) & 0xFFFFFFFFF8000000uLL)
           * v29
           - (COERCE_DOUBLE(v31 + 0x3FF0000000000000LL) * v4 * COERCE_DOUBLE(v32 + 0x3FF0000000000000LL)
            - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(COERCE_DOUBLE(v31 + 0x3FF0000000000000LL) * v4 * COERCE_DOUBLE(v32 + 0x3FF0000000000000LL)) & 0xFFFFFFFFF8000000uLL))
           * v29)
          / (v29 * (COERCE_DOUBLE(v31 + 0x3FF0000000000000LL) * v2 * COERCE_DOUBLE(v32 + 0x3FF0000000000000LL))
           + COERCE_DOUBLE(v31 + 0x3FF0000000000000LL) * v4 * COERCE_DOUBLE(v32 + 0x3FF0000000000000LL));
      v25 = v33 + v27 - (0.333333333332241 - v33 * v33 * 0.1999991803898914) * (v33 * v33) * v33;
    }
    if ( v23 )
    {
      v28 = *(double *)&qword_180181A88 - v28;
      v25 = *(double *)&qword_180181A90 - v25;
    }
    if ( X < 0.0 )
    {
      v28 = *(double *)&qword_180181A78 - v28;
      v25 = *(double *)&qword_180181A80 - v25;
    }
    v34 = v28 + v25;
    if ( v3 < 0.0 )
      *(_QWORD *)&v34 ^= _xmm;
    return v34;
  }
  else
  {
    if ( v7 < -1074 )
    {
      if ( v3 >= 0.0 )
        *(double *)&v11 = 0.0;
      else
        *(double *)&v11 = DOUBLE_N0_0;
LABEL_48:
      v19 = 18;
      v18 = 18;
      goto LABEL_34;
    }
    if ( v7 < -1022 )
    {
      v20 = fabs(1.267650600228229e30 * v2 / v4);
      v21 = *(_QWORD *)&v20 >> 52;
      if ( (unsigned int)(*(_QWORD *)&v20 >> 52) <= 0x64 )
      {
        v22 = *(_QWORD *)&v20 & 0x800FFFFFFFFFFFFFuLL | 0x10000000000000LL;
        if ( 101 - (int)v21 <= 54 )
          v10 = ((v22 >> (100 - (unsigned __int8)v21)) & 1) + (v22 >> (100 - (unsigned __int8)v21) >> 1);
      }
      else
      {
        v10 = *(_QWORD *)&v20 & 0x800FFFFFFFFFFFFFuLL | ((v21 - 100) << 52);
      }
      v11 = COERCE_UNSIGNED_INT64(1.267650600228229e30 * v2 / v4) & 0x8000000000000000uLL | v10;
      if ( (v10 & 0x7FF0000000000000LL) != 0 )
        return *(double *)&v11;
      goto LABEL_48;
    }
    return v2 / v4;
  }
}
