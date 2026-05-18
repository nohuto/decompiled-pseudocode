/*
 * XREFs of sub_180095FA0 @ 0x180095FA0
 * Callers:
 *     sub_1800AC610 @ 0x1800AC610 (sub_1800AC610.c)
 * Callees:
 *     sub_180096660 @ 0x180096660 (sub_180096660.c)
 */

__int64 __fastcall sub_180095FA0(_QWORD *a1, float a2, float a3, float a4, int a5, int a6)
{
  __int64 v7; // rcx
  __int64 result; // rax
  __m128 v10; // xmm5
  __int128 v11; // xmm4
  __int64 v12; // xmm1_8
  __int128 v13; // xmm0
  __int64 v14; // rcx
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rcx
  __int64 v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __m128 v29; // [rsp+28h] [rbp-39h] BYREF
  __int128 v30; // [rsp+38h] [rbp-29h]
  __int128 v31; // [rsp+48h] [rbp-19h]
  __int128 v32; // [rsp+58h] [rbp-9h]
  __int64 v33; // [rsp+68h] [rbp+7h]

  v7 = a1[6];
  result = *(_QWORD *)(v7 + 112);
  v10 = *(__m128 *)result;
  v11 = *(_OWORD *)(result + 32);
  v12 = *(_QWORD *)(result + 64);
  v30 = *(_OWORD *)(result + 16);
  v13 = *(_OWORD *)(result + 48);
  v29 = v10;
  v32 = v13;
  v31 = v11;
  v33 = v12;
  if ( _mm_shuffle_ps(v10, v10, 255).m128_f32[0] != a2
    || *((float *)&v30 + 1) != a3
    || *(float *)&v30 != a4
    || BYTE8(v30) != 1
    || HIDWORD(v33) != a6 )
  {
    v29.m128_f32[3] = a2;
    *(_QWORD *)&v30 = __PAIR64__(LODWORD(a3), LODWORD(a4));
    BYTE8(v30) = 1;
    HIDWORD(v33) = a6;
    result = sub_180096660(v7, &v29, 0LL);
    v14 = a1[8];
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 112);
      v16 = *(_OWORD *)(v15 + 16);
      v29 = *(__m128 *)v15;
      v17 = *(_OWORD *)(v15 + 32);
      v30 = v16;
      v18 = *(_OWORD *)(v15 + 48);
      BYTE8(v30) = 1;
      v31 = v17;
      LODWORD(v33) = *(_QWORD *)(v15 + 64);
      HIDWORD(v33) = a6;
      v29.m128_f32[3] = a2;
      *(_QWORD *)&v30 = __PAIR64__(LODWORD(a3), LODWORD(a4));
      v32 = v18;
      result = sub_180096660(v14, &v29, 0LL);
    }
    v19 = a1[10];
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 112);
      v21 = *(_OWORD *)(v20 + 16);
      v29 = *(__m128 *)v20;
      v22 = *(_OWORD *)(v20 + 32);
      v30 = v21;
      v23 = *(_OWORD *)(v20 + 48);
      BYTE8(v30) = 1;
      v31 = v22;
      LODWORD(v33) = *(_QWORD *)(v20 + 64);
      HIDWORD(v33) = a6;
      v29.m128_f32[3] = a2;
      *(_QWORD *)&v30 = __PAIR64__(LODWORD(a3), LODWORD(a4));
      v32 = v23;
      result = sub_180096660(v19, &v29, 0LL);
    }
    v24 = a1[12];
    if ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 112);
      v26 = *(_OWORD *)(v25 + 16);
      v29 = *(__m128 *)v25;
      v27 = *(_OWORD *)(v25 + 32);
      v30 = v26;
      v28 = *(_OWORD *)(v25 + 48);
      BYTE8(v30) = 1;
      v31 = v27;
      LODWORD(v33) = *(_QWORD *)(v25 + 64);
      HIDWORD(v33) = a6;
      v29.m128_f32[3] = a2;
      *(_QWORD *)&v30 = __PAIR64__(LODWORD(a3), LODWORD(a4));
      v32 = v28;
      return sub_180096660(v24, &v29, 0LL);
    }
  }
  return result;
}
