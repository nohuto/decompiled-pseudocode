/*
 * XREFs of GrayExpandDIB_CY @ 0x1C02676E0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0005AE0 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C02640B0 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0269064 (MappingBGRF.c)
 */

__int64 __fastcall GrayExpandDIB_CY(_OWORD *a1)
{
  __int64 v1; // rax
  int *v2; // rdx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned __int64 v15; // r15
  unsigned __int8 *v16; // rdi
  __int64 v17; // rax
  size_t v18; // r13
  __int64 v19; // r12
  const void *v20; // r14
  char *v21; // rsi
  __int64 v22; // rbx
  void *FixupScan; // rax
  void *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // r14d
  int v27; // eax
  unsigned int v28; // r14d
  unsigned int v29; // r13d
  __int128 v30; // xmm0
  _BYTE *v31; // xmm1_8
  int v32; // eax
  _BYTE *v33; // rbx
  const void *v34; // rsi
  unsigned __int8 *v35; // r15
  void *v36; // rax
  signed __int64 v37; // rsi
  int v38; // ecx
  int v39; // eax
  __int64 *v40; // rdx
  __int64 v41; // r14
  unsigned __int16 v42; // si
  __int128 v43; // xmm0
  unsigned __int8 *v44; // r12
  _BYTE *v45; // xmm1_8
  _BYTE *v46; // rbx
  void *v47; // rax
  int v48; // ecx
  unsigned __int64 v49; // rax
  unsigned __int8 *v50; // r13
  __int64 v51; // r9
  _WORD *v52; // r8
  int v53; // r11d
  int v54; // r10d
  int v55; // edx
  int v56; // ecx
  int *v57; // r9
  int v58; // edx
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  int *v61; // r9
  __int64 v62; // rcx
  int v63; // edx
  __int64 v64; // rax
  int *v65; // r9
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int16 v69; // ax
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v73; // [rsp+58h] [rbp-B0h]
  __m256i v74; // [rsp+70h] [rbp-98h]
  __int64 v75; // [rsp+90h] [rbp-78h]
  int v76; // [rsp+A0h] [rbp-68h]
  size_t Size; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v78; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v79; // [rsp+B8h] [rbp-50h]
  __int64 *v80; // [rsp+C0h] [rbp-48h]
  int v81[34]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v82; // [rsp+150h] [rbp+48h]
  int v83; // [rsp+158h] [rbp+50h]
  unsigned int v84; // [rsp+15Ch] [rbp+54h]
  int v85; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v86)(int *, unsigned __int64, _WORD *, __int64); // [rsp+188h] [rbp+80h]
  void (__fastcall *v87)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v88; // [rsp+1E0h] [rbp+D8h]
  void (__fastcall *v89)(__int64, void *, const void *, __int64, int); // [rsp+1E8h] [rbp+E0h]
  __int64 v90; // [rsp+1F8h] [rbp+F0h]
  __int64 v91; // [rsp+200h] [rbp+F8h]
  __int64 v92; // [rsp+248h] [rbp+140h]
  __int64 v93; // [rsp+250h] [rbp+148h]
  __int64 v94; // [rsp+260h] [rbp+158h]
  __int64 v95; // [rsp+268h] [rbp+160h]
  __int64 v96; // [rsp+270h] [rbp+168h]
  int v97; // [rsp+278h] [rbp+170h]
  int v98; // [rsp+27Ch] [rbp+174h]
  int v99; // [rsp+280h] [rbp+178h]
  __int64 v100; // [rsp+288h] [rbp+180h]
  __int64 v101; // [rsp+290h] [rbp+188h]
  __int64 v102; // [rsp+298h] [rbp+190h]
  int v103; // [rsp+2A0h] [rbp+198h]
  void *v104; // [rsp+2E0h] [rbp+1D8h]
  __int64 v105; // [rsp+2E8h] [rbp+1E0h]
  __int64 v106; // [rsp+2F0h] [rbp+1E8h]
  __int64 v107; // [rsp+2F8h] [rbp+1F0h]
  __int64 v108; // [rsp+300h] [rbp+1F8h]
  _WORD *v109; // [rsp+308h] [rbp+200h]
  _WORD *v110; // [rsp+310h] [rbp+208h]
  int v111; // [rsp+318h] [rbp+210h]

  v1 = 4LL;
  v2 = v81;
  do
  {
    v3 = a1[1];
    *(_OWORD *)v2 = *a1;
    v4 = a1[2];
    *((_OWORD *)v2 + 1) = v3;
    v5 = a1[3];
    *((_OWORD *)v2 + 2) = v4;
    v6 = a1[4];
    *((_OWORD *)v2 + 3) = v5;
    v7 = a1[5];
    *((_OWORD *)v2 + 4) = v6;
    v8 = a1[6];
    *((_OWORD *)v2 + 5) = v7;
    v9 = a1[7];
    a1 += 8;
    *((_OWORD *)v2 + 6) = v8;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v9;
    --v1;
  }
  while ( v1 );
  v10 = *((_QWORD *)a1 + 10);
  v11 = a1[1];
  *(_OWORD *)v2 = *a1;
  v12 = a1[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = a1[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = a1[4];
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v10;
  v15 = *(_QWORD *)(v91 + 32);
  v78 = v15;
  v79 = v15 + 1024;
  v16 = (unsigned __int8 *)(v15 + 4099);
  v17 = v83 + 6;
  v18 = v83;
  Size = v83;
  v19 = v17 + v15 + 4099;
  v74.m256i_i64[0] = v19;
  v74.m256i_i64[1] = v17 + v19;
  v74.m256i_i64[2] = v17 + v17 + v19;
  v20 = (const void *)(v17 + v74.m256i_i64[2]);
  v21 = (char *)(v17 + v17 + v74.m256i_i64[2]);
  v74.m256i_i64[3] = v17 + v74.m256i_i64[2];
  v75 = (__int64)v21;
  v22 = v17 + v74.m256i_i64[2] + v83;
  FixupScan = GetFixupScan((__int64)v81, v104);
  v89(v90, FixupScan, v20, v22, 1);
  if ( (*(_BYTE *)(v91 + 8) & 1) != 0 )
  {
    v24 = GetFixupScan((__int64)v81, v104);
    v89(v90, v24, v21, (__int64)&v21[v18], 1);
  }
  else
  {
    memmove(v21, v20, v18);
  }
  v25 = v91;
  v26 = *(unsigned __int16 *)(v91 + 12);
  v27 = v26 & 0xF;
  v28 = v26 >> 4;
  v29 = v27 + v28;
  if ( v27 + v28 )
  {
    do
    {
      --v29;
      v30 = *(_OWORD *)v74.m256i_i8;
      v74.m256i_i64[1] = v74.m256i_i64[2];
      v31 = (_BYTE *)_mm_srli_si128(*(__m128i *)&v74.m256i_u64[2], 8).m128i_u64[0];
      v32 = v28;
      v74.m256i_i64[2] = (__int64)v31;
      v74.m256i_i64[0] = *((_QWORD *)&v30 + 1);
      --v28;
      v33 = v31;
      v74.m256i_i64[3] = v75;
      v34 = (const void *)v75;
      v75 = (__int64)v16;
      if ( v32 <= 0 )
      {
        v36 = GetFixupScan((__int64)v81, v104);
        v35 = &v16[Size];
        v89(v90, v36, v16, (__int64)&v16[Size], 1);
      }
      else
      {
        memmove(v16, v34, Size);
        v35 = &v16[Size];
      }
      if ( (v81[0] & 0x200) != 0 )
      {
        memmove(v31, v34, Size);
      }
      else
      {
        v37 = (_BYTE *)v34 - v31;
        do
        {
          v38 = (6 * (unsigned __int8)v33[v37] - *v16 - (unsigned __int8)*v33) >> 2;
          if ( (v38 & 0xFF00) != 0 )
            LOBYTE(v38) = ~HIBYTE(v38);
          *v33 = v38;
          ++v16;
          ++v33;
        }
        while ( v16 < v35 );
      }
      v16 = (unsigned __int8 *)v30;
    }
    while ( v29 );
    v25 = v91;
    v19 = *((_QWORD *)&v30 + 1);
    v15 = v78;
  }
  v39 = *(_DWORD *)(v25 + 16);
  v40 = *(__int64 **)(v25 + 40);
  if ( v39 )
  {
    v41 = v74.m256i_i64[2];
    do
    {
      v76 = v39 - 1;
      v73 = *v40;
      v80 = v40 + 1;
      v42 = *v40;
      if ( (v42 & 0x8000u) != 0 )
      {
        v43 = *(_OWORD *)v74.m256i_i8;
        v44 = &v16[Size];
        v45 = (_BYTE *)_mm_srli_si128(*(__m128i *)&v74.m256i_u64[2], 8).m128i_u64[0];
        v41 = (__int64)v45;
        *(_OWORD *)v74.m256i_i8 = *(_OWORD *)&v74.m256i_u64[1];
        v46 = v45;
        v74.m256i_i64[2] = (__int64)v45;
        v74.m256i_i64[3] = v75;
        v75 = (__int64)v16;
        v47 = GetFixupScan((__int64)v81, v104);
        v89(v90, v47, v16, (__int64)&v16[Size], 1);
        if ( (v81[0] & 0x200) != 0 )
        {
          memmove(v45, (const void *)v74.m256i_i64[3], Size);
        }
        else
        {
          do
          {
            v48 = (6 * (unsigned __int8)v46[v74.m256i_i64[3] - (_QWORD)v45] - *v16 - (unsigned __int8)*v46) >> 2;
            if ( (v48 & 0xFF00) != 0 )
              LOBYTE(v48) = ~HIBYTE(v48);
            *v46 = v48;
            ++v16;
            ++v46;
          }
          while ( v16 < v44 );
        }
        v19 = *((_QWORD *)&v43 + 1);
        v16 = (unsigned __int8 *)v43;
        v42 &= 0x3FFFu;
      }
      v49 = v15;
      v50 = (unsigned __int8 *)v74.m256i_i64[1];
      v51 = v41;
      v52 = v109;
      v53 = -v42;
      v54 = -WORD1(v73);
      v55 = -WORD2(v73);
      v56 = 256 - HIWORD(v73);
      if ( v42 )
      {
        v57 = (int *)(v15 + 2048);
        do
        {
          v53 += v42;
          v54 += WORD1(v73);
          v55 += WORD2(v73);
          *(v57 - 512) = v53;
          v56 += HIWORD(v73);
          *(v57 - 256) = v54;
          *v57 = v55;
          v57[256] = v56;
          ++v57;
        }
        while ( (unsigned __int64)(v57 - 512) < v79 );
        v15 = v78;
        v51 = v19;
        do
        {
          v58 = *(_DWORD *)(v78 + 4LL * v16[v51 - v19])
              + *(_DWORD *)(v78 + 4LL * *(unsigned __int8 *)(v41 - v19 + v51) + 3072)
              + *(_DWORD *)(v78 + 4LL * *(unsigned __int8 *)(v74.m256i_i64[1] - v19 + v51) + 2048);
          v59 = *(unsigned __int8 *)v51++;
          v60 = (unsigned int)((*(_DWORD *)(v78 + 4 * v59 + 1024) + v58) >> 5);
          *v52 = v60;
          v52 = (_WORD *)((char *)v52 + v111);
        }
        while ( v52 != v110 );
      }
      else if ( WORD1(v73) )
      {
        v61 = (int *)(v15 + 2048);
        do
        {
          v54 += WORD1(v73);
          v55 += WORD2(v73);
          v56 += HIWORD(v73);
          *(v61 - 256) = v54;
          *v61 = v55;
          v61[256] = v56;
          ++v61;
        }
        while ( (unsigned __int64)(v61 - 512) < v15 + 1024 );
        v51 = v19;
        do
        {
          v62 = *(unsigned __int8 *)(v51 + v41 - v19);
          v63 = *(_DWORD *)(v15 + 4LL * *(unsigned __int8 *)(v51 + v74.m256i_i64[1] - v19) + 2048);
          v64 = *(unsigned __int8 *)v51++;
          v60 = (unsigned int)((*(_DWORD *)(v15 + 4 * v64 + 1024) + *(_DWORD *)(v15 + 4 * v62 + 3072) + v63) >> 5);
          *v52 = v60;
          v52 = (_WORD *)((char *)v52 + v111);
        }
        while ( v52 != v110 );
      }
      else if ( WORD2(v73) )
      {
        v65 = (int *)(v15 + 3072);
        do
        {
          v55 += WORD2(v73);
          v56 += HIWORD(v73);
          *(v65 - 256) = v55;
          *v65++ = v56;
        }
        while ( (unsigned __int64)(v65 - 768) < v15 + 1024 );
        v51 = v41 - v74.m256i_i64[1];
        do
        {
          v66 = v50[v51];
          v67 = *v50++;
          v60 = (unsigned int)((*(_DWORD *)(v15 + 4 * v67 + 2048) + *(_DWORD *)(v15 + 4 * v66 + 3072)) >> 5);
          *v52 = v60;
          v52 = (_WORD *)((char *)v52 + v111);
        }
        while ( v52 != v110 );
      }
      else
      {
        v60 = v15 + 1024;
        do
        {
          v56 += HIWORD(v73);
          *(_DWORD *)(v49 + 3072) = v56;
          v49 += 4LL;
        }
        while ( v49 < v60 );
        do
        {
          v68 = *(unsigned __int8 *)v51++;
          *v52 = *(int *)(v15 + 4 * v68 + 3072) >> 5;
          v52 = (_WORD *)((char *)v52 + v111);
        }
        while ( v52 != v110 );
      }
      v69 = v81[0];
      if ( SLOBYTE(v81[0]) < 0 )
      {
        v86(v81, v60, v52, v51);
        v69 = v81[0];
      }
      if ( (v69 & 0x800) != 0 )
      {
        AlphaBlendBGRF(v81);
        LOBYTE(v69) = v81[0];
      }
      if ( (v69 & 0x10) != 0 )
      {
        MappingBGRF(v105, v106, v93, v100);
        v70 = v103 + v100;
        if ( v70 == v101 )
          v70 = v102;
        v100 = v70;
      }
      v87(v81, v107, v108, v82, v92, v94, v94 + v98, v99, v88);
      v40 = v80;
      v71 = v97 + v94;
      if ( v71 == v95 )
        v71 = v96;
      v82 += v85;
      v39 = v76;
      v94 = v71;
    }
    while ( v76 );
  }
  return v84;
}
