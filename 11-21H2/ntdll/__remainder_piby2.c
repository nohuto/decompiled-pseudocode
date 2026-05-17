/*
 * XREFs of __remainder_piby2 @ 0x18009BDE0
 * Callers:
 *     cos @ 0x180096A70 (cos.c)
 *     sin @ 0x180096E90 (sin.c)
 *     tan @ 0x1800992A0 (tan.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall _remainder_piby2(double a1, double *a2, double *a3, _DWORD *a4)
{
  int v6; // ebx
  __int64 v7; // r11
  int v9; // r10d
  __int64 v10; // r9
  int v11; // ebx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  int v33; // r9d
  unsigned int v34; // r8d
  __int64 v35; // rcx
  int v36; // r11d
  unsigned __int64 v37; // rdx
  _QWORD *v38; // r8
  __int64 v39; // r8
  _QWORD *v40; // rax
  unsigned __int64 v41; // r8
  int v42; // ebx
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
  v12 = v7 * qword_180174A60[v9 + 18];
  v13 = (v12 >> 10) + v7 * qword_180174A60[v10 + 17];
  v51[17] = v12 & 0x3FF;
  v51[16] = v13 & 0x3FF;
  v14 = (v13 >> 10) + v7 * qword_180174A60[v9 + 16];
  v51[15] = v14 & 0x3FF;
  v15 = (v14 >> 10) + v7 * qword_180174A60[v9 + 15];
  v51[14] = v15 & 0x3FF;
  v16 = (v15 >> 10) + v7 * qword_180174A60[v9 + 14];
  v51[13] = v16 & 0x3FF;
  v17 = (v16 >> 10) + v7 * qword_180174A60[v9 + 13];
  v51[12] = v17 & 0x3FF;
  v18 = (v17 >> 10) + v7 * qword_180174A60[v9 + 12];
  v51[11] = v18 & 0x3FF;
  v19 = (v18 >> 10) + v7 * qword_180174A60[v9 + 11];
  v51[10] = v19 & 0x3FF;
  v20 = (v19 >> 10) + v7 * qword_180174A60[v9 + 10];
  v51[9] = v20 & 0x3FF;
  v21 = (v20 >> 10) + v7 * qword_180174A60[v9 + 9];
  v51[8] = v21 & 0x3FF;
  v22 = (v21 >> 10) + v7 * qword_180174A60[v9 + 8];
  v51[7] = v22 & 0x3FF;
  v23 = (v22 >> 10) + v7 * qword_180174A60[v9 + 7];
  v51[6] = v23 & 0x3FF;
  v24 = (v23 >> 10) + v7 * qword_180174A60[v9 + 6];
  v51[5] = v24 & 0x3FF;
  v25 = (v24 >> 10) + v7 * qword_180174A60[v9 + 5];
  v51[4] = v25 & 0x3FF;
  v26 = (v25 >> 10) + v7 * qword_180174A60[v9 + 4];
  v51[3] = v26 & 0x3FF;
  v27 = (v26 >> 10) + v7 * qword_180174A60[v9 + 3];
  v51[2] = v27 & 0x3FF;
  v28 = (v27 >> 10) + v7 * qword_180174A60[v9 + 2];
  v51[1] = v28 & 0x3FF;
  v29 = (v28 >> 10) + v7 * qword_180174A60[v9 + 1];
  v30 = v29 >> 10;
  v31 = v29 & 0x3FF;
  v32 = v30 + v7 * qword_180174A60[v10];
  v51[0] = v31;
  v33 = 1;
  LODWORD(v7) = ((v31 | ((v32 & 0x3FF) << 10)) >> (10 - (unsigned __int8)v11 - 1)) & 7;
  v34 = (unsigned int)v7 >> 1;
  v35 = (1LL << (10 - (unsigned __int8)v11)) - 1;
  v36 = v7 & 1;
  if ( v36 )
  {
    v37 = v35 & ~v31;
    *a4 = ((_BYTE)v34 + 1) & 3;
    if ( v37 < 0x20000000000000LL )
    {
      v38 = v51;
      do
      {
        ++v38;
        ++v33;
        v37 = (v37 << 10) | ~*v38 & 0x3FFLL;
      }
      while ( v37 < 0x20000000000000LL );
    }
    v39 = ~v51[v33];
  }
  else
  {
    *a4 = v34;
    v40 = v51;
    v37 = v35 & v31;
    do
    {
      v37 = *++v40 | (v37 << 10);
      ++v33;
    }
    while ( v37 < 0x20000000000000LL );
    v39 = v51[v33];
  }
  v41 = v39 << 54;
  v42 = v11 - 10 * v33 + 52;
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
