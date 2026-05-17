/*
 * XREFs of RtlpComputeCrcInternal @ 0x180085ED0
 * Callers:
 *     RtlCrc32 @ 0x180085EB0 (RtlCrc32.c)
 *     RtlCrc64 @ 0x180101F30 (RtlCrc64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpComputeCrcInternal(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v13; // r9
  char v14; // cl
  unsigned __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // r13
  unsigned __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // rbx
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // rbx
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // rbx
  unsigned __int64 v61; // rbx
  unsigned __int64 v62; // rbx
  unsigned __int64 v63; // rbx
  char v64; // cl

  v4 = a4[4];
  v5 = 0LL;
  v7 = a3 ^ v4;
  v8 = a2;
  v9 = a1;
  v10 = -(int)a1 & 7;
  if ( (-(int)a1 & 7) != 0 )
  {
    v13 = 0LL;
    if ( v10 > a2 )
      v10 = a2;
    if ( v10 )
    {
      do
      {
        v14 = *(_BYTE *)(v13 + v9);
        ++v13;
        v7 = *(_QWORD *)(a4[1] + 8LL * (unsigned __int8)(v7 ^ v14)) ^ (v7 >> 8);
      }
      while ( v13 < v10 );
    }
    v8 = a2 - v10;
    v9 += v10;
  }
  v11 = v8 - (v8 & 0x1F);
  if ( v11 >= 0x40 )
  {
    v15 = v9 + v11 - 32;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v8 &= 0x1Fu;
    if ( v9 < v15 )
    {
      v19 = v15;
      v20 = a4[2];
      do
      {
        _mm_prefetch((const char *)(v9 + 256), 2);
        v21 = *(_QWORD *)(v9 + 8) ^ v16;
        v22 = *(_QWORD *)v9 ^ v7;
        v23 = *(_QWORD *)(v9 + 16) ^ v17;
        v24 = *(_QWORD *)(v9 + 24) ^ v18;
        v25 = (unsigned __int8)v22;
        v22 >>= 8;
        v26 = *(_QWORD *)(v20 + 8 * v25 + 14336);
        v27 = (unsigned __int8)v22;
        v22 >>= 8;
        v28 = *(_QWORD *)(v20 + 8 * v27 + 12288) ^ v26;
        v29 = (unsigned __int8)v22;
        v22 >>= 8;
        v30 = *(_QWORD *)(v20 + 8 * v29 + 10240) ^ v28;
        v31 = (unsigned __int8)v22;
        v22 >>= 8;
        v9 += 32LL;
        v7 = *(_QWORD *)(v20 + 8 * (v22 >> 24)) ^ *(_QWORD *)(v20 + 8LL * BYTE2(v22) + 2048) ^ *(_QWORD *)(v20 + 8LL * BYTE1(v22) + 4096) ^ *(_QWORD *)(v20 + 8LL * (unsigned __int8)v22 + 6144) ^ *(_QWORD *)(v20 + 8 * v31 + 0x2000) ^ v30;
        v16 = *(_QWORD *)(v20 + 8 * HIBYTE(v21)) ^ *(_QWORD *)(v20 + 8LL * BYTE6(v21) + 2048) ^ *(_QWORD *)(v20 + 8LL * BYTE5(v21) + 4096) ^ *(_QWORD *)(v20 + 8LL * BYTE4(v21) + 6144) ^ *(_QWORD *)(v20 + 8LL * BYTE3(v21) + 0x2000) ^ *(_QWORD *)(v20 + 8LL * BYTE2(v21) + 10240) ^ *(_QWORD *)(v20 + 8LL * BYTE1(v21) + 12288) ^ *(_QWORD *)(v20 + 8LL * (unsigned __int8)v21 + 14336);
        v17 = *(_QWORD *)(v20 + 8 * HIBYTE(v23)) ^ *(_QWORD *)(v20 + 8LL * BYTE6(v23) + 2048) ^ *(_QWORD *)(v20 + 8LL * BYTE5(v23) + 4096) ^ *(_QWORD *)(v20 + 8LL * BYTE4(v23) + 6144) ^ *(_QWORD *)(v20 + 8LL * BYTE3(v23) + 0x2000) ^ *(_QWORD *)(v20 + 8LL * BYTE2(v23) + 10240) ^ *(_QWORD *)(v20 + 8LL * BYTE1(v23) + 12288) ^ *(_QWORD *)(v20 + 8LL * (unsigned __int8)v23 + 14336);
        v18 = *(_QWORD *)(v20 + 8 * HIBYTE(v24)) ^ *(_QWORD *)(v20 + 8LL * BYTE6(v24) + 2048) ^ *(_QWORD *)(v20 + 8LL * BYTE5(v24) + 4096) ^ *(_QWORD *)(v20 + 8LL * BYTE4(v24) + 6144) ^ *(_QWORD *)(v20 + 8LL * BYTE3(v24) + 0x2000) ^ *(_QWORD *)(v20 + 8LL * BYTE2(v24) + 10240) ^ *(_QWORD *)(v20 + 8LL * BYTE1(v24) + 12288) ^ *(_QWORD *)(v20 + 8LL * (unsigned __int8)v24 + 14336);
      }
      while ( v9 < v19 );
      v4 = a4[4];
    }
    v32 = a4[1];
    v33 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)(*(_BYTE *)v9 ^ v7)) ^ ((*(_QWORD *)v9 ^ v7) >> 8);
    v34 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v33) ^ (v33 >> 8);
    v35 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v34) ^ (v34 >> 8);
    v36 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v35) ^ (v35 >> 8);
    v37 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v36) ^ (v36 >> 8);
    v38 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v37) ^ (v37 >> 8);
    v39 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v38) ^ (v38 >> 8);
    v40 = v16 ^ *(_QWORD *)(v9 + 8) ^ *(_QWORD *)(v32 + 8LL * (unsigned __int8)v39) ^ (v39 >> 8);
    v41 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v40) ^ (v40 >> 8);
    v42 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v41) ^ (v41 >> 8);
    v43 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v42) ^ (v42 >> 8);
    v44 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v43) ^ (v43 >> 8);
    v45 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v44) ^ (v44 >> 8);
    v46 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v45) ^ (v45 >> 8);
    v47 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v46) ^ (v46 >> 8);
    v48 = v17 ^ *(_QWORD *)(v9 + 16) ^ *(_QWORD *)(v32 + 8LL * (unsigned __int8)v47) ^ (v47 >> 8);
    v49 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v48) ^ (v48 >> 8);
    v50 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v49) ^ (v49 >> 8);
    v51 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v50) ^ (v50 >> 8);
    v52 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v51) ^ (v51 >> 8);
    v53 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v52) ^ (v52 >> 8);
    v54 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v53) ^ (v53 >> 8);
    v55 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v54) ^ (v54 >> 8);
    v56 = v18 ^ *(_QWORD *)(v9 + 24) ^ *(_QWORD *)(v32 + 8LL * (unsigned __int8)v55) ^ (v55 >> 8);
    v57 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v56) ^ (v56 >> 8);
    v58 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v57) ^ (v57 >> 8);
    v59 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v58) ^ (v58 >> 8);
    v60 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v59) ^ (v59 >> 8);
    v61 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v60) ^ (v60 >> 8);
    v62 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v61) ^ (v61 >> 8);
    v63 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v62) ^ (v62 >> 8);
    v7 = *(_QWORD *)(v32 + 8LL * (unsigned __int8)v63) ^ (v63 >> 8);
    v9 += 32LL;
  }
  if ( v8 )
  {
    do
    {
      v64 = *(_BYTE *)(v9 + v5++);
      v7 = *(_QWORD *)(a4[1] + 8LL * (unsigned __int8)(v7 ^ v64)) ^ (v7 >> 8);
    }
    while ( v5 < v8 );
  }
  return v7 ^ v4;
}
