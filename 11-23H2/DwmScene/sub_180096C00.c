/*
 * XREFs of sub_180096C00 @ 0x180096C00
 * Callers:
 *     <none>
 * Callees:
 *     _o_atan2f @ 0x18000BFF0 (_o_atan2f.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_180012ED8 @ 0x180012ED8 (sub_180012ED8.c)
 *     sub_18003C2A8 @ 0x18003C2A8 (sub_18003C2A8.c)
 *     sub_18003C998 @ 0x18003C998 (sub_18003C998.c)
 *     sub_18003CFA0 @ 0x18003CFA0 (sub_18003CFA0.c)
 *     sub_18003DE74 @ 0x18003DE74 (sub_18003DE74.c)
 *     sub_18003DEE0 @ 0x18003DEE0 (sub_18003DEE0.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_180096B6C @ 0x180096B6C (sub_180096B6C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180096C00(__int64 a1)
{
  _DWORD *v2; // rsi
  __int64 *v3; // rcx
  float v4; // xmm0_4
  __int64 result; // rax
  float v6; // xmm8_4
  __int64 v7; // rbx
  __m128 v8; // xmm7
  __m128 v9; // xmm2
  __m128 v10; // xmm3
  __m128 v11; // xmm2
  __m128 v12; // xmm7
  unsigned __int32 v13; // xmm6_4
  __m128 v14; // xmm7
  __m128 v15; // xmm2
  __m128 v16; // xmm7
  unsigned __int64 v17; // [rsp+28h] [rbp-49h] BYREF
  unsigned __int32 v18; // [rsp+30h] [rbp-41h]
  unsigned __int64 v19; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int32 v20; // [rsp+40h] [rbp-31h]
  unsigned __int64 v21; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int32 v22; // [rsp+50h] [rbp-21h]
  __int64 v23; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int32 v24; // [rsp+60h] [rbp-11h]
  __int64 v25; // [rsp+68h] [rbp-9h] BYREF
  __int64 v26; // [rsp+70h] [rbp-1h]
  _DWORD *v27; // [rsp+78h] [rbp+7h] BYREF
  __int64 v28; // [rsp+80h] [rbp+Fh]
  __int64 v29; // [rsp+88h] [rbp+17h] BYREF
  __int64 v30; // [rsp+90h] [rbp+1Fh]

  sub_180011C50(a1 + 56, &v27);
  v2 = v27;
  sub_180012624((__int64)v27, &v29);
  sub_18003C2A8((__int64)v2, &v25);
  v19 = *(_QWORD *)(a1 + 112);
  v20 = *(_DWORD *)(a1 + 120);
  sub_18003DE74(v25, (__int64)&v21, &v19);
  v19 = *(_QWORD *)(a1 + 124);
  v20 = *(_DWORD *)(a1 + 132);
  sub_18003DE74(v25, (__int64)&v17, &v19);
  if ( sub_180011DD0((_QWORD *)(a1 + 96)) || !*(_DWORD *)(a1 + 88) )
  {
    v23 = *(_QWORD *)(a1 + 112);
    v24 = *(_DWORD *)(a1 + 120);
    sub_180012ED8(v2, &v23);
    v23 = 0x3F80000000000000LL;
    v24 = 0;
    v21 = v17;
    v22 = v18;
    result = sub_18003C998((__int64)v2, &v21, (__int64)&v23);
    *(_QWORD *)(a1 + 140) = v17;
    *(_DWORD *)(a1 + 148) = v18;
  }
  else
  {
    v19 = 0LL;
    v20 = 1065353216;
    sub_18003DEE0(*v3, (__int64)&v23, &v19);
    v19 = (unsigned int)v23;
    v20 = v24;
    sub_18003CFA0(&v19);
    v4 = *(float *)&v20;
    o_atan2f();
    result = o_atan2f();
    v6 = (float)(v4 - 1.0) + *(float *)(a1 + 136);
    if ( *(_DWORD *)(a1 + 88) == 2 )
    {
      v7 = v25;
      sub_18003E330(v25);
      v24 = *(_DWORD *)(v7 + 152);
      v8 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(v7 + 144), (__m128)v24);
      v9 = _mm_sub_ps(_mm_movelh_ps((__m128)v17, (__m128)v18), v8);
      v19 = 0LL;
      v20 = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
      v10 = _mm_sub_ps(_mm_movelh_ps((__m128)v21, (__m128)v22), v8);
      v21 = 0LL;
      v22 = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
      v23 = v9.m128_u64[0];
      v24 = v20;
      sub_180096B6C((__int64)&v19, (__int64)&v23, v6);
      v23 = v10.m128_u64[0];
      v24 = v22;
      sub_180096B6C((__int64)&v21, (__int64)&v23, v6);
      v11 = _mm_add_ps(v8, _mm_movelh_ps((__m128)v21, (__m128)v22));
      v21 = 0LL;
      v22 = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
      v23 = v11.m128_u64[0];
      v24 = v22;
      sub_180012ED8(v2, &v23);
      v12 = _mm_add_ps(v8, _mm_movelh_ps((__m128)v19, (__m128)v20));
      v19 = v12.m128_u64[0];
      *(_DWORD *)(a1 + 140) = v12.m128_i32[0];
      *(_DWORD *)(a1 + 144) = HIDWORD(v19);
      *(_DWORD *)(a1 + 148) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
LABEL_5:
      v23 = 0x3F80000000000000LL;
      v24 = 0;
      v21 = *(_QWORD *)(a1 + 140);
      v22 = *(_DWORD *)(a1 + 148);
      result = sub_18003C998((__int64)v2, &v21, (__int64)&v23);
      goto LABEL_9;
    }
    if ( *(_DWORD *)(a1 + 88) == 1 )
    {
      v13 = v18;
      v14 = _mm_movelh_ps((__m128)v17, (__m128)v18);
      v15 = _mm_sub_ps(_mm_movelh_ps((__m128)v21, (__m128)v22), v14);
      v21 = 0LL;
      v22 = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
      v23 = v15.m128_u64[0];
      v24 = v22;
      sub_180096B6C((__int64)&v21, (__int64)&v23, v6);
      *(_QWORD *)(a1 + 140) = v17;
      *(_DWORD *)(a1 + 148) = v13;
      v16 = _mm_add_ps(v14, _mm_movelh_ps((__m128)v21, (__m128)v22));
      v21 = 0LL;
      v22 = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
      v23 = v16.m128_u64[0];
      v24 = v22;
      sub_180012ED8(v2, &v23);
      goto LABEL_5;
    }
  }
LABEL_9:
  if ( v26 )
    result = sub_180010530(v26);
  if ( v30 )
    result = sub_180010530(v30);
  if ( v28 )
    return sub_180010530(v28);
  return result;
}
