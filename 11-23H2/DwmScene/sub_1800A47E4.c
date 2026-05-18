/*
 * XREFs of sub_1800A47E4 @ 0x1800A47E4
 * Callers:
 *     sub_1800A45C4 @ 0x1800A45C4 (sub_1800A45C4.c)
 * Callees:
 *     _o_cosf @ 0x18000C008 (_o_cosf.c)
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18003AFEC @ 0x18003AFEC (sub_18003AFEC.c)
 *     sub_18003C04C @ 0x18003C04C (sub_18003C04C.c)
 *     sub_18003C3B4 @ 0x18003C3B4 (sub_18003C3B4.c)
 *     sub_18003C588 @ 0x18003C588 (sub_18003C588.c)
 *     sub_18003CFA0 @ 0x18003CFA0 (sub_18003CFA0.c)
 *     sub_1800432F0 @ 0x1800432F0 (sub_1800432F0.c)
 *     sub_18005BBFC @ 0x18005BBFC (sub_18005BBFC.c)
 *     sub_18005D880 @ 0x18005D880 (sub_18005D880.c)
 *     sub_180062708 @ 0x180062708 (sub_180062708.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800A47E4(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // r12
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r15
  __m128 v11; // xmm7
  __int32 v12; // xmm14_4
  __int32 v13; // xmm15_4
  __m128 v14; // xmm10
  unsigned int v15; // edi
  __int64 v16; // rcx
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  __m128 v19; // xmm11
  float *v20; // rax
  float v21; // xmm2_4
  float v22; // xmm1_4
  __m128 v23; // xmm8
  unsigned __int32 v24; // xmm8_4
  int v25; // xmm12_4
  int v26; // xmm13_4
  int v27; // ecx
  int v28; // r8d
  _DWORD *v29; // rax
  __m128 v30; // xmm1
  __m128 v31; // xmm0
  int v32; // xmm4_4
  float v33; // xmm0_4
  float v34; // xmm6_4
  __m128 v35; // xmm0
  __int64 v36; // rcx
  __m128 v37; // xmm4
  __m128 v38; // xmm1
  __m128 v39; // xmm2
  __m128 v40; // xmm3
  char *v41; // rax
  __m128 v42; // xmm2
  __m128 v43; // xmm3
  char *v44; // rax
  char *v45; // rax
  __int64 *v46; // rdi
  __int64 *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // r13
  _OWORD *v53; // rax
  __int64 v54; // rcx
  __int128 v55; // xmm1
  __int128 v56; // xmm2
  __int128 v57; // xmm3
  float v58; // xmm1_4
  int v59; // xmm4_4
  float v60; // xmm0_4
  int v61; // xmm3_4
  int v62; // xmm5_4
  int v63; // xmm2_4
  float *v64; // rax
  _DWORD *v65; // rdx
  unsigned __int32 v67; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v68; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v69; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v70; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v71; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int32 v72; // [rsp+68h] [rbp-A0h]
  __int64 v73; // [rsp+6Ch] [rbp-9Ch]
  unsigned __int64 v74; // [rsp+74h] [rbp-94h]
  unsigned __int64 v75; // [rsp+80h] [rbp-88h]
  unsigned __int32 v76; // [rsp+88h] [rbp-80h]
  unsigned __int64 v77; // [rsp+8Ch] [rbp-7Ch]
  unsigned __int64 v78; // [rsp+98h] [rbp-70h]
  __int64 v79; // [rsp+A8h] [rbp-60h]
  float v80; // [rsp+B0h] [rbp-58h] BYREF
  float v81; // [rsp+B4h] [rbp-54h]
  float v82; // [rsp+B8h] [rbp-50h]
  __int64 v83; // [rsp+C0h] [rbp-48h]
  __int64 v84; // [rsp+C8h] [rbp-40h]
  _BYTE *v85; // [rsp+D0h] [rbp-38h]
  __int64 v86; // [rsp+D8h] [rbp-30h]
  __int64 v87; // [rsp+E0h] [rbp-28h]
  __int64 v88; // [rsp+E8h] [rbp-20h]
  __m128 v89; // [rsp+F0h] [rbp-18h]
  __int64 v90; // [rsp+100h] [rbp-8h] BYREF
  __int64 v91; // [rsp+108h] [rbp+0h]
  __int64 v92; // [rsp+110h] [rbp+8h] BYREF
  __int64 v93; // [rsp+118h] [rbp+10h]
  __int64 v94; // [rsp+120h] [rbp+18h] BYREF
  __int64 v95; // [rsp+128h] [rbp+20h]
  __int64 v96; // [rsp+130h] [rbp+28h] BYREF
  __int64 v97; // [rsp+138h] [rbp+30h]
  __int64 v98; // [rsp+140h] [rbp+38h] BYREF
  __int64 v99; // [rsp+148h] [rbp+40h]
  _QWORD v100[2]; // [rsp+150h] [rbp+48h] BYREF
  __int64 v101; // [rsp+160h] [rbp+58h] BYREF
  __int64 v102; // [rsp+168h] [rbp+60h]
  __m128 v103[4]; // [rsp+178h] [rbp+70h] BYREF
  char v104[64]; // [rsp+1B8h] [rbp+B0h] BYREF
  char v105[232]; // [rsp+1F8h] [rbp+F0h] BYREF
  unsigned __int32 v109; // [rsp+340h] [rbp+238h]

  v3 = a2;
  v4 = a1;
  sub_18000C8C8(a1, 16LL, 3LL);
  HIDWORD(v73) = 1;
  v5 = (__int64)(v3[1] - *v3) >> 4;
  v6 = 0LL;
  v70 = 0LL;
  if ( v5 > 3 )
  {
    v5 = 3LL;
LABEL_4:
    v7 = 0LL;
    v8 = (__int64 *)(v4 + 8);
    v79 = 392 - v4;
    v83 = 440 - v4;
    v84 = 344 - v4;
    v86 = 488 - v4;
    v87 = 536 - v4;
    v9 = -8 - v4;
    v88 = -8 - v4;
    while ( 1 )
    {
      sub_18001246C(&v90, (__int64 *)((char *)v8 + v9 + *v3));
      v10 = v90;
      v89 = _mm_mul_ps(
              _mm_shuffle_ps((__m128)*(unsigned int *)(v90 + 104), (__m128)*(unsigned int *)(v90 + 104), 0),
              (__m128)_mm_loadu_si128((const __m128i *)(v90 + 88)));
      v11 = 0LL;
      v85 = (_BYTE *)(v90 + 72);
      if ( *(_BYTE *)(v90 + 72) )
      {
        v109 = v89.m128_u32[2];
        v13 = v89.m128_i32[1];
        v12 = v89.m128_i32[0];
      }
      else
      {
        v12 = 0;
        v13 = 0;
        v109 = 0;
      }
      v14 = (__m128)*(unsigned int *)(v90 + 116);
      v15 = *(_DWORD *)(v90 + 120);
      sub_180011C50(v90 + 56, &v92);
      sub_18003C588(v92, &v80);
      v16 = v93;
      if ( v93 )
        sub_180010530(v93);
      v17 = (__m128)LODWORD(v81);
      v17.m128_f32[0] = (float)(v81 * v80) * v82;
      v18 = _mm_and_ps(v17, (__m128)xmmword_18019BAA0);
      *(double *)v18.m128_u64 = o_cbrtf(v16);
      v19 = v18;
      sub_180011C50(v10 + 56, &v94);
      sub_18003C3B4(v94, (__int64)&v71);
      if ( v95 )
        sub_180010530(v95);
      sub_180011C50(v10 + 56, &v96);
      v20 = (float *)sub_18003C04C(v96, (__int64)v104);
      v21 = -v20[10];
      v22 = -v20[9];
      *(float *)&v68 = -v20[8];
      *((float *)&v68 + 1) = v22;
      *(float *)&v69 = v21;
      if ( v97 )
        sub_180010530(v97);
      sub_18003CFA0(&v68);
      if ( v15 == 2 )
      {
        v23 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v68, (__m128)(unsigned int)v69));
        v74 = v23.m128_u64[0];
        v24 = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
        v25 = v74;
        v71 = v74;
        v26 = HIDWORD(v74);
        v72 = v24;
      }
      else
      {
        v24 = v72;
        v26 = HIDWORD(v71);
        v25 = v71;
      }
      v27 = sub_1800432F0(v10);
      if ( !v27 )
      {
        if ( v15 == v28 )
          goto LABEL_23;
        v27 = v28;
      }
      if ( v15 < 2 )
      {
        if ( v27 == 1 )
        {
          v11 = (__m128)0x3DA2F983u;
        }
        else if ( v27 == v28 )
        {
          v11 = (__m128)0x3F800000u;
        }
        else if ( v27 == 4 )
        {
          v11 = v14;
          v11.m128_f32[0] = v14.m128_f32[0] * v14.m128_f32[0];
        }
      }
      else if ( v15 == 2 )
      {
        if ( v27 != 3 )
        {
          if ( v27 == 4 )
          {
            o_cosf();
            v11 = (__m128)0x3F800000u;
            v11.m128_f32[0] = (float)(1.0 - fmaxf(0.001, v14.m128_f32[0])) * 6.2831855;
          }
          goto LABEL_24;
        }
LABEL_23:
        v11 = (__m128)0x3F800000u;
        goto LABEL_24;
      }
      if ( v15 == 1 )
      {
        v33 = (float)(fmaxf(1.0, *(float *)(v10 + 112)) * 0.017453292) * 0.5;
        o_cosf();
        v34 = v33;
        v35 = (__m128)0x3C23D70Au;
        *(double *)v35.m128_u64 = o_log2f(v36);
        v37 = _mm_xor_ps(v35, (__m128)xmmword_18019BAB0);
        v37.m128_f32[0] = v37.m128_f32[0] / (float)(1.0 - v34);
        v38 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v68, (__m128)(unsigned int)v69));
        v75 = v38.m128_u64[0];
        v76 = _mm_shuffle_ps(v38, v38, 170).m128_u32[0];
        v39 = 0LL;
        v39.m128_u64[0] = v38.m128_u64[0];
        v40 = _mm_mul_ps(_mm_shuffle_ps(v37, v37, 0), _mm_movelh_ps(v39, (__m128)v76));
        v77 = v40.m128_u64[0];
        v41 = (char *)v8 + v79 + *(_QWORD *)(a3 + 64);
        *(_DWORD *)v41 = v40.m128_i32[0];
        *((_DWORD *)v41 + 1) = HIDWORD(v77);
        *((_DWORD *)v41 + 2) = _mm_shuffle_ps(v40, v40, 170).m128_u32[0];
        *((float *)v41 + 3) = -v37.m128_f32[0];
        goto LABEL_25;
      }
LABEL_24:
      v29 = (_DWORD *)((char *)v8 + v79 + *(_QWORD *)(a3 + 64));
      *v29 = 0;
      v29[1] = 0;
      v29[2] = 0;
      v29[3] = 0;
LABEL_25:
      v67 = v109;
      if ( v15 == 2 )
      {
        v32 = 0;
        v31.m128_u64[0] = __PAIR64__(v13, v12);
      }
      else
      {
        v30 = v19;
        v30.m128_f32[0] = v19.m128_f32[0] * v19.m128_f32[0];
        v31 = _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), _mm_movelh_ps((__m128)__PAIR64__(v13, v12), (__m128)v109));
        v67 = _mm_shuffle_ps(v31, v31, 170).m128_u32[0];
        v32 = 1065353216;
      }
      v42 = 0LL;
      v42.m128_u64[0] = v31.m128_u64[0];
      v43 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), _mm_movelh_ps(v42, (__m128)v67));
      v78 = v43.m128_u64[0];
      v44 = (char *)v8 + v83 + *(_QWORD *)(a3 + 64);
      *(_QWORD *)v44 = v43.m128_u64[0];
      *((_DWORD *)v44 + 2) = _mm_shuffle_ps(v43, v43, 170).m128_u32[0];
      *((_DWORD *)v44 + 3) = v32;
      v45 = (char *)v8 + v84 + *(_QWORD *)(a3 + 64);
      *(_DWORD *)v45 = v25;
      *((_DWORD *)v45 + 1) = v26;
      *((_DWORD *)v45 + 2) = v24;
      *((float *)v45 + 3) = v19.m128_f32[0] * v14.m128_f32[0];
      if ( v6 < 3 )
      {
        v46 = v8 - 1;
        if ( sub_180011DD0(v8 - 1) )
        {
          sub_180011C50(v10 + 56, &v98);
          v47 = sub_180062708(v98, &v101);
          v48 = *v47;
          v49 = v47[1];
          *v47 = 0LL;
          v47[1] = 0LL;
          *v46 = v48;
          v50 = *v8;
          *v8 = v49;
          if ( v50 )
            sub_180010530(v50);
          if ( v102 )
            sub_180010530(v102);
          if ( v99 )
            sub_180010530(v99);
        }
        if ( *v8 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*v8 + 8));
          v10 = v90;
        }
        v51 = *v46;
        v100[0] = v51;
        v52 = *v8;
        v100[1] = *v8;
        if ( sub_180011DE0(v100) )
        {
          if ( *(_BYTE *)(v10 + 124) )
          {
            sub_18005BBFC(v51, v103);
            sub_18005D880(v103, (__m128 *)(v7 + *(_QWORD *)(a3 + 64)));
          }
          else
          {
            v53 = (_OWORD *)sub_18003AFEC(
                              (__int64)v105,
                              (int *)&xmmword_180106A90,
                              &xmmword_180106A90,
                              &xmmword_180106A90,
                              &xmmword_180106A90);
            v54 = *(_QWORD *)(a3 + 64);
            v55 = v53[1];
            v56 = v53[2];
            v57 = v53[3];
            *(_OWORD *)(v7 + v54) = *v53;
            *(_OWORD *)(v7 + v54 + 16) = v55;
            *(_OWORD *)(v7 + v54 + 32) = v56;
            *(_OWORD *)(v7 + v54 + 48) = v57;
          }
          v58 = 1.0 / (float)*(int *)(v51 + 1940);
          if ( *(_BYTE *)(v51 + 1952) )
            v59 = 1065353216;
          else
            v59 = 0;
          v60 = *(float *)(v51 + 1948);
          if ( ((*(_DWORD *)(v51 + 316) - 2) & 0xFFFFFFFD) == 0 )
            v60 = -v60;
          if ( *(_DWORD *)(v51 + 1960) == 1 )
            v61 = 1065353216;
          else
            v61 = 0;
          v62 = *(_DWORD *)(v51 + 1968);
          if ( *v85 && *(_BYTE *)(v10 + 124) )
            v63 = 1065353216;
          else
            v63 = 0;
          v64 = (float *)((char *)v8 + v86 + *(_QWORD *)(a3 + 64));
          *v64 = v58;
          v64[1] = v58;
          *((_DWORD *)v64 + 2) = v59;
          v64[3] = v60;
          v65 = (_DWORD *)((char *)v8 + v87 + *(_QWORD *)(a3 + 64));
          *v65 = *(_DWORD *)(v51 + 1956);
          v65[1] = v61;
          v65[2] = v62;
          v65[3] = v63;
        }
        if ( v52 )
          sub_180010530(v52);
        v6 = v70;
      }
      if ( v91 )
        sub_180010530(v91);
      v70 = ++v6;
      v8 += 2;
      v7 += 64LL;
      v3 = a2;
      v9 = v88;
      if ( v6 >= v5 )
        return a1;
    }
  }
  if ( v5 )
    goto LABEL_4;
  return v4;
}
