/*
 * XREFs of Xp10ExecuteHuffmanDecode @ 0x18011B148
 * Callers:
 *     RtlDecompressBufferXp10 @ 0x180119570 (RtlDecompressBufferXp10.c)
 * Callees:
 *     Xp10ReadAndDecodeHuffmanTables @ 0x18011CB08 (Xp10ReadAndDecodeHuffmanTables.c)
 */

__int64 __fastcall Xp10ExecuteHuffmanDecode(__int16 **a1, __int64 a2, __int64 a3, int a4)
{
  __int16 **v4; // r14
  __int64 v6; // r13
  __int16 v7; // di
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // edi
  int v11; // esi
  __int64 result; // rax
  int v13; // r8d
  int v14; // r9d
  int v15; // edx
  unsigned int v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // r8d
  unsigned __int8 *v20; // rsi
  __int64 v21; // rbp
  unsigned int v22; // r10d
  unsigned int v23; // r9d
  unsigned int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // r11
  unsigned __int8 *v27; // rsi
  unsigned __int64 v28; // rdx
  int v29; // eax
  __int16 v30; // r15
  unsigned int v31; // esi
  unsigned int v32; // r9d
  unsigned __int8 *v33; // r8
  unsigned int v34; // r11d
  unsigned int v35; // r10d
  unsigned int v36; // r10d
  __int64 v37; // rax
  __int64 v38; // rbx
  unsigned __int8 *v39; // r8
  unsigned __int64 v40; // rdx
  int v41; // eax
  unsigned __int16 v42; // r15
  __int64 v43; // rcx
  unsigned int v44; // r8d
  unsigned int v45; // r13d
  __int64 v46; // rcx
  unsigned __int8 *v47; // rsi
  unsigned int v48; // r10d
  unsigned int v49; // r9d
  unsigned int v50; // r9d
  __int64 v51; // rdx
  __int64 v52; // r11
  unsigned __int8 *v53; // rsi
  unsigned __int64 v54; // rdx
  int v55; // eax
  __int16 v56; // r9
  unsigned int v57; // esi
  unsigned __int8 *v58; // r8
  unsigned int v59; // ebp
  unsigned int v60; // r10d
  unsigned int v61; // r11d
  unsigned int v62; // r11d
  __int64 v63; // rax
  __int64 v64; // rbx
  unsigned __int8 *v65; // r8
  unsigned __int64 v66; // rdx
  int v67; // eax
  __int16 v68; // r9
  unsigned int v69; // ebx
  unsigned __int8 *v70; // rsi
  unsigned int v71; // r8d
  unsigned int v72; // r10d
  int v73; // r9d
  unsigned int v74; // r9d
  __int64 v75; // rax
  __int64 v76; // r11
  unsigned __int8 *v77; // rsi
  unsigned __int64 v78; // rdx
  int v79; // eax
  unsigned int v80; // r9d
  unsigned int v81; // ecx
  __int64 v82; // rax
  unsigned int v83; // edx
  unsigned __int8 *v84; // r10
  unsigned int v85; // ebx
  unsigned int v86; // ebp
  unsigned int v87; // esi
  int v88; // r8d
  unsigned int v89; // r8d
  __int64 v90; // rdx
  __int64 v91; // r11
  unsigned __int8 *v92; // r10
  unsigned __int64 v93; // rdx
  int v94; // eax
  int v95; // eax
  unsigned int v96; // r8d
  void *v97; // rdi
  const void *v98; // rsi
  unsigned int v99; // [rsp+40h] [rbp-58h]
  __int64 v100; // [rsp+48h] [rbp-50h]
  __int64 v101; // [rsp+50h] [rbp-48h]
  __int64 v102; // [rsp+58h] [rbp-40h]

  v4 = a1;
  v6 = a3;
  v7 = **a1;
  v8 = v7 & 0x1F;
  v9 = (1 << v8) - ((unsigned __int8)v7 >> 5) - 246;
  v99 = 16 * (v8 + 20);
  v10 = v9 & (v9 - 1);
  _BitScanReverse((unsigned int *)&v11, v9);
  result = Xp10ReadAndDecodeHuffmanTables((_DWORD)v4, v99, a3, a4, a2, (__int64)(v4 + 587));
  if ( (int)result < 0 )
    return result;
  v15 = v11 + 1;
  if ( !v10 )
    v15 = v11;
  result = Xp10ReadAndDecodeHuffmanTables((_DWORD)v4, v15 + 232, v13, v14, a2, (__int64)(v4 + 2635));
  if ( (int)result < 0 )
    return result;
  v16 = *(_DWORD *)(a2 + 8);
  v17 = *(_DWORD *)(a2 + 12);
  if ( v16 >= v17 )
    return 0LL;
  v18 = *(_DWORD *)(v6 + 8);
  while ( v18 < *(_DWORD *)(v6 + 12) )
  {
    v19 = 12;
    v20 = (unsigned __int8 *)(*(_QWORD *)a2 + ((unsigned __int64)v16 >> 3));
    v21 = v101;
    v22 = 8 - (v16 & 7);
    if ( v16 + 12 > v17 && (v19 = v17 - v16, v17 == v16) )
    {
      v23 = 0;
      v19 = 0;
    }
    else
    {
      v24 = *v20;
      v25 = v22;
      if ( v22 >= v19 )
        v25 = v19;
      v26 = v19 - (unsigned int)v25;
      v27 = v20 + 1;
      v23 = *(_DWORD *)&byte_18013CB40[4 * v25] & (v24 >> (v16 & 7));
      if ( (unsigned int)v26 >= 8 )
      {
        v28 = (unsigned __int64)(unsigned int)v26 >> 3;
        do
        {
          v29 = *v27 << v22;
          LOBYTE(v22) = v22 + 8;
          v23 |= v29;
          v26 = (unsigned int)(v26 - 8);
          ++v27;
          --v28;
        }
        while ( v28 );
        v16 = *(_DWORD *)(a2 + 8);
      }
      if ( (_DWORD)v26 )
        v23 |= (*v27 & *(_DWORD *)&byte_18013CB40[4 * v26]) << v22;
      v16 += v19;
    }
    v30 = *(_WORD *)(v101 + 2LL * v23);
    v16 += (v30 & 0xF) - v19;
    *(_DWORD *)(a2 + 8) = v16;
    if ( v30 < 0 )
    {
      v31 = v16;
      do
      {
        v32 = 6;
        v33 = (unsigned __int8 *)(*(_QWORD *)a2 + ((unsigned __int64)v31 >> 3));
        v34 = 8 - (v31 & 7);
        if ( v31 + 6 <= *(_DWORD *)(a2 + 12) || (v32 = *(_DWORD *)(a2 + 12) - v31) != 0 )
        {
          v36 = *v33;
          v37 = v34;
          if ( v34 >= v32 )
            v37 = v32;
          v38 = v32 - (unsigned int)v37;
          v39 = v33 + 1;
          v35 = *(_DWORD *)&byte_18013CB40[4 * v37] & (v36 >> (v31 & 7));
          if ( (unsigned int)v38 >= 8 )
          {
            v40 = (unsigned __int64)(unsigned int)v38 >> 3;
            do
            {
              v41 = *v39 << v34;
              LOBYTE(v34) = v34 + 8;
              v35 |= v41;
              v38 = (unsigned int)(v38 - 8);
              ++v39;
              --v40;
            }
            while ( v40 );
            v31 = v16;
          }
          if ( (_DWORD)v38 )
            v35 |= (*v39 & *(_DWORD *)&byte_18013CB40[4 * v38]) << v34;
          v31 += v32;
        }
        else
        {
          v35 = 0;
          v32 = 0;
        }
        v21 += 2 * (v30 & 0xFFFFFFFFFFFFFFF0uLL);
        v30 = *(_WORD *)(v21 + 2LL * v35);
        v16 = v31 + (v30 & 0xF) - v32;
        v31 = v16;
      }
      while ( v30 < 0 );
      v4 = a1;
      v6 = a3;
      *(_DWORD *)(a2 + 8) = v16;
    }
    v42 = (unsigned __int16)v30 >> 4;
    if ( v42 < 0x100u )
    {
      v43 = *(unsigned int *)(v6 + 8);
      *(_BYTE *)(v43 + *(_QWORD *)v6) = v42;
      v18 = v43 + 1;
      goto LABEL_116;
    }
    if ( (v42 & 0xF) == 0xF )
    {
      v44 = 12;
      v45 = *(_DWORD *)(a2 + 12);
      v46 = v102;
      v47 = (unsigned __int8 *)(*(_QWORD *)a2 + ((unsigned __int64)v16 >> 3));
      v100 = v102;
      v48 = 8 - (v16 & 7);
      if ( v16 + 12 > v45 && (v44 = v45 - v16, v45 == v16) )
      {
        v49 = 0;
        v44 = 0;
      }
      else
      {
        v50 = *v47;
        v51 = v48;
        if ( v48 >= v44 )
          v51 = v44;
        v52 = v44 - (unsigned int)v51;
        v53 = v47 + 1;
        v49 = *(_DWORD *)&byte_18013CB40[4 * v51] & (v50 >> (v16 & 7));
        if ( (unsigned int)v52 >= 8 )
        {
          v54 = (unsigned __int64)(unsigned int)v52 >> 3;
          do
          {
            v55 = *v53 << v48;
            LOBYTE(v48) = v48 + 8;
            v49 |= v55;
            v52 = (unsigned int)(v52 - 8);
            ++v53;
            --v54;
          }
          while ( v54 );
          v16 = *(_DWORD *)(a2 + 8);
        }
        if ( (_DWORD)v52 )
          v49 |= (*v53 & *(_DWORD *)&byte_18013CB40[4 * v52]) << v48;
        v16 += v44;
        v46 = v102;
      }
      v56 = *(_WORD *)(v102 + 2LL * v49);
      v16 += (v56 & 0xF) - v44;
      *(_DWORD *)(a2 + 8) = v16;
      if ( v56 < 0 )
      {
        v57 = v16;
        do
        {
          v58 = (unsigned __int8 *)(*(_QWORD *)a2 + ((unsigned __int64)v57 >> 3));
          v59 = 8 - (v57 & 7);
          v60 = 6;
          if ( v57 + 6 > v45 && (v60 = v45 - v57, v45 == v57) )
          {
            v61 = 0;
            v60 = 0;
          }
          else
          {
            v62 = *v58;
            v63 = v59;
            if ( v59 >= v60 )
              v63 = v60;
            v64 = v60 - (unsigned int)v63;
            v65 = v58 + 1;
            v61 = *(_DWORD *)&byte_18013CB40[4 * v63] & (v62 >> (v57 & 7));
            if ( (unsigned int)v64 >= 8 )
            {
              v66 = (unsigned __int64)(unsigned int)v64 >> 3;
              do
              {
                v67 = *v65 << v59;
                LOBYTE(v59) = v59 + 8;
                v61 |= v67;
                v64 = (unsigned int)(v64 - 8);
                ++v65;
                --v66;
              }
              while ( v66 );
              v57 = v16;
            }
            if ( (_DWORD)v64 )
              v61 |= (*v65 & *(_DWORD *)&byte_18013CB40[4 * v64]) << v59;
            v46 = v100;
            v57 += v60;
          }
          v46 += 2 * (v56 & 0xFFFFFFFFFFFFFFF0uLL);
          v100 = v46;
          v56 = *(_WORD *)(v46 + 2LL * v61);
          v16 = v57 + (v56 & 0xF) - v60;
          v57 = v16;
        }
        while ( v56 < 0 );
        v4 = a1;
        *(_DWORD *)(a2 + 8) = v16;
      }
      v68 = (unsigned __int16)v56 >> 4;
      if ( (unsigned __int8)v68 <= 0xE8u )
      {
        v80 = (((unsigned __int16)**v4 >> 5) & 7) + (unsigned __int8)v68 + 15;
      }
      else
      {
        v69 = (unsigned __int8)v68 - 232;
        v70 = (unsigned __int8 *)(*(_QWORD *)a2 + ((unsigned __int64)v16 >> 3));
        v71 = v69;
        v72 = 8 - (v16 & 7);
        if ( v16 + v69 > v45 && (v71 = v45 - v16, v45 == v16) )
        {
          v73 = 0;
          v71 = 0;
        }
        else
        {
          v74 = *v70;
          v75 = v72;
          if ( v72 >= v71 )
            v75 = v71;
          v76 = v71 - (unsigned int)v75;
          v77 = v70 + 1;
          v73 = *(_DWORD *)&byte_18013CB40[4 * v75] & (v74 >> (v16 & 7));
          if ( (unsigned int)v76 >= 8 )
          {
            v78 = (unsigned __int64)(unsigned int)v76 >> 3;
            do
            {
              v79 = *v77 << v72;
              LOBYTE(v72) = v72 + 8;
              v73 |= v79;
              v76 = (unsigned int)(v76 - 8);
              ++v77;
              --v78;
            }
            while ( v78 );
            v16 = *(_DWORD *)(a2 + 8);
          }
          if ( (_DWORD)v76 )
            v73 |= (*v77 & *(_DWORD *)&byte_18013CB40[4 * v76]) << v72;
          v16 += v71;
          *(_DWORD *)(a2 + 8) = v16;
        }
        if ( v71 < v69 )
          return 3221226050LL;
        v80 = (1 << v69) + (((unsigned __int16)**v4 >> 5) & 7) + v73 + 246;
      }
      v6 = a3;
      v81 = v42;
    }
    else
    {
      v81 = v42;
      v80 = (v42 & 0xF) + (((unsigned __int16)**v4 >> 5) & 7);
    }
    if ( v42 >= 0x140u )
    {
      if ( v81 >= v99 )
        return 3221226050LL;
      if ( v42 <= 0x14Fu )
      {
        v83 = 1;
      }
      else
      {
        v84 = (unsigned __int8 *)(*(_QWORD *)a2 + ((unsigned __int64)v16 >> 3));
        v85 = 8 - (v16 & 7);
        v86 = (int)(v81 - 320) / 16;
        v87 = v86;
        if ( v16 + v86 <= *(_DWORD *)(a2 + 12) || (v87 = *(_DWORD *)(a2 + 12) - v16) != 0 )
        {
          v89 = *v84;
          v90 = v85;
          if ( v85 >= v87 )
            v90 = v87;
          v91 = v87 - (unsigned int)v90;
          v92 = v84 + 1;
          v88 = *(_DWORD *)&byte_18013CB40[4 * v90] & (v89 >> (v16 & 7));
          if ( (unsigned int)v91 >= 8 )
          {
            v93 = (unsigned __int64)(unsigned int)v91 >> 3;
            do
            {
              v94 = *v92 << v85;
              LOBYTE(v85) = v85 + 8;
              v88 |= v94;
              v91 = (unsigned int)(v91 - 8);
              ++v92;
              --v93;
            }
            while ( v93 );
            v16 = *(_DWORD *)(a2 + 8);
          }
          if ( (_DWORD)v91 )
            v88 |= (*v92 & *(_DWORD *)&byte_18013CB40[4 * v91]) << v85;
          *(_DWORD *)(a2 + 8) = v16 + v87;
        }
        else
        {
          v88 = 0;
          v87 = 0;
        }
        if ( v87 < v86 )
          return 3221226050LL;
        v83 = v88 + (1 << v86);
      }
LABEL_107:
      *((_DWORD *)v4 + 5) = *((_DWORD *)v4 + 4);
LABEL_108:
      *((_DWORD *)v4 + 4) = *((_DWORD *)v4 + 3);
      goto LABEL_109;
    }
    v82 = (unsigned int)((int)(v81 - 256) / 16);
    v83 = *((_DWORD *)v4 + v82 + 2);
    if ( !(_DWORD)v82 )
      goto LABEL_110;
    if ( (unsigned int)v82 >= 3 )
      goto LABEL_107;
    if ( (unsigned int)v82 >= 2 )
      goto LABEL_108;
LABEL_109:
    v95 = *((_DWORD *)v4 + 2);
    *((_DWORD *)v4 + 2) = v83;
    *((_DWORD *)v4 + 3) = v95;
LABEL_110:
    v96 = *(_DWORD *)(v6 + 8);
    if ( v96 + v80 > *(_DWORD *)(v6 + 12) || v96 < v83 || !v83 )
      return 3221226050LL;
    while ( v80 > v83 )
    {
      v97 = (void *)(*(_QWORD *)v6 + v96);
      v80 -= v83;
      v98 = (const void *)(*(_QWORD *)v6 + v96 - v83);
      v96 += v83;
      qmemcpy(v97, v98, v83);
    }
    v18 = v96 + v80;
    qmemcpy((void *)(*(_QWORD *)v6 + v96), (const void *)(*(_QWORD *)v6 + v96 - v83), v80);
    v16 = *(_DWORD *)(a2 + 8);
LABEL_116:
    v17 = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(v6 + 8) = v18;
    if ( v16 >= v17 )
      return 0LL;
  }
  if ( v16 < v17 && *(_DWORD *)(v6 + 8) >= *(_DWORD *)(v6 + 12) )
    return 3221226050LL;
  return 0LL;
}
