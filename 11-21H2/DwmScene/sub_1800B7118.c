/*
 * XREFs of sub_1800B7118 @ 0x1800B7118
 * Callers:
 *     sub_1800B6DE4 @ 0x1800B6DE4 (sub_1800B6DE4.c)
 * Callees:
 *     _o_cosf @ 0x18000C018 (_o_cosf.c)
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180040BA4 @ 0x180040BA4 (sub_180040BA4.c)
 *     sub_180040FB8 @ 0x180040FB8 (sub_180040FB8.c)
 *     sub_1800412FC @ 0x1800412FC (sub_1800412FC.c)
 *     sub_180048700 @ 0x180048700 (sub_180048700.c)
 *     sub_180063D5C @ 0x180063D5C (sub_180063D5C.c)
 *     sub_18006AFD4 @ 0x18006AFD4 (sub_18006AFD4.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800B7118(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // r14
  __m128 v7; // xmm10
  __int64 v8; // r12
  __int64 *v9; // rdi
  __int64 v10; // rax
  __m128 v11; // xmm14
  _QWORD *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  __m128 v15; // xmm8
  __int32 v16; // xmm15_4
  __int64 v17; // rbx
  __m128 v18; // xmm13
  int v19; // r15d
  __int64 v20; // rdx
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  __m128 v23; // xmm0
  __m128 v24; // xmm0
  __int64 v25; // rcx
  __m128 v26; // xmm12
  __int64 v27; // rdx
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  __int64 v30; // rdx
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  unsigned int *v33; // rax
  __m128 v34; // xmm7
  __m128 v35; // xmm6
  __m128 v36; // xmm3
  __m128 v37; // xmm3
  __m128 v38; // xmm2
  __m128 v39; // xmm0
  __m128 v40; // xmm2
  __m128 v41; // xmm0
  __m128 v42; // xmm2
  __m128 v43; // xmm14
  __m128 v44; // xmm2
  __m128 v45; // xmm7
  unsigned __int32 v46; // xmm7_4
  int v47; // xmm10_4
  int v48; // xmm11_4
  int v49; // eax
  int v50; // edx
  _DWORD *v51; // rax
  __m128 v52; // xmm1
  __m128 v53; // xmm0
  int v54; // xmm4_4
  float v55; // xmm0_4
  float v56; // xmm6_4
  __m128 v57; // xmm0
  __int64 v58; // rcx
  __m128 v59; // xmm4
  __m128 v60; // xmm3
  __m128 v61; // xmm1
  __m128 v62; // xmm2
  __m128 v63; // xmm3
  char *v64; // rax
  __m128 v65; // xmm2
  __m128 v66; // xmm3
  char *v67; // rax
  char *v68; // rax
  __int64 *v69; // r15
  __int64 v70; // rdx
  signed __int32 v71; // eax
  signed __int32 v72; // ett
  __int64 *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // r15
  __int64 v79; // rax
  __m128 v80; // xmm3
  __m128 v81; // xmm4
  __m128 v82; // xmm0
  __m128 v83; // xmm2
  __int64 v84; // rax
  float v85; // xmm1_4
  int v86; // xmm4_4
  int v87; // xmm0_4
  int v88; // xmm3_4
  int v89; // xmm5_4
  int v90; // xmm2_4
  float *v91; // rax
  _DWORD *v92; // rcx
  __int32 v94; // [rsp+38h] [rbp-D0h]
  unsigned __int32 v95; // [rsp+48h] [rbp-C0h]
  unsigned __int32 v97; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v98; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int32 v99; // [rsp+60h] [rbp-A8h]
  __int64 v100; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v101; // [rsp+70h] [rbp-98h]
  unsigned __int64 v102; // [rsp+78h] [rbp-90h]
  unsigned __int32 v103; // [rsp+80h] [rbp-88h]
  __int64 v104[2]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v105; // [rsp+98h] [rbp-70h]
  unsigned __int64 v106; // [rsp+A4h] [rbp-64h]
  unsigned __int32 v107; // [rsp+ACh] [rbp-5Ch]
  unsigned __int64 v108; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v109; // [rsp+BCh] [rbp-4Ch]
  __int64 v110; // [rsp+C8h] [rbp-40h]
  float v111; // [rsp+D0h] [rbp-38h] BYREF
  float v112; // [rsp+D4h] [rbp-34h]
  float v113; // [rsp+D8h] [rbp-30h]
  __int128 v114; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v115; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v116; // [rsp+100h] [rbp-8h] BYREF
  __int128 v117; // [rsp+110h] [rbp+8h] BYREF
  __int64 v118; // [rsp+120h] [rbp+18h]
  __int64 v119; // [rsp+128h] [rbp+20h]
  _BYTE *v120; // [rsp+130h] [rbp+28h]
  __int64 v121; // [rsp+138h] [rbp+30h]
  __int64 v122; // [rsp+140h] [rbp+38h]
  __int64 v123; // [rsp+148h] [rbp+40h]
  __int64 v124; // [rsp+150h] [rbp+48h]
  __m128 v125; // [rsp+158h] [rbp+50h]
  _QWORD v126[2]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v127[3]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v128[3]; // [rsp+190h] [rbp+88h] BYREF
  __m128 v129; // [rsp+1A8h] [rbp+A0h] BYREF
  __m128 v130; // [rsp+1B8h] [rbp+B0h]
  __m128 v131; // [rsp+1C8h] [rbp+C0h]
  __m128 v132; // [rsp+1D8h] [rbp+D0h]
  char v133[224]; // [rsp+1E8h] [rbp+E0h] BYREF

  v5 = a1;
  v124 = a1;
  v127[2] = a1;
  sub_18000C8D4(a1, 16LL, 3LL);
  LODWORD(v100) = 1;
  v6 = (__int64)(a2[1] - *a2) >> 4;
  if ( v6 > 3 )
  {
    v6 = 3LL;
LABEL_4:
    v7 = 0LL;
    v8 = 0LL;
    v9 = (__int64 *)(v5 + 8);
    v110 = 392 - v5;
    v118 = 440 - v5;
    v119 = 344 - v5;
    v121 = 488 - v5;
    v122 = 536 - v5;
    v10 = -8 - v5;
    v123 = -8 - v5;
    v101 = 0LL;
    v11 = (__m128)0x80000000;
    v12 = a2;
    while ( 1 )
    {
      v13 = v10 + *v12;
      v14 = *(__int64 *)((char *)v9 + v13 + 8);
      if ( v14 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        v14 = *(__int64 *)((char *)v9 + v13 + 8);
      }
      v104[0] = *(__int64 *)((char *)v9 + v13);
      v104[1] = v14;
      v125 = _mm_mul_ps(
               _mm_shuffle_ps((__m128)*(unsigned int *)(v104[0] + 104), (__m128)*(unsigned int *)(v104[0] + 104), 0),
               (__m128)_mm_loadu_si128((const __m128i *)(v104[0] + 88)));
      v15 = 0LL;
      v120 = (_BYTE *)(v104[0] + 72);
      if ( *(_BYTE *)(v104[0] + 72) )
      {
        v97 = v125.m128_u32[2];
        v94 = v125.m128_i32[1];
        v16 = v125.m128_i32[0];
      }
      else
      {
        v16 = 0;
        v94 = 0;
        v97 = 0;
      }
      v17 = v104[0];
      v18 = (__m128)*(unsigned int *)(v104[0] + 116);
      v19 = *(_DWORD *)(v104[0] + 120);
      v114 = 0LL;
      v20 = *(_QWORD *)(v104[0] + 64);
      if ( v20 )
      {
        v21 = *(_DWORD *)(v20 + 8);
        while ( v21 )
        {
          v22 = v21;
          v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 8), v21 + 1, v21);
          if ( v22 == v21 )
          {
            v114 = *(_OWORD *)(v17 + 56);
            break;
          }
        }
      }
      sub_1800412FC(v114, &v111);
      sub_180010910((__int64)&v114);
      v23 = (__m128)LODWORD(v112);
      v23.m128_f32[0] = (float)(v112 * v111) * v113;
      v24 = _mm_and_ps(v23, (__m128)xmmword_1801BDA20);
      *(double *)v24.m128_u64 = o_cbrtf(v25);
      v26 = v24;
      v115 = 0LL;
      v27 = *(_QWORD *)(v17 + 64);
      if ( v27 )
      {
        v28 = *(_DWORD *)(v27 + 8);
        while ( v28 )
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 8), v28 + 1, v28);
          if ( v29 == v28 )
          {
            v115 = *(_OWORD *)(v17 + 56);
            break;
          }
        }
      }
      sub_180040FB8(v115, (__int64)&v98);
      sub_180010910((__int64)&v115);
      v116 = 0LL;
      v30 = *(_QWORD *)(v17 + 64);
      if ( v30 )
      {
        v31 = *(_DWORD *)(v30 + 8);
        while ( v31 )
        {
          v32 = v31;
          v31 = _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 8), v31 + 1, v31);
          if ( v32 == v31 )
          {
            v116 = *(_OWORD *)(v17 + 56);
            break;
          }
        }
      }
      v33 = (unsigned int *)sub_180040BA4(v116, (__int64)v133);
      v34 = _mm_xor_ps((__m128)v33[9], v11);
      v35 = _mm_xor_ps((__m128)v33[8], v11);
      v103 = v33[10] ^ v11.m128_i32[0];
      sub_180010910((__int64)&v116);
      v36 = 0LL;
      v36.m128_u64[0] = _mm_unpacklo_ps(v35, v34).m128_u64[0];
      v37 = _mm_movelh_ps(v36, (__m128)v103);
      v38 = _mm_mul_ps(v37, v37);
      v39 = _mm_shuffle_ps(v38, v38, 153);
      v38.m128_f32[0] = (float)(v38.m128_f32[0] + v39.m128_f32[0]) + _mm_shuffle_ps(v39, v39, 85).m128_f32[0];
      v40 = _mm_shuffle_ps(v38, v38, 0);
      v41 = _mm_sqrt_ps(v40);
      v42 = _mm_cmpneq_ps(v40, (__m128)xmmword_1801282E0);
      v43 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_div_ps(v37, v41), _mm_cmpneq_ps(v7, v41)), v42),
              _mm_andnot_ps(v42, (__m128)xmmword_180128330));
      v102 = v43.m128_u64[0];
      v103 = _mm_shuffle_ps(v43, v43, 170).m128_u32[0];
      if ( v19 == 2 )
      {
        v44 = 0LL;
        v44.m128_u64[0] = v43.m128_u64[0];
        v45 = _mm_sub_ps(v7, _mm_movelh_ps(v44, (__m128)v103));
        v105 = v45.m128_u64[0];
        v46 = _mm_shuffle_ps(v45, v45, 170).m128_u32[0];
        v47 = v105;
        v98 = v105;
        v48 = HIDWORD(v105);
        v99 = v46;
      }
      else
      {
        v46 = v99;
        v48 = HIDWORD(v98);
        v47 = v98;
      }
      v49 = sub_180048700(v104[0]);
      if ( !v49 )
      {
        if ( v19 == v50 )
          goto LABEL_38;
        v49 = v50;
      }
      if ( v19 < 0 )
        goto LABEL_50;
      if ( v19 <= 1 )
        break;
      if ( v19 == v50 )
      {
        if ( v49 != 3 )
        {
          if ( v49 == 4 )
          {
            o_cosf();
            v15 = (__m128)0x3F800000u;
            v15.m128_f32[0] = (float)(1.0 - fmaxf(0.001, v18.m128_f32[0])) * 6.2831855;
          }
          goto LABEL_39;
        }
LABEL_38:
        v15 = (__m128)0x3F800000u;
      }
LABEL_39:
      v51 = (_DWORD *)((char *)v9 + v110 + *(_QWORD *)(a3 + 64));
      *v51 = 0;
      v51[1] = 0;
      v51[2] = 0;
      v51[3] = 0;
      v11 = (__m128)0x80000000;
LABEL_40:
      v95 = v97;
      if ( v19 == 2 )
      {
        v54 = 0;
        v53.m128_u64[0] = __PAIR64__(v94, v16);
      }
      else
      {
        v52 = v26;
        v52.m128_f32[0] = v26.m128_f32[0] * v26.m128_f32[0];
        v53 = _mm_mul_ps(_mm_shuffle_ps(v52, v52, 0), _mm_movelh_ps((__m128)__PAIR64__(v94, v16), (__m128)v97));
        v95 = _mm_shuffle_ps(v53, v53, 170).m128_u32[0];
        v54 = 1065353216;
      }
      v65 = 0LL;
      v65.m128_u64[0] = v53.m128_u64[0];
      v66 = _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), _mm_movelh_ps(v65, (__m128)v95));
      v109 = v66.m128_u64[0];
      v67 = (char *)v9 + v118 + *(_QWORD *)(a3 + 64);
      *(_QWORD *)v67 = v66.m128_u64[0];
      *((_DWORD *)v67 + 2) = _mm_shuffle_ps(v66, v66, 170).m128_u32[0];
      *((_DWORD *)v67 + 3) = v54;
      v68 = (char *)v9 + v119 + *(_QWORD *)(a3 + 64);
      *(_DWORD *)v68 = v47;
      *((_DWORD *)v68 + 1) = v48;
      *((_DWORD *)v68 + 2) = v46;
      *((float *)v68 + 3) = v26.m128_f32[0] * v18.m128_f32[0];
      if ( v101 < 3 )
      {
        v69 = v9 - 1;
        if ( sub_1800122B0(v9 - 1) )
        {
          v117 = 0LL;
          v70 = *(_QWORD *)(v17 + 64);
          if ( v70 )
          {
            v71 = *(_DWORD *)(v70 + 8);
            while ( v71 )
            {
              v72 = v71;
              v71 = _InterlockedCompareExchange((volatile signed __int32 *)(v70 + 8), v71 + 1, v71);
              if ( v72 == v71 )
              {
                v117 = *(_OWORD *)(v17 + 56);
                break;
              }
            }
          }
          v73 = sub_18006AFD4(v117, v128);
          v74 = *v73;
          v75 = v73[1];
          *v73 = 0LL;
          v73[1] = 0LL;
          v127[0] = *v69;
          *v69 = v74;
          v127[1] = *v9;
          *v9 = v75;
          sub_180010910((__int64)v127);
          sub_180010910((__int64)v128);
          sub_180010910((__int64)&v117);
        }
        v76 = *v9;
        if ( *v9 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v76 + 8));
          v76 = *v9;
        }
        v77 = *v69;
        v126[0] = *v69;
        v126[1] = v76;
        if ( sub_1800122C0(v126) )
        {
          v78 = v104[0];
          if ( *(_BYTE *)(v104[0] + 124) )
          {
            sub_180063D5C(v77, &v129);
            v79 = *(_QWORD *)(a3 + 64);
            v80 = _mm_shuffle_ps(v129, v130, 68);
            v81 = _mm_shuffle_ps(v129, v130, 238);
            v82 = _mm_shuffle_ps(v131, v132, 68);
            v83 = _mm_shuffle_ps(v131, v132, 238);
            *(__m128 *)(v8 + v79) = _mm_shuffle_ps(v80, v82, 136);
            *(__m128 *)(v8 + v79 + 16) = _mm_shuffle_ps(v80, v82, 221);
            *(__m128 *)(v8 + v79 + 32) = _mm_shuffle_ps(v81, v83, 136);
            *(__m128 *)(v8 + v79 + 48) = _mm_shuffle_ps(v81, v83, 221);
          }
          else
          {
            v84 = *(_QWORD *)(a3 + 64);
            *(_OWORD *)(v8 + v84) = 0LL;
            *(_OWORD *)(v8 + v84 + 16) = 0LL;
            *(_OWORD *)(v8 + v84 + 32) = 0LL;
            *(_OWORD *)(v8 + v84 + 48) = 0LL;
          }
          v85 = 1.0 / (float)*(int *)(v77 + 1940);
          if ( *(_BYTE *)(v77 + 1952) )
            v86 = 1065353216;
          else
            v86 = 0;
          v87 = *(_DWORD *)(v77 + 1948);
          if ( ((*(_DWORD *)(v77 + 316) - 2) & 0xFFFFFFFD) == 0 )
            v87 ^= v11.m128_i32[0];
          if ( *(_DWORD *)(v77 + 1960) == 1 )
            v88 = 1065353216;
          else
            v88 = 0;
          v89 = *(_DWORD *)(v77 + 1968);
          if ( *v120 && *(_BYTE *)(v78 + 124) )
            v90 = 1065353216;
          else
            v90 = 0;
          v91 = (float *)((char *)v9 + v121 + *(_QWORD *)(a3 + 64));
          *v91 = v85;
          v91[1] = v85;
          *((_DWORD *)v91 + 2) = v86;
          *((_DWORD *)v91 + 3) = v87;
          v92 = (_DWORD *)((char *)v9 + v122 + *(_QWORD *)(a3 + 64));
          *v92 = *(_DWORD *)(v77 + 1956);
          v92[1] = v88;
          v92[2] = v89;
          v92[3] = v90;
        }
        sub_180010910((__int64)v126);
      }
      sub_180010910((__int64)v104);
      ++v101;
      v9 += 2;
      v8 += 64LL;
      v7 = 0LL;
      v10 = v123;
      if ( v101 >= v6 )
        return v124;
    }
    if ( v49 == 1 )
    {
      v15 = (__m128)0x3DA2F983u;
    }
    else if ( v49 == v50 )
    {
      v15 = (__m128)0x3F800000u;
    }
    else if ( v49 == 4 )
    {
      v15 = v18;
      v15.m128_f32[0] = v18.m128_f32[0] * v18.m128_f32[0];
    }
LABEL_50:
    if ( v19 == 1 )
    {
      v55 = (float)(fmaxf(1.0, *(float *)(v104[0] + 112)) * 0.017453292) * 0.5;
      o_cosf();
      v56 = v55;
      v57 = (__m128)0x3C23D70Au;
      *(double *)v57.m128_u64 = o_log2f(v58);
      v59 = _mm_xor_ps(v57, (__m128)xmmword_1801BDA30);
      v59.m128_f32[0] = v59.m128_f32[0] / (float)(1.0 - v56);
      v60 = 0LL;
      v60.m128_u64[0] = v43.m128_u64[0];
      v61 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps(v60, (__m128)v103));
      v106 = v61.m128_u64[0];
      v107 = _mm_shuffle_ps(v61, v61, 170).m128_u32[0];
      v62 = 0LL;
      v62.m128_u64[0] = v61.m128_u64[0];
      v63 = _mm_mul_ps(_mm_shuffle_ps(v59, v59, 0), _mm_movelh_ps(v62, (__m128)v107));
      v108 = v63.m128_u64[0];
      v11 = (__m128)0x80000000;
      v64 = (char *)v9 + v110 + *(_QWORD *)(a3 + 64);
      *(_DWORD *)v64 = v63.m128_i32[0];
      *((_DWORD *)v64 + 1) = HIDWORD(v108);
      *((_DWORD *)v64 + 2) = _mm_shuffle_ps(v63, v63, 170).m128_u32[0];
      *((float *)v64 + 3) = -v59.m128_f32[0];
      goto LABEL_40;
    }
    goto LABEL_39;
  }
  if ( v6 )
    goto LABEL_4;
  return v5;
}
