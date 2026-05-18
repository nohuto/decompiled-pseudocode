/*
 * XREFs of sub_180093580 @ 0x180093580
 * Callers:
 *     <none>
 * Callees:
 *     _o_cosf @ 0x18000C008 (_o_cosf.c)
 *     _o_sinf @ 0x18000C068 (_o_sinf.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001112C @ 0x18001112C (sub_18001112C.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18003C998 @ 0x18003C998 (sub_18003C998.c)
 *     sub_18003CFA0 @ 0x18003CFA0 (sub_18003CFA0.c)
 *     sub_18003DB00 @ 0x18003DB00 (sub_18003DB00.c)
 *     sub_180074440 @ 0x180074440 (sub_180074440.c)
 *     sub_18007444C @ 0x18007444C (sub_18007444C.c)
 *     sub_1800745B8 @ 0x1800745B8 (sub_1800745B8.c)
 *     sub_180092CE4 @ 0x180092CE4 (sub_180092CE4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180093580(__int64 a1, __int64 a2)
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
  float v15; // xmm1_4
  __m128 v16; // xmm0
  __m128 v17; // xmm10
  float v18; // xmm6_4
  unsigned __int32 v19; // xmm9_4
  __m128 v20; // xmm6
  unsigned __int32 v21; // edi
  __m128 v22; // xmm2
  __m128 v23; // xmm3
  __m128 v24; // xmm0
  unsigned __int64 v26; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int32 v27; // [rsp+60h] [rbp-51h]
  unsigned __int64 v28; // [rsp+68h] [rbp-49h] BYREF
  unsigned __int32 v29; // [rsp+70h] [rbp-41h]
  _DWORD *v30; // [rsp+88h] [rbp-29h] BYREF
  __int64 v31; // [rsp+90h] [rbp-21h]
  unsigned int v32; // [rsp+98h] [rbp-19h]
  __int64 v33; // [rsp+118h] [rbp+67h]

  v4 = sub_180074440(a2);
  v28 = 0xBF800000BF800000uLL;
  v30 = (_DWORD *)0xBF800000BF800000LL;
  v31 = 2LL;
  v32 = 0;
  sub_1800745B8(v4, (__int64)&v30);
  v5 = BYTE4(v31) & 1;
  v6 = (v31 & 0x400000000LL) != 0;
  v7 = BYTE4(v31) & 8;
  v8 = v7 != 0;
  v9 = (_DWORD)v31 == 1;
  if ( 0.0 == -1.0 || *((float *)&v28 + 1) == 0.0 || *(float *)&v30 == 0.0 || *((float *)&v30 + 1) == 0.0 )
  {
    v33 = 0LL;
  }
  else
  {
    *(float *)&v33 = *(float *)&v30 - -1.0;
    *((float *)&v33 + 1) = *((float *)&v30 + 1) - *((float *)&v28 + 1);
  }
  v12 = sub_18007444C(a2);
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
      v33,
      v32,
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
      v33,
      v32,
      v11,
      v6,
      v8,
      v9,
      COERCE_FLOAT(LODWORD(v12)));
  }
  if ( *(_DWORD *)(a1 + 1868) )
  {
    *(float *)(a1 + 1876) = sub_18001112C(*(float *)(a1 + 1876), *(float *)(a1 + 1820), *(float *)(a1 + 1824));
    v14 = *(float *)(a1 + 1832);
    LODWORD(v15) = sub_180092CE4(a1).m128_u32[0];
    v16 = (__m128)*(unsigned int *)(a1 + 1880);
    v16.m128_f32[0] = sub_18001112C(v16.m128_f32[0], v15, v14);
    v17 = v16;
    *(_DWORD *)(a1 + 1880) = v16.m128_i32[0];
    v18 = *(float *)(a1 + 1876);
    o_cosf();
    v16.m128_i32[0] = *(_DWORD *)(a1 + 1872);
    o_sinf();
    *(float *)&v19 = v18 * v16.m128_f32[0];
    o_sinf();
    o_cosf();
    v16.m128_i32[0] = *(_DWORD *)(a1 + 1872);
    o_cosf();
    *(float *)&v26 = v18 * v16.m128_f32[0];
    *((float *)&v26 + 1) = v18;
    v27 = v19;
    sub_18003CFA0(&v26);
    v20 = (__m128)*(unsigned __int64 *)(a1 + 1800);
    v21 = *(_DWORD *)(a1 + 1808);
    v29 = v21;
    v22 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), _mm_movelh_ps((__m128)v26, (__m128)v27));
    v23 = 0LL;
    v23.m128_u64[0] = v22.m128_u64[0];
    v26 = 0LL;
    v24 = _mm_add_ps(
            _mm_movelh_ps(v23, (__m128)_mm_shuffle_ps(v22, v22, 170).m128_u32[0]),
            _mm_movelh_ps(v20, (__m128)v21));
    v27 = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
    sub_180011C50(a1 + 56, &v30);
    v28 = v24.m128_u64[0];
    v29 = v27;
    sub_18003DB00(v30, (__int64)&v28);
    if ( v31 )
      sub_180010530(v31);
    sub_180011C50(a1 + 56, &v30);
    v28 = 0x3F80000000000000LL;
    v29 = 0;
    v26 = v20.m128_u64[0];
    v27 = v21;
    sub_18003C998((__int64)v30, &v26, (__int64)&v28);
    if ( v31 )
      sub_180010530(v31);
  }
  return sub_18005D900(a1);
}
