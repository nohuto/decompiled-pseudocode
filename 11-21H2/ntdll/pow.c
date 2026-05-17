/*
 * XREFs of pow @ 0x1800A9DF0
 * Callers:
 *     <none>
 * Callees:
 *     _pow_special @ 0x18009CE50 (_pow_special.c)
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
  unsigned int v62; // r9d
  double v63; // rax
  double v64; // r9
  double v65; // [rsp+40h] [rbp-D8h]
  __int64 v67; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v68; // [rsp+A0h] [rbp-78h]

  v65 = X;
  if ( (*(_QWORD *)&Y & qword_180174EE8) == 0 )
    return *(double *)&xmmword_180175040;
  if ( *(_QWORD *)&Y != qword_180174ED8 )
  {
    v67 = qword_180174EE0;
    if ( (*(_QWORD *)&X & qword_180174EB0) != qword_180174EB0 )
    {
      if ( *(_QWORD *)&X == qword_180174ED8 )
        return X;
      if ( *(_QWORD *)&X == qword_180174EE0 )
        goto LABEL_62;
      if ( (*(_QWORD *)&X & qword_180174EC0) == qword_180174EC0 )
        goto LABEL_71;
      if ( (*(_QWORD *)&Y & qword_180174EC0) <= qword_180174EA0 )
      {
        if ( (*(_QWORD *)&Y & qword_180174EC0) < qword_180174EA8 )
          return *(double *)&qword_180174ED8 + Y;
LABEL_9:
        v3 = X;
        v4 = _mm_cvtepi32_pd(_mm_sub_epi64(_mm_srli_epi64(*(__m128i *)&X, 0x34u), (__m128i)xmmword_180174FF0)).m128d_f64[0];
        v5 = _mm_and_si128(*(__m128i *)&X, (__m128i)xmmword_180174FE0);
        if ( v4 == *(double *)&qword_1801750D0 )
        {
          v39 = _mm_or_si128(v5, (__m128i)xmmword_180175040);
          *(double *)v39.m128i_i64 = *(double *)v39.m128i_i64 - *(double *)&xmmword_180175040;
          v2.m128i_i64[0] = v39.m128i_i64[0];
          v5 = _mm_and_si128(v39, (__m128i)xmmword_180174FE0);
          v3 = *(double *)v5.m128i_i64;
          *(_QWORD *)&v4 = *(_OWORD *)&_mm_cvtepi32_pd(_mm_sub_epi32(_mm_srli_epi64(v2, 0x34u), (__m128i)xmmword_1801750E0));
        }
        v68 = 2 * (qword_180174F60 & *(_QWORD *)&v3) + (qword_180174F58 & *(_QWORD *)&v3);
        v6 = v68 >> 44;
        *(_QWORD *)&v7 = _mm_or_si128(v5, (__m128i)xmmword_180175050).m128i_u64[0];
        *(_QWORD *)&v8 = _mm_or_si128((__m128i)v68, (__m128i)xmmword_180175050).m128i_u64[0];
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(X - *(double *)&xmmword_180175040) & xmmword_180175100) < *(double *)&qword_1801750F0 )
        {
          v42 = v8;
          v43 = v8 - v7;
          v44 = dbl_180176130[v6] + dbl_180176940[v6];
          *(_QWORD *)&v45 = COERCE_UNSIGNED_INT64(v43 * v44) & xmmword_180174F70;
          v46 = (v43 - v45 * v42) * v44;
          v47 = v46 + v45;
          v48 = (*(double *)&qword_180175090 * v47 + *(double *)&qword_180175080) * v47 * (v47 * v47);
          v49 = ((*(double *)&qword_1801750C0 * v47 + *(double *)&qword_1801750B0) * v47 + *(double *)&qword_1801750A0)
              * v47
              * (v47
               * v47
               * (v47
                * v47));
          v50 = v45;
          v51 = v45 * v46 + v46 * v46 * *(double *)&qword_180175070 + v46;
          v52 = v50;
          v53 = v50 * v50 * *(double *)&qword_180175070;
          v12 = v50 + v53;
          v14 = *(double *)&qword_180175020 * v4 + dbl_180175920[v6] - (v48 + v49 + v52 - v12 + v53 + v51);
          v15 = v14 - v12;
          v13 = dbl_180175110[v6];
        }
        else
        {
          v9 = v8 - v7;
          v10 = v9 * dbl_180176130[v6];
          v11 = v9 * dbl_180176940[v6];
          v12 = v10 + v11;
          v13 = dbl_180175110[v6];
          v14 = dbl_180175920[v6]
              + *(double *)&qword_180175020 * v4
              - ((*(double *)&qword_180175080 * v12 + *(double *)&qword_180175070) * (v12 * v12)
               + ((*(double *)&qword_1801750B0 * v12 + *(double *)&qword_1801750A0) * v12 + *(double *)&qword_180175090)
               * (v12
                * v12
                * (v12
                 * v12))
               + v11
               + v10
               - v12);
          v15 = v14 - v12;
        }
        v16 = v13 + *(double *)&qword_180175010 * v4;
        *(_QWORD *)&v17 = COERCE_UNSIGNED_INT64(v16 + v15) & xmmword_180174F70;
        v18 = v16 - (v16 + v15) + v15 + v14 - (v12 + v15) + v16 + v15 - v17;
        v19 = v17 * COERCE_DOUBLE(xmmword_180174F70 & *(_QWORD *)&Y);
        v20 = (Y - COERCE_DOUBLE(xmmword_180174F70 & *(_QWORD *)&Y)) * v18
            + (Y - COERCE_DOUBLE(xmmword_180174F70 & *(_QWORD *)&Y)) * v17
            + v18 * COERCE_DOUBLE(xmmword_180174F70 & *(_QWORD *)&Y);
        v21 = v19 + v20;
        v22 = v19 - v21 + v20;
        v23 = (__m128d)(unsigned __int64)qword_1801771C0;
        v23.m128d_f64[0] = *(double *)&qword_1801771C0 * v21;
        v24 = *(_QWORD *)&v21;
        if ( *(double *)&qword_1801771C0 * v21 <= *(double *)&qword_1801771A0 )
        {
          if ( v23.m128d_f64[0] < *(double *)&qword_1801771B0 )
          {
            v38 = v67 | qword_180177170;
LABEL_91:
            v62 = dword_180174E88;
            if ( (v38 & qword_180174EE8) != 0 )
              v62 = dword_180174E90;
            *(_QWORD *)&X = pow_special(v65, Y, *(double *)&v38, v62).m128_u64[0];
            return X;
          }
          v25 = _mm_cvtpd_epi32(v23);
          v26 = _mm_cvtepi32_pd(v25).m128d_f64[0];
          v27 = _mm_cvtsi128_si32(v25);
          v28 = v27 & 0x3F;
          v29 = (unsigned int)((v27 - (int)v28) >> 6);
          v31 = 0;
          if ( (int)v29 <= dword_180177150 )
            v31 = v29;
          *(_QWORD *)&v33 = (v29 + 1023) << 52;
          v30 = v21 - *(double *)&qword_1801771D0 * v26 + v26 * *(double *)&qword_1801771E0 + v22;
          v32 = (*(double *)&qword_180177230 * v30 + *(double *)&xmmword_180175040) * v30
              + (*(double *)&qword_180177210 * v30 + *(double *)&qword_180177220) * (v30 * v30 * v30)
              + (*(double *)&qword_1801771F0 * v30 + *(double *)&qword_180177200) * (v30 * v30 * (v30 * v30 * v30));
          v34 = dbl_180177240[v28] * v32 + dbl_180177440[v28] * v32 + dbl_180177440[v28] + dbl_180177240[v28];
          if ( *(_QWORD *)&v33 != qword_180174FC0 )
          {
            if ( v31 )
            {
              v35 = 0;
              if ( v34 >= *(double *)&xmmword_180175040 )
                v35 = v31;
              if ( v35 == dword_180177150 )
              {
                *(_QWORD *)&X = COERCE_UNSIGNED_INT64(v34 * v33) | v67;
              }
              else
              {
                if ( v24 > qword_180177190 )
                {
                  v37 = qword_180177180 | v67;
                }
                else
                {
                  v36 = v31 + 50;
                  if ( v31 + 1074 < 0 )
                    v36 = 0;
                  v37 = COERCE_UNSIGNED_INT64(v34 * COERCE_DOUBLE(1LL << v36)) | v67;
                }
                *(_QWORD *)&X = pow_special(v65, Y, *(double *)&v37, dword_180174E8C).m128_u64[0];
              }
            }
            else
            {
              *(_QWORD *)&X = COERCE_UNSIGNED_INT64(v34 * v33) | v67;
            }
            return X;
          }
          if ( v34 < *(double *)&xmmword_180175040 )
          {
            *(_QWORD *)&X = *(_QWORD *)&v34 | xmmword_180177160 | v67;
            return X;
          }
        }
        v38 = v67 | qword_180174FC0;
        goto LABEL_91;
      }
      goto LABEL_57;
    }
    if ( (*(_QWORD *)&Y & qword_180174EC0) > qword_180174EA0 )
    {
LABEL_57:
      if ( (*(_QWORD *)&X & qword_180174EC0) != qword_180174EC0 )
      {
        if ( (*(_QWORD *)&X & qword_180174EE8) != 0 )
        {
          if ( *(_QWORD *)&X != qword_180174F18 )
          {
            if ( (qword_180174EE8 & *(_QWORD *)&X) < qword_180174ED8 )
            {
              *(double *)&v38 = 0.0;
              if ( (*(_QWORD *)&Y & qword_180174EB0) != 0 )
                v38 = qword_180174ED0;
            }
            else
            {
              *(double *)&v38 = 0.0;
              if ( (*(_QWORD *)&Y & qword_180174EB0) == 0 )
                v38 = qword_180174ED0;
            }
            v61 = 0.0;
            if ( (*(_QWORD *)&Y & qword_180174EC0) == qword_180174EC0 )
              v61 = Y;
            if ( (*(_QWORD *)&v61 & qword_180174EF0) == 0 )
            {
              if ( v61 != 0.0 )
                return *(double *)&v38;
              goto LABEL_91;
            }
            v57 = Y;
LABEL_99:
            *(_QWORD *)&X = pow_special(X, Y, v57, dword_180174E7C).m128_u64[0];
            return X;
          }
LABEL_50:
          v56 = 0.0;
          v57 = Y;
          if ( (*(_QWORD *)&Y & qword_180174EC0) == qword_180174EC0 )
            v56 = Y;
          if ( (*(_QWORD *)&v56 & qword_180174EF0) == 0 )
          {
            *(_QWORD *)&X = v67 | qword_180174ED8;
            return X;
          }
          goto LABEL_99;
        }
LABEL_62:
        if ( (*(_QWORD *)&Y & qword_180174EC0) == qword_180174EC0 )
        {
          v57 = Y;
          if ( *(_QWORD *)&Y != qword_180174EC8 )
          {
            if ( (*(_QWORD *)&Y & qword_180174EF0) == 0 )
              return 0.0;
            goto LABEL_99;
          }
          v58 = qword_180174ED0;
        }
        else
        {
          if ( (*(_QWORD *)&Y & qword_180174EB0) == 0 )
            return *(double *)&v67;
          v58 = qword_180174ED0;
        }
        *(_QWORD *)&X = pow_special(X, Y, COERCE_DOUBLE(v58 | v67), dword_180174E74).m128_u64[0];
        return X;
      }
      goto LABEL_71;
    }
    v40 = *(_QWORD *)&Y & qword_180174EE8;
    v41 = ((*(_QWORD *)&Y & (unsigned __int64)qword_180174EE8) >> qword_180174F28) - qword_180174F30;
    if ( v41 >= 0 )
    {
      if ( v41 > qword_180174F40 )
      {
LABEL_39:
        if ( *(_QWORD *)&X == qword_180174F20 )
          goto LABEL_62;
        if ( *(_QWORD *)&X == qword_180174F18 )
          goto LABEL_50;
        if ( (*(_QWORD *)&X & qword_180174EC0) != qword_180174EC0 )
        {
          *(_OWORD *)&X = *(_QWORD *)&X & (unsigned __int64)qword_180174EE8;
          goto LABEL_9;
        }
LABEL_71:
        v59 = 0LL;
        if ( (*(_QWORD *)&Y & qword_180174EB0) == 0 )
          v59 = qword_180174ED0;
        if ( (*(_QWORD *)&X & qword_180174EF0) == 0 )
        {
          v60 = 0.0;
          if ( (*(_QWORD *)&Y & qword_180174EC0) == qword_180174EC0 )
            v60 = Y;
          if ( (*(_QWORD *)&v60 & qword_180174EF0) == 0 )
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
      if ( (v40 & ((unsigned __int64)qword_180174F48 >> v41)) == 0 )
      {
        if ( (v40 & ((unsigned __int64)qword_180174F50 >> v41)) != 0 )
          v67 = qword_180174EB0;
        goto LABEL_39;
      }
    }
    if ( (*(_QWORD *)&X & qword_180174EC0) != qword_180174EC0 )
    {
      if ( *(_QWORD *)&X != qword_180174F20 )
      {
        *(_QWORD *)&X = pow_special(X, Y, *(double *)&qword_180174F00, dword_180174E84).m128_u64[0];
        return X;
      }
      goto LABEL_62;
    }
    goto LABEL_71;
  }
  v54 = 0.0;
  v55 = X;
  if ( (*(_QWORD *)&X & qword_180174EC0) == qword_180174EC0 )
    v54 = X;
  if ( (*(_QWORD *)&v54 & qword_180174EF0) != 0 )
  {
LABEL_95:
    v63 = 0.0;
    if ( (*(_QWORD *)&Y & qword_180174EC0) == qword_180174EC0 )
      v63 = Y;
    if ( (*(_QWORD *)&v63 & qword_180174EF0) != 0 )
    {
      v64 = Y;
      if ( *(_QWORD *)&v55 == qword_180174EF8 )
      {
        v55 = Y;
      }
      else
      {
        if ( *(_QWORD *)&Y == qword_180174EF8 )
          v64 = v55;
        if ( (qword_180174EB0 & *(_QWORD *)&v64) != 0 )
          v64 = v55;
        if ( (qword_180174EB0 & *(_QWORD *)&v55) != 0 )
          v55 = v64;
      }
      *(_QWORD *)&X = pow_special(X, Y, v55, dword_180174E80).m128_u64[0];
    }
    else
    {
      *(_QWORD *)&X = pow_special(X, Y, v55, dword_180174E78).m128_u64[0];
    }
  }
  return X;
}
