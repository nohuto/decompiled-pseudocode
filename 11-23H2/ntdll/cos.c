/*
 * XREFs of cos @ 0x180092260
 * Callers:
 *     <none>
 * Callees:
 *     sin_piby4 @ 0x180092AAC (sin_piby4.c)
 *     _controlfp @ 0x18009746C (_controlfp.c)
 *     _handle_error @ 0x1800975A8 (_handle_error.c)
 *     __remainder_piby2 @ 0x1800976D8 (__remainder_piby2.c)
 */

double __cdecl cos(double X)
{
  __int64 v1; // xmm6_8
  unsigned __int64 v3; // rdx
  double result; // xmm0_8
  double v5; // xmm1_8
  double v6; // xmm6_8
  int v7; // ecx
  double v8; // xmm3_8
  double v9; // xmm2_8
  double v10; // xmm6_8
  unsigned __int64 v11; // r8
  double v12; // xmm1_8
  double v13; // xmm1_8
  int v14; // ecx
  double v15; // xmm7_8
  double v16; // xmm6_8
  int v17; // ecx
  int v18; // ecx
  double v19; // xmm3_8
  double v20; // [rsp+80h] [rbp+8h] BYREF
  double v21; // [rsp+88h] [rbp+10h]
  double v22; // [rsp+90h] [rbp+18h] BYREF
  double v23; // [rsp+98h] [rbp+20h] BYREF

  v21 = X;
  *(double *)&v1 = X;
  v3 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x3FE921FB54442D18LL )
  {
    if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
    {
      result = 0.0;
      if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
        handle_error((unsigned int)"cos", 18, LODWORD(X), 1, 0, 33, v1, 0LL, 1);
      else
        handle_error((unsigned int)"cos", 18, 0, 1, 8, 33, v1, 0LL, 1);
      return result;
    }
    if ( v3 != *(_QWORD *)&X )
      v1 = *(_QWORD *)&X ^ _xmm;
    if ( *(double *)&v1 >= 500000.0 )
    {
      _remainder_piby2(*(_QWORD *)&X, &v22, &v23, &v20);
      v14 = LODWORD(v20);
      v15 = v22;
      v16 = v23;
    }
    else
    {
      if ( v3 > 0x400F6A7A2955385ELL )
      {
        if ( v3 > 0x401C463ABECCB2BBLL )
          v7 = (int)(*(double *)&v1 * 0.6366197723675814 + 0.5);
        else
          v7 = (v3 > 0x4015FDBBE9BBA775LL) + 3;
      }
      else
      {
        v7 = (v3 > 0x4002D97C7F3321D2LL) + 1;
      }
      v8 = (double)v7;
      v9 = (double)v7 * 6.077100506506192e-11;
      v10 = *(double *)&v1 - (double)v7 * 1.570796326734126;
      v20 = v10;
      v11 = (v3 >> 52) - ((*(_QWORD *)&v10 >> 52) & 0x7FFLL);
      if ( v11 > 0xF )
      {
        v12 = v10;
        v10 = v10 - v8 * 6.077100506303966e-11;
        v9 = v8 * 2.022266248795951e-21 - (v12 - v10 - v8 * 6.077100506303966e-11);
        if ( v11 > 0x30 )
        {
          v13 = v10;
          v10 = v10 - v8 * 2.022266248711166e-21;
          v9 = v8 * 8.4784276603689e-32 - (v13 - v10 - v8 * 2.022266248711166e-21);
        }
      }
      v14 = v7 & 3;
      v15 = v10 - v9;
      v16 = v10 - (v10 - v9) - v9;
    }
    if ( v14 )
    {
      v17 = v14 - 1;
      if ( !v17 )
      {
        *(_QWORD *)&result = COERCE_UNSIGNED_INT64(((double (*)(void))sin_piby4)()) ^ _xmm;
        return result;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
        *(_QWORD *)&v19 = COERCE_UNSIGNED_INT64(
                            (((((0.000000002087614638223296 - v15 * v15 * 1.138263980679449e-11) * (v15 * v15)
                              - 0.0000002755731727234419)
                             * (v15
                              * v15)
                             + 0.00002480158729876704)
                            * (v15
                             * v15)
                            - 0.00138888888888874)
                           * (v15
                            * v15)
                           + 0.04166666666666666)
                          * (v15
                           * v15
                           * (v15
                            * v15))
                          + 1.0
                          - (1.0
                           - v15 * v15 * 0.5)
                          - v15 * v15 * 0.5
                          - v16 * v15
                          + 1.0
                          - v15 * v15 * 0.5) ^ _xmm;
        return v19;
      }
      if ( v18 == 1 )
      {
        result = v15;
        sin_piby4();
        return result;
      }
    }
    v6 = v16 * v15;
    v5 = v15 * v15;
    return (((((0.000000002087614638223296 - v5 * 1.138263980679449e-11) * v5 - 0.0000002755731727234419) * v5
            + 0.00002480158729876704)
           * v5
           - 0.00138888888888874)
          * v5
          + 0.04166666666666666)
         * (v5
          * v5)
         + 1.0
         - (1.0
          - v5 * 0.5)
         - v5 * 0.5
         - v6
         + 1.0
         - v5 * 0.5;
  }
  if ( v3 >= 0x3F20000000000000LL )
  {
    v5 = X * X;
    v6 = X * 0.0;
    return (((((0.000000002087614638223296 - v5 * 1.138263980679449e-11) * v5 - 0.0000002755731727234419) * v5
            + 0.00002480158729876704)
           * v5
           - 0.00138888888888874)
          * v5
          + 0.04166666666666666)
         * (v5
          * v5)
         + 1.0
         - (1.0
          - v5 * 0.5)
         - v5 * 0.5
         - v6
         + 1.0
         - v5 * 0.5;
  }
  if ( v3 >= 0x3E40000000000000LL )
    return 1.0 - X * X * 0.5;
  if ( v3 )
    controlfp(0x10u, 0x10u);
  return DOUBLE_1_0;
}
