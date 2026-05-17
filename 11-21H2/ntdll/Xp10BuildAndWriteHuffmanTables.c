/*
 * XREFs of Xp10BuildAndWriteHuffmanTables @ 0x180119BB4
 * Callers:
 *     Xp10BuildAndWriteHuffmanEncodings @ 0x1801197E8 (Xp10BuildAndWriteHuffmanEncodings.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     Xp10BuildHuffmanEncodings @ 0x18011A84C (Xp10BuildHuffmanEncodings.c)
 */

__int64 __fastcall Xp10BuildAndWriteHuffmanTables(int a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  int v8; // r9d
  unsigned __int16 v9; // cx
  int v10; // edx
  int v11; // r8d
  int v12; // eax
  unsigned __int16 v13; // dx
  unsigned int v14; // edx
  __int64 v15; // r15
  unsigned int v16; // r14d
  _DWORD *v17; // r12
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // ecx
  unsigned int v21; // edi
  _BYTE *v22; // r8
  unsigned int v23; // r9d
  unsigned int v24; // esi
  unsigned int v25; // edx
  _BYTE *v26; // r8
  __int64 v27; // rax
  unsigned int v28; // r9d
  unsigned __int64 v29; // rcx
  unsigned int v30; // r10d
  __int64 v31; // rdx
  __int64 v32; // rax
  _BYTE *v33; // r8
  unsigned int v34; // edx
  unsigned __int64 v35; // rcx
  unsigned int v36; // ecx
  int v37; // edi
  _BYTE *v38; // r8
  unsigned int v39; // r11d
  unsigned int v40; // edx
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
  int v54; // r12d
  unsigned __int16 v55; // r15
  unsigned int v56; // r13d
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
  unsigned __int16 v71; // r9
  int v72; // esi
  unsigned int v73; // edx
  unsigned int v74; // r14d
  _BYTE *v75; // r8
  int v76; // ecx
  unsigned int v77; // r11d
  unsigned int v78; // edi
  __int64 v79; // rax
  unsigned int v80; // r10d
  __int64 v81; // rax
  _BYTE *v82; // r8
  unsigned __int64 v83; // rcx
  unsigned int v84; // r10d
  unsigned int v85; // edx
  int v86; // esi
  unsigned int v87; // r14d
  _BYTE *v88; // r8
  int v89; // ecx
  unsigned int v90; // r11d
  unsigned int v91; // edi
  __int64 v92; // rax
  __int64 v93; // rax
  unsigned int v94; // r9d
  _BYTE *v95; // r8
  unsigned __int64 v96; // rcx
  unsigned __int64 v98; // r8
  unsigned int v99; // edi
  __int64 v100; // rdx
  int v101; // ecx
  unsigned int v102; // r11d
  _BYTE *v103; // r9
  unsigned int v104; // esi
  __int64 v105; // rax
  __int64 v106; // rax
  unsigned int v107; // r11d
  _BYTE *v108; // r9
  unsigned __int64 v109; // rcx
  unsigned int v110; // ecx
  unsigned int v111; // eax
  int v112; // esi
  _BYTE *v113; // r9
  unsigned int v114; // edi
  unsigned int v115; // r10d
  unsigned int v116; // r11d
  __int64 v117; // rax
  unsigned int v118; // r10d
  __int64 v119; // rax
  _BYTE *v120; // r9
  unsigned __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rax
  _BYTE *v124; // r9
  unsigned int v125; // edx
  unsigned __int64 v126; // rcx
  unsigned int v127; // r10d
  __int64 v128; // r14
  unsigned int v129; // r11d
  int v130; // edi
  _BYTE *v131; // r9
  unsigned int v132; // esi
  int v133; // eax
  __int64 v134; // rax
  __int64 v135; // rax
  _BYTE *v136; // r9
  unsigned int v137; // edx
  unsigned __int64 v138; // rcx
  _BYTE *v139; // r9
  int v140; // esi
  unsigned int v141; // edi
  __int64 v142; // rax
  unsigned __int64 v143; // rcx
  int v144; // [rsp+30h] [rbp-D0h]
  _DWORD v147[36]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v148[36]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v147, 0, 0x84uLL);
  memset(v148, 0, 0x84uLL);
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
      ++v147[v11];
      ++v9;
    }
    else
    {
      v13 = v9;
      while ( v9 < a3 && (*(_BYTE *)(a2 + 4LL * v9) & 0x1F) == 0 )
        ++v9;
      while ( (unsigned __int16)(v9 ^ v13) >= 0x10u )
      {
        ++v147[28];
        v13 = (v13 & 0xFFF0) + 16;
      }
      v14 = v9 - v13;
      if ( v14 )
      {
        if ( v14 >= 5 )
          ++v147[29];
        else
          v147[0] += v14;
      }
    }
  }
  v15 = 33LL;
  Xp10BuildHuffmanEncodings(a1, (unsigned int)v147, 33, 8, (__int64)v148);
  v16 = 4;
  v17 = v148;
  do
  {
    v18 = *((_DWORD *)a4 + 2);
    v19 = *a4;
    v20 = *((_DWORD *)a4 + 3);
    v21 = v18 + 1;
    v22 = (_BYTE *)(*a4 + ((unsigned __int64)v18 >> 3));
    v23 = 8 - (v18 & 7);
    v24 = *v17 & 0x1F;
    if ( v24 == v16 )
    {
      v25 = 1;
      if ( v21 <= v20 || (v25 = v20 - v18, v20 != v18) )
      {
        if ( v23 >= v25 )
          v23 = v25;
        v26 = v22 + 1;
        v27 = v25 - v23;
        v28 = 0;
        if ( (unsigned int)v27 >= 8 )
        {
          v29 = (unsigned __int64)(unsigned int)v27 >> 3;
          do
          {
            *v26 = v28;
            v27 = (unsigned int)(v27 - 8);
            v28 >>= 8;
            ++v26;
            --v29;
          }
          while ( v29 );
        }
        if ( (_DWORD)v27 )
          *v26 |= (unsigned __int8)v28 & byte_18013CB40[4 * v27];
        *((_DWORD *)a4 + 2) += v25;
      }
    }
    else
    {
      v30 = 1;
      if ( v21 <= v20 || (v30 = v20 - v18, v20 != v18) )
      {
        v31 = v23;
        if ( v23 >= v30 )
          v31 = v30;
        *v22 |= (byte_18013CB40[4 * v31] & 1) << (v18 & 7);
        v32 = v30 - (unsigned int)v31;
        v33 = v22 + 1;
        v34 = 1u >> v23;
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
          *v33 |= (unsigned __int8)v34 & byte_18013CB40[4 * v32];
        *((_DWORD *)a4 + 2) += v30;
        v18 = *((_DWORD *)a4 + 2);
        v19 = *a4;
      }
      v36 = *((_DWORD *)a4 + 3);
      v37 = v18 & 7;
      v38 = (_BYTE *)(v19 + ((unsigned __int64)v18 >> 3));
      v39 = 8 - v37;
      v40 = v18 + 3;
      if ( v24 <= v16 )
      {
        v48 = 3;
        if ( v40 <= v36 || (v48 = v36 - v18, v36 != v18) )
        {
          v49 = v39;
          if ( v39 >= v48 )
            v49 = v48;
          *v38 |= ((unsigned __int8)v24 & (unsigned __int8)byte_18013CB40[4 * v49]) << v37;
          v50 = v48 - (unsigned int)v49;
          v51 = v38 + 1;
          v52 = v24 >> v39;
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
            *v51 |= (unsigned __int8)v52 & byte_18013CB40[4 * v50];
          *((_DWORD *)a4 + 2) += v48;
        }
      }
      else
      {
        v41 = v24 - 1;
        v42 = 3;
        if ( v40 <= v36 || (v42 = v36 - v18, v36 != v18) )
        {
          v43 = v39;
          if ( v39 >= v42 )
            v43 = v42;
          *v38 |= ((unsigned __int8)v41 & (unsigned __int8)byte_18013CB40[4 * v43]) << v37;
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
            *v46 |= (unsigned __int8)v45 & byte_18013CB40[4 * v44];
          *((_DWORD *)a4 + 2) += v42;
        }
      }
      v16 = v24;
    }
    ++v17;
    --v15;
  }
  while ( v15 );
  v54 = 8;
  v55 = 0;
  v56 = a3;
  v144 = 8;
  while ( v55 < v56 )
  {
    v57 = *(_DWORD *)(a2 + 4LL * v55) & 0x1F;
    if ( v57 )
    {
      v58 = *(_DWORD *)(a2 + 4LL * v55) & 0x1F;
      if ( v57 == v54 )
      {
        v58 = 30;
      }
      else
      {
        if ( v55 >= 0x10u )
        {
          v59 = *(_DWORD *)(a2 + 4LL * v55 - 64) & 0x1F;
          if ( v57 == v59 )
          {
            v58 = 31;
          }
          else if ( v57 == v59 + 1 )
          {
            v58 = 32;
          }
        }
        v54 = *(_DWORD *)(a2 + 4LL * v55) & 0x1F;
        v144 = v54;
      }
      v60 = v58;
      v61 = *((_DWORD *)a4 + 2);
      v62 = 8 - (v61 & 7);
      v63 = (_BYTE *)(*a4 + ((unsigned __int64)v61 >> 3));
      v64 = v148[v60] & 0x1F;
      v65 = v148[v60] >> 5;
      if ( v61 + v64 <= *((_DWORD *)a4 + 3) || (v64 = *((_DWORD *)a4 + 3) - v61) != 0 )
      {
        v66 = v62;
        if ( v62 >= v64 )
          v66 = v64;
        *v63 |= ((unsigned __int8)v65 & (unsigned __int8)byte_18013CB40[4 * v66]) << (v61 & 7);
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
          *v69 |= (unsigned __int8)v68 & byte_18013CB40[4 * v67];
        *((_DWORD *)a4 + 2) += v64;
      }
      ++v55;
    }
    else
    {
      v71 = v55;
      while ( v55 < v56 && (*(_BYTE *)(a2 + 4LL * v55) & 0x1F) == 0 )
        ++v55;
      if ( (unsigned __int16)(v55 ^ v71) >= 0x10u )
      {
        v72 = v148[28] & 0x1F;
        v73 = *((_DWORD *)a4 + 2);
        v74 = v148[28] >> 5;
        do
        {
          v75 = (_BYTE *)(*a4 + ((unsigned __int64)v73 >> 3));
          v76 = v73 & 7;
          v77 = v72;
          v78 = 8 - v76;
          if ( v73 + v72 <= *((_DWORD *)a4 + 3) || (v77 = *((_DWORD *)a4 + 3) - v73) != 0 )
          {
            v79 = v78;
            if ( v78 >= v77 )
              v79 = v77;
            *v75 |= ((unsigned __int8)v74 & (unsigned __int8)byte_18013CB40[4 * v79]) << v76;
            v80 = v74 >> v78;
            v81 = v77 - (unsigned int)v79;
            v82 = v75 + 1;
            if ( (unsigned int)v81 >= 8 )
            {
              v83 = (unsigned __int64)(unsigned int)v81 >> 3;
              do
              {
                *v82 = v80;
                v81 = (unsigned int)(v81 - 8);
                v80 >>= 8;
                ++v82;
                --v83;
              }
              while ( v83 );
            }
            if ( (_DWORD)v81 )
              *v82 |= (unsigned __int8)v80 & byte_18013CB40[4 * v81];
            *((_DWORD *)a4 + 2) += v77;
            v73 = *((_DWORD *)a4 + 2);
          }
          v71 = (v71 & 0xFFF0) + 16;
        }
        while ( (unsigned __int16)(v55 ^ v71) >= 0x10u );
        v54 = v144;
        v56 = a3;
      }
      v84 = v55 - v71;
      if ( v55 == v71 )
        continue;
      v85 = *((_DWORD *)a4 + 2);
      if ( v84 >= 5 )
      {
        v98 = *((unsigned int *)a4 + 2);
        v99 = v148[29] & 0x1F;
        v100 = *a4;
        v101 = a4[1] & 7;
        v102 = v148[29] >> 5;
        v103 = (_BYTE *)(*a4 + (v98 >> 3));
        v104 = 8 - v101;
        if ( (unsigned int)v98 + v99 <= *((_DWORD *)a4 + 3) || (v99 = *((_DWORD *)a4 + 3) - v98) != 0 )
        {
          v105 = v104;
          if ( v104 >= v99 )
            v105 = v99;
          *v103 |= ((unsigned __int8)v102 & (unsigned __int8)byte_18013CB40[4 * v105]) << v101;
          v106 = v99 - (unsigned int)v105;
          v107 = v102 >> v104;
          v108 = v103 + 1;
          if ( (unsigned int)v106 >= 8 )
          {
            v109 = (unsigned __int64)(unsigned int)v106 >> 3;
            do
            {
              *v108 = v107;
              v106 = (unsigned int)(v106 - 8);
              v107 >>= 8;
              ++v108;
              --v109;
            }
            while ( v109 );
          }
          if ( (_DWORD)v106 )
            *v108 |= (unsigned __int8)v107 & byte_18013CB40[4 * v106];
          *((_DWORD *)a4 + 2) += v99;
          LODWORD(v98) = *((_DWORD *)a4 + 2);
          v100 = *a4;
        }
        v110 = *((_DWORD *)a4 + 3);
        v111 = v98 + 2;
        v112 = v98 & 7;
        v113 = (_BYTE *)(v100 + ((unsigned __int64)(unsigned int)v98 >> 3));
        v114 = 8 - v112;
        v115 = v84 - 5;
        v116 = 2;
        if ( v115 >= 3 )
        {
          if ( v111 <= v110 || (v116 = v110 - v98, v110 != (_DWORD)v98) )
          {
            v122 = v114;
            if ( v114 >= v116 )
              v122 = v116;
            *v113 |= (byte_18013CB40[4 * v122] & 3) << v112;
            v123 = v116 - (unsigned int)v122;
            v124 = v113 + 1;
            v125 = 3u >> v114;
            if ( (unsigned int)v123 >= 8 )
            {
              v126 = (unsigned __int64)(unsigned int)v123 >> 3;
              do
              {
                *v124 = v125;
                v123 = (unsigned int)(v123 - 8);
                v125 >>= 8;
                ++v124;
                --v126;
              }
              while ( v126 );
            }
            if ( (_DWORD)v123 )
              *v124 |= (unsigned __int8)v125 & byte_18013CB40[4 * v123];
            *((_DWORD *)a4 + 2) += v116;
            LODWORD(v98) = *((_DWORD *)a4 + 2);
            v100 = *a4;
            v110 = *((_DWORD *)a4 + 3);
          }
          v127 = v115 - 3;
          if ( v127 >= 7 )
          {
            v128 = v127 / 7;
            do
            {
              v100 = *a4;
              v110 = *((_DWORD *)a4 + 3);
              v129 = 3;
              v130 = v98 & 7;
              v131 = (_BYTE *)(*a4 + ((unsigned __int64)(unsigned int)v98 >> 3));
              v132 = 8 - v130;
              if ( (int)v98 + 3 <= v110 || (v133 = v98, v129 = v110 - v98, v110 != (_DWORD)v98) )
              {
                v134 = v132;
                if ( v132 >= v129 )
                  v134 = v129;
                *v131 |= (byte_18013CB40[4 * v134] & 7) << v130;
                v135 = v129 - (unsigned int)v134;
                v136 = v131 + 1;
                v137 = 7u >> v132;
                if ( (unsigned int)v135 >= 8 )
                {
                  v138 = (unsigned __int64)(unsigned int)v135 >> 3;
                  do
                  {
                    *v136 = v137;
                    v135 = (unsigned int)(v135 - 8);
                    v137 >>= 8;
                    ++v136;
                    --v138;
                  }
                  while ( v138 );
                }
                if ( (_DWORD)v135 )
                  *v136 |= (unsigned __int8)v137 & byte_18013CB40[4 * v135];
                *((_DWORD *)a4 + 2) += v129;
                v133 = *((_DWORD *)a4 + 2);
                v100 = *a4;
                v110 = *((_DWORD *)a4 + 3);
              }
              v127 -= 7;
              LODWORD(v98) = v133;
              --v128;
            }
            while ( v128 );
            v54 = v144;
            v56 = a3;
          }
          v116 = 3;
          v139 = (_BYTE *)(v100 + ((unsigned __int64)(unsigned int)v98 >> 3));
          v140 = v98 & 7;
          v141 = 8 - v140;
          if ( (int)v98 + 3 > v110 )
          {
            v116 = v110 - v98;
            if ( v110 == (_DWORD)v98 )
              continue;
          }
          v142 = v141;
          if ( v141 >= v116 )
            v142 = v116;
          *v139 |= ((unsigned __int8)v127 & (unsigned __int8)byte_18013CB40[4 * v142]) << v140;
          v118 = v127 >> v141;
          v119 = v116 - (unsigned int)v142;
          v120 = v139 + 1;
          if ( (unsigned int)v119 >= 8 )
          {
            v143 = (unsigned __int64)(unsigned int)v119 >> 3;
            do
            {
              *v120 = v118;
              v119 = (unsigned int)(v119 - 8);
              v118 >>= 8;
              ++v120;
              --v143;
            }
            while ( v143 );
          }
          goto LABEL_143;
        }
        if ( v111 <= v110 || (v116 = v110 - v98, v110 != (_DWORD)v98) )
        {
          v117 = v114;
          if ( v114 >= v116 )
            v117 = v116;
          *v113 |= ((unsigned __int8)v115 & (unsigned __int8)byte_18013CB40[4 * v117]) << v112;
          v118 = v115 >> v114;
          v119 = v116 - (unsigned int)v117;
          v120 = v113 + 1;
          if ( (unsigned int)v119 >= 8 )
          {
            v121 = (unsigned __int64)(unsigned int)v119 >> 3;
            do
            {
              *v120 = v118;
              v119 = (unsigned int)(v119 - 8);
              v118 >>= 8;
              ++v120;
              --v121;
            }
            while ( v121 );
          }
LABEL_143:
          if ( (_DWORD)v119 )
            *v120 |= (unsigned __int8)v118 & byte_18013CB40[4 * v119];
          *((_DWORD *)a4 + 2) += v116;
        }
      }
      else
      {
        v86 = v148[0] & 0x1F;
        v87 = v148[0] >> 5;
        do
        {
          v88 = (_BYTE *)(*a4 + ((unsigned __int64)v85 >> 3));
          v89 = v85 & 7;
          v90 = v86;
          v91 = 8 - v89;
          if ( v85 + v86 <= *((_DWORD *)a4 + 3) || (v90 = *((_DWORD *)a4 + 3) - v85) != 0 )
          {
            v92 = v91;
            if ( v91 >= v90 )
              v92 = v90;
            *v88 |= ((unsigned __int8)v87 & (unsigned __int8)byte_18013CB40[4 * v92]) << v89;
            v93 = v90 - (unsigned int)v92;
            v94 = v87 >> v91;
            v95 = v88 + 1;
            if ( (unsigned int)v93 >= 8 )
            {
              v96 = (unsigned __int64)(unsigned int)v93 >> 3;
              do
              {
                *v95 = v94;
                v93 = (unsigned int)(v93 - 8);
                v94 >>= 8;
                ++v95;
                --v96;
              }
              while ( v96 );
            }
            if ( (_DWORD)v93 )
              *v95 |= (unsigned __int8)v94 & byte_18013CB40[4 * v93];
            *((_DWORD *)a4 + 2) += v90;
            v85 = *((_DWORD *)a4 + 2);
          }
          --v84;
        }
        while ( v84 );
        v54 = v144;
      }
    }
  }
  return 0LL;
}
