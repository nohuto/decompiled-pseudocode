/*
 * XREFs of sub_1409C45C0 @ 0x1409C45C0
 * Callers:
 *     sub_1409C2AF0 @ 0x1409C2AF0 (sub_1409C2AF0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409C1F40 @ 0x1409C1F40 (sub_1409C1F40.c)
 *     sub_1409C5260 @ 0x1409C5260 (sub_1409C5260.c)
 */

__int64 __fastcall sub_1409C45C0(
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
  unsigned __int8 *v38; // r8
  unsigned int v39; // r11d
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
  __int64 v89; // rbp
  unsigned int v90; // edi
  unsigned __int8 *v91; // r8
  unsigned int v92; // r11d
  unsigned int v93; // ebx
  __int64 v94; // rax
  __int64 v95; // rsi
  unsigned __int8 *v96; // r8
  int v97; // ebx
  unsigned __int64 v98; // rdx
  int v99; // eax
  unsigned int v100; // r11d
  int v101; // r10d
  unsigned int v102; // edi
  unsigned __int8 *v103; // r8
  unsigned int v104; // esi
  unsigned int v105; // ebx
  __int64 v106; // rax
  __int64 v107; // rbp
  unsigned __int8 *v108; // r8
  int v109; // ebx
  unsigned __int64 v110; // rdx
  int v111; // eax
  __int64 v112; // rax
  __int64 v113; // rax
  unsigned int v115; // r9d
  unsigned int v116; // edx
  unsigned int v117; // ebx
  int v118; // eax
  int v119; // [rsp+38h] [rbp-80h]
  int v120; // [rsp+50h] [rbp-68h]
  __int64 v121; // [rsp+58h] [rbp-60h]
  __int64 v122; // [rsp+58h] [rbp-60h]
  __int64 v123; // [rsp+60h] [rbp-58h]
  int v126; // [rsp+D0h] [rbp+18h]
  int v127; // [rsp+D8h] [rbp+20h]
  unsigned int v128; // [rsp+F0h] [rbp+38h]

  v8 = 2;
  v9 = a1;
  v10 = *((_DWORD *)a5 + 2);
  v11 = *((_DWORD *)a5 + 3);
  v121 = *a5;
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
  v18 = *(_DWORD *)&byte_14001BB70[4 * v15] & (v14 >> (v10 & 7));
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
    v18 |= (*v17 & *(_DWORD *)&byte_14001BB70[4 * v16]) << v13;
  v21 = v8 + v10;
  *((_DWORD *)a5 + 2) = v21;
  if ( v8 < 2 )
    return 3221226050LL;
  v22 = a1 + 24;
  memset((void *)(a1 + 24), 0, 0x2C0uLL);
  if ( !v18 )
  {
    v115 = a2;
    _BitScanReverse(&v52, a2);
    v116 = 0;
    v50 = v52 + 1;
    v117 = (1 << (v52 + 1)) - a2;
    if ( v117 )
    {
      LOBYTE(v116) = v52;
      memset((void *)(v9 + 24), v116, v117);
      v115 = a2;
      v116 = (1 << (v52 + 1)) - a2;
    }
    if ( v116 < v115 )
      memset((void *)(v116 + v9 + 24), v52 + 1, v115 - v116);
LABEL_143:
    v118 = sub_1409C5260(v22, (int)v9 + 728, a2, v52, v50);
    if ( !v118 )
      return 3221226050LL;
    *a8 = sub_1409C1F40(v22, v9 + 37464, (_WORD *)(v9 + 728), v118, 0xCu, 6, v9 + 37464, v119, a6);
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
    v29 = (unsigned __int8 *)(v121 + ((unsigned __int64)v21 >> 3));
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
    v34 = *(_DWORD *)&byte_14001BB70[4 * v32] & (v31 >> (v21 & 7));
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
      v34 |= (*v33 & *(_DWORD *)&byte_14001BB70[4 * v35]) << v30;
    v21 += v28;
    *((_DWORD *)a5 + 2) = v21;
    if ( !v28 )
      return 3221226050LL;
    if ( v34 )
    {
      if ( v34 != 1 )
        return 3221226050LL;
      v38 = (unsigned __int8 *)(v121 + ((unsigned __int64)v21 >> 3));
      v39 = 3;
      v40 = 8 - (v21 & 7);
      if ( v21 + 3 > v11 )
      {
        v39 = v11 - v21;
        if ( v11 == v21 )
          return 3221226050LL;
      }
      v41 = *v38;
      v42 = v40;
      if ( v40 >= v39 )
        v42 = v39;
      v43 = v38 + 1;
      v44 = *(_DWORD *)&byte_14001BB70[4 * v42] & (v41 >> (v21 & 7));
      v45 = v39 - v42;
      if ( v39 - (unsigned int)v42 >= 8 )
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
        v44 |= (*v43 & *(_DWORD *)&byte_14001BB70[4 * v45]) << v40;
      v21 += v39;
      *((_DWORD *)a5 + 2) = v21;
      if ( v39 < 3 )
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
  v49 = sub_1409C5260((int)v9 + 24, (int)v9 + 728, 33, v48, v25);
  if ( !v49 )
    return 3221226050LL;
  v50 = 8;
  v123 = sub_1409C1F40(v9 + 24, v9 + 37464, (_WORD *)(v9 + 728), v49, 8u, 4, v9 + 37464, v119, v9 + 2136);
  v51 = v123;
  memset((void *)(v9 + 24), 0, 0x2C0uLL);
  v52 = 8;
  v120 = 8;
  v53 = 8;
  v127 = 8;
  LODWORD(v54) = 0;
  v126 = 8;
  if ( !a2 )
    goto LABEL_143;
  v55 = (__int64)a5;
  v56 = *a5;
  v57 = *((_DWORD *)a5 + 3);
  v122 = *a5;
  v128 = v57;
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
      v63 = *(_DWORD *)&byte_14001BB70[4 * v65] & (v64 >> (v58 & 7));
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
        v63 |= (*v67 & *(_DWORD *)&byte_14001BB70[4 * v66]) << v61;
      v57 = v128;
      v58 += v62;
      v56 = v122;
    }
    v70 = *(_WORD *)(v123 + 2LL * v63);
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
          v76 = *(_DWORD *)&byte_14001BB70[4 * v78] & (v77 >> (v72 & 7));
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
            v76 |= (*v80 & *(_DWORD *)&byte_14001BB70[4 * v79]) << v75;
          v57 = v128;
          v72 += v73;
          v56 = v122;
        }
        v59 += 2 * (v70 & 0xFFFFFFFFFFFFFFF0uLL);
        v70 = *(_WORD *)(v59 + 2LL * v76);
        v71 = v72 + (v70 & 0xF) - v73;
        v72 = v71;
      }
      while ( v70 < 0 );
      v55 = (__int64)a5;
      v52 = v120;
      v9 = a1;
      v53 = v127;
      *((_DWORD *)a5 + 2) = v71;
    }
    v83 = (unsigned __int16)v70 >> 4;
    if ( v83 == 28 )
    {
      v113 = (unsigned int)v54;
      v54 = (unsigned int)(v54 + 1);
      *(_BYTE *)(v113 + v9 + 24) = 0;
      if ( (v54 & 0xF) != 0 )
      {
        while ( (unsigned int)v54 < a2 )
        {
          *(_BYTE *)(v54 + v9 + 24) = 0;
          v54 = (unsigned int)(v54 + 1);
          if ( (v54 & 0xF) == 0 )
            goto LABEL_135;
        }
LABEL_142:
        v50 = v127;
        v22 = v9 + 24;
        goto LABEL_143;
      }
      goto LABEL_135;
    }
    if ( v83 == 29 )
      break;
    switch ( v83 )
    {
      case 0x1Eu:
        *(_BYTE *)((unsigned int)v54 + v9 + 24) = v126;
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
        v126 = v88;
        goto LABEL_103;
      case 0x20u:
        if ( (unsigned int)v54 < 0x10 )
          return 3221226050LL;
        v87 = *(_BYTE *)((unsigned int)(v54 - 16) + v9 + 24) + 1;
        *(_BYTE *)((unsigned int)v54 + v9 + 24) = v87;
        if ( (unsigned __int8)(v87 - 1) > 0x1Au )
          return 3221226050LL;
        v126 = v87;
        v85 = v87;
        if ( v87 < v52 )
          v52 = v87;
        LODWORD(v54) = v54 + 1;
        v86 = v87 <= v53;
        v120 = v52;
        break;
      default:
        if ( v83 > 0x1B )
          return 3221226050LL;
        *(_BYTE *)((unsigned int)v54 + v9 + 24) = v83;
        v84 = (unsigned __int16)v70 >> 4;
        if ( !(_WORD)v83 )
          v84 = v126;
        v126 = v84;
        if ( (_BYTE)v83 )
        {
          if ( (unsigned __int8)v83 < v52 )
            v52 = (unsigned __int8)v83;
          v120 = v52;
        }
        v85 = (unsigned __int8)v83;
        LODWORD(v54) = v54 + 1;
        v86 = (unsigned __int8)v83 <= v53;
        break;
    }
    if ( v86 )
      v85 = v53;
    v127 = v85;
LABEL_135:
    if ( (unsigned int)v54 >= a2 )
      goto LABEL_142;
    v53 = v127;
    v57 = v128;
    v56 = v122;
    v51 = v123;
  }
  v89 = v122;
  v90 = 2;
  v91 = (unsigned __int8 *)(v122 + ((unsigned __int64)v71 >> 3));
  v92 = 8 - (v71 & 7);
  if ( v71 + 2 > v57 )
  {
    v90 = v57 - v71;
    if ( v57 == v71 )
      return 3221226050LL;
  }
  v93 = *v91;
  v94 = v92;
  if ( v92 >= v90 )
    v94 = v90;
  v95 = v90 - (unsigned int)v94;
  v96 = v91 + 1;
  v97 = *(_DWORD *)&byte_14001BB70[4 * v94] & (v93 >> (v71 & 7));
  if ( (unsigned int)v95 >= 8 )
  {
    v98 = (unsigned __int64)(unsigned int)v95 >> 3;
    do
    {
      v99 = *v96 << v92;
      LOBYTE(v92) = v92 + 8;
      v97 |= v99;
      v95 = (unsigned int)(v95 - 8);
      ++v96;
      --v98;
    }
    while ( v98 );
    v71 = *(_DWORD *)(v55 + 8);
  }
  if ( (_DWORD)v95 )
    v97 |= (*v96 & *(_DWORD *)&byte_14001BB70[4 * v95]) << v92;
  v100 = v71 + v90;
  *(_DWORD *)(v55 + 8) = v71 + v90;
  if ( v90 < 2 )
    return 3221226050LL;
  v101 = v97 + 5;
  if ( v97 != 3 )
  {
LABEL_128:
    if ( v101 + (int)v54 > a2 )
      return 3221226050LL;
    for ( ; v101; --v101 )
    {
      v112 = (unsigned int)v54;
      LODWORD(v54) = v54 + 1;
      *(_BYTE *)(v112 + v9 + 24) = 0;
    }
    goto LABEL_135;
  }
  while ( 1 )
  {
    v102 = 3;
    v103 = (unsigned __int8 *)(v89 + ((unsigned __int64)v100 >> 3));
    v104 = 8 - (v100 & 7);
    if ( v100 + 3 > v128 )
    {
      v102 = v128 - v100;
      if ( v128 == v100 )
        return 3221226050LL;
    }
    v105 = *v103;
    v106 = v104;
    if ( v104 >= v102 )
      v106 = v102;
    v107 = v102 - (unsigned int)v106;
    v108 = v103 + 1;
    v109 = *(_DWORD *)&byte_14001BB70[4 * v106] & (v105 >> (v100 & 7));
    if ( (unsigned int)v107 >= 8 )
    {
      v110 = (unsigned __int64)(unsigned int)v107 >> 3;
      do
      {
        v111 = *v108 << v104;
        LOBYTE(v104) = v104 + 8;
        v109 |= v111;
        v107 = (unsigned int)(v107 - 8);
        ++v108;
        --v110;
      }
      while ( v110 );
      v100 = *(_DWORD *)(v55 + 8);
    }
    if ( (_DWORD)v107 )
      v109 |= (*v108 & *(_DWORD *)&byte_14001BB70[4 * v107]) << v104;
    v100 += v102;
    *(_DWORD *)(v55 + 8) = v100;
    if ( v102 < 3 )
      return 3221226050LL;
    v89 = v122;
    v101 += v109;
    if ( v109 != 7 )
      goto LABEL_128;
  }
}
