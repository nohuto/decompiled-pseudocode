/*
 * XREFs of sub_1800A4FA0 @ 0x1800A4FA0
 * Callers:
 *     sub_1800A45C4 @ 0x1800A45C4 (sub_1800A45C4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18003B628 @ 0x18003B628 (sub_18003B628.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_18004330C @ 0x18004330C (sub_18004330C.c)
 *     sub_180051BC4 @ 0x180051BC4 (sub_180051BC4.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800A4FA0(_QWORD *a1, __int64 *a2, __int64 a3)
{
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  __int64 v8; // r14
  float **v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _DWORD *v20; // r15
  __int64 v21; // r14
  __int64 v22; // r12
  int v23; // xmm2_4
  int v24; // xmm1_4
  int v25; // xmm0_4
  _DWORD *v26; // rcx
  int v27; // xmm2_4
  int v28; // xmm1_4
  int v29; // xmm0_4
  _DWORD *v30; // rcx
  int v31; // xmm3_4
  int v32; // xmm1_4
  int v33; // xmm0_4
  _DWORD *v34; // rcx
  int v35; // xmm2_4
  int v36; // xmm1_4
  int v37; // xmm0_4
  _DWORD *v38; // rcx
  int v39; // xmm3_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  _DWORD *v42; // rcx
  int v43; // xmm2_4
  int v44; // xmm1_4
  int v45; // xmm0_4
  _DWORD *v46; // rcx
  int v47; // xmm3_4
  int v48; // xmm1_4
  int v49; // xmm0_4
  _DWORD *v50; // rcx
  int v51; // xmm2_4
  int v52; // xmm1_4
  int v53; // xmm0_4
  _DWORD *v54; // rcx
  int v55; // xmm3_4
  int v56; // xmm1_4
  int v57; // xmm0_4
  _DWORD *v58; // rcx
  __int64 v59; // rbx
  __m128 *v60; // rax
  __m128 *v61; // rax
  __int64 v62; // rcx
  float *v63; // rax
  __m128 v65; // [rsp+40h] [rbp-51h] BYREF
  __int64 v66; // [rsp+50h] [rbp-41h] BYREF
  __int64 v67; // [rsp+58h] [rbp-39h]
  __int128 v68; // [rsp+60h] [rbp-31h] BYREF
  __m128 v69[5]; // [rsp+70h] [rbp-21h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = 0.0;
  v5 = 0.0;
  v6 = 0.0;
  v7 = 1.0;
  v8 = *a2;
  if ( *a2 == a2[1] )
  {
    v9 = (float **)(a3 + 64);
    v10 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v10 + 192) = 0LL;
    *(_QWORD *)(v10 + 200) = 0LL;
    v11 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v11 + 208) = 0LL;
    *(_QWORD *)(v11 + 216) = 0LL;
    v12 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v12 + 224) = 0LL;
    *(_QWORD *)(v12 + 232) = 0LL;
    v13 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v13 + 240) = 0LL;
    *(_QWORD *)(v13 + 248) = 0LL;
    v14 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v14 + 256) = 0LL;
    *(_QWORD *)(v14 + 264) = 0LL;
    v15 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v15 + 272) = 0LL;
    *(_QWORD *)(v15 + 280) = 0LL;
    v16 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v16 + 288) = 0LL;
    *(_QWORD *)(v16 + 296) = 0LL;
    v17 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v17 + 304) = 0LL;
    *(_QWORD *)(v17 + 312) = 0LL;
    v18 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v18 + 320) = 0LL;
    *(_QWORD *)(v18 + 328) = 0LL;
  }
  else
  {
    v19 = *(_QWORD *)(v8 + 8);
    if ( v19 )
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v20 = *(_DWORD **)v8;
    v21 = *(_QWORD *)(v8 + 8);
    v22 = v21;
    v23 = v20[67];
    v24 = v20[66];
    v25 = v20[65];
    v9 = (float **)(a3 + 64);
    v26 = *(_DWORD **)(a3 + 64);
    v26[48] = v20[64];
    v26[49] = v25;
    v26[50] = v24;
    v26[51] = v23;
    v27 = v20[71];
    v28 = v20[70];
    v29 = v20[69];
    v30 = *(_DWORD **)(a3 + 64);
    v30[52] = v20[68];
    v30[53] = v29;
    v30[54] = v28;
    v30[55] = v27;
    v31 = v20[75];
    v32 = v20[74];
    v33 = v20[73];
    v34 = *(_DWORD **)(a3 + 64);
    v34[56] = v20[72];
    v34[57] = v33;
    v34[58] = v32;
    v34[59] = v31;
    v35 = v20[79];
    v36 = v20[78];
    v37 = v20[77];
    v38 = *(_DWORD **)(a3 + 64);
    v38[60] = v20[76];
    v38[61] = v37;
    v38[62] = v36;
    v38[63] = v35;
    v39 = v20[83];
    v40 = v20[82];
    v41 = v20[81];
    v42 = *(_DWORD **)(a3 + 64);
    v42[64] = v20[80];
    v42[65] = v41;
    v42[66] = v40;
    v42[67] = v39;
    v43 = v20[87];
    v44 = v20[86];
    v45 = v20[85];
    v46 = *(_DWORD **)(a3 + 64);
    v46[68] = v20[84];
    v46[69] = v45;
    v46[70] = v44;
    v46[71] = v43;
    v47 = v20[91];
    v48 = v20[90];
    v49 = v20[89];
    v50 = *(_DWORD **)(a3 + 64);
    v50[72] = v20[88];
    v50[73] = v49;
    v50[74] = v48;
    v50[75] = v47;
    v51 = v20[95];
    v52 = v20[94];
    v53 = v20[93];
    v54 = *(_DWORD **)(a3 + 64);
    v54[76] = v20[92];
    v54[77] = v53;
    v54[78] = v52;
    v54[79] = v51;
    v55 = v20[99];
    v56 = v20[98];
    v57 = v20[97];
    v58 = *(_DWORD **)(a3 + 64);
    v58[80] = v20[96];
    v58[81] = v57;
    v58[82] = v56;
    v58[83] = v55;
    v59 = *sub_18004330C((__int64)v20, &v66);
    sub_18003E330(v59);
    v65 = *(__m128 *)(v59 + 156);
    v60 = (__m128 *)sub_180051BC4((__int64)v20, &v68);
    v61 = sub_18003B628(v69, v60, &v65);
    v4 = v61->m128_f32[0];
    v5 = v61->m128_f32[1];
    v6 = v61->m128_f32[2];
    v7 = v61->m128_f32[3];
    if ( v67 )
      sub_180010530(v67);
    if ( v21 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
      v22 = v21;
    }
    *a1 = v20;
    v62 = a1[1];
    a1[1] = v21;
    if ( v62 )
      sub_180010530(v62);
    if ( v21 )
      sub_180010530(v22);
  }
  v63 = *v9;
  v63[84] = v4 * 1.4142135;
  v63[85] = v5 * 1.4142135;
  v63[86] = v6 * 1.4142135;
  v63[87] = v7 * 1.4142135;
  return a1;
}
