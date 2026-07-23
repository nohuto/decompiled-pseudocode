/*
 * XREFs of Xp10ReadAndDecodeHuffmanTables @ 0x18011F404
 * Callers:
 *     Xp10ExecuteHuffmanDecode @ 0x18011DBB4 (Xp10ExecuteHuffmanDecode.c)
 * Callees:
 *     Xp10BuildHuffmanDecodeTable @ 0x18011CDF8 (Xp10BuildHuffmanDecodeTable.c)
 *     Xp10ScatteredReadBytes @ 0x1801201FC (Xp10ScatteredReadBytes.c)
 *     Xp10SortHuffmanSymbols @ 0x180120280 (Xp10SortHuffmanSymbols.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall Xp10ReadAndDecodeHuffmanTables(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        unsigned int a7,
        __int64 *a8)
{
  __int64 v8; // rbx
  unsigned int v10; // esi
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // edi
  __int64 v15; // r14
  int v16; // r9d
  int v17; // edi
  unsigned int v18; // r14d
  unsigned int v19; // esi
  unsigned int v20; // r15d
  unsigned int v21; // r12d
  unsigned int v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // edx
  unsigned int v28; // edi
  int v29; // eax
  int v30; // ecx
  unsigned int v31; // edx
  unsigned int v32; // r9d
  _WORD *v33; // r12
  int v34; // eax
  int v35; // esi
  unsigned int v36; // r15d
  __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  unsigned int v39; // esi
  __int64 v40; // r8
  __int64 v41; // r12
  int v42; // eax
  int v43; // ecx
  unsigned int v44; // eax
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  __int16 v47; // r14
  unsigned int v48; // esi
  unsigned int v49; // eax
  int v50; // eax
  __int64 v51; // rdx
  unsigned int v52; // esi
  int v53; // eax
  int v54; // ecx
  unsigned int v55; // edx
  unsigned int v56; // edx
  int v57; // ecx
  unsigned int v58; // edx
  int v59; // eax
  unsigned int v60; // eax
  bool v61; // cc
  unsigned __int8 v62; // dl
  unsigned int v63; // eax
  unsigned int v64; // esi
  unsigned int v65; // eax
  int v66; // eax
  int v67; // ecx
  int v68; // edx
  unsigned __int64 v69; // rcx
  int v70; // esi
  unsigned int v71; // r14d
  unsigned int v72; // eax
  int v73; // eax
  int v74; // ecx
  int v75; // edx
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned int v78; // edi
  __int64 v79; // r13
  unsigned int v81; // edx
  unsigned int v82; // ebx
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rax
  int v86; // [rsp+38h] [rbp-48h]
  unsigned int v87; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v88; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v89; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v90; // [rsp+5Ch] [rbp-24h] BYREF
  __int64 v91; // [rsp+60h] [rbp-20h]
  _WORD *v92; // [rsp+68h] [rbp-18h]
  __int64 v93; // [rsp+70h] [rbp-10h]
  __int64 v94; // [rsp+78h] [rbp-8h]
  unsigned int v96; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v97; // [rsp+D8h] [rbp+58h] BYREF

  v97 = a4;
  v96 = a3;
  v8 = (__int64)a5;
  v10 = 2;
  if ( !*(_QWORD *)a5 )
    return 3221226050LL;
  if ( *(_QWORD *)a5 < 2uLL )
    v10 = *a5;
  v11 = a5[4];
  if ( v11 < v10 )
  {
    v12 = Xp10ScatteredReadBytes(a5 + 6, &v97, 4LL);
    v13 = *(_DWORD *)(v8 + 16);
    *(_QWORD *)(v8 + 8) |= (unsigned __int64)v97 << v13;
    v11 = v13 + 8 * v12;
    if ( v11 < v10 )
      v10 = v11;
  }
  v14 = *(_DWORD *)(v8 + 8) & ((1LL << v10) - 1);
  *(_QWORD *)(v8 + 8) >>= v10;
  *(_QWORD *)v8 -= v10;
  *(_DWORD *)(v8 + 16) = v11 - v10;
  if ( v10 < 2 )
    return 3221226050LL;
  v15 = a1 + 24;
  v93 = a1 + 24;
  memset_thunk_772440563353939046((void *)(a1 + 24), 0, 0x2C0uLL);
  if ( !v14 )
  {
    v78 = a2;
    _BitScanReverse(&v36, a2);
    v81 = 0;
    v35 = v36 + 1;
    v82 = (1 << (v36 + 1)) - a2;
    if ( v82 )
    {
      LOBYTE(v81) = v36;
      memset_thunk_772440563353939046((void *)(a1 + 24), v81, v82);
      v81 = (1 << (v36 + 1)) - a2;
    }
    LOBYTE(v16) = v36;
    if ( v81 < a2 )
      memset_thunk_772440563353939046((void *)(v81 + a1 + 24), v16 + 1, a2 - v81);
    v33 = (_WORD *)(a1 + 728);
    v79 = a1 + 37464;
    goto LABEL_129;
  }
  v17 = v14 - 1;
  if ( !v17 )
    return 3221225474LL;
  if ( v17 != 1 )
    return 3221226050LL;
  v18 = 4;
  v19 = 0;
  v20 = 4;
  v21 = 4;
  do
  {
    v22 = 1;
    if ( !*(_QWORD *)v8 )
      return 3221226050LL;
    v23 = *(_DWORD *)(v8 + 16);
    if ( !v23 )
    {
      v24 = Xp10ScatteredReadBytes(v8 + 24, &v97, 4LL);
      v25 = *(_DWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 8) |= (unsigned __int64)v97 << v25;
      v23 = v25 + 8 * v24;
      v22 = v23 != 0;
    }
    v26 = v23 - v22;
    *(_DWORD *)(v8 + 16) = v26;
    v27 = *(_DWORD *)(v8 + 8) & ((1LL << v22) - 1);
    *(_QWORD *)(v8 + 8) >>= v22;
    *(_QWORD *)v8 -= v22;
    if ( !v22 )
      return 3221226050LL;
    if ( v27 )
    {
      if ( v27 != 1 )
        return 3221226050LL;
      v28 = 3;
      if ( !*(_QWORD *)v8 )
        return 3221226050LL;
      if ( *(_QWORD *)v8 < 3uLL )
        v28 = *(_DWORD *)v8;
      if ( v26 < v28 )
      {
        v29 = Xp10ScatteredReadBytes(v8 + 24, &v96, 4LL);
        v30 = *(_DWORD *)(v8 + 16);
        *(_QWORD *)(v8 + 8) |= (unsigned __int64)v96 << v30;
        v26 = v30 + 8 * v29;
        *(_DWORD *)(v8 + 16) = v26;
        if ( v26 < v28 )
          v28 = v26;
      }
      *(_DWORD *)(v8 + 16) = v26 - v28;
      v31 = *(_DWORD *)(v8 + 8) & ((1LL << v28) - 1);
      *(_QWORD *)(v8 + 8) >>= v28;
      *(_QWORD *)v8 -= v28;
      if ( v28 < 3 )
        return 3221226050LL;
      if ( v31 >= v21 && ++v31 > 8 )
        return 3221226050LL;
      v21 = v31;
      *(_BYTE *)(v19 + a1 + 24) = v31;
      if ( v31 && v31 < v18 )
        v18 = v31;
      if ( v31 <= v20 )
        v31 = v20;
      v20 = v31;
    }
    else
    {
      *(_BYTE *)(v19 + a1 + 24) = v21;
    }
    ++v19;
  }
  while ( v19 < 0x21 );
  v32 = v18;
  v33 = (_WORD *)(a1 + 728);
  v15 = a1 + 24;
  v92 = (_WORD *)(a1 + 728);
  v34 = Xp10SortHuffmanSymbols((int)a1 + 24, (int)a1 + 728, 33, v32, v20);
  if ( !v34 )
    return 3221226050LL;
  v94 = a1 + 37464;
  v91 = Xp10BuildHuffmanDecodeTable(a1 + 24, a1 + 37464, (_WORD *)(a1 + 728), v34, 8u, 4, a1 + 37464, v86, a1 + 2136);
  memset_thunk_772440563353939046((void *)(a1 + 24), 0, 0x2C0uLL);
  v35 = 8;
  v36 = 8;
  v97 = 8;
  LODWORD(v37) = 0;
  v96 = 8;
  if ( !a2 )
  {
LABEL_122:
    v78 = a2;
    v79 = v94;
LABEL_129:
    v83 = Xp10SortHuffmanSymbols(v15, (_DWORD)v33, v78, v36, v35);
    if ( !v83 )
      return 3221226050LL;
    v85 = Xp10BuildHuffmanDecodeTable(v15, v84, v33, v83, 0xCu, 6, v79, v86, a6);
    *a8 = v85;
    return 0LL;
  }
  while ( 1 )
  {
    v38 = *(_QWORD *)v8;
    v39 = 8;
    v40 = v91;
    v41 = v91;
    if ( *(_QWORD *)v8 )
    {
      if ( v38 < 8 )
        v39 = *(_QWORD *)v8;
      if ( *(_DWORD *)(v8 + 16) < v39 )
      {
        v42 = Xp10ScatteredReadBytes(v8 + 24, &a7, 4LL);
        v43 = *(_DWORD *)(v8 + 16);
        v40 = v41;
        *(_QWORD *)(v8 + 8) |= (unsigned __int64)a7 << v43;
        v44 = v43 + 8 * v42;
        *(_DWORD *)(v8 + 16) = v44;
        if ( v44 < v39 )
          LOBYTE(v39) = v44;
      }
      v45 = *(_QWORD *)v8;
      v38 = *(_QWORD *)v8;
      v46 = *(_DWORD *)(v8 + 8) & ((unsigned int)(1LL << v39) - 1);
    }
    else
    {
      v46 = 0LL;
      v45 = 0LL;
    }
    v47 = *(_WORD *)(v40 + 2 * v46);
    v48 = v47 & 0xF;
    if ( v45 && (*(_WORD *)(v40 + 2 * v46) & 0xF) != 0 )
    {
      if ( (*(_WORD *)(v40 + 2 * v46) & 0xFu) > v45 )
        v48 = *(_DWORD *)v8;
      v49 = *(_DWORD *)(v8 + 16);
      if ( v49 < v48 )
      {
        v50 = Xp10ScatteredReadBytes(v8 + 24, &a5, 4LL);
        v51 = (unsigned int)a5;
LABEL_65:
        v57 = *(_DWORD *)(v8 + 16);
        *(_QWORD *)(v8 + 8) |= v51 << v57;
        v49 = v57 + 8 * v50;
        *(_DWORD *)(v8 + 16) = v49;
        if ( v49 < v48 )
          v48 = v49;
      }
      goto LABEL_67;
    }
    while ( v47 < 0 )
    {
      v52 = 4;
      if ( v38 )
      {
        if ( v38 < 4 )
          v52 = *(_DWORD *)v8;
        if ( *(_DWORD *)(v8 + 16) < v52 )
        {
          v53 = Xp10ScatteredReadBytes(v8 + 24, &v87, 4LL);
          v54 = *(_DWORD *)(v8 + 16);
          *(_QWORD *)(v8 + 8) |= (unsigned __int64)v87 << v54;
          v55 = v54 + 8 * v53;
          *(_DWORD *)(v8 + 16) = v55;
          if ( v55 < v52 )
            LOBYTE(v52) = v54 + 8 * v53;
        }
        v56 = *(_DWORD *)(v8 + 8) & ((1LL << v52) - 1);
      }
      else
      {
        v56 = 0;
      }
      v38 = *(_QWORD *)v8;
      v41 += 2 * (v47 & 0xFFFFFFFFFFFFFFF0uLL);
      v47 = *(_WORD *)(v41 + 2LL * v56);
      v48 = v47 & 0xF;
      if ( *(_QWORD *)v8 && (*(_WORD *)(v41 + 2LL * v56) & 0xF) != 0 )
      {
        if ( (*(_WORD *)(v41 + 2LL * v56) & 0xFu) > v38 )
          v48 = *(_QWORD *)v8;
        v49 = *(_DWORD *)(v8 + 16);
        if ( v49 < v48 )
        {
          v50 = Xp10ScatteredReadBytes(v8 + 24, &v88, 4LL);
          v51 = v88;
          goto LABEL_65;
        }
LABEL_67:
        *(_QWORD *)(v8 + 8) >>= v48;
        *(_QWORD *)v8 -= v48;
        v38 = *(_QWORD *)v8;
        *(_DWORD *)(v8 + 16) = v49 - v48;
        continue;
      }
    }
    v58 = (unsigned __int16)v47 >> 4;
    if ( v58 == 28 )
    {
      v77 = (unsigned int)v37;
      v37 = (unsigned int)(v37 + 1);
      *(_BYTE *)(v77 + a1 + 24) = 0;
      if ( (v37 & 0xF) != 0 )
      {
        while ( (unsigned int)v37 < a2 )
        {
          *(_BYTE *)(v37 + a1 + 24) = 0;
          v37 = (unsigned int)(v37 + 1);
          if ( (v37 & 0xF) == 0 )
            goto LABEL_117;
        }
        v35 = v97;
LABEL_121:
        v15 = v93;
        v33 = v92;
        goto LABEL_122;
      }
      goto LABEL_117;
    }
    if ( v58 == 29 )
      break;
    if ( v58 == 30 )
    {
      *(_BYTE *)((unsigned int)v37 + a1 + 24) = v96;
    }
    else
    {
      if ( v58 != 31 )
      {
        if ( v58 == 32 )
        {
          if ( (unsigned int)v37 < 0x10 )
            return 3221226050LL;
          v62 = *(_BYTE *)((unsigned int)(v37 - 16) + a1 + 24) + 1;
          *(_BYTE *)((unsigned int)v37 + a1 + 24) = v62;
          if ( (unsigned __int8)(v62 - 1) > 0x1Au )
            return 3221226050LL;
          v96 = v62;
          v60 = v62;
          if ( v62 < v36 )
            v36 = v62;
          LODWORD(v37) = v37 + 1;
          v61 = v62 <= v97;
        }
        else
        {
          if ( v58 > 0x1B )
            return 3221226050LL;
          *(_BYTE *)((unsigned int)v37 + a1 + 24) = v58;
          v59 = (unsigned __int16)v47 >> 4;
          if ( !(_WORD)v58 )
            v59 = v96;
          v96 = v59;
          if ( (_BYTE)v58 && (unsigned __int8)v58 < v36 )
            v36 = (unsigned __int8)v58;
          v60 = (unsigned __int8)v58;
          LODWORD(v37) = v37 + 1;
          v61 = (unsigned __int8)v58 <= v97;
        }
        if ( v61 )
          v60 = v97;
        v35 = v60;
        v97 = v60;
        goto LABEL_118;
      }
      if ( (unsigned int)v37 < 0x10 )
        return 3221226050LL;
      v63 = *(unsigned __int8 *)((unsigned int)(v37 - 16) + a1 + 24);
      *(_BYTE *)((unsigned int)v37 + a1 + 24) = v63;
      if ( !(_BYTE)v63 )
        return 3221226050LL;
      v96 = v63;
    }
    LODWORD(v37) = v37 + 1;
LABEL_117:
    v35 = v97;
LABEL_118:
    if ( (unsigned int)v37 >= a2 )
      goto LABEL_121;
  }
  v64 = 2;
  if ( !v38 )
    return 3221226050LL;
  if ( v38 < 2 )
    v64 = *(_DWORD *)v8;
  v65 = *(_DWORD *)(v8 + 16);
  if ( v65 < v64 )
  {
    v66 = Xp10ScatteredReadBytes(v8 + 24, &v89, 4LL);
    v67 = *(_DWORD *)(v8 + 16);
    *(_QWORD *)(v8 + 8) |= (unsigned __int64)v89 << v67;
    v65 = v67 + 8 * v66;
    *(_DWORD *)(v8 + 16) = v65;
    if ( v65 < v64 )
      v64 = v65;
  }
  *(_DWORD *)(v8 + 16) = v65 - v64;
  v68 = *(_DWORD *)(v8 + 8) & ((1LL << v64) - 1);
  *(_QWORD *)(v8 + 8) >>= v64;
  *(_QWORD *)v8 -= v64;
  v69 = *(_QWORD *)v8;
  if ( v64 < 2 )
    return 3221226050LL;
  v70 = v68 + 5;
  if ( v68 != 3 )
  {
LABEL_110:
    if ( v70 + (int)v37 > a2 )
      return 3221226050LL;
    for ( ; v70; --v70 )
    {
      v76 = (unsigned int)v37;
      LODWORD(v37) = v37 + 1;
      *(_BYTE *)(v76 + a1 + 24) = 0;
    }
    goto LABEL_117;
  }
  while ( 1 )
  {
    v71 = 3;
    if ( !v69 )
      return 3221226050LL;
    if ( v69 < 3 )
      v71 = *(_DWORD *)v8;
    v72 = *(_DWORD *)(v8 + 16);
    if ( v72 < v71 )
    {
      v73 = Xp10ScatteredReadBytes(v8 + 24, &v90, 4LL);
      v74 = *(_DWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 8) |= (unsigned __int64)v90 << v74;
      v72 = v74 + 8 * v73;
      *(_DWORD *)(v8 + 16) = v72;
      if ( v72 < v71 )
        v71 = v72;
    }
    *(_DWORD *)(v8 + 16) = v72 - v71;
    v75 = *(_DWORD *)(v8 + 8) & ((1LL << v71) - 1);
    *(_QWORD *)(v8 + 8) >>= v71;
    *(_QWORD *)v8 -= v71;
    v69 = *(_QWORD *)v8;
    if ( v71 < 3 )
      return 3221226050LL;
    v70 += v75;
    if ( v75 != 7 )
      goto LABEL_110;
  }
}
