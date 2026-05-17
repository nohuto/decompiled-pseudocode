/*
 * XREFs of pow @ 0x1800A4C30
 * Callers:
 *     <none>
 * Callees:
 *     _pow_special @ 0x180097F50 (_pow_special.c)
 */

// local variable allocation has failed, the output may be wrong!
double __cdecl pow(double X, double Y)
{
  __m128i v2; // xmm5
  double v3; // r8
  double v4; // xmm6_8
  __m128i v5; // xmm2
  unsigned __int64 v6; // r8
  double v7; // xmm2_8
  double v8; // xmm1_8
  double v9; // xmm4_8
  double v10; // xmm5_8
  double v11; // xmm7_8
  double v12; // xmm2_8
  double v13; // xmm0_8
  double v14; // xmm1_8
  double v15; // xmm3_8
  double v16; // xmm7_8
  double v17; // xmm0_8
  double v18; // xmm7_8
  double v19; // xmm6_8
  double v20; // xmm3_8
  double v21; // xmm0_8
  double v22; // xmm6_8
  __m128d v23; // xmm7
  __int64 v24; // rdx
  __m128i v25; // xmm4
  double v26; // xmm1_8
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rcx
  double v30; // xmm2_8
  int v31; // r9d
  double v32; // xmm0_8
  double v33; // rcx
  double v34; // xmm1_8
  int v35; // r11d
  char v36; // cl
  unsigned __int64 v37; // xmm0_8
  __int64 v38; // r11
  __m128i v39; // xmm2
  __int64 v40; // r11
  signed __int64 v41; // r10
  double v42; // xmm0_8
  double v43; // xmm1_8
  double v44; // xmm3_8
  double v45; // xmm5_8
  double v46; // xmm7_8
  double v47; // xmm2_8
  double v48; // xmm1_8
  double v49; // xmm3_8
  double v50; // xmm2_8
  double v51; // xmm5_8
  double v52; // xmm7_8
  double v53; // xmm4_8
  double v54; // rax
  double v55; // r11
  double v56; // rax
  double v57; // r11
  __int64 v58; // rax
  __int64 v59; // r11
  double v60; // rax
  double v61; // rax
  int v62; // r9d
  double v63; // rax
  double v64; // r9
  double v65; // [rsp+40h] [rbp-D8h]
  __int64 v67; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v68; // [rsp+A0h] [rbp-78h]

  v65 = X;
  if ( (*(_QWORD *)&Y & qword_18017EF38) == 0 )
    return *(double *)&xmmword_18017F090;
  if ( *(_QWORD *)&Y != qword_18017EF28 )
  {
    v67 = qword_18017EF30;
    if ( (*(_QWORD *)&X & qword_18017EF00) != qword_18017EF00 )
    {
      if ( *(_QWORD *)&X == qword_18017EF28 )
        return X;
      if ( *(_QWORD *)&X == qword_18017EF30 )
        goto LABEL_62;
      if ( (*(_QWORD *)&X & qword_18017EF10) == qword_18017EF10 )
        goto LABEL_71;
      if ( (*(_QWORD *)&Y & qword_18017EF10) <= qword_18017EEF0 )
      {
        if ( (*(_QWORD *)&Y & qword_18017EF10) < qword_18017EEF8 )
          return *(double *)&qword_18017EF28 + Y;
LABEL_9:
        v3 = X;
        v4 = _mm_cvtepi32_pd(_mm_sub_epi64(_mm_srli_epi64(*(__m128i *)&X, 0x34u), (__m128i)xmmword_18017F040)).m128d_f64[0];
        v5 = _mm_and_si128(*(__m128i *)&X, (__m128i)xmmword_18017F030);
        if ( v4 == *(double *)&qword_18017F120 )
        {
          v39 = _mm_or_si128(v5, (__m128i)xmmword_18017F090);
          *(double *)v39.m128i_i64 = *(double *)v39.m128i_i64 - *(double *)&xmmword_18017F090;
          v2.m128i_i64[0] = v39.m128i_i64[0];
          v5 = _mm_and_si128(v39, (__m128i)xmmword_18017F030);
          v3 = *(double *)v5.m128i_i64;
          *(_QWORD *)&v4 = *(_OWORD *)&_mm_cvtepi32_pd(_mm_sub_epi32(_mm_srli_epi64(v2, 0x34u), (__m128i)xmmword_18017F130));
        }
        v68 = 2 * (qword_18017EFB0 & *(_QWORD *)&v3) + (qword_18017EFA8 & *(_QWORD *)&v3);
        v6 = v68 >> 44;
        *(_QWORD *)&v7 = _mm_or_si128(v5, (__m128i)xmmword_18017F0A0).m128i_u64[0];
        *(_QWORD *)&v8 = _mm_or_si128((__m128i)v68, (__m128i)xmmword_18017F0A0).m128i_u64[0];
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(X - *(double *)&xmmword_18017F090) & xmmword_18017F150) < *(double *)&qword_18017F140 )
        {
          v42 = v8;
          v43 = v8 - v7;
          v44 = dbl_180180180[v6] + dbl_180180990[v6];
          *(_QWORD *)&v45 = COERCE_UNSIGNED_INT64(v43 * v44) & xmmword_18017EFC0;
          v46 = (v43 - v45 * v42) * v44;
          v47 = v46 + v45;
          v48 = (*(double *)&qword_18017F0E0 * v47 + *(double *)&qword_18017F0D0) * v47 * (v47 * v47);
          v49 = ((*(double *)&qword_18017F110 * v47 + *(double *)&qword_18017F100) * v47 + *(double *)&qword_18017F0F0)
              * v47
              * (v47
               * v47
               * (v47
                * v47));
          v50 = v45;
          v51 = v45 * v46 + v46 * v46 * *(double *)&qword_18017F0C0 + v46;
          v52 = v50;
          v53 = v50 * v50 * *(double *)&qword_18017F0C0;
          v12 = v50 + v53;
          v14 = *(double *)&qword_18017F070 * v4 + dbl_18017F970[v6] - (v48 + v49 + v52 - v12 + v53 + v51);
          v15 = v14 - v12;
          v13 = dbl_18017F160[v6];
        }
        else
        {
          v9 = v8 - v7;
          v10 = v9 * dbl_180180180[v6];
          v11 = v9 * dbl_180180990[v6];
          v12 = v10 + v11;
          v13 = dbl_18017F160[v6];
          v14 = dbl_18017F970[v6]
              + *(double *)&qword_18017F070 * v4
              - ((*(double *)&qword_18017F0D0 * v12 + *(double *)&qword_18017F0C0) * (v12 * v12)
               + ((*(double *)&qword_18017F100 * v12 + *(double *)&qword_18017F0F0) * v12 + *(double *)&qword_18017F0E0)
               * (v12
                * v12
                * (v12
                 * v12))
               + v11
               + v10
               - v12);
          v15 = v14 - v12;
        }
        v16 = v13 + *(double *)&qword_18017F060 * v4;
        *(_QWORD *)&v17 = COERCE_UNSIGNED_INT64(v16 + v15) & xmmword_18017EFC0;
        v18 = v16 - (v16 + v15) + v15 + v14 - (v12 + v15) + v16 + v15 - v17;
        v19 = v17 * COERCE_DOUBLE(xmmword_18017EFC0 & *(_QWORD *)&Y);
        v20 = (Y - COERCE_DOUBLE(xmmword_18017EFC0 & *(_QWORD *)&Y)) * v18
            + (Y - COERCE_DOUBLE(xmmword_18017EFC0 & *(_QWORD *)&Y)) * v17
            + v18 * COERCE_DOUBLE(xmmword_18017EFC0 & *(_QWORD *)&Y);
        v21 = v19 + v20;
        v22 = v19 - v21 + v20;
        v23 = (__m128d)(unsigned __int64)qword_180181210;
        v23.m128d_f64[0] = *(double *)&qword_180181210 * v21;
        v24 = *(_QWORD *)&v21;
        if ( *(double *)&qword_180181210 * v21 <= *(double *)&qword_1801811F0 )
        {
          if ( v23.m128d_f64[0] < *(double *)&qword_180181200 )
          {
            v38 = v67 | qword_1801811C0;
LABEL_91:
            v62 = dword_18017EED8;
            if ( (v38 & qword_18017EF38) != 0 )
              v62 = dword_18017EEE0;
            *(_QWORD *)&X = pow_special(v65, Y, *(double *)&v38, v62).m128_u64[0];
            return X;
          }
          v25 = _mm_cvtpd_epi32(v23);
          v26 = _mm_cvtepi32_pd(v25).m128d_f64[0];
          v27 = _mm_cvtsi128_si32(v25);
          v28 = v27 & 0x3F;
          v29 = (unsigned int)((v27 - (int)v28) >> 6);
          v31 = 0;
          if ( (int)v29 <= dword_1801811A0 )
            v31 = v29;
          *(_QWORD *)&v33 = (v29 + 1023) << 52;
          v30 = v21 - *(double *)&qword_180181220 * v26 + v26 * *(double *)&qword_180181230 + v22;
          v32 = (*(double *)&qword_180181280 * v30 + *(double *)&xmmword_18017F090) * v30
              + (*(double *)&qword_180181260 * v30 + *(double *)&qword_180181270) * (v30 * v30 * v30)
              + (*(double *)&qword_180181240 * v30 + *(double *)&qword_180181250) * (v30 * v30 * (v30 * v30 * v30));
          v34 = dbl_180181290[v28] * v32 + dbl_180181490[v28] * v32 + dbl_180181490[v28] + dbl_180181290[v28];
          if ( *(_QWORD *)&v33 != qword_18017F010 )
          {
            if ( v31 )
            {
              v35 = 0;
              if ( v34 >= *(double *)&xmmword_18017F090 )
                v35 = v31;
              if ( v35 == dword_1801811A0 )
              {
                *(_QWORD *)&X = COERCE_UNSIGNED_INT64(v34 * v33) | v67;
              }
              else
              {
                if ( v24 > qword_1801811E0 )
                {
                  v37 = qword_1801811D0 | v67;
                }
                else
                {
                  v36 = v31 + 50;
                  if ( v31 + 1074 < 0 )
                    v36 = 0;
                  v37 = COERCE_UNSIGNED_INT64(v34 * COERCE_DOUBLE(1LL << v36)) | v67;
                }
                *(_QWORD *)&X = pow_special(v65, Y, *(double *)&v37, dword_18017EEDC).m128_u64[0];
              }
            }
            else
            {
              *(_QWORD *)&X = COERCE_UNSIGNED_INT64(v34 * v33) | v67;
            }
            return X;
          }
          if ( v34 < *(double *)&xmmword_18017F090 )
          {
            *(_QWORD *)&X = *(_QWORD *)&v34 | xmmword_1801811B0 | v67;
            return X;
          }
        }
        v38 = v67 | qword_18017F010;
        goto LABEL_91;
      }
      goto LABEL_57;
    }
    if ( (*(_QWORD *)&Y & qword_18017EF10) > qword_18017EEF0 )
    {
LABEL_57:
      if ( (*(_QWORD *)&X & qword_18017EF10) != qword_18017EF10 )
      {
        if ( (*(_QWORD *)&X & qword_18017EF38) != 0 )
        {
          if ( *(_QWORD *)&X != qword_18017EF68 )
          {
            if ( (qword_18017EF38 & *(_QWORD *)&X) < qword_18017EF28 )
            {
              *(double *)&v38 = 0.0;
              if ( (*(_QWORD *)&Y & qword_18017EF00) != 0 )
                v38 = qword_18017EF20;
            }
            else
            {
              *(double *)&v38 = 0.0;
              if ( (*(_QWORD *)&Y & qword_18017EF00) == 0 )
                v38 = qword_18017EF20;
            }
            v61 = 0.0;
            if ( (*(_QWORD *)&Y & qword_18017EF10) == qword_18017EF10 )
              v61 = Y;
            if ( (*(_QWORD *)&v61 & qword_18017EF40) == 0 )
            {
              if ( v61 != 0.0 )
                return *(double *)&v38;
              goto LABEL_91;
            }
            v57 = Y;
LABEL_99:
            *(_QWORD *)&X = pow_special(X, Y, v57, dword_18017EECC).m128_u64[0];
            return X;
          }
LABEL_50:
          v56 = 0.0;
          v57 = Y;
          if ( (*(_QWORD *)&Y & qword_18017EF10) == qword_18017EF10 )
            v56 = Y;
          if ( (*(_QWORD *)&v56 & qword_18017EF40) == 0 )
          {
            *(_QWORD *)&X = v67 | qword_18017EF28;
            return X;
          }
          goto LABEL_99;
        }
LABEL_62:
        if ( (*(_QWORD *)&Y & qword_18017EF10) == qword_18017EF10 )
        {
          v57 = Y;
          if ( *(_QWORD *)&Y != qword_18017EF18 )
          {
            if ( (*(_QWORD *)&Y & qword_18017EF40) == 0 )
              return 0.0;
            goto LABEL_99;
          }
          v58 = qword_18017EF20;
        }
        else
        {
          if ( (*(_QWORD *)&Y & qword_18017EF00) == 0 )
            return *(double *)&v67;
          v58 = qword_18017EF20;
        }
        *(_QWORD *)&X = pow_special(X, Y, COERCE_DOUBLE(v58 | v67), dword_18017EEC4).m128_u64[0];
        return X;
      }
      goto LABEL_71;
    }
    v40 = *(_QWORD *)&Y & qword_18017EF38;
    v41 = ((*(_QWORD *)&Y & (unsigned __int64)qword_18017EF38) >> qword_18017EF78) - qword_18017EF80;
    if ( v41 >= 0 )
    {
      if ( v41 > qword_18017EF90 )
      {
LABEL_39:
        if ( *(_QWORD *)&X == qword_18017EF70 )
          goto LABEL_62;
        if ( *(_QWORD *)&X == qword_18017EF68 )
          goto LABEL_50;
        if ( (*(_QWORD *)&X & qword_18017EF10) != qword_18017EF10 )
        {
          *(_OWORD *)&X = *(_QWORD *)&X & (unsigned __int64)qword_18017EF38;
          goto LABEL_9;
        }
LABEL_71:
        v59 = 0LL;
        if ( (*(_QWORD *)&Y & qword_18017EF00) == 0 )
          v59 = qword_18017EF20;
        if ( (*(_QWORD *)&X & qword_18017EF40) == 0 )
        {
          v60 = 0.0;
          if ( (*(_QWORD *)&Y & qword_18017EF10) == qword_18017EF10 )
            v60 = Y;
          if ( (*(_QWORD *)&v60 & qword_18017EF40) == 0 )
          {
            *(_QWORD *)&X = v59 | v67;
            return X;
          }
          v57 = Y;
          goto LABEL_99;
        }
        v55 = X;
        goto LABEL_95;
      }
      if ( (v40 & ((unsigned __int64)qword_18017EF98 >> v41)) == 0 )
      {
        if ( (v40 & ((unsigned __int64)qword_18017EFA0 >> v41)) != 0 )
          v67 = qword_18017EF00;
        goto LABEL_39;
      }
    }
    if ( (*(_QWORD *)&X & qword_18017EF10) != qword_18017EF10 )
    {
      if ( *(_QWORD *)&X != qword_18017EF70 )
      {
        *(_QWORD *)&X = pow_special(X, Y, *(double *)&qword_18017EF50, dword_18017EED4).m128_u64[0];
        return X;
      }
      goto LABEL_62;
    }
    goto LABEL_71;
  }
  v54 = 0.0;
  v55 = X;
  if ( (*(_QWORD *)&X & qword_18017EF10) == qword_18017EF10 )
    v54 = X;
  if ( (*(_QWORD *)&v54 & qword_18017EF40) != 0 )
  {
LABEL_95:
    v63 = 0.0;
    if ( (*(_QWORD *)&Y & qword_18017EF10) == qword_18017EF10 )
      v63 = Y;
    if ( (*(_QWORD *)&v63 & qword_18017EF40) != 0 )
    {
      v64 = Y;
      if ( *(_QWORD *)&v55 == qword_18017EF48 )
      {
        v55 = Y;
      }
      else
      {
        if ( *(_QWORD *)&Y == qword_18017EF48 )
          v64 = v55;
        if ( (qword_18017EF00 & *(_QWORD *)&v64) != 0 )
          v64 = v55;
        if ( (qword_18017EF00 & *(_QWORD *)&v55) != 0 )
          v55 = v64;
      }
      *(_QWORD *)&X = pow_special(X, Y, v55, dword_18017EED0).m128_u64[0];
    }
    else
    {
      *(_QWORD *)&X = pow_special(X, Y, v55, dword_18017EEC8).m128_u64[0];
    }
  }
  return X;
}
