/*
 * XREFs of sub_180018FC0 @ 0x180018FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_1800115D8 @ 0x1800115D8 (sub_1800115D8.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180016288 @ 0x180016288 (sub_180016288.c)
 *     sub_180017818 @ 0x180017818 (sub_180017818.c)
 *     sub_180017A38 @ 0x180017A38 (sub_180017A38.c)
 *     sub_180017E18 @ 0x180017E18 (sub_180017E18.c)
 *     sub_180018950 @ 0x180018950 (sub_180018950.c)
 *     sub_1800189B4 @ 0x1800189B4 (sub_1800189B4.c)
 *     sub_18001AF40 @ 0x18001AF40 (sub_18001AF40.c)
 *     sub_18001B02C @ 0x18001B02C (sub_18001B02C.c)
 *     sub_18001B4A8 @ 0x18001B4A8 (sub_18001B4A8.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180033EB4 @ 0x180033EB4 (sub_180033EB4.c)
 *     sub_18003DA14 @ 0x18003DA14 (sub_18003DA14.c)
 *     sub_180051CB0 @ 0x180051CB0 (sub_180051CB0.c)
 *     sub_180057484 @ 0x180057484 (sub_180057484.c)
 *     sub_180057AF0 @ 0x180057AF0 (sub_180057AF0.c)
 *     sub_180057BA8 @ 0x180057BA8 (sub_180057BA8.c)
 *     sub_18005BEA8 @ 0x18005BEA8 (sub_18005BEA8.c)
 *     sub_18005D454 @ 0x18005D454 (sub_18005D454.c)
 *     sub_18005D564 @ 0x18005D564 (sub_18005D564.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180018FC0(__int64 a1, __int64 a2, _OWORD *a3, unsigned __int8 a4)
{
  int v4; // r14d
  _QWORD *v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __m128 v12; // xmm9
  __m128 v13; // xmm10
  __int64 v14; // rax
  float v15; // xmm6_4
  float v16; // xmm7_4
  double v17; // xmm8_8
  int v18; // ecx
  int v19; // eax
  _QWORD *v20; // rax
  __int64 v21; // rdi
  __m128 v22; // xmm1
  __m128 v23; // xmm3
  _QWORD *v24; // rax
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  _QWORD *v27; // rax
  char v28; // cl
  __int64 v29; // rax
  float v30; // xmm4_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  __int64 v33; // rax
  __int128 v34; // xmm3
  __int128 v35; // xmm2
  __int128 v36; // xmm0
  __int64 result; // rax
  __int64 v38; // [rsp+20h] [rbp-198h] BYREF
  __int64 v39; // [rsp+28h] [rbp-190h]
  __int64 v40; // [rsp+30h] [rbp-188h] BYREF
  __int64 v41; // [rsp+38h] [rbp-180h]
  _BYTE v42[20]; // [rsp+40h] [rbp-178h] BYREF
  float v43; // [rsp+54h] [rbp-164h]
  __int128 v44; // [rsp+58h] [rbp-160h]
  int v45; // [rsp+68h] [rbp-150h]
  int v46; // [rsp+6Ch] [rbp-14Ch]
  float v47; // [rsp+70h] [rbp-148h]
  float v48; // [rsp+74h] [rbp-144h]
  float v49; // [rsp+78h] [rbp-140h]
  int v50; // [rsp+7Ch] [rbp-13Ch]
  __int64 v51; // [rsp+80h] [rbp-138h] BYREF
  __int64 v52; // [rsp+88h] [rbp-130h]
  __int64 v53; // [rsp+90h] [rbp-128h] BYREF
  __int64 v54; // [rsp+98h] [rbp-120h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-118h]
  _BYTE v56[64]; // [rsp+A8h] [rbp-110h] BYREF
  __int64 v57; // [rsp+E8h] [rbp-D0h] BYREF
  _BYTE v58[24]; // [rsp+F8h] [rbp-C0h] BYREF
  __int128 v59[9]; // [rsp+110h] [rbp-A8h] BYREF

  v4 = a4;
  try
  {
    sub_180017818(&v53);
    sub_18001246C(&v54, (_QWORD *)(a2 + 16));
    v8 = sub_18001246C(&v57, &v54);
    sub_180033EB4(v9, &v40, v9, v8);
    sub_1800115D8(
      *(_QWORD *)(a1 + 64),
      *(_QWORD *)(a1 + 120),
      *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128),
      *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132));
    v10 = v54;
    sub_18002A0C4(v54 + 16, v58);
    v11 = sub_180012440(v42, (__int64)&qword_1801D3FE8);
    sub_180016288(v10, &v38, (__int64)v11);
    sub_180051CB0(v38, a2 + 48);
    if ( v39 )
      sub_180010530(v39);
    v12 = (__m128)COERCE_UNSIGNED_INT((float)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64)));
    v13 = (__m128)COERCE_UNSIGNED_INT((float)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64)));
    v38 = *(_QWORD *)(a1 + 144);
    LODWORD(v39) = *(_DWORD *)(a1 + 152);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 280LL))(*(_QWORD *)(a1 + 64)) )
    {
      *(_BYTE *)(v40 + 465) |= 1u;
      v14 = v40;
      *(_QWORD *)(v40 + 296) = 0LL;
      *(_QWORD *)(v14 + 304) = 0LL;
      v15 = *(float *)&v38 - (float)*(int *)(a1 + 128);
      v16 = *((float *)&v38 + 1) - (float)*(int *)(a1 + 132);
      v17 = *(double *)_mm_unpacklo_ps(v13, v12).m128_u64;
      sub_18005D564(v40, 0LL, *(_QWORD *)&v17, 1LL);
      v18 = *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132);
      v19 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128);
      v38 = 0LL;
      v39 = __PAIR64__(v18, v19);
      sub_18005D454(v40, &v38);
      v20 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 152LL))(*(_QWORD *)(a1 + 64));
      sub_18001246C(&v51, v20);
      v21 = v51;
      *(_DWORD *)(v51 + 448) = 8 * (v4 ^ 1);
      v22 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)(a1 + 132));
      v23 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)(a1 + 128));
      v24 = (_QWORD *)sub_180018950(v21, v42);
      v23.m128_u64[0] = _mm_unpacklo_ps(v23, v22).m128_u64[0];
      v25 = 0LL;
      v25.m128_u64[0] = v23.m128_u64[0];
      v26 = 0LL;
      *(double *)v26.m128_u64 = v17;
      v38 = 0LL;
      sub_18005D564(*v24, v23.m128_u64[0], _mm_add_ps(v26, v25).m128_u64[0], 1LL);
      if ( *(_QWORD *)&v42[8] )
        sub_180010530(*(__int64 *)&v42[8]);
      v27 = (_QWORD *)sub_180018950(v21, &v38);
      *(_OWORD *)v42 = *(_OWORD *)(a1 + 128);
      sub_18005D454(*v27, v42);
      if ( v39 )
        sub_180010530(v39);
      if ( v52 )
        sub_180010530(v52);
    }
    else
    {
      v28 = *(_BYTE *)(v40 + 465) | 1;
      if ( !(_BYTE)v4 )
        v28 = *(_BYTE *)(v40 + 465) & 0xFE;
      *(_BYTE *)(v40 + 465) = v28;
      v29 = v40;
      *(_QWORD *)(v40 + 296) = 0LL;
      *(_QWORD *)(v29 + 304) = 0LL;
      *(_OWORD *)v42 = *(_OWORD *)(a1 + 128);
      sub_18005D454(v40, v42);
      v16 = *((float *)&v38 + 1);
      v15 = *(float *)&v38;
    }
    v30 = -*(float *)(a1 + 152);
    v31 = *(float *)(a1 + 148);
    v32 = -*(float *)(a1 + 144);
    *(_DWORD *)v42 = 1065353216;
    *(_OWORD *)&v42[4] = 0LL;
    v43 = -1.0;
    v44 = 0LL;
    v45 = 1065353216;
    v46 = 0;
    v47 = v32;
    v48 = v31;
    v49 = v30;
    v50 = 1065353216;
    *(_OWORD *)v56 = *a3;
    *(_OWORD *)&v56[16] = a3[1];
    *(_OWORD *)&v56[32] = a3[2];
    *(_OWORD *)&v56[48] = a3[3];
    sub_180017E18((__int64)v59, (__int128 *)v56, v42);
    sub_180011C50(v40 + 56, &v51);
    v33 = sub_1800189B4(v59, (__int64)v56);
    sub_18003DA14(v51, v33);
    if ( v52 )
      sub_180010530(v52);
    sub_18005BEA8(v40);
    *(float *)v42 = 2.0 / v13.m128_f32[0];
    *(_OWORD *)&v42[4] = 0LL;
    v43 = 2.0 / v12.m128_f32[0];
    v44 = 0LL;
    v45 = 1065353216;
    v46 = 0;
    v47 = (float)((float)(2.0 / v13.m128_f32[0]) * v15) - 1.0;
    v48 = 1.0 - (float)((float)(2.0 / v12.m128_f32[0]) * v16);
    v49 = 0.0;
    v50 = 1065353216;
    *(_OWORD *)&v56[4] = 0LL;
    *(_OWORD *)&v56[24] = 0LL;
    *(_OWORD *)&v56[44] = 0LL;
    v34 = *(unsigned int *)(a1 + 160);
    v35 = *(unsigned int *)(a1 + 156);
    v36 = 0x40000000u;
    *(double *)&v36 = sub_18001B4A8();
    *(_OWORD *)v56 = v36;
    *(_OWORD *)&v56[16] = 0x40000000u;
    *(_OWORD *)&v56[32] = v35;
    *(_OWORD *)&v56[48] = v34;
    sub_180017E18((__int64)v59, (__int128 *)v56, v42);
    sub_18001B02C(v40, 5LL);
    sub_18001AF40(v40, v59);
    sub_180010F54((__int64)v58);
    sub_180057484(*(_QWORD *)(a1 + 48), &v40);
    sub_180057BA8(*(_QWORD *)(a1 + 48));
    sub_180057AF0(*(_QWORD *)(a1 + 48), &v40);
    if ( v41 )
      sub_180010530(v41);
    if ( v55 )
      sub_180010530(v55);
    sub_180017A38(&v53);
    result = 0LL;
  }
  catch ( ... )
  {
    return 2147500037LL;
  }
  return result;
}
