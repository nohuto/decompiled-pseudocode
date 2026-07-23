/*
 * XREFs of Xp10BuildAndWriteHuffmanTables @ 0x18011C3E8
 * Callers:
 *     Xp10BuildAndWriteHuffmanEncodings @ 0x18011C014 (Xp10BuildAndWriteHuffmanEncodings.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     Xp10BuildHuffmanEncodings @ 0x18011D08C (Xp10BuildHuffmanEncodings.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall Xp10BuildAndWriteHuffmanTables(int a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 *v4; // rbx
  int v8; // r9d
  unsigned __int16 v9; // cx
  int v10; // edx
  int v11; // r8d
  int v12; // eax
  unsigned __int16 v13; // dx
  unsigned int v14; // edx
  __int64 v15; // r12
  unsigned int v16; // r14d
  _DWORD *v17; // r15
  unsigned int v18; // r10d
  unsigned int v19; // edi
  int v20; // r9d
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  __int64 v23; // rax
  _BYTE *v24; // rdx
  unsigned int v25; // r9d
  unsigned __int64 v26; // rcx
  unsigned int v27; // edx
  _BYTE *v28; // r8
  unsigned int v29; // r11d
  unsigned int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rax
  _BYTE *v33; // r8
  unsigned int v34; // edx
  unsigned __int64 v35; // rcx
  unsigned int v36; // eax
  int v37; // ecx
  _BYTE *v38; // r8
  unsigned int v39; // r11d
  unsigned int v40; // esi
  unsigned int v41; // r9d
  unsigned int v42; // r10d
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // r9d
  _BYTE *v46; // r8
  unsigned __int64 v47; // rcx
  unsigned int v48; // r9d
  __int64 v49; // rax
  __int64 v50; // rax
  _BYTE *v51; // r8
  unsigned int v52; // edx
  unsigned __int64 v53; // rcx
  unsigned int v54; // r15d
  int v55; // edi
  unsigned __int16 v56; // r13
  int v57; // ecx
  unsigned int v58; // edx
  int v59; // eax
  __int64 v60; // rax
  unsigned int v61; // edx
  unsigned int v62; // r11d
  _BYTE *v63; // r8
  unsigned int v64; // r10d
  unsigned int v65; // r9d
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned int v68; // r9d
  _BYTE *v69; // r8
  unsigned __int64 v70; // rcx
  unsigned __int16 v71; // r8
  int v72; // esi
  unsigned int v73; // r14d
  unsigned int v74; // edx
  _BYTE *v75; // r9
  unsigned int v76; // edi
  unsigned int v77; // r11d
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned int v80; // r10d
  _BYTE *v81; // r9
  unsigned __int64 v82; // rcx
  unsigned int v83; // r10d
  int v84; // esi
  unsigned int v85; // r14d
  unsigned int v86; // edx
  _BYTE *v87; // r8
  unsigned int v88; // edi
  unsigned int v89; // r11d
  __int64 v90; // rax
  __int64 v91; // rax
  unsigned int v92; // r9d
  _BYTE *v93; // r8
  unsigned __int64 v94; // rcx
  unsigned int v95; // r9d
  unsigned int v96; // edi
  _BYTE *v97; // r8
  unsigned int v98; // r11d
  unsigned int v99; // esi
  __int64 v100; // rax
  __int64 v101; // rax
  unsigned int v102; // r11d
  _BYTE *v103; // r8
  unsigned __int64 v104; // rcx
  __int64 v105; // rdx
  unsigned int v106; // ecx
  int v107; // esi
  unsigned int v108; // edi
  _BYTE *v109; // r8
  unsigned int v110; // r10d
  unsigned int v111; // eax
  unsigned int v112; // r11d
  __int64 v113; // rax
  __int64 v114; // rax
  unsigned int v115; // r10d
  _BYTE *v116; // r8
  unsigned __int64 v117; // rcx
  char v118; // cl
  __int64 v119; // rax
  __int64 v120; // rax
  _BYTE *v121; // r8
  unsigned int v122; // edx
  unsigned __int64 v123; // rcx
  unsigned int v124; // r10d
  unsigned int v125; // r14d
  __int64 v126; // rsi
  __int64 v127; // r12
  unsigned int v128; // r11d
  _BYTE *v129; // r8
  int v130; // r15d
  unsigned int v131; // edi
  unsigned int v132; // eax
  __int64 v133; // rax
  __int64 v134; // rax
  _BYTE *v135; // r8
  unsigned int v136; // edx
  unsigned __int64 v137; // rcx
  _BYTE *v138; // r8
  int v139; // esi
  unsigned int v140; // edi
  __int64 v141; // rax
  __int64 v142; // rax
  unsigned __int64 v143; // rcx
  __int16 v145; // [rsp+30h] [rbp-D0h]
  int v147; // [rsp+38h] [rbp-C8h]
  _DWORD v150[28]; // [rsp+50h] [rbp-B0h] BYREF
  int v151; // [rsp+C0h] [rbp-40h]
  int v152; // [rsp+C4h] [rbp-3Ch]
  _DWORD v153[28]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v154; // [rsp+150h] [rbp+50h]
  unsigned int v155; // [rsp+154h] [rbp+54h]

  v4 = a4;
  memset_thunk_772440563353939046(v150, 0, 0x84uLL);
  memset_thunk_772440563353939046(v153, 0, 0x84uLL);
  v8 = 8;
  v9 = 0;
  while ( v9 < a3 )
  {
    v10 = *(_DWORD *)(a2 + 4LL * v9) & 0x1F;
    if ( v10 )
    {
      v11 = *(_DWORD *)(a2 + 4LL * v9) & 0x1F;
      if ( v10 == v8 )
      {
        v11 = 30;
      }
      else
      {
        if ( v9 >= 0x10u )
        {
          v12 = *(_DWORD *)(a2 + 4LL * v9 - 64) & 0x1F;
          if ( v10 == v12 )
          {
            v11 = 31;
          }
          else if ( v10 == v12 + 1 )
          {
            v11 = 32;
          }
        }
        v8 = *(_DWORD *)(a2 + 4LL * v9) & 0x1F;
      }
      ++v150[v11];
      ++v9;
    }
    else
    {
      v13 = v9;
      while ( v9 < a3 && (*(_BYTE *)(a2 + 4LL * v9) & 0x1F) == 0 )
        ++v9;
      while ( (unsigned __int16)(v9 ^ v13) >= 0x10u )
      {
        ++v151;
        v13 = (v13 & 0xFFF0) + 16;
      }
      v14 = v9 - v13;
      if ( v14 )
      {
        if ( v14 >= 5 )
          ++v152;
        else
          v150[0] += v14;
      }
    }
  }
  v15 = 33LL;
  Xp10BuildHuffmanEncodings(a1, (unsigned int)v150, 33, 8, (__int64)v153);
  v16 = 4;
  v17 = v153;
  do
  {
    v18 = *((_DWORD *)v4 + 3);
    v19 = *v17 & 0x1F;
    if ( v19 == v16 )
    {
      v20 = *((_DWORD *)v4 + 2);
      v21 = 8 - (v20 & 7);
      v22 = 1;
      if ( v20 + 1 <= v18 || (v22 = v18 - v20, v18 != v20) )
      {
        if ( v21 >= v22 )
          v21 = v22;
        v23 = v22 - v21;
        v24 = (_BYTE *)(*v4 + ((unsigned __int64)*((unsigned int *)v4 + 2) >> 3) + 1);
        v25 = 0;
        if ( (unsigned int)v23 >= 8 )
        {
          v26 = (unsigned __int64)(unsigned int)v23 >> 3;
          do
          {
            *v24 = v25;
            v23 = (unsigned int)(v23 - 8);
            v25 >>= 8;
            ++v24;
            --v26;
          }
          while ( v26 );
        }
        if ( (_DWORD)v23 )
          *v24 |= (unsigned __int8)v25 & byte_180148F10[4 * v23];
        *((_DWORD *)v4 + 2) += v22;
      }
    }
    else
    {
      v27 = *((_DWORD *)v4 + 2);
      v28 = (_BYTE *)(*v4 + ((unsigned __int64)v27 >> 3));
      v29 = 8 - (v27 & 7);
      v30 = 1;
      if ( v27 + 1 <= v18 || (v30 = v18 - v27, v18 != v27) )
      {
        v31 = v29;
        if ( v29 >= v30 )
          v31 = v30;
        *v28 |= (byte_180148F10[4 * v31] & 1) << (v27 & 7);
        v32 = v30 - (unsigned int)v31;
        v33 = v28 + 1;
        v34 = 1u >> v29;
        if ( (unsigned int)v32 >= 8 )
        {
          v35 = (unsigned __int64)(unsigned int)v32 >> 3;
          do
          {
            *v33 = v34;
            v32 = (unsigned int)(v32 - 8);
            v34 >>= 8;
            ++v33;
            --v35;
          }
          while ( v35 );
        }
        if ( (_DWORD)v32 )
          *v33 |= (unsigned __int8)v34 & byte_180148F10[4 * v32];
        *((_DWORD *)v4 + 2) += v30;
        v27 = *((_DWORD *)v4 + 2);
      }
      v36 = *((_DWORD *)v4 + 3);
      v37 = v27 & 7;
      v38 = (_BYTE *)(*v4 + ((unsigned __int64)v27 >> 3));
      v39 = 8 - v37;
      v40 = v27 + 3;
      if ( v19 <= v16 )
      {
        v48 = 3;
        if ( v40 <= v36 || (v48 = v36 - v27, v36 != v27) )
        {
          v49 = v39;
          if ( v39 >= v48 )
            v49 = v48;
          *v38 |= ((unsigned __int8)v19 & (unsigned __int8)byte_180148F10[4 * v49]) << v37;
          v50 = v48 - (unsigned int)v49;
          v51 = v38 + 1;
          v52 = v19 >> v39;
          if ( (unsigned int)v50 >= 8 )
          {
            v53 = (unsigned __int64)(unsigned int)v50 >> 3;
            do
            {
              *v51 = v52;
              v50 = (unsigned int)(v50 - 8);
              v52 >>= 8;
              ++v51;
              --v53;
            }
            while ( v53 );
          }
          if ( (_DWORD)v50 )
            *v51 |= (unsigned __int8)v52 & byte_180148F10[4 * v50];
          *((_DWORD *)v4 + 2) += v48;
        }
      }
      else
      {
        v41 = v19 - 1;
        v42 = 3;
        if ( v40 <= v36 || (v42 = v36 - v27, v36 != v27) )
        {
          v43 = v39;
          if ( v39 >= v42 )
            v43 = v42;
          *v38 |= ((unsigned __int8)v41 & (unsigned __int8)byte_180148F10[4 * v43]) << v37;
          v44 = v42 - (unsigned int)v43;
          v45 = v41 >> v39;
          v46 = v38 + 1;
          if ( (unsigned int)v44 >= 8 )
          {
            v47 = (unsigned __int64)(unsigned int)v44 >> 3;
            do
            {
              *v46 = v45;
              v44 = (unsigned int)(v44 - 8);
              v45 >>= 8;
              ++v46;
              --v47;
            }
            while ( v47 );
          }
          if ( (_DWORD)v44 )
            *v46 |= (unsigned __int8)v45 & byte_180148F10[4 * v44];
          *((_DWORD *)v4 + 2) += v42;
        }
      }
      v16 = v19;
    }
    ++v17;
    --v15;
  }
  while ( v15 );
  v54 = a3;
  v55 = 8;
  v147 = 8;
  v56 = 0;
  v145 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v57 = *(_DWORD *)(a2 + 4LL * v56) & 0x1F;
      if ( v57 )
      {
        v58 = *(_DWORD *)(a2 + 4LL * v56) & 0x1F;
        if ( v57 == v55 )
        {
          v58 = 30;
        }
        else
        {
          if ( v56 >= 0x10u )
          {
            v59 = *(_DWORD *)(a2 + 4LL * v56 - 64) & 0x1F;
            if ( v57 == v59 )
            {
              v58 = 31;
            }
            else if ( v57 == v59 + 1 )
            {
              v58 = 32;
            }
          }
          v147 = *(_DWORD *)(a2 + 4LL * v56) & 0x1F;
        }
        v60 = v58;
        v61 = *((_DWORD *)v4 + 2);
        v62 = 8 - (v61 & 7);
        v63 = (_BYTE *)(*v4 + ((unsigned __int64)v61 >> 3));
        v64 = v153[v60] & 0x1F;
        v65 = v153[v60] >> 5;
        if ( v61 + v64 <= *((_DWORD *)v4 + 3) || (v64 = *((_DWORD *)v4 + 3) - v61) != 0 )
        {
          v66 = v62;
          if ( v62 >= v64 )
            v66 = v64;
          *v63 |= ((unsigned __int8)v65 & (unsigned __int8)byte_180148F10[4 * v66]) << (v61 & 7);
          v67 = v64 - (unsigned int)v66;
          v68 = v65 >> v62;
          v69 = v63 + 1;
          if ( (unsigned int)v67 >= 8 )
          {
            v70 = (unsigned __int64)(unsigned int)v67 >> 3;
            do
            {
              *v69 = v68;
              v67 = (unsigned int)(v67 - 8);
              v68 >>= 8;
              ++v69;
              --v70;
            }
            while ( v70 );
          }
          if ( (_DWORD)v67 )
            *v69 |= (unsigned __int8)v68 & byte_180148F10[4 * v67];
          *((_DWORD *)v4 + 2) += v64;
        }
        v145 = ++v56;
        goto LABEL_178;
      }
      v71 = v56;
      if ( v56 < v54 )
      {
        do
        {
          if ( (*(_BYTE *)(a2 + 4LL * v56) & 0x1F) != 0 )
            break;
          ++v56;
        }
        while ( v56 < v54 );
        v4 = a4;
        v145 = v56;
      }
      if ( (unsigned __int16)(v56 ^ v71) >= 0x10u )
      {
        v72 = v154 & 0x1F;
        v73 = v154 >> 5;
        do
        {
          v74 = *((_DWORD *)v4 + 2);
          v75 = (_BYTE *)(*v4 + ((unsigned __int64)v74 >> 3));
          v76 = 8 - (v74 & 7);
          v77 = v72;
          if ( v74 + v72 <= *((_DWORD *)v4 + 3) || (v77 = *((_DWORD *)v4 + 3) - v74) != 0 )
          {
            v78 = v76;
            if ( v76 >= v77 )
              v78 = v77;
            *v75 |= ((unsigned __int8)v73 & (unsigned __int8)byte_180148F10[4 * v78]) << (v74 & 7);
            v79 = v77 - (unsigned int)v78;
            v80 = v73 >> v76;
            v81 = v75 + 1;
            if ( (unsigned int)v79 >= 8 )
            {
              v82 = (unsigned __int64)(unsigned int)v79 >> 3;
              do
              {
                *v81 = v80;
                v79 = (unsigned int)(v79 - 8);
                v80 >>= 8;
                ++v81;
                --v82;
              }
              while ( v82 );
            }
            if ( (_DWORD)v79 )
              *v81 |= (unsigned __int8)v80 & byte_180148F10[4 * v79];
            *((_DWORD *)v4 + 2) += v77;
          }
          v71 = (v71 & 0xFFF0) + 16;
        }
        while ( (unsigned __int16)(v56 ^ v71) >= 0x10u );
        v54 = a3;
      }
      v83 = v56 - v71;
      if ( v56 == v71 )
        goto LABEL_178;
      if ( v83 < 5 )
      {
        v84 = v153[0] & 0x1F;
        v85 = v153[0] >> 5;
        do
        {
          v86 = *((_DWORD *)v4 + 2);
          v87 = (_BYTE *)(*v4 + ((unsigned __int64)v86 >> 3));
          v88 = 8 - (v86 & 7);
          v89 = v84;
          if ( v86 + v84 <= *((_DWORD *)v4 + 3) || (v89 = *((_DWORD *)v4 + 3) - v86) != 0 )
          {
            v90 = v88;
            if ( v88 >= v89 )
              v90 = v89;
            *v87 |= ((unsigned __int8)v85 & (unsigned __int8)byte_180148F10[4 * v90]) << (v86 & 7);
            v91 = v89 - (unsigned int)v90;
            v92 = v85 >> v88;
            v93 = v87 + 1;
            if ( (unsigned int)v91 >= 8 )
            {
              v94 = (unsigned __int64)(unsigned int)v91 >> 3;
              do
              {
                *v93 = v92;
                v91 = (unsigned int)(v91 - 8);
                v92 >>= 8;
                ++v93;
                --v94;
              }
              while ( v94 );
            }
            if ( (_DWORD)v91 )
              *v93 |= (unsigned __int8)v92 & byte_180148F10[4 * v91];
            *((_DWORD *)v4 + 2) += v89;
          }
          --v83;
        }
        while ( v83 );
        v56 = v145;
        v54 = a3;
        goto LABEL_178;
      }
      v95 = *((_DWORD *)v4 + 2);
      v96 = v155 & 0x1F;
      v97 = (_BYTE *)(*v4 + ((unsigned __int64)v95 >> 3));
      v98 = v155 >> 5;
      v99 = 8 - (v95 & 7);
      if ( v95 + v96 <= *((_DWORD *)v4 + 3) || (v96 = *((_DWORD *)v4 + 3) - v95) != 0 )
      {
        v100 = v99;
        if ( v99 >= v96 )
          v100 = v96;
        *v97 |= ((unsigned __int8)v98 & (unsigned __int8)byte_180148F10[4 * v100]) << (v95 & 7);
        v101 = v96 - (unsigned int)v100;
        v102 = v98 >> v99;
        v103 = v97 + 1;
        if ( (unsigned int)v101 >= 8 )
        {
          v104 = (unsigned __int64)(unsigned int)v101 >> 3;
          do
          {
            *v103 = v102;
            v101 = (unsigned int)(v101 - 8);
            v102 >>= 8;
            ++v103;
            --v104;
          }
          while ( v104 );
        }
        if ( (_DWORD)v101 )
          *v103 |= (unsigned __int8)v102 & byte_180148F10[4 * v101];
        *((_DWORD *)v4 + 2) += v96;
        v95 = *((_DWORD *)v4 + 2);
      }
      v105 = *v4;
      v106 = *((_DWORD *)v4 + 3);
      v107 = v95 & 7;
      v108 = 8 - v107;
      v109 = (_BYTE *)(*v4 + ((unsigned __int64)v95 >> 3));
      v110 = v83 - 5;
      v111 = v95 + 2;
      v112 = 2;
      if ( v110 >= 3 )
        break;
      if ( v111 > v106 )
      {
        v112 = v106 - v95;
        if ( v106 == v95 )
          goto LABEL_178;
      }
      v113 = v108;
      if ( v108 >= v112 )
        v113 = v112;
      *v109 |= ((unsigned __int8)v110 & (unsigned __int8)byte_180148F10[4 * v113]) << v107;
      v114 = v112 - (unsigned int)v113;
      v115 = v110 >> v108;
      v116 = v109 + 1;
      if ( (unsigned int)v114 >= 8 )
      {
        v117 = (unsigned __int64)(unsigned int)v114 >> 3;
        do
        {
          *v116 = v115;
          v114 = (unsigned int)(v114 - 8);
          v115 >>= 8;
          ++v116;
          --v117;
        }
        while ( v117 );
      }
      if ( (_DWORD)v114 )
      {
        v118 = byte_180148F10[4 * v114];
LABEL_176:
        *v116 |= (unsigned __int8)v115 & v118;
      }
LABEL_177:
      *((_DWORD *)v4 + 2) += v112;
LABEL_178:
      v55 = v147;
      if ( v56 >= v54 )
        return 0LL;
    }
    if ( v111 <= v106 || (v112 = v106 - v95, v106 != v95) )
    {
      v119 = v108;
      if ( v108 >= v112 )
        v119 = v112;
      *v109 |= (byte_180148F10[4 * v119] & 3) << v107;
      v120 = v112 - (unsigned int)v119;
      v121 = v109 + 1;
      v122 = 3u >> v108;
      if ( (unsigned int)v120 >= 8 )
      {
        v123 = (unsigned __int64)(unsigned int)v120 >> 3;
        do
        {
          *v121 = v122;
          v120 = (unsigned int)(v120 - 8);
          v122 >>= 8;
          ++v121;
          --v123;
        }
        while ( v123 );
      }
      if ( (_DWORD)v120 )
        *v121 |= (unsigned __int8)v122 & byte_180148F10[4 * v120];
      *((_DWORD *)v4 + 2) += v112;
      v95 = *((_DWORD *)v4 + 2);
      v105 = *v4;
      v106 = *((_DWORD *)v4 + 3);
    }
    v124 = v110 - 3;
    v125 = v106;
    v126 = v105;
    if ( v124 >= 7 )
    {
      v127 = v124 / 7;
      do
      {
        v128 = 3;
        v129 = (_BYTE *)(v126 + ((unsigned __int64)v95 >> 3));
        v130 = v95 & 7;
        v106 = v125;
        v105 = v126;
        v131 = 8 - v130;
        if ( v95 + 3 <= v125 || (v132 = v95, v128 = v125 - v95, v125 != v95) )
        {
          v133 = v131;
          if ( v131 >= v128 )
            v133 = v128;
          *v129 |= (byte_180148F10[4 * v133] & 7) << v130;
          v134 = v128 - (unsigned int)v133;
          v135 = v129 + 1;
          v136 = 7u >> v131;
          if ( (unsigned int)v134 >= 8 )
          {
            v137 = (unsigned __int64)(unsigned int)v134 >> 3;
            do
            {
              *v135 = v136;
              v134 = (unsigned int)(v134 - 8);
              v136 >>= 8;
              ++v135;
              --v137;
            }
            while ( v137 );
          }
          if ( (_DWORD)v134 )
            *v135 |= (unsigned __int8)v136 & byte_180148F10[4 * v134];
          v105 = *v4;
          *((_DWORD *)v4 + 2) += v128;
          v126 = v105;
          v106 = *((_DWORD *)v4 + 3);
          v125 = v106;
          v132 = *((_DWORD *)v4 + 2);
        }
        v124 -= 7;
        v95 = v132;
        --v127;
      }
      while ( v127 );
      v56 = v145;
      v54 = a3;
    }
    v112 = 3;
    v138 = (_BYTE *)(v105 + ((unsigned __int64)v95 >> 3));
    v139 = v95 & 7;
    v140 = 8 - v139;
    if ( v95 + 3 > v106 )
    {
      v112 = v106 - v95;
      if ( v106 == v95 )
        goto LABEL_178;
    }
    v141 = v140;
    if ( v140 >= v112 )
      v141 = v112;
    *v138 |= ((unsigned __int8)v124 & (unsigned __int8)byte_180148F10[4 * v141]) << v139;
    v142 = v112 - (unsigned int)v141;
    v115 = v124 >> v140;
    v116 = v138 + 1;
    if ( (unsigned int)v142 >= 8 )
    {
      v143 = (unsigned __int64)(unsigned int)v142 >> 3;
      do
      {
        *v116 = v115;
        v142 = (unsigned int)(v142 - 8);
        v115 >>= 8;
        ++v116;
        --v143;
      }
      while ( v143 );
    }
    if ( !(_DWORD)v142 )
      goto LABEL_177;
    v118 = byte_180148F10[4 * v142];
    goto LABEL_176;
  }
  return 0LL;
}
