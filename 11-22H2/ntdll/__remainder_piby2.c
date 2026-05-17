/*
 * XREFs of __remainder_piby2 @ 0x180096ED8
 * Callers:
 *     cos @ 0x180091A60 (cos.c)
 *     sin @ 0x180091E80 (sin.c)
 *     tan @ 0x180094360 (tan.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall _remainder_piby2(double a1, double *a2, double *a3, int *a4)
{
  int v6; // r11d
  __int64 v7; // rbx
  int v9; // r10d
  __int64 v10; // r9
  int v11; // r11d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rbx
  int v30; // r9d
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  unsigned int v33; // esi
  int v34; // ebx
  __int64 v35; // rcx
  int v36; // esi
  unsigned __int64 v37; // rdx
  _QWORD *v38; // r8
  __int64 v39; // r8
  _QWORD *v40; // rax
  unsigned __int64 v41; // r8
  int v42; // r11d
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  double v46; // xmm8_8
  double v47; // xmm7_8
  double v48; // xmm7_8
  unsigned __int64 result; // rax
  double v50; // xmm5_8
  _QWORD v51[499]; // [rsp+20h] [rbp-E8h] BYREF

  v51[18] = 0LL;
  v6 = ((*(_QWORD *)&a1 >> 52) & 0x7FF) - 1023;
  v7 = *(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
  v9 = v6 / 10;
  v10 = v6 / 10;
  v11 = v6 % 10;
  v12 = qword_18017EAA0[v9 + 18] * v7;
  v13 = (v12 >> 10) + qword_18017EAA0[v10 + 17] * v7;
  v51[17] = v12 & 0x3FF;
  v51[16] = v13 & 0x3FF;
  v14 = (v13 >> 10) + qword_18017EAA0[v9 + 16] * v7;
  v51[15] = ((unsigned __int16)(v13 >> 10) + LOWORD(qword_18017EAA0[v9 + 16]) * LOWORD(a1)) & 0x3FF;
  v15 = (v14 >> 10) + qword_18017EAA0[v9 + 15] * v7;
  v51[14] = ((unsigned __int16)(v14 >> 10) + LOWORD(qword_18017EAA0[v9 + 15]) * LOWORD(a1)) & 0x3FF;
  v16 = (v15 >> 10) + qword_18017EAA0[v9 + 14] * v7;
  v51[13] = ((unsigned __int16)(v15 >> 10) + LOWORD(qword_18017EAA0[v9 + 14]) * LOWORD(a1)) & 0x3FF;
  v17 = (v16 >> 10) + qword_18017EAA0[v9 + 13] * v7;
  v51[12] = v17 & 0x3FF;
  v18 = (v17 >> 10) + qword_18017EAA0[v9 + 12] * v7;
  v51[11] = ((unsigned __int16)(v17 >> 10) + LOWORD(qword_18017EAA0[v9 + 12]) * LOWORD(a1)) & 0x3FF;
  v19 = (v18 >> 10) + qword_18017EAA0[v9 + 11] * v7;
  v51[10] = ((unsigned __int16)(v18 >> 10) + LOWORD(qword_18017EAA0[v9 + 11]) * LOWORD(a1)) & 0x3FF;
  v20 = (v19 >> 10) + qword_18017EAA0[v9 + 10] * v7;
  v51[9] = ((unsigned __int16)(v19 >> 10) + LOWORD(qword_18017EAA0[v9 + 10]) * LOWORD(a1)) & 0x3FF;
  v21 = (v20 >> 10) + qword_18017EAA0[v9 + 9] * v7;
  v51[8] = ((unsigned __int16)(v20 >> 10) + LOWORD(qword_18017EAA0[v9 + 9]) * LOWORD(a1)) & 0x3FF;
  v22 = (v21 >> 10) + qword_18017EAA0[v9 + 8] * v7;
  v51[7] = ((unsigned __int16)(v21 >> 10) + LOWORD(qword_18017EAA0[v9 + 8]) * LOWORD(a1)) & 0x3FF;
  v23 = (v22 >> 10) + qword_18017EAA0[v9 + 7] * v7;
  v51[6] = ((unsigned __int16)(v22 >> 10) + LOWORD(qword_18017EAA0[v9 + 7]) * LOWORD(a1)) & 0x3FF;
  v24 = (v23 >> 10) + qword_18017EAA0[v9 + 6] * v7;
  v51[5] = ((unsigned __int16)(v23 >> 10) + LOWORD(qword_18017EAA0[v9 + 6]) * LOWORD(a1)) & 0x3FF;
  v25 = (v24 >> 10) + qword_18017EAA0[v9 + 5] * v7;
  v51[4] = ((unsigned __int16)(v24 >> 10) + LOWORD(qword_18017EAA0[v9 + 5]) * LOWORD(a1)) & 0x3FF;
  v26 = (v25 >> 10) + qword_18017EAA0[v9 + 4] * v7;
  v51[3] = v26 & 0x3FF;
  v27 = (v26 >> 10) + qword_18017EAA0[v9 + 3] * v7;
  v51[2] = ((unsigned __int16)(v26 >> 10) + LOWORD(qword_18017EAA0[v9 + 3]) * LOWORD(a1)) & 0x3FF;
  v28 = (v27 >> 10) + qword_18017EAA0[v9 + 2] * v7;
  v51[1] = v28 & 0x3FF;
  v29 = qword_18017EAA0[v10] * v7;
  v30 = 1;
  v31 = (((v28 >> 10) + qword_18017EAA0[v9 + 1] * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL)) >> 10)
      + v29;
  v32 = ((unsigned __int16)(v28 >> 10) + LOWORD(qword_18017EAA0[v9 + 1]) * LOWORD(a1)) & 0x3FF;
  v51[0] = v32;
  v33 = ((v32 | ((v31 & 0x3FF) << 10)) >> (10 - (unsigned __int8)v11 - 1)) & 7;
  v34 = v33 >> 1;
  v35 = (1LL << (10 - (unsigned __int8)v11)) - 1;
  v36 = v33 & 1;
  if ( v36 )
  {
    v37 = v35 & ~v32;
    *a4 = ((_BYTE)v34 + 1) & 3;
    if ( v37 < 0x20000000000000LL )
    {
      v38 = v51;
      do
      {
        ++v38;
        ++v30;
        v37 = (v37 << 10) | ~*v38 & 0x3FFLL;
      }
      while ( v37 < 0x20000000000000LL );
    }
    v39 = ~v51[v30];
  }
  else
  {
    *a4 = v34;
    v40 = v51;
    v37 = v35 & v32;
    do
    {
      v37 = *++v40 | (v37 << 10);
      ++v30;
    }
    while ( v37 < 0x20000000000000LL );
    v39 = v51[v30];
  }
  v41 = v39 << 54;
  v42 = v11 - 10 * v30 + 52;
  do
  {
    ++v42;
    v41 = (v41 >> 1) | (v37 << 63);
    v37 >>= 1;
  }
  while ( v37 >= 0x20000000000000LL );
  v43 = (__int64)v42 << 52;
  v44 = (v43 + 0x3FF0000000000000LL) | v37 & 0xFFFFFFFFFFFFFLL;
  v45 = v44 | 0x8000000000000000uLL;
  if ( !v36 )
    v45 = v44;
  v46 = *(double *)&v45;
  v47 = COERCE_DOUBLE((v43 + 0x3CA0000000000000LL) | (v41 >> 12)) - COERCE_DOUBLE(v43 + 0x3CA0000000000000LL);
  if ( v36 )
    v48 = v47 * -2.0;
  else
    v48 = v47 + v47;
  result = v45 & 0xFFFFFFFFF8000000uLL;
  v50 = COERCE_DOUBLE(*(_QWORD *)&v46 & 0xFFFFFFFFF8000000uLL) * 1.570796310901642
      - v46 * 1.570796326794897
      + (v46 - COERCE_DOUBLE(*(_QWORD *)&v46 & 0xFFFFFFFFF8000000uLL)) * 1.570796310901642
      + COERCE_DOUBLE(*(_QWORD *)&v46 & 0xFFFFFFFFF8000000uLL) * 0.00000001589325471229586
      + (v46 - COERCE_DOUBLE(*(_QWORD *)&v46 & 0xFFFFFFFFF8000000uLL)) * 0.00000001589325471229586
      + v48 * 1.570796326794897
      + v46 * 6.123233995736765e-17;
  *a2 = v50 + v46 * 1.570796326794897;
  *a3 = v46 * 1.570796326794897 - (v50 + v46 * 1.570796326794897) + v50;
  return result;
}
