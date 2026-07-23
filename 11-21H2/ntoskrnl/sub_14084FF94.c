/*
 * XREFs of sub_14084FF94 @ 0x14084FF94
 * Callers:
 *     sub_140989150 @ 0x140989150 (sub_140989150.c)
 *     sub_140B23B40 @ 0x140B23B40 (sub_140B23B40.c)
 * Callees:
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsupr @ 0x1403E17B0 (_wcsupr.c)
 *     sub_1408504E0 @ 0x1408504E0 (sub_1408504E0.c)
 *     sub_1408505D0 @ 0x1408505D0 (sub_1408505D0.c)
 */

__int64 __fastcall sub_14084FF94(__int64 a1)
{
  __int64 v1; // rsi
  _OWORD *v3; // rax
  char *v4; // rdx
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  void *v15; // r15
  bool v16; // sf
  _DWORD *v17; // r13
  __int64 *v18; // rax
  int v19; // r12d
  int *v20; // rbx
  char *v21; // r14
  __int64 v22; // rdi
  int v23; // eax
  _WORD *v24; // rax
  __int64 v25; // r11
  __int64 v26; // r8
  char *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  char *v30; // r8
  __int16 v31; // r9
  char *v32; // rax
  _WORD *v33; // rax
  __int64 v34; // r11
  __int64 v35; // r8
  char *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  signed __int64 v39; // r8
  __int16 v40; // r9
  char *v41; // rax
  _WORD *v42; // rax
  __int64 v43; // r11
  __int64 v44; // r8
  char *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  char *v48; // r8
  __int16 v49; // r9
  char *v50; // rax
  __int64 result; // rax
  _OWORD *v52; // rbx
  char *v53; // rax
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int64 v62; // rax
  __int64 v63; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v64; // [rsp+40h] [rbp-C8h]
  _OWORD *v65; // [rsp+48h] [rbp-C0h]
  char v66[8]; // [rsp+58h] [rbp-B0h] BYREF
  char v67; // [rsp+60h] [rbp-A8h] BYREF
  wchar_t String[128]; // [rsp+E8h] [rbp-20h] BYREF
  _WORD v69[80]; // [rsp+1F8h] [rbp+F0h] BYREF

  v1 = 3LL;
  v65 = (_OWORD *)(a1 + 96);
  v3 = (_OWORD *)(a1 + 96);
  v4 = v66;
  v5 = 3LL;
  do
  {
    v6 = v3[1];
    *(_OWORD *)v4 = *v3;
    v7 = v3[2];
    *((_OWORD *)v4 + 1) = v6;
    v8 = v3[3];
    *((_OWORD *)v4 + 2) = v7;
    v9 = v3[4];
    *((_OWORD *)v4 + 3) = v8;
    v10 = v3[5];
    *((_OWORD *)v4 + 4) = v9;
    v11 = v3[6];
    *((_OWORD *)v4 + 5) = v10;
    v12 = v3[7];
    v3 += 8;
    *((_OWORD *)v4 + 6) = v11;
    v4 += 128;
    *((_OWORD *)v4 - 1) = v12;
    --v5;
  }
  while ( v5 );
  v13 = *v3;
  v14 = *((_QWORD *)v3 + 2);
  v15 = *(void **)(a1 + 8);
  *(_OWORD *)v4 = v13;
  *((_QWORD *)v4 + 2) = v14;
  v63 = 4LL;
  v16 = (int)sub_1408504E0(v15, (__int64)&v63) < 0;
  v17 = (_DWORD *)&v63 + 1;
  v18 = (__int64 *)(a1 + 520);
  v19 = 0;
  if ( v16 )
    v17 = 0LL;
  v64 = a1 + 520;
  v20 = (int *)v66;
  v21 = &v67;
  do
  {
    v22 = *v18;
    if ( v17 )
      v23 = 2 - ((*v17 & (1 << v19)) != 0);
    else
      v23 = 0;
    *v20 = v23;
    sub_1402E0978(v69, 0xA0uLL, v22);
    v24 = v69;
    v25 = 80LL;
    do
    {
      if ( !*v24 )
        break;
      ++v24;
      --v25;
    }
    while ( v25 );
    v26 = (80 - v25) & -(__int64)(v25 != 0);
    if ( v25 )
    {
      v27 = (char *)&v69[v26];
      v28 = 80 - v26;
      if ( 80 != v26 )
      {
        v29 = 2147483646LL;
        v30 = (char *)((char *)L"MaxNumPages" - v27);
        do
        {
          if ( !v29 )
            break;
          v31 = *(_WORD *)&v30[(_QWORD)v27];
          if ( !v31 )
            break;
          *(_WORD *)v27 = v31;
          --v29;
          v27 += 2;
          --v28;
        }
        while ( v28 );
      }
      v32 = v27 - 2;
      if ( v28 )
        v32 = v27;
      *(_WORD *)v32 = 0;
    }
    LODWORD(v63) = 4;
    sub_1408504E0(v15, (__int64)&v63);
    sub_1402E0978(v69, 0xA0uLL, v22);
    v33 = v69;
    v34 = 80LL;
    do
    {
      if ( !*v33 )
        break;
      ++v33;
      --v34;
    }
    while ( v34 );
    v35 = (80 - v34) & -(__int64)(v34 != 0);
    if ( v34 )
    {
      v36 = (char *)&v69[v35];
      v37 = 80 - v35;
      if ( 80 != v35 )
      {
        v38 = 2147483646LL;
        v39 = (char *)L"MaxNumSections" - v36;
        do
        {
          if ( !v38 )
            break;
          v40 = *(_WORD *)&v36[v39];
          if ( !v40 )
            break;
          *(_WORD *)v36 = v40;
          --v38;
          v36 += 2;
          --v37;
        }
        while ( v37 );
      }
      v41 = v36 - 2;
      if ( v37 )
        v41 = v36;
      *(_WORD *)v41 = 0;
    }
    LODWORD(v63) = 4;
    sub_1408504E0(v15, (__int64)&v63);
    sub_1402E0978(v69, 0xA0uLL, v22);
    v42 = v69;
    v43 = 80LL;
    do
    {
      if ( !*v42 )
        break;
      ++v42;
      --v43;
    }
    while ( v43 );
    v44 = (80 - v43) & -(__int64)(v43 != 0);
    if ( v43 )
    {
      v45 = (char *)&v69[v44];
      v46 = 80 - v44;
      if ( 80 != v44 )
      {
        v47 = 2147483646LL;
        v48 = (char *)((char *)L"TimerPeriod" - v45);
        do
        {
          if ( !v47 )
            break;
          v49 = *(_WORD *)&v48[(_QWORD)v45];
          if ( !v49 )
            break;
          *(_WORD *)v45 = v49;
          --v47;
          v45 += 2;
          --v46;
        }
        while ( v46 );
      }
      v50 = v45 - 2;
      if ( v46 )
        v50 = v45;
      *(_WORD *)v50 = 0;
    }
    LODWORD(v63) = 8;
    sub_1408504E0(v15, (__int64)&v63);
    ++v19;
    v18 = (__int64 *)(v64 + 8);
    v21 += 16;
    ++v20;
    v64 += 8LL;
  }
  while ( v19 < 2 );
  LODWORD(v63) = 96;
  sub_1408504E0(v15, (__int64)&v63);
  LODWORD(v63) = 4;
  sub_1408504E0(v15, (__int64)&v63);
  LODWORD(v63) = 4;
  sub_1408504E0(v15, (__int64)&v63);
  LODWORD(v63) = 4;
  sub_1408504E0(v15, (__int64)&v63);
  LODWORD(v63) = 256;
  sub_1408504E0(v15, (__int64)&v63);
  String[127] = 0;
  wcsupr(String);
  LODWORD(v63) = 4;
  sub_1408504E0(v15, (__int64)&v63);
  result = sub_1408505D0(v66);
  v52 = v65;
  if ( (int)result >= 0 )
  {
    v53 = v66;
    do
    {
      v54 = *((_OWORD *)v53 + 1);
      *v52 = *(_OWORD *)v53;
      v55 = *((_OWORD *)v53 + 2);
      v52[1] = v54;
      v56 = *((_OWORD *)v53 + 3);
      v52[2] = v55;
      v57 = *((_OWORD *)v53 + 4);
      v52[3] = v56;
      v58 = *((_OWORD *)v53 + 5);
      v52[4] = v57;
      v59 = *((_OWORD *)v53 + 6);
      v52[5] = v58;
      v60 = *((_OWORD *)v53 + 7);
      v53 += 128;
      v52[6] = v59;
      v52 += 8;
      *(v52 - 1) = v60;
      --v1;
    }
    while ( v1 );
    v61 = *(_OWORD *)v53;
    v62 = *((_QWORD *)v53 + 2);
    *v52 = v61;
    *((_QWORD *)v52 + 2) = v62;
    return 0LL;
  }
  return result;
}
