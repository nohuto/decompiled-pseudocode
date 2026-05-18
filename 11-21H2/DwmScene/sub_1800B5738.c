/*
 * XREFs of sub_1800B5738 @ 0x1800B5738
 * Callers:
 *     sub_1800B3248 @ 0x1800B3248 (sub_1800B3248.c)
 *     sub_1800B3618 @ 0x1800B3618 (sub_1800B3618.c)
 *     sub_1800B37A4 @ 0x1800B37A4 (sub_1800B37A4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002CCFC @ 0x18002CCFC (sub_18002CCFC.c)
 *     sub_18003D520 @ 0x18003D520 (sub_18003D520.c)
 *     sub_18007FF80 @ 0x18007FF80 (sub_18007FF80.c)
 *     sub_1800B2670 @ 0x1800B2670 (sub_1800B2670.c)
 *     sub_1800B3D60 @ 0x1800B3D60 (sub_1800B3D60.c)
 *     sub_1800B3DDC @ 0x1800B3DDC (sub_1800B3DDC.c)
 *     sub_1800B3E48 @ 0x1800B3E48 (sub_1800B3E48.c)
 *     sub_1800B4028 @ 0x1800B4028 (sub_1800B4028.c)
 *     sub_1800B42B4 @ 0x1800B42B4 (sub_1800B42B4.c)
 *     sub_1800B4344 @ 0x1800B4344 (sub_1800B4344.c)
 *     sub_1800B4868 @ 0x1800B4868 (sub_1800B4868.c)
 *     sub_1800B4D68 @ 0x1800B4D68 (sub_1800B4D68.c)
 *     sub_1800B5ED0 @ 0x1800B5ED0 (sub_1800B5ED0.c)
 *     sub_1800B5FAC @ 0x1800B5FAC (sub_1800B5FAC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800B5738(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __m128i *v9; // rax
  char v10; // di
  __int64 *v11; // rbx
  __int64 **v12; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v15; // rsi
  __int128 *v16; // rax
  __int128 *v17; // rax
  __int64 v18; // r13
  __int128 *v19; // rax
  char **v20; // rax
  bool v21; // al
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rcx
  double v25; // xmm6_8
  double v26; // xmm0_8
  double v27; // xmm0_8
  double v28; // xmm0_8
  double v29; // xmm0_8
  __int64 *v30; // rbx
  int v31; // r13d
  __int64 v32; // rdi
  __int64 **v33; // rax
  __int64 *k; // rax
  __int64 *m; // rcx
  __int64 v36; // rbx
  __int64 result; // rax
  __int64 v39; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+38h] [rbp-D0h]
  __int64 v41; // [rsp+40h] [rbp-C8h]
  __int64 *v42; // [rsp+48h] [rbp-C0h] BYREF
  int v43; // [rsp+50h] [rbp-B8h]
  __int128 v44; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v45[40]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+90h] [rbp-78h]
  __int64 v47; // [rsp+98h] [rbp-70h]
  __int64 v48; // [rsp+A0h] [rbp-68h]
  __int64 v49; // [rsp+A8h] [rbp-60h]
  __int64 v50; // [rsp+B0h] [rbp-58h]
  __int64 v51; // [rsp+B8h] [rbp-50h]
  __int64 v52; // [rsp+C0h] [rbp-48h]
  __int64 v53; // [rsp+C8h] [rbp-40h]
  __int64 v54; // [rsp+D0h] [rbp-38h]
  __int64 v55; // [rsp+D8h] [rbp-30h]
  __int64 v56; // [rsp+E0h] [rbp-28h]
  char v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  char *v59[5]; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v60; // [rsp+120h] [rbp+18h]
  __int128 v61; // [rsp+138h] [rbp+30h]
  __m128i v62; // [rsp+150h] [rbp+48h]
  __int64 v63; // [rsp+160h] [rbp+58h]
  _BYTE v64[96]; // [rsp+168h] [rbp+60h]
  char *v65[3]; // [rsp+1C8h] [rbp+C0h] BYREF
  unsigned __int64 v66; // [rsp+1E0h] [rbp+D8h]
  __int128 v67; // [rsp+1E8h] [rbp+E0h]
  __int64 v68; // [rsp+1F8h] [rbp+F0h]
  __int64 v69; // [rsp+200h] [rbp+F8h]
  __int64 v70; // [rsp+208h] [rbp+100h]
  __int64 v71; // [rsp+210h] [rbp+108h]
  __int64 v72; // [rsp+218h] [rbp+110h]
  __int64 v73; // [rsp+220h] [rbp+118h]
  _BYTE v74[24]; // [rsp+228h] [rbp+120h] BYREF

  v4 = a2;
  v43 = 0;
  memset(&v45[8], 0, 32);
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0;
  v58 = 0LL;
  v59[1] = 0LL;
  v42 = (__int64 *)sub_180011088(0x58uLL);
  sub_18001DE8C(v42, (__int64 *)&v42);
  sub_18001DE8C((__int64 *)(v6 + 8), (__int64 *)&v42);
  sub_18001DE8C((__int64 *)(v7 + 16), (__int64 *)&v42);
  *(_WORD *)(v8 + 24) = 257;
  v59[0] = (char *)v8;
  sub_1800B4D68(v4, (__int64)&v45[8]);
  sub_18002CCFC((__int64)v59, (__int64)v59, *((char **)v59[0] + 1));
  sub_180010884(v59[0], 0x58uLL);
  if ( *(_DWORD *)(a1 + 920) == 2 )
  {
    if ( a3 )
      sub_18003D520(*(_QWORD ***)(a1 + 896));
    if ( sub_1800B4028() )
    {
      v9 = (__m128i *)sub_1800B42B4(a1, (__int64)&v44);
    }
    else
    {
      LODWORD(v39) = 4;
      v40 = 0LL;
      LOBYTE(v41) = 1;
      v9 = (__m128i *)&v39;
    }
    v62 = *v9;
    v63 = v9[1].m128i_i64[0];
    if ( _mm_cvtsi128_si32(v62) == 2 )
    {
      v10 = 1;
      v11 = **(__int64 ***)(a1 + 880);
      while ( !*((_BYTE *)v11 + 25) )
      {
        v10 = (unsigned __int8)sub_1800B5FAC(v11 + 8) != 0 ? v10 : 0;
        v12 = (__int64 **)v11[2];
        if ( *((_BYTE *)v12 + 25) )
        {
          for ( i = (__int64 *)v11[1]; !*((_BYTE *)i + 25) && v11 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v11 = i;
          v11 = i;
        }
        else
        {
          v11 = (__int64 *)v11[2];
          for ( j = *v12; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v11 = j;
        }
      }
      v15 = a1 + 176;
      if ( sub_1800B4028() )
      {
        v16 = (__int128 *)sub_1800B42B4(a1 + 176, (__int64)&v44);
      }
      else
      {
        LODWORD(v39) = 4;
        v40 = 0LL;
        LOBYTE(v41) = 1;
        v16 = (__int128 *)&v39;
      }
      v61 = *v16;
      if ( sub_1800B4028() )
      {
        v17 = (__int128 *)sub_1800B42B4(a1 + 352, (__int64)&v44);
      }
      else
      {
        LODWORD(v39) = 4;
        v40 = 0LL;
        LOBYTE(v41) = 1;
        v17 = (__int128 *)&v39;
      }
      v60 = *v17;
      v18 = a1 + 528;
      if ( sub_1800B4028() )
      {
        v19 = (__int128 *)sub_1800B42B4(a1 + 528, (__int64)v74);
      }
      else
      {
        LODWORD(v39) = 4;
        v40 = 0LL;
        LOBYTE(v41) = 1;
        v19 = (__int128 *)&v39;
      }
      v44 = *v19;
      if ( sub_1800B4028() )
      {
        v20 = (char **)sub_1800B4344(a1 + 704, (__int64)&v45[8]);
      }
      else
      {
        LODWORD(v65[0]) = 4;
        v65[1] = 0LL;
        v65[2] = 0LL;
        v66 = 0LL;
        v67 = 0uLL;
        v68 = 0LL;
        v69 = 0LL;
        v70 = 0LL;
        v71 = 0LL;
        v72 = 0LL;
        v73 = 0LL;
        v20 = v65;
      }
      *(_OWORD *)v64 = *(_OWORD *)v20;
      *(_OWORD *)&v64[16] = *((_OWORD *)v20 + 1);
      *(_OWORD *)&v64[32] = *((_OWORD *)v20 + 2);
      *(_OWORD *)&v64[48] = *((_OWORD *)v20 + 3);
      *(_OWORD *)&v64[64] = *((_OWORD *)v20 + 4);
      *(_OWORD *)&v64[80] = *((_OWORD *)v20 + 5);
      v21 = _mm_cvtsi128_si32(*(__m128i *)v64) == 2;
      if ( v10 && (_DWORD)v61 == 2 && (_DWORD)v60 == 2 && (_DWORD)v44 == 2 && v21 )
      {
        v22 = *(_QWORD *)(a1 + 1064);
        sub_18002CCFC(a1 + 1064, a1 + 1064, *(char **)(v22 + 8));
        *(_QWORD *)(v22 + 8) = v22;
        *(_QWORD *)v22 = v22;
        *(_QWORD *)(v22 + 16) = v22;
        *(_QWORD *)(a1 + 1072) = 0LL;
        if ( (_BYTE)v63 )
        {
          *(_QWORD *)(a1 + 936) = 0LL;
          *(_QWORD *)(a1 + 952) = 0LL;
          *(_QWORD *)(a1 + 928) = 0LL;
          *(_QWORD *)(a1 + 944) = 0LL;
        }
        else
        {
          v23 = *((_QWORD *)&v60 + 1);
          v24 = *((_QWORD *)&v60 + 1) - *((_QWORD *)&v61 + 1);
          if ( v62.m128i_i64[1] < 0 )
            v25 = (double)(int)(v62.m128i_i8[8] & 1 | ((unsigned __int64)v62.m128i_i64[1] >> 1))
                + (double)(int)(v62.m128i_i8[8] & 1 | ((unsigned __int64)v62.m128i_i64[1] >> 1));
          else
            v25 = (double)v62.m128i_i32[2];
          if ( v61 < 0 )
            v26 = (double)(int)(BYTE8(v61) & 1 | (*((_QWORD *)&v61 + 1) >> 1))
                + (double)(int)(BYTE8(v61) & 1 | (*((_QWORD *)&v61 + 1) >> 1));
          else
            v26 = (double)SDWORD2(v61);
          *(double *)(a1 + 936) = v26 / v25 * 1000.0;
          if ( v23 < 0 )
            v27 = (double)(int)(v23 & 1 | ((unsigned __int64)v23 >> 1))
                + (double)(int)(v23 & 1 | ((unsigned __int64)v23 >> 1));
          else
            v27 = (double)(int)v23;
          *(double *)(a1 + 944) = v27 / v25 * 1000.0;
          if ( v44 < 0 )
            v28 = (double)(int)(BYTE8(v44) & 1 | (*((_QWORD *)&v44 + 1) >> 1))
                + (double)(int)(BYTE8(v44) & 1 | (*((_QWORD *)&v44 + 1) >> 1));
          else
            v28 = (double)SDWORD2(v44);
          *(double *)(a1 + 952) = v28 / v25 * 1000.0;
          if ( v24 < 0 )
            v29 = (double)(int)(v24 & 1 | ((unsigned __int64)v24 >> 1))
                + (double)(int)(v24 & 1 | ((unsigned __int64)v24 >> 1));
          else
            v29 = (double)(int)v24;
          *(double *)(a1 + 928) = v29 / v25 * 1000.0;
          *(_OWORD *)(a1 + 960) = *(_OWORD *)&v64[8];
          *(_OWORD *)(a1 + 976) = *(_OWORD *)&v64[24];
          *(_OWORD *)(a1 + 992) = *(_OWORD *)&v64[40];
          *(_OWORD *)(a1 + 1008) = *(_OWORD *)&v64[56];
          *(_OWORD *)(a1 + 1024) = *(_OWORD *)&v64[72];
          *(_QWORD *)(a1 + 1040) = *(_QWORD *)&v64[88];
          *(_BYTE *)(a1 + 1048) = 1;
          v30 = **(__int64 ***)(a1 + 880);
          v31 = 0;
          while ( !*((_BYTE *)v30 + 25) )
          {
            v32 = sub_1800B5ED0(v30 + 8, v74);
            sub_18001875C((__int64 *)v65, (__int64)(v30 + 4));
            v67 = *(_OWORD *)v32;
            v68 = *(_QWORD *)(v32 + 16);
            v31 |= 1u;
            sub_1800B4868((_QWORD *)(a1 + 1064), (__int64 *)&v42, (__int64)v65);
            if ( v66 >= 0x10 )
              sub_180010884(v65[0], v66 + 1);
            v33 = (__int64 **)v30[2];
            if ( *((_BYTE *)v33 + 25) )
            {
              for ( k = (__int64 *)v30[1]; !*((_BYTE *)k + 25) && v30 == (__int64 *)k[2]; k = (__int64 *)k[1] )
                v30 = k;
              v30 = k;
            }
            else
            {
              v30 = (__int64 *)v30[2];
              for ( m = *v33; !*((_BYTE *)m + 25); m = (__int64 *)*m )
                v30 = m;
            }
          }
          v18 = a1 + 528;
          v15 = a1 + 176;
        }
        sub_1800B3D60((__int64)&v45[8]);
        sub_1800B3E48(a1, (__int64 *)&v45[8]);
        sub_1800B3DDC((__int64)&v45[8]);
        sub_1800B3D60((__int64)&v45[8]);
        sub_1800B3E48(v15, (__int64 *)&v45[8]);
        sub_1800B3DDC((__int64)&v45[8]);
        sub_1800B3D60((__int64)&v45[8]);
        sub_1800B3E48(a1 + 352, (__int64 *)&v45[8]);
        sub_1800B3DDC((__int64)&v45[8]);
        sub_1800B3D60((__int64)&v45[8]);
        sub_1800B3E48(v18, (__int64 *)&v45[8]);
        sub_1800B3DDC((__int64)&v45[8]);
        sub_1800B3D60((__int64)&v45[8]);
        sub_1800B3E48(a1 + 704, (__int64 *)&v45[8]);
        sub_1800B3DDC((__int64)&v45[8]);
        v36 = *(_QWORD *)(a1 + 880);
        sub_1800B2670(a1 + 880, a1 + 880, *(char **)(v36 + 8));
        *(_QWORD *)(v36 + 8) = v36;
        *(_QWORD *)v36 = v36;
        *(_QWORD *)(v36 + 16) = v36;
        *(_QWORD *)(a1 + 888) = 0LL;
        *(_DWORD *)(a1 + 920) = 3;
      }
      v4 = a2;
    }
  }
  result = *(unsigned int *)(a1 + 920);
  if ( (_DWORD)result == 3 )
  {
    sub_18007FF80(v4, a1 + 928);
    return *(unsigned int *)(a1 + 920);
  }
  return result;
}
