/*
 * XREFs of sub_1800A3610 @ 0x1800A3610
 * Callers:
 *     <none>
 * Callees:
 *     _o_cosf @ 0x18000C018 (_o_cosf.c)
 *     _o_sinf @ 0x18000C078 (_o_sinf.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800417D8 @ 0x1800417D8 (sub_1800417D8.c)
 *     sub_180042D28 @ 0x180042D28 (sub_180042D28.c)
 *     sub_1800802EC @ 0x1800802EC (sub_1800802EC.c)
 *     sub_1800802F8 @ 0x1800802F8 (sub_1800802F8.c)
 *     sub_18008047C @ 0x18008047C (sub_18008047C.c)
 *     sub_1800A2A24 @ 0x1800A2A24 (sub_1800A2A24.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A3610(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  char v5; // si
  bool v6; // r12
  int v7; // r14d
  bool v8; // r13
  bool v9; // di
  int v10; // eax
  __int64 v11; // r9
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm6_4
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm1_4
  __m128 v18; // xmm0
  __m128 v19; // xmm10
  __m128 v20; // xmm6
  float v21; // xmm7_4
  unsigned int v22; // xmm8_4
  __m128 v23; // xmm0
  __m128 v24; // xmm4
  __m128 v25; // xmm4
  __m128 v26; // xmm3
  __m128 v27; // xmm0
  __m128 v28; // xmm3
  __m128 v29; // xmm1
  __m128 v30; // xmm3
  __m128 v31; // xmm4
  __m128 v32; // xmm2
  __m128 v33; // xmm2
  __m128 v34; // xmm3
  __m128 v35; // xmm3
  __int64 v36; // rdx
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  __int64 v39; // rdx
  signed __int32 v40; // eax
  signed __int32 v41; // ett
  unsigned __int64 v43; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v45; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int32 v46; // [rsp+70h] [rbp-98h]
  float v47; // [rsp+78h] [rbp-90h] BYREF
  float v48; // [rsp+7Ch] [rbp-8Ch]
  int v49; // [rsp+80h] [rbp-88h]
  int v50; // [rsp+84h] [rbp-84h]
  unsigned int v51; // [rsp+88h] [rbp-80h]
  unsigned __int64 v52; // [rsp+90h] [rbp-78h]
  unsigned __int32 v53; // [rsp+98h] [rbp-70h]
  unsigned __int64 v54; // [rsp+A0h] [rbp-68h]
  unsigned int v55; // [rsp+A8h] [rbp-60h]
  __int128 v56; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v57; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v58; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int32 v59; // [rsp+E0h] [rbp-28h]
  float v60; // [rsp+E8h] [rbp-20h]
  float v61; // [rsp+ECh] [rbp-1Ch]
  __int64 v62; // [rsp+178h] [rbp+70h]

  v4 = sub_1800802EC(a2);
  v60 = -1.0;
  v61 = -1.0;
  v47 = -1.0;
  v48 = -1.0;
  v49 = 2;
  v50 = 0;
  v51 = 0;
  sub_18008047C(v4, (__int64)&v47);
  v5 = v50 & 1;
  v6 = (v50 & 4) != 0;
  v7 = v50 & 8;
  v8 = v7 != 0;
  v9 = v49 == 1;
  if ( v60 == 0.0 || v61 == 0.0 || v47 == 0.0 || v48 == 0.0 )
  {
    v62 = 0LL;
  }
  else
  {
    *(float *)&v62 = v47 - v60;
    *((float *)&v62 + 1) = v48 - v61;
  }
  v12 = sub_1800802F8(a2);
  if ( v5 && v9 )
    goto LABEL_11;
  if ( v10 )
  {
    if ( v9 )
    {
LABEL_11:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
      goto LABEL_14;
    }
  }
  else if ( v9 )
  {
    goto LABEL_14;
  }
  *(float *)(a1 + 1892) = v12 + *(float *)(a1 + 1892);
LABEL_14:
  v13 = *(_DWORD *)(a1 + 1868);
  if ( v13 == 1 )
  {
    LOBYTE(v11) = v5;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, bool, bool, bool, float))(*(_QWORD *)a1 + 208LL))(
      a1,
      v62,
      v51,
      v11,
      v6,
      v8,
      v9,
      COERCE_FLOAT(LODWORD(v12)));
  }
  else if ( v13 == 2 )
  {
    if ( v7 && *(_BYTE *)(a1 + 1864) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
    LOBYTE(v11) = v5;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, bool, bool, bool, float))(*(_QWORD *)a1 + 232LL))(
      a1,
      v62,
      v51,
      v11,
      v6,
      v8,
      v9,
      COERCE_FLOAT(LODWORD(v12)));
  }
  if ( *(_DWORD *)(a1 + 1868) )
  {
    v14 = *(float *)(a1 + 1824);
    v15 = fmaxf(*(float *)(a1 + 1876), *(float *)(a1 + 1820));
    *(float *)(a1 + 1876) = fminf(v15, v14);
    v16 = *(float *)(a1 + 1832);
    LODWORD(v17) = sub_1800A2A24(a1).m128_u32[0];
    v18 = (__m128)*(unsigned int *)(a1 + 1880);
    v18.m128_f32[0] = fmaxf(v18.m128_f32[0], v17);
    v18.m128_f32[0] = fminf(v18.m128_f32[0], v16);
    v19 = v18;
    *(_DWORD *)(a1 + 1880) = v18.m128_i32[0];
    v20 = (__m128)*(unsigned int *)(a1 + 1876);
    v18.m128_i32[0] = *(_DWORD *)(a1 + 1876);
    o_cosf();
    v21 = v18.m128_f32[0];
    v18.m128_i32[0] = *(_DWORD *)(a1 + 1872);
    o_sinf();
    *(float *)&v22 = v18.m128_f32[0] * v21;
    o_sinf();
    v23 = (__m128)*(unsigned int *)(a1 + 1872);
    o_cosf();
    v23.m128_f32[0] = v23.m128_f32[0] * v21;
    v24 = 0LL;
    v24.m128_u64[0] = _mm_unpacklo_ps(v23, v20).m128_u64[0];
    v25 = _mm_movelh_ps(v24, (__m128)v22);
    v26 = _mm_mul_ps(v25, v25);
    v27 = _mm_shuffle_ps(v26, v26, 153);
    v26.m128_f32[0] = (float)(v26.m128_f32[0] + v27.m128_f32[0]) + _mm_shuffle_ps(v27, v27, 85).m128_f32[0];
    v28 = _mm_shuffle_ps(v26, v26, 0);
    v29 = _mm_sqrt_ps(v28);
    v30 = _mm_cmpneq_ps(v28, (__m128)xmmword_1801282E0);
    v31 = _mm_or_ps(
            _mm_and_ps(_mm_and_ps(_mm_div_ps(v25, v29), _mm_cmpneq_ps(v29, (__m128)0LL)), v30),
            _mm_andnot_ps(v30, (__m128)xmmword_180128330));
    v43 = v31.m128_u64[0];
    LODWORD(v44) = _mm_shuffle_ps(v31, v31, 170).m128_u32[0];
    v54 = *(_QWORD *)(a1 + 1800);
    v55 = *(_DWORD *)(a1 + 1808);
    v32 = 0LL;
    v32.m128_u64[0] = v31.m128_u64[0];
    v33 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), _mm_movelh_ps(v32, (__m128)(unsigned int)v44));
    v45 = v33.m128_u64[0];
    v46 = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
    v34 = 0LL;
    v34.m128_u64[0] = v33.m128_u64[0];
    v35 = _mm_add_ps(_mm_movelh_ps(v34, (__m128)v46), _mm_movelh_ps((__m128)v54, (__m128)v55));
    v52 = v35.m128_u64[0];
    v53 = _mm_shuffle_ps(v35, v35, 170).m128_u32[0];
    v56 = 0LL;
    v36 = *(_QWORD *)(a1 + 64);
    if ( v36 )
    {
      v37 = *(_DWORD *)(v36 + 8);
      while ( v37 )
      {
        v38 = v37;
        v37 = _InterlockedCompareExchange((volatile signed __int32 *)(v36 + 8), v37 + 1, v37);
        if ( v38 == v37 )
        {
          v56 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v58 = v52;
    v59 = v53;
    sub_180042D28(v56, &v58);
    sub_180010910((__int64)&v56);
    v57 = 0LL;
    v39 = *(_QWORD *)(a1 + 64);
    if ( v39 )
    {
      v40 = *(_DWORD *)(v39 + 8);
      while ( v40 )
      {
        v41 = v40;
        v40 = _InterlockedCompareExchange((volatile signed __int32 *)(v39 + 8), v40 + 1, v40);
        if ( v41 == v40 )
        {
          v57 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v45 = 0x3F80000000000000LL;
    v46 = 0;
    v43 = v54;
    LODWORD(v44) = v55;
    sub_1800417D8(v57, &v43, &v45);
    sub_180010910((__int64)&v57);
  }
  return sub_180065C70(a1);
}
