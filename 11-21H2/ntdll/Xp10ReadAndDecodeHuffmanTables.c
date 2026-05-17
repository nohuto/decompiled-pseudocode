/*
 * XREFs of Xp10ReadAndDecodeHuffmanTables @ 0x18011CB08
 * Callers:
 *     Xp10ExecuteHuffmanDecode @ 0x18011B148 (Xp10ExecuteHuffmanDecode.c)
 * Callees:
 *     memset @ 0x1800AAE00 (memset.c)
 *     Xp10BuildHuffmanDecodeTable @ 0x18011A5B8 (Xp10BuildHuffmanDecodeTable.c)
 *     Xp10SortHuffmanSymbols @ 0x18011D790 (Xp10SortHuffmanSymbols.c)
 */

__int64 __fastcall Xp10ReadAndDecodeHuffmanTables(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  unsigned int v8; // r9d
  __int64 v9; // r13
  unsigned int v10; // edi
  unsigned int v11; // r14d
  unsigned __int8 *v12; // r8
  unsigned int v13; // r10d
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // r11
  unsigned __int8 *v17; // r8
  int v18; // ebx
  unsigned __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // edi
  __int64 v22; // rsi
  int v23; // ebx
  unsigned int v24; // esi
  unsigned int v25; // r15d
  unsigned int v26; // r12d
  unsigned int i; // ebp
  unsigned int v28; // r11d
  unsigned __int8 *v29; // r8
  unsigned int v30; // r10d
  unsigned int v31; // r9d
  __int64 v32; // rax
  unsigned __int8 *v33; // r8
  int v34; // r9d
  unsigned int v35; // ebx
  unsigned __int64 v36; // rdx
  int v37; // eax
  unsigned int v38; // r11d
  unsigned __int8 *v39; // r8
  unsigned int v40; // r10d
  unsigned int v41; // r9d
  __int64 v42; // rax
  unsigned __int8 *v43; // r8
  unsigned int v44; // r9d
  unsigned int v45; // ebx
  unsigned __int64 v46; // rdx
  int v47; // eax
  unsigned int v48; // r9d
  int v49; // eax
  int v50; // edi
  __int64 v51; // rbx
  unsigned int v52; // r15d
  unsigned int v53; // ebp
  __int64 v54; // r9
  __int64 v55; // r14
  __int64 v56; // rcx
  unsigned int v57; // edx
  unsigned int v58; // esi
  __int64 v59; // r12
  unsigned __int8 *v60; // r8
  unsigned int v61; // ebx
  unsigned int v62; // r10d
  unsigned int v63; // r11d
  unsigned int v64; // r11d
  __int64 v65; // rax
  __int64 v66; // rdi
  unsigned __int8 *v67; // r8
  unsigned __int64 v68; // rdx
  int v69; // eax
  __int16 v70; // di
  unsigned int v71; // r10d
  unsigned int v72; // r11d
  unsigned int v73; // ebx
  unsigned __int8 *v74; // r8
  unsigned int v75; // ebp
  unsigned int v76; // esi
  unsigned int v77; // esi
  __int64 v78; // rax
  __int64 v79; // r14
  unsigned __int8 *v80; // r8
  unsigned __int64 v81; // rdx
  int v82; // eax
  unsigned int v83; // ecx
  int v84; // eax
  unsigned int v85; // eax
  bool v86; // cc
  unsigned __int8 v87; // dl
  int v88; // eax
  unsigned int v89; // edi
  unsigned __int8 *v90; // r8
  unsigned int v91; // r11d
  unsigned int v92; // ebx
  __int64 v93; // rax
  __int64 v94; // rsi
  unsigned __int8 *v95; // r8
  int v96; // ebx
  unsigned __int64 v97; // rdx
  int v98; // eax
  unsigned int v99; // r11d
  int v100; // r10d
  unsigned __int8 *v101; // r8
  unsigned int v102; // esi
  unsigned int v103; // edi
  unsigned int v104; // ebx
  __int64 v105; // rax
  __int64 v106; // rbp
  unsigned __int8 *v107; // r8
  int v108; // ebx
  unsigned __int64 v109; // rdx
  int v110; // eax
  __int64 v111; // rax
  __int64 v112; // rax
  unsigned int v114; // r9d
  unsigned int v115; // edx
  unsigned int v116; // ebx
  int v117; // eax
  int v118; // [rsp+38h] [rbp-80h]
  unsigned int v119; // [rsp+50h] [rbp-68h]
  __int64 v120; // [rsp+58h] [rbp-60h]
  __int64 v121; // [rsp+60h] [rbp-58h]
  int v124; // [rsp+D0h] [rbp+18h]
  int v125; // [rsp+D8h] [rbp+20h]
  int v126; // [rsp+F0h] [rbp+38h]

  v8 = 2;
  v9 = a1;
  v10 = *((_DWORD *)a5 + 2);
  v11 = *((_DWORD *)a5 + 3);
  v12 = (unsigned __int8 *)(*a5 + ((unsigned __int64)v10 >> 3));
  v13 = 8 - (v10 & 7);
  if ( v10 + 2 > v11 )
  {
    v8 = v11 - v10;
    if ( v11 == v10 )
      return 3221226050LL;
  }
  v14 = *v12;
  v15 = v13;
  if ( v13 >= v8 )
    v15 = v8;
  v16 = v8 - (unsigned int)v15;
  v17 = v12 + 1;
  v18 = *(_DWORD *)&byte_18013CB40[4 * v15] & (v14 >> (v10 & 7));
  if ( (unsigned int)v16 >= 8 )
  {
    v19 = (unsigned __int64)(unsigned int)v16 >> 3;
    do
    {
      v20 = *v17 << v13;
      LOBYTE(v13) = v13 + 8;
      v18 |= v20;
      v16 = (unsigned int)(v16 - 8);
      ++v17;
      --v19;
    }
    while ( v19 );
  }
  if ( (_DWORD)v16 )
    v18 |= (*v17 & *(_DWORD *)&byte_18013CB40[4 * v16]) << v13;
  v21 = v8 + v10;
  *((_DWORD *)a5 + 2) = v21;
  if ( v8 < 2 )
    return 3221226050LL;
  v22 = a1 + 24;
  memset((void *)(a1 + 24), 0, 0x2C0uLL);
  if ( !v18 )
  {
    v114 = a2;
    _BitScanReverse(&v52, a2);
    v115 = 0;
    v50 = v52 + 1;
    v116 = (1 << (v52 + 1)) - a2;
    if ( v116 )
    {
      LOBYTE(v115) = v52;
      memset((void *)(v9 + 24), v115, v116);
      v114 = a2;
      v115 = (1 << (v52 + 1)) - a2;
    }
    if ( v115 < v114 )
      memset((void *)(v115 + v9 + 24), v52 + 1, v114 - v115);
LABEL_144:
    v117 = Xp10SortHuffmanSymbols(v22, (int)v9 + 728, a2, v52, v50);
    if ( !v117 )
      return 3221226050LL;
    *a8 = Xp10BuildHuffmanDecodeTable(v22, v9 + 37464, (_WORD *)(v9 + 728), v117, 0xCu, 6, v9 + 37464, v118, a6);
    return 0LL;
  }
  v23 = v18 - 1;
  if ( !v23 )
    return 3221225474LL;
  if ( v23 != 1 )
    return 3221226050LL;
  v24 = 4;
  v25 = 4;
  v26 = 4;
  for ( i = 0; i < 0x21; ++i )
  {
    v28 = 1;
    v29 = (unsigned __int8 *)(*a5 + ((unsigned __int64)v21 >> 3));
    v30 = 8 - (v21 & 7);
    if ( v21 + 1 > v11 )
    {
      v28 = v11 - v21;
      if ( v11 == v21 )
        return 3221226050LL;
    }
    v31 = *v29;
    v32 = v30;
    if ( v30 >= v28 )
      v32 = v28;
    v33 = v29 + 1;
    v34 = *(_DWORD *)&byte_18013CB40[4 * v32] & (v31 >> (v21 & 7));
    v35 = v28 - v32;
    if ( v28 - (unsigned int)v32 >= 8 )
    {
      v36 = (unsigned __int64)v35 >> 3;
      do
      {
        v37 = *v33 << v30;
        LOBYTE(v30) = v30 + 8;
        v34 |= v37;
        v35 -= 8;
        ++v33;
        --v36;
      }
      while ( v36 );
      v21 = *((_DWORD *)a5 + 2);
    }
    if ( v35 )
      v34 |= (*v33 & *(_DWORD *)&byte_18013CB40[4 * v35]) << v30;
    v21 += v28;
    *((_DWORD *)a5 + 2) = v21;
    if ( !v28 )
      return 3221226050LL;
    if ( v34 )
    {
      if ( v34 != 1 )
        return 3221226050LL;
      v38 = 3;
      v39 = (unsigned __int8 *)(*a5 + ((unsigned __int64)v21 >> 3));
      v40 = 8 - (v21 & 7);
      if ( v21 + 3 > v11 )
      {
        v38 = v11 - v21;
        if ( v11 == v21 )
          return 3221226050LL;
      }
      v41 = *v39;
      v42 = v40;
      if ( v40 >= v38 )
        v42 = v38;
      v43 = v39 + 1;
      v44 = *(_DWORD *)&byte_18013CB40[4 * v42] & (v41 >> (v21 & 7));
      v45 = v38 - v42;
      if ( v38 - (unsigned int)v42 >= 8 )
      {
        v46 = (unsigned __int64)v45 >> 3;
        do
        {
          v47 = *v43 << v40;
          LOBYTE(v40) = v40 + 8;
          v44 |= v47;
          v45 -= 8;
          ++v43;
          --v46;
        }
        while ( v46 );
      }
      if ( v45 )
        v44 |= (*v43 & *(_DWORD *)&byte_18013CB40[4 * v45]) << v40;
      v21 += v38;
      *((_DWORD *)a5 + 2) = v21;
      if ( v38 < 3 )
        return 3221226050LL;
      if ( v44 >= v26 && ++v44 > 8 )
        return 3221226050LL;
      v26 = v44;
      *(_BYTE *)(i + v9 + 24) = v44;
      if ( v44 && v44 < v24 )
        v24 = v44;
      if ( v44 <= v25 )
        v44 = v25;
      v25 = v44;
    }
    else
    {
      *(_BYTE *)(i + v9 + 24) = v26;
    }
  }
  v48 = v24;
  v22 = v9 + 24;
  v49 = Xp10SortHuffmanSymbols((int)v9 + 24, (int)v9 + 728, 33, v48, v25);
  if ( !v49 )
    return 3221226050LL;
  v50 = 8;
  v120 = Xp10BuildHuffmanDecodeTable(v9 + 24, v9 + 37464, (_WORD *)(v9 + 728), v49, 8u, 4, v9 + 37464, v118, v9 + 2136);
  v51 = v120;
  memset((void *)(v9 + 24), 0, 0x2C0uLL);
  v52 = 8;
  v126 = 8;
  v53 = 8;
  v125 = 8;
  LODWORD(v54) = 0;
  v124 = 8;
  if ( !a2 )
    goto LABEL_144;
  v55 = (__int64)a5;
  v56 = *a5;
  v57 = *((_DWORD *)a5 + 3);
  v121 = *a5;
  v119 = v57;
  while ( 1 )
  {
    v58 = *(_DWORD *)(v55 + 8);
    v59 = v51;
    v60 = (unsigned __int8 *)(v56 + ((unsigned __int64)v58 >> 3));
    v61 = 8 - (v58 & 7);
    v62 = 8;
    if ( v58 + 8 > v57 && (v62 = v57 - v58, v57 == v58) )
    {
      v63 = 0;
      v62 = 0;
    }
    else
    {
      v64 = *v60;
      v65 = v61;
      if ( v61 >= v62 )
        v65 = v62;
      v66 = v62 - (unsigned int)v65;
      v67 = v60 + 1;
      v63 = *(_DWORD *)&byte_18013CB40[4 * v65] & (v64 >> (v58 & 7));
      if ( (unsigned int)v66 >= 8 )
      {
        v68 = (unsigned __int64)(unsigned int)v66 >> 3;
        do
        {
          v69 = *v67 << v61;
          LOBYTE(v61) = v61 + 8;
          v63 |= v69;
          v66 = (unsigned int)(v66 - 8);
          ++v67;
          --v68;
        }
        while ( v68 );
      }
      if ( (_DWORD)v66 )
        v63 |= (*v67 & *(_DWORD *)&byte_18013CB40[4 * v66]) << v61;
      v57 = *(_DWORD *)(v55 + 12);
      v58 += v62;
      v56 = *(_QWORD *)v55;
    }
    v70 = *(_WORD *)(v120 + 2LL * v63);
    v71 = (v70 & 0xF) - v62 + v58;
    *(_DWORD *)(v55 + 8) = v71;
    if ( v70 < 0 )
    {
      v72 = v71;
      do
      {
        v73 = 4;
        v74 = (unsigned __int8 *)(v56 + ((unsigned __int64)v72 >> 3));
        v75 = 8 - (v72 & 7);
        if ( v72 + 4 > v57 && (v73 = v57 - v72, v57 == v72) )
        {
          v76 = 0;
          v73 = 0;
        }
        else
        {
          v77 = *v74;
          v78 = v75;
          if ( v75 >= v73 )
            v78 = v73;
          v79 = v73 - (unsigned int)v78;
          v80 = v74 + 1;
          v76 = *(_DWORD *)&byte_18013CB40[4 * v78] & (v77 >> (v72 & 7));
          if ( (unsigned int)v79 >= 8 )
          {
            v81 = (unsigned __int64)(unsigned int)v79 >> 3;
            do
            {
              v82 = *v80 << v75;
              LOBYTE(v75) = v75 + 8;
              v76 |= v82;
              v79 = (unsigned int)(v79 - 8);
              ++v80;
              --v81;
            }
            while ( v81 );
            v72 = v71;
          }
          if ( (_DWORD)v79 )
            v76 |= (*v80 & *(_DWORD *)&byte_18013CB40[4 * v79]) << v75;
          v57 = v119;
          v72 += v73;
          v56 = v121;
        }
        v59 += 2 * (v70 & 0xFFFFFFFFFFFFFFF0uLL);
        v70 = *(_WORD *)(v59 + 2LL * v76);
        v71 = v72 + (v70 & 0xF) - v73;
        v72 = v71;
      }
      while ( v70 < 0 );
      v55 = (__int64)a5;
      v52 = v126;
      v9 = a1;
      v53 = v125;
      *((_DWORD *)a5 + 2) = v71;
    }
    v83 = (unsigned __int16)v70 >> 4;
    if ( v83 == 28 )
    {
      v112 = (unsigned int)v54;
      v54 = (unsigned int)(v54 + 1);
      *(_BYTE *)(v112 + v9 + 24) = 0;
      if ( (v54 & 0xF) != 0 )
      {
        while ( (unsigned int)v54 < a2 )
        {
          *(_BYTE *)(v54 + v9 + 24) = 0;
          v54 = (unsigned int)(v54 + 1);
          if ( (v54 & 0xF) == 0 )
            goto LABEL_135;
        }
LABEL_143:
        v50 = v125;
        v22 = v9 + 24;
        goto LABEL_144;
      }
      goto LABEL_135;
    }
    if ( v83 == 29 )
      break;
    switch ( v83 )
    {
      case 0x1Eu:
        *(_BYTE *)((unsigned int)v54 + v9 + 24) = v124;
LABEL_103:
        LODWORD(v54) = v54 + 1;
        goto LABEL_135;
      case 0x1Fu:
        if ( (unsigned int)v54 < 0x10 )
          return 3221226050LL;
        v88 = *(unsigned __int8 *)((unsigned int)(v54 - 16) + v9 + 24);
        *(_BYTE *)((unsigned int)v54 + v9 + 24) = v88;
        if ( !(_BYTE)v88 )
          return 3221226050LL;
        v124 = v88;
        goto LABEL_103;
      case 0x20u:
        if ( (unsigned int)v54 < 0x10 )
          return 3221226050LL;
        v87 = *(_BYTE *)((unsigned int)(v54 - 16) + v9 + 24) + 1;
        *(_BYTE *)((unsigned int)v54 + v9 + 24) = v87;
        if ( (unsigned __int8)(v87 - 1) > 0x1Au )
          return 3221226050LL;
        v124 = v87;
        v85 = v87;
        if ( v87 < v52 )
          v52 = v87;
        LODWORD(v54) = v54 + 1;
        v86 = v87 <= v53;
        v126 = v52;
        break;
      default:
        if ( v83 > 0x1B )
          return 3221226050LL;
        *(_BYTE *)((unsigned int)v54 + v9 + 24) = v83;
        v84 = (unsigned __int16)v70 >> 4;
        if ( !(_WORD)v83 )
          v84 = v124;
        v124 = v84;
        if ( (_BYTE)v83 )
        {
          if ( (unsigned __int8)v83 < v52 )
            v52 = (unsigned __int8)v83;
          v126 = v52;
        }
        v85 = (unsigned __int8)v83;
        LODWORD(v54) = v54 + 1;
        v86 = (unsigned __int8)v83 <= v53;
        break;
    }
    if ( v86 )
      v85 = v53;
    v125 = v85;
LABEL_135:
    if ( (unsigned int)v54 >= a2 )
      goto LABEL_143;
    v53 = v125;
    v57 = *(_DWORD *)(v55 + 12);
    v56 = *(_QWORD *)v55;
    v51 = v120;
  }
  v89 = 2;
  v90 = (unsigned __int8 *)(*(_QWORD *)v55 + ((unsigned __int64)v71 >> 3));
  v91 = 8 - (v71 & 7);
  if ( v71 + 2 > v57 )
  {
    v89 = v57 - v71;
    if ( v57 == v71 )
      return 3221226050LL;
  }
  v92 = *v90;
  v93 = v91;
  if ( v91 >= v89 )
    v93 = v89;
  v94 = v89 - (unsigned int)v93;
  v95 = v90 + 1;
  v96 = *(_DWORD *)&byte_18013CB40[4 * v93] & (v92 >> (v71 & 7));
  if ( (unsigned int)v94 >= 8 )
  {
    v97 = (unsigned __int64)(unsigned int)v94 >> 3;
    do
    {
      v98 = *v95 << v91;
      LOBYTE(v91) = v91 + 8;
      v96 |= v98;
      v94 = (unsigned int)(v94 - 8);
      ++v95;
      --v97;
    }
    while ( v97 );
    v71 = *(_DWORD *)(v55 + 8);
  }
  if ( (_DWORD)v94 )
    v96 |= (*v95 & *(_DWORD *)&byte_18013CB40[4 * v94]) << v91;
  v99 = v71 + v89;
  *(_DWORD *)(v55 + 8) = v71 + v89;
  if ( v89 < 2 )
    return 3221226050LL;
  v100 = v96 + 5;
  if ( v96 != 3 )
  {
LABEL_128:
    if ( v100 + (int)v54 > a2 )
      return 3221226050LL;
    for ( ; v100; --v100 )
    {
      v111 = (unsigned int)v54;
      LODWORD(v54) = v54 + 1;
      *(_BYTE *)(v111 + v9 + 24) = 0;
    }
    goto LABEL_135;
  }
  while ( 1 )
  {
    v101 = (unsigned __int8 *)(*(_QWORD *)v55 + ((unsigned __int64)v99 >> 3));
    v102 = 8 - (v99 & 7);
    v103 = 3;
    if ( v99 + 3 > *(_DWORD *)(v55 + 12) )
    {
      v103 = *(_DWORD *)(v55 + 12) - v99;
      if ( !v103 )
        return 3221226050LL;
    }
    v104 = *v101;
    v105 = v102;
    if ( v102 >= v103 )
      v105 = v103;
    v106 = v103 - (unsigned int)v105;
    v107 = v101 + 1;
    v108 = *(_DWORD *)&byte_18013CB40[4 * v105] & (v104 >> (v99 & 7));
    if ( (unsigned int)v106 >= 8 )
    {
      v109 = (unsigned __int64)(unsigned int)v106 >> 3;
      do
      {
        v110 = *v107 << v102;
        LOBYTE(v102) = v102 + 8;
        v108 |= v110;
        v106 = (unsigned int)(v106 - 8);
        ++v107;
        --v109;
      }
      while ( v109 );
      v99 = *(_DWORD *)(v55 + 8);
    }
    if ( (_DWORD)v106 )
      v108 |= (*v107 & *(_DWORD *)&byte_18013CB40[4 * v106]) << v102;
    v99 += v103;
    *(_DWORD *)(v55 + 8) = v99;
    if ( v103 < 3 )
      return 3221226050LL;
    v100 += v108;
    if ( v108 != 7 )
      goto LABEL_128;
  }
}
