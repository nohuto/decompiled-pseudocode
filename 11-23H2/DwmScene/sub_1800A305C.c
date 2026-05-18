/*
 * XREFs of sub_1800A305C @ 0x1800A305C
 * Callers:
 *     sub_1800A130C @ 0x1800A130C (sub_1800A130C.c)
 *     sub_1800A1684 @ 0x1800A1684 (sub_1800A1684.c)
 *     sub_1800A1768 @ 0x1800A1768 (sub_1800A1768.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18002AE4C @ 0x18002AE4C (sub_18002AE4C.c)
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 *     sub_1800393DC @ 0x1800393DC (sub_1800393DC.c)
 *     sub_18007411C @ 0x18007411C (sub_18007411C.c)
 *     sub_180074318 @ 0x180074318 (sub_180074318.c)
 *     sub_1800A0910 @ 0x1800A0910 (sub_1800A0910.c)
 *     sub_1800A1BDC @ 0x1800A1BDC (sub_1800A1BDC.c)
 *     sub_1800A1C58 @ 0x1800A1C58 (sub_1800A1C58.c)
 *     sub_1800A1CB4 @ 0x1800A1CB4 (sub_1800A1CB4.c)
 *     sub_1800A1DF4 @ 0x1800A1DF4 (sub_1800A1DF4.c)
 *     sub_1800A1F78 @ 0x1800A1F78 (sub_1800A1F78.c)
 *     sub_1800A201C @ 0x1800A201C (sub_1800A201C.c)
 *     sub_1800A2510 @ 0x1800A2510 (sub_1800A2510.c)
 *     sub_1800A2938 @ 0x1800A2938 (sub_1800A2938.c)
 *     sub_1800A3764 @ 0x1800A3764 (sub_1800A3764.c)
 *     sub_1800A3840 @ 0x1800A3840 (sub_1800A3840.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A305C(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  __m128i *v6; // rax
  char v7; // di
  __int64 *v8; // rbx
  __int64 **v9; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int128 *v12; // rax
  __int64 v13; // rbx
  __int128 *v14; // rax
  __int64 v15; // rsi
  __int128 *v16; // rax
  _OWORD *v17; // rax
  bool v18; // al
  __int64 v19; // r8
  __int64 v20; // rcx
  double v21; // xmm6_8
  double v22; // xmm0_8
  double v23; // xmm0_8
  double v24; // xmm0_8
  double v25; // xmm0_8
  __int64 *v26; // rbx
  __int64 v27; // rdi
  __int64 **v28; // rax
  __int64 *k; // rax
  __int64 *m; // rcx
  __int64 v31; // rbx
  __int64 v34; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+38h] [rbp-D0h]
  char v36; // [rsp+40h] [rbp-C8h]
  __int128 v37; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v38[40]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-78h]
  __int64 v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]
  __int64 v43; // [rsp+A8h] [rbp-60h]
  __int64 v44; // [rsp+B0h] [rbp-58h]
  __int64 v45; // [rsp+B8h] [rbp-50h]
  __int64 v46; // [rsp+C0h] [rbp-48h]
  __int64 v47; // [rsp+C8h] [rbp-40h]
  __int64 v48; // [rsp+D0h] [rbp-38h]
  __int64 v49; // [rsp+D8h] [rbp-30h]
  char v50; // [rsp+E0h] [rbp-28h]
  __int64 v51; // [rsp+E8h] [rbp-20h]
  void *v52[5]; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v53; // [rsp+118h] [rbp+10h]
  __int128 v54; // [rsp+130h] [rbp+28h]
  __m128i v55; // [rsp+148h] [rbp+40h]
  __int64 v56; // [rsp+158h] [rbp+50h]
  _BYTE v57[96]; // [rsp+168h] [rbp+60h]
  _QWORD v58[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v59; // [rsp+1E8h] [rbp+E0h]
  __int64 v60; // [rsp+1F8h] [rbp+F0h]
  __int64 v61; // [rsp+200h] [rbp+F8h]
  __int64 v62; // [rsp+208h] [rbp+100h]
  __int64 v63; // [rsp+210h] [rbp+108h]
  __int64 v64; // [rsp+218h] [rbp+110h]
  __int64 v65; // [rsp+220h] [rbp+118h]
  _BYTE v66[24]; // [rsp+228h] [rbp+120h] BYREF

  v4 = a2;
  memset(&v38[8], 0, 32);
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0;
  v51 = 0LL;
  sub_18002B3C0((__int64 *)v52);
  sub_1800A2938(v4, (__int64)&v38[8]);
  sub_18002AE4C(v52, (__int64)v52);
  if ( *(_DWORD *)(a1 + 920) == 2 )
  {
    if ( a3 )
      sub_1800393DC(*(_QWORD ***)(a1 + 896));
    if ( sub_1800A1DF4() )
    {
      v6 = (__m128i *)sub_1800A1F78(a1, (__int64)&v37);
    }
    else
    {
      LODWORD(v34) = 4;
      v35 = 0LL;
      v36 = 1;
      v6 = (__m128i *)&v34;
    }
    v55 = *v6;
    v56 = v6[1].m128i_i64[0];
    if ( _mm_cvtsi128_si32(v55) == 2 )
    {
      v7 = 1;
      v8 = **(__int64 ***)(a1 + 880);
      while ( !*((_BYTE *)v8 + 25) )
      {
        v7 = (unsigned __int8)sub_1800A3840(v8 + 8) != 0 ? v7 : 0;
        v9 = (__int64 **)v8[2];
        if ( *((_BYTE *)v9 + 25) )
        {
          for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25) && v8 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v8 = i;
          v8 = i;
        }
        else
        {
          v8 = (__int64 *)v8[2];
          for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v8 = j;
        }
      }
      if ( sub_1800A1DF4() )
      {
        v12 = (__int128 *)sub_1800A1F78(a1 + 176, (__int64)&v37);
      }
      else
      {
        LODWORD(v34) = 4;
        v35 = 0LL;
        v36 = 1;
        v12 = (__int128 *)&v34;
      }
      v54 = *v12;
      v13 = a1 + 352;
      if ( sub_1800A1DF4() )
      {
        v14 = (__int128 *)sub_1800A1F78(a1 + 352, (__int64)&v37);
      }
      else
      {
        LODWORD(v34) = 4;
        v35 = 0LL;
        v36 = 1;
        v14 = (__int128 *)&v34;
      }
      v53 = *v14;
      v15 = a1 + 528;
      if ( sub_1800A1DF4() )
      {
        v16 = (__int128 *)sub_1800A1F78(a1 + 528, (__int64)v66);
      }
      else
      {
        LODWORD(v34) = 4;
        v35 = 0LL;
        v36 = 1;
        v16 = (__int128 *)&v34;
      }
      v37 = *v16;
      if ( sub_1800A1DF4() )
      {
        v17 = (_OWORD *)sub_1800A201C(a1 + 704, (__int64)&v38[8]);
      }
      else
      {
        LODWORD(v58[0]) = 4;
        memset(&v58[1], 0, 24);
        v59 = 0uLL;
        v60 = 0LL;
        v61 = 0LL;
        v62 = 0LL;
        v63 = 0LL;
        v64 = 0LL;
        v65 = 0LL;
        v17 = v58;
      }
      *(_OWORD *)v57 = *v17;
      *(_OWORD *)&v57[16] = v17[1];
      *(_OWORD *)&v57[32] = v17[2];
      *(_OWORD *)&v57[48] = v17[3];
      *(_OWORD *)&v57[64] = v17[4];
      *(_OWORD *)&v57[80] = v17[5];
      v18 = _mm_cvtsi128_si32(*(__m128i *)v57) == 2;
      if ( v7 && (_DWORD)v54 == 2 && (_DWORD)v53 == 2 && (_DWORD)v37 == 2 && v18 )
      {
        sub_180074318((_QWORD *)(a1 + 1064));
        if ( (_BYTE)v56 )
        {
          *(_QWORD *)(a1 + 936) = 0LL;
          *(_QWORD *)(a1 + 952) = 0LL;
          *(_QWORD *)(a1 + 928) = 0LL;
          *(_QWORD *)(a1 + 944) = 0LL;
        }
        else
        {
          v19 = *((_QWORD *)&v53 + 1);
          v20 = *((_QWORD *)&v53 + 1) - *((_QWORD *)&v54 + 1);
          if ( v55.m128i_i64[1] < 0 )
            v21 = (double)(int)(v55.m128i_i8[8] & 1 | ((unsigned __int64)v55.m128i_i64[1] >> 1))
                + (double)(int)(v55.m128i_i8[8] & 1 | ((unsigned __int64)v55.m128i_i64[1] >> 1));
          else
            v21 = (double)v55.m128i_i32[2];
          if ( v54 < 0 )
            v22 = (double)(int)(BYTE8(v54) & 1 | (*((_QWORD *)&v54 + 1) >> 1))
                + (double)(int)(BYTE8(v54) & 1 | (*((_QWORD *)&v54 + 1) >> 1));
          else
            v22 = (double)SDWORD2(v54);
          *(double *)(a1 + 936) = v22 / v21 * 1000.0;
          if ( v19 < 0 )
            v23 = (double)(int)(v19 & 1 | ((unsigned __int64)v19 >> 1))
                + (double)(int)(v19 & 1 | ((unsigned __int64)v19 >> 1));
          else
            v23 = (double)(int)v19;
          *(double *)(a1 + 944) = v23 / v21 * 1000.0;
          if ( v37 < 0 )
            v24 = (double)(int)(BYTE8(v37) & 1 | (*((_QWORD *)&v37 + 1) >> 1))
                + (double)(int)(BYTE8(v37) & 1 | (*((_QWORD *)&v37 + 1) >> 1));
          else
            v24 = (double)SDWORD2(v37);
          *(double *)(a1 + 952) = v24 / v21 * 1000.0;
          if ( v20 < 0 )
            v25 = (double)(int)(v20 & 1 | ((unsigned __int64)v20 >> 1))
                + (double)(int)(v20 & 1 | ((unsigned __int64)v20 >> 1));
          else
            v25 = (double)(int)v20;
          *(double *)(a1 + 928) = v25 / v21 * 1000.0;
          *(_OWORD *)(a1 + 960) = *(_OWORD *)&v57[8];
          *(_OWORD *)(a1 + 976) = *(_OWORD *)&v57[24];
          *(_OWORD *)(a1 + 992) = *(_OWORD *)&v57[40];
          *(_OWORD *)(a1 + 1008) = *(_OWORD *)&v57[56];
          *(_OWORD *)(a1 + 1024) = *(_OWORD *)&v57[72];
          *(_QWORD *)(a1 + 1040) = *(_QWORD *)&v57[88];
          *(_BYTE *)(a1 + 1048) = 1;
          v26 = **(__int64 ***)(a1 + 880);
          while ( !*((_BYTE *)v26 + 25) )
          {
            v27 = sub_1800A3764(v26 + 8, v66);
            sub_180017648(v58, (__int64)(v26 + 4));
            v59 = *(_OWORD *)v27;
            v60 = *(_QWORD *)(v27 + 16);
            sub_1800A2510((__int64 *)(a1 + 1064), (__int64)&v34, (__int64)v58);
            sub_180011B24((__int64)v58);
            v28 = (__int64 **)v26[2];
            if ( *((_BYTE *)v28 + 25) )
            {
              for ( k = (__int64 *)v26[1]; !*((_BYTE *)k + 25) && v26 == (__int64 *)k[2]; k = (__int64 *)k[1] )
                v26 = k;
              v26 = k;
            }
            else
            {
              v26 = (__int64 *)v26[2];
              for ( m = *v28; !*((_BYTE *)m + 25); m = (__int64 *)*m )
                v26 = m;
            }
          }
          v15 = a1 + 528;
          v13 = a1 + 352;
        }
        sub_1800A1BDC((__int64)&v38[8]);
        sub_1800A1CB4(a1, (__int64 *)&v38[8]);
        sub_1800A1C58(&v38[8]);
        sub_1800A1BDC((__int64)&v38[8]);
        sub_1800A1CB4(a1 + 176, (__int64 *)&v38[8]);
        sub_1800A1C58(&v38[8]);
        sub_1800A1BDC((__int64)&v38[8]);
        sub_1800A1CB4(v13, (__int64 *)&v38[8]);
        sub_1800A1C58(&v38[8]);
        sub_1800A1BDC((__int64)&v38[8]);
        sub_1800A1CB4(v15, (__int64 *)&v38[8]);
        sub_1800A1C58(&v38[8]);
        sub_1800A1BDC((__int64)&v38[8]);
        sub_1800A1CB4(a1 + 704, (__int64 *)&v38[8]);
        sub_1800A1C58(&v38[8]);
        v31 = *(_QWORD *)(a1 + 880);
        sub_1800A0910(a1 + 880, a1 + 880, *(char **)(v31 + 8));
        *(_QWORD *)(v31 + 8) = v31;
        *(_QWORD *)v31 = v31;
        *(_QWORD *)(v31 + 16) = v31;
        *(_QWORD *)(a1 + 888) = 0LL;
        *(_DWORD *)(a1 + 920) = 3;
      }
      v4 = a2;
    }
  }
  if ( *(_DWORD *)(a1 + 920) == 3 )
    sub_18007411C(v4, a1 + 928);
  return *(unsigned int *)(a1 + 920);
}
