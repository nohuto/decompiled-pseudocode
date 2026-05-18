/*
 * XREFs of sub_180066028 @ 0x180066028
 * Callers:
 *     sub_180065FB8 @ 0x180065FB8 (sub_180065FB8.c)
 * Callees:
 *     sub_180019728 @ 0x180019728 (sub_180019728.c)
 *     sub_18001C880 @ 0x18001C880 (sub_18001C880.c)
 *     sub_1800637EC @ 0x1800637EC (sub_1800637EC.c)
 *     sub_180063EA8 @ 0x180063EA8 (sub_180063EA8.c)
 *     sub_180065944 @ 0x180065944 (sub_180065944.c)
 *     sub_180065C7C @ 0x180065C7C (sub_180065C7C.c)
 */

char __fastcall sub_180066028(__int64 a1)
{
  int v2; // eax
  float v3; // xmm0_4
  float v4; // xmm3_4
  float v5; // xmm1_4
  __m128 *v6; // rax
  float v7; // xmm0_4
  float v8; // xmm3_4
  __m128 v9; // xmm6
  __int128 v10; // xmm7
  __int128 v11; // xmm8
  __int128 v12; // xmm9
  __m128 v14; // [rsp+38h] [rbp-39h] BYREF
  __int128 v15; // [rsp+48h] [rbp-29h]
  __int128 v16; // [rsp+58h] [rbp-19h]
  __int128 v17; // [rsp+68h] [rbp-9h]
  __m128 v18[5]; // [rsp+78h] [rbp+7h] BYREF

  if ( sub_180063EA8(a1, 2) )
    return 0;
  sub_180065C7C(a1);
  if ( (*(_BYTE *)(a1 + 544) & 2) == 0 )
    return 0;
  v2 = *(_DWORD *)(a1 + 316);
  switch ( v2 )
  {
    case 1:
      v3 = *(float *)(a1 + 324);
      v4 = 0.001;
      if ( v3 < 0.001 )
        v3 = 0.001;
      v5 = *(float *)(a1 + 320);
LABEL_11:
      if ( v5 >= 0.001 )
        v4 = v5;
      v6 = (__m128 *)sub_1800637EC((__int64)&v14, *(float *)(a1 + 328) * 0.017453292, *(float *)(a1 + 332), v4, v3);
      goto LABEL_19;
    case 2:
      v3 = *(float *)(a1 + 320);
      v4 = 0.001;
      if ( v3 < 0.001 )
        v3 = 0.001;
      v5 = *(float *)(a1 + 324);
      goto LABEL_11;
    case 3:
      v7 = *(float *)(a1 + 324);
      v8 = *(float *)(a1 + 320);
LABEL_18:
      v6 = (__m128 *)sub_180019728(
                       (__int64)&v14,
                       *(float *)(a1 + 340) * *(float *)(a1 + 332),
                       *(float *)(a1 + 340),
                       v8,
                       v7);
LABEL_19:
      v9 = *v6;
      v10 = (__int128)v6[1];
      v11 = (__int128)v6[2];
      v12 = (__int128)v6[3];
      break;
    case 4:
      v7 = *(float *)(a1 + 320);
      v8 = *(float *)(a1 + 324);
      goto LABEL_18;
    case 5:
      v9 = *(__m128 *)(a1 + 932);
      v10 = *(_OWORD *)(a1 + 948);
      v11 = *(_OWORD *)(a1 + 964);
      v12 = *(_OWORD *)(a1 + 980);
      break;
    default:
      v10 = xmmword_1801289E0;
      v11 = xmmword_1801289F0;
      v12 = xmmword_180128A00;
      v14 = (__m128)0x3F800000uLL;
      v9 = (__m128)0x3F800000uLL;
      break;
  }
  if ( *(_DWORD *)(a1 + 316) != 5 )
  {
    v14 = v9;
    v15 = v10;
    v16 = v11;
    v17 = v12;
    sub_180065944(a1, 1, 2, &v14);
  }
  v14 = sub_18001C880(v18, *(double *)&v10, *(double *)&v11, *(double *)&v12);
  v15 = v10;
  v16 = v11;
  v17 = v12;
  sub_180065944(a1, 2, 1, &v14);
  *(_DWORD *)(a1 + 544) &= ~2u;
  return 1;
}
