/*
 * XREFs of CreateHalftoneBrushPat @ 0x1C025F874
 * Callers:
 *     HT_CreateHalftoneBrush @ 0x1C025DF88 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     CachedHalftonePattern @ 0x1C0093E60 (CachedHalftonePattern.c)
 *     ComputeRGBLUTAA @ 0x1C0094050 (ComputeRGBLUTAA.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ComputeBGRMappingTable @ 0x1C025E794 (ComputeBGRMappingTable.c)
 */

__int64 __fastcall CreateHalftoneBrushPat(__int64 a1, __int128 *a2, __int64 a3, HSEMAPHORE *a4, int a5)
{
  __int64 v8; // r12
  unsigned int v10; // edi
  __int128 v11; // xmm0
  unsigned int v12; // r14d
  int v13; // ebx
  int v14; // edi
  __int64 v15; // rcx
  unsigned int v16; // r15d
  unsigned int v17; // r12d
  unsigned int v18; // r13d
  unsigned __int8 v19; // cl
  __int64 v20; // rcx
  __int64 v21; // rdx
  HSEMAPHORE *v22; // rax
  HSEMAPHORE *v23; // r8
  _BYTE *v24; // r11
  unsigned int v25; // r10d
  __int64 v26; // r14
  unsigned int v27; // r9d
  unsigned __int16 *v28; // r8
  char v29; // dl
  unsigned int v30; // ecx
  HSEMAPHORE *v31; // r9
  _BYTE *v32; // r11
  unsigned int v33; // r10d
  unsigned __int16 *v34; // r9
  unsigned int v35; // eax
  char v36; // dl
  unsigned int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rdx
  HSEMAPHORE *v40; // rax
  HSEMAPHORE *v41; // r8
  _BYTE *v42; // r11
  unsigned int v43; // r10d
  __int64 v44; // r14
  unsigned int v45; // r9d
  unsigned __int16 *v46; // r8
  char v47; // dl
  unsigned int v48; // ecx
  unsigned int v49; // r15d
  unsigned int v50; // r13d
  char *v51; // r12
  unsigned int v52; // r14d
  unsigned int v53; // eax
  __int64 v54; // rbx
  HSEMAPHORE *v55; // r14
  int k; // edi
  char v57; // r10
  __int64 v58; // rcx
  unsigned int v59; // eax
  __int64 v60; // rdx
  int v61; // r14d
  unsigned __int16 *v62; // r11
  unsigned int v63; // eax
  unsigned __int16 *v64; // r8
  unsigned int v65; // ecx
  unsigned __int16 *v66; // rdi
  int v67; // esi
  int v68; // eax
  unsigned int v69; // edx
  unsigned int v70; // r8d
  char v71; // r11
  unsigned int v72; // r9d
  int v73; // eax
  char v74; // r11
  _BYTE *v75; // rdx
  unsigned int v76; // r8d
  char v77; // r9
  __int64 v78; // rax
  unsigned int v79; // r12d
  __int64 v80; // rcx
  int v81; // r14d
  unsigned __int16 *v82; // r15
  unsigned int v83; // r12d
  unsigned __int16 *v84; // r10
  _BYTE *v85; // r13
  unsigned int j; // r11d
  char v87; // dl
  int v88; // eax
  unsigned int v89; // ecx
  int v90; // r11d
  int v91; // eax
  unsigned __int16 *v92; // r10
  unsigned int v93; // edx
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // r11
  __int64 v97; // r8
  _BYTE *v98; // r9
  unsigned int v99; // r10d
  __int64 v100; // r14
  unsigned __int16 *v101; // r8
  int v102; // eax
  unsigned __int64 v103; // rdx
  __int64 v104; // rax
  unsigned int v105; // r10d
  __int64 v106; // rcx
  int v107; // r14d
  unsigned __int16 *v108; // r11
  unsigned int v109; // r10d
  unsigned __int16 *v110; // r9
  unsigned __int64 v111; // rdi
  _BYTE *v112; // r14
  unsigned __int64 v113; // r11
  unsigned __int64 v114; // rsi
  int v115; // eax
  unsigned __int64 v116; // r8
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // r11
  __int64 v120; // r8
  _BYTE *v121; // r9
  unsigned int v122; // r10d
  unsigned __int16 *v123; // r8
  int v124; // eax
  unsigned __int64 v125; // rdx
  __int64 v126; // rcx
  unsigned int v127; // r10d
  __int64 v128; // rdx
  int v129; // r14d
  unsigned __int16 *v130; // rax
  unsigned int v131; // r10d
  unsigned __int16 *v132; // r9
  HSEMAPHORE *v133; // r11
  unsigned int i; // r8d
  unsigned int v135; // edx
  int v136; // eax
  int v137; // ecx
  int v139; // r10d
  __int64 v140; // r15
  __int64 v141; // r11
  __int64 v142; // rdx
  _BYTE *v143; // r8
  unsigned int v144; // r9d
  unsigned __int16 *v145; // rdx
  int v146; // eax
  __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // r11
  __int64 v150; // r8
  _BYTE *v151; // r9
  unsigned int v152; // r10d
  __int64 v153; // r14
  unsigned __int16 *v154; // r8
  int v155; // eax
  unsigned __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // rdx
  unsigned __int64 v159; // rax
  unsigned __int64 v160; // r9
  _BYTE *v161; // r10
  unsigned int v162; // r11d
  unsigned __int16 *v163; // r9
  int v164; // eax
  char v165; // dl
  unsigned int v166; // ecx
  unsigned int v167; // [rsp+34h] [rbp-CCh]
  int v168; // [rsp+34h] [rbp-CCh]
  int v169; // [rsp+34h] [rbp-CCh]
  int v170; // [rsp+34h] [rbp-CCh]
  int v171; // [rsp+38h] [rbp-C8h]
  unsigned int v172; // [rsp+38h] [rbp-C8h]
  unsigned int v173; // [rsp+38h] [rbp-C8h]
  unsigned int v174; // [rsp+38h] [rbp-C8h]
  int v175; // [rsp+38h] [rbp-C8h]
  unsigned int v176; // [rsp+3Ch] [rbp-C4h]
  unsigned int v177; // [rsp+3Ch] [rbp-C4h]
  int v178; // [rsp+3Ch] [rbp-C4h]
  int v179; // [rsp+3Ch] [rbp-C4h]
  __int16 v180; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v181; // [rsp+46h] [rbp-BAh]
  __int128 v182; // [rsp+48h] [rbp-B8h]
  __int64 v183; // [rsp+58h] [rbp-A8h]
  unsigned int v184; // [rsp+60h] [rbp-A0h]
  HSEMAPHORE *v185; // [rsp+68h] [rbp-98h]
  _BYTE *v186; // [rsp+70h] [rbp-90h]
  __int64 v187; // [rsp+78h] [rbp-88h]
  unsigned int v188; // [rsp+80h] [rbp-80h]
  _QWORD v189[10]; // [rsp+90h] [rbp-70h] BYREF
  int v190; // [rsp+E0h] [rbp-20h]
  unsigned int v191; // [rsp+E4h] [rbp-1Ch]
  int v192; // [rsp+E8h] [rbp-18h]
  unsigned int v193; // [rsp+ECh] [rbp-14h]
  unsigned __int16 *v194; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v195; // [rsp+F8h] [rbp-8h]
  unsigned int v196; // [rsp+100h] [rbp+0h]
  unsigned int v197; // [rsp+104h] [rbp+4h]

  v186 = (_BYTE *)a3;
  v185 = (HSEMAPHORE *)a1;
  v8 = 0LL;
  memset(v189, 0, 0x48uLL);
  v180 = 0;
  v181 = 0;
  ComputeRGBLUTAA((_DWORD *)a1, (__int128 *)a3, (_DWORD *)(a1 + 3956));
  v10 = -10005;
  if ( (unsigned int)ComputeBGRMappingTable(a1, a3, a2, &v180) == 1 )
  {
    v193 = CachedHalftonePattern(a1, a3, (__int64)v189, 0, 0, 0);
    v10 = v193;
    if ( (int)v193 > 0 )
    {
      v11 = *(_OWORD *)(a1 + 3960);
      v12 = *(unsigned __int16 *)(a1 + 166);
      v13 = *(_DWORD *)(a3 + 56);
      v14 = *(unsigned __int16 *)(a1 + 170);
      v167 = v12;
      v183 = *(_QWORD *)(a1 + 3976);
      v182 = v11;
      if ( (v13 & 0x400000) != 0 )
        v8 = (__int64)*(&p8BPPXlate + BYTE12(v182));
      v15 = a1 + 548;
      v171 = v13 & 0x2000000;
      if ( (v13 & 0x2000000) == 0 )
        v15 = v8;
      v187 = v15;
      v16 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)v180 + 3984);
      v17 = *(_DWORD *)(a1 + 4LL * ((unsigned int)HIBYTE(v180) + 256) + 3984);
      v18 = *(_DWORD *)(a1 + 4LL * ((unsigned int)v181 + 512) + 3984);
      EngReleaseSemaphore(v185[1]);
      v19 = v186[31];
      if ( v19 > 0xF9u )
      {
        if ( v19 == 0xFA )
        {
          if ( v14 )
          {
            if ( v171 )
            {
              v147 = SLODWORD(v189[3]);
              v148 = a5;
              v149 = v189[0];
              do
              {
                v150 = v149;
                v151 = a4;
                v149 += v147;
                a4 = (HSEMAPHORE *)((char *)a4 + v148);
                --v14;
                v152 = v12;
                if ( v12 )
                {
                  v153 = v187;
                  v154 = (unsigned __int16 *)(v150 + 2);
                  do
                  {
                    v155 = *v154;
                    v156 = (v16 - *(v154 - 1)) & 0x30000 | (unsigned __int64)((v18 - v154[1]) & 0xE00000);
                    v154 += 3;
                    *v151++ = *(_BYTE *)((((v17 - v155) & 0x1C0000 | v156) >> 16) + v153);
                    --v152;
                  }
                  while ( v152 );
                  v12 = v167;
                  v147 = SLODWORD(v189[3]);
                  v148 = a5;
                }
              }
              while ( v14 );
            }
            else
            {
              v157 = SLODWORD(v189[3]);
              v158 = a5;
              v159 = v189[0];
              do
              {
                v160 = v159;
                v161 = a4;
                v159 += v157;
                a4 = (HSEMAPHORE *)((char *)a4 + v158);
                --v14;
                v195 = v159;
                v162 = v12;
                if ( v12 )
                {
                  v163 = (unsigned __int16 *)(v160 + 2);
                  do
                  {
                    v164 = *v163;
                    v165 = ((v18 - v163[1]) >> 16) & 0xE0;
                    v166 = (v16 - *(v163 - 1)) >> 16;
                    v163 += 3;
                    *v161++ = ((v17 - v164) >> 16) & 0x1C | v166 & 3 | v165;
                    --v162;
                  }
                  while ( v162 );
                  v159 = v195;
                  v157 = SLODWORD(v189[3]);
                  v158 = a5;
                }
              }
              while ( v14 );
            }
          }
        }
        else if ( v19 == 0xFB )
        {
          v139 = dwGrayIdxHB[(unsigned __int8)((unsigned __int16)(v16 + v17 + v18) >> 8)]
               + (unsigned __int16)wGrayIdxLB[(unsigned __int8)(v16 + v17 + v18)];
          if ( v14 )
          {
            v140 = SLODWORD(v189[3]);
            v141 = v189[0];
            do
            {
              v142 = v141;
              v143 = a4;
              v141 += v140;
              a4 = (HSEMAPHORE *)((char *)a4 + a5);
              --v14;
              v144 = v12;
              if ( v12 )
              {
                v145 = (unsigned __int16 *)(v142 + 2);
                do
                {
                  v146 = *v145;
                  v145 += 3;
                  *v143++ = BYTE13(v182) ^ ((unsigned int)(v139 - v146) >> 12);
                  --v144;
                }
                while ( v144 );
              }
            }
            while ( v14 );
          }
        }
        else if ( v19 <= 0xFDu )
        {
          if ( v14 )
          {
            v126 = SLODWORD(v189[3]);
            v127 = v12;
            v128 = a5;
            v129 = v12 & 1;
            v130 = (unsigned __int16 *)v189[0];
            v131 = v127 >> 1;
            do
            {
              v132 = v130;
              v133 = a4;
              a4 = (HSEMAPHORE *)((char *)a4 + v128);
              --v14;
              v195 = (unsigned __int64)v130 + v126;
              for ( i = v131; i; --i )
              {
                v135 = DWORD2(v182) & (v18 - v132[5]) | (((unsigned int)v182 & (v16 - *v132) | DWORD1(v182) & (v17 - v132[1]) | DWORD2(v182) & (v18 - v132[2])) >> 16);
                v136 = v132[3];
                v137 = DWORD1(v182) & (v17 - v132[4]);
                v132 += 6;
                *(_DWORD *)v133 = HIDWORD(v182) ^ (v182 & (v16 - v136) | v137 | v135);
                v133 = (HSEMAPHORE *)((char *)v133 + 4);
              }
              if ( v129 )
                *(_WORD *)v133 = HIWORD(v182) ^ (WORD1(v182) & ((v16 - *v132) >> 16) | WORD3(v182) & ((v17 - v132[1]) >> 16) | WORD5(v182) & ((v18 - v132[2]) >> 16));
              v130 = (unsigned __int16 *)v195;
              v126 = SLODWORD(v189[3]);
              v128 = a5;
            }
            while ( v14 );
          }
        }
        else if ( v19 == 0xFE )
        {
          if ( v14 )
          {
            v117 = SLODWORD(v189[3]);
            v118 = a5;
            v119 = v189[0];
            do
            {
              v120 = v119;
              v121 = a4;
              v119 += v117;
              a4 = (HSEMAPHORE *)((char *)a4 + v118);
              --v14;
              v122 = v12;
              if ( v12 )
              {
                v123 = (unsigned __int16 *)(v120 + 4);
                do
                {
                  v124 = *v123;
                  v125 = (v17 - *(v123 - 1)) & 0x380000 | (unsigned __int64)((v16 - *(v123 - 2)) & 0x1C00000);
                  v123 += 3;
                  *v121++ = VGA256Xlate[((v18 - v124) & 0x70000 | v125) >> 16];
                  --v122;
                }
                while ( v122 );
                v12 = v167;
                v117 = SLODWORD(v189[3]);
                v118 = a5;
              }
            }
            while ( v14 );
          }
        }
        else if ( v14 )
        {
          v104 = SLODWORD(v189[3]);
          v105 = v12;
          v106 = a5;
          v107 = v12 & 1;
          v108 = (unsigned __int16 *)v189[0];
          v109 = v105 >> 1;
          v188 = v109;
          v170 = v107;
          do
          {
            --v14;
            v186 = a4;
            a4 = (HSEMAPHORE *)((char *)a4 + v106);
            v179 = v14;
            v110 = v108;
            v185 = a4;
            v108 = (unsigned __int16 *)((char *)v108 + v104);
            v195 = (unsigned __int64)v108;
            if ( v109 )
            {
              v111 = (unsigned int)v183;
              v112 = v186;
              v113 = HIDWORD(v183);
              v114 = HIDWORD(v182);
              do
              {
                v115 = *v110;
                v116 = (v114 >> 16) & ((unsigned __int64)(v16 - v110[3]) >> 16) | ((unsigned __int64)DWORD2(v182) >> 16) & ((unsigned __int64)(v18 - v110[2]) >> 16) | ((unsigned __int64)DWORD1(v182) >> 16) & ((unsigned __int64)(v17 - v110[1]) >> 16) | (v113 >> 16) & ((unsigned __int64)(v18 - v110[5]) >> 16) | (v111 >> 16) & ((unsigned __int64)(v17 - v110[4]) >> 16);
                v110 += 6;
                *v112++ = VGA16Xlate[(((unsigned __int64)(unsigned int)v182 >> 16) & ((unsigned __int64)(v16 - v115) >> 16) | v116) ^ 0x77];
                --v109;
              }
              while ( v109 );
              v14 = v179;
              a4 = v185;
              v109 = v188;
              v108 = (unsigned __int16 *)v195;
              v186 = v112;
              v107 = v170;
            }
            if ( v107 )
              *v186 = VGA16Xlate[(((unsigned int)v182 & (v16 - *v110) | DWORD1(v182) & (v17 - v110[1]) | (unsigned __int64)(DWORD2(v182) & (v18 - v110[2]))) ^ 0x700000) >> 16];
            v104 = SLODWORD(v189[3]);
            v106 = a5;
          }
          while ( v14 );
        }
        return v193;
      }
      if ( v19 >= 0xF8u )
      {
        if ( v14 )
        {
          v94 = SLODWORD(v189[3]);
          v95 = a5;
          v96 = v189[0];
          do
          {
            v97 = v96;
            v98 = a4;
            v96 += v94;
            a4 = (HSEMAPHORE *)((char *)a4 + v95);
            --v14;
            v99 = v12;
            if ( v12 )
            {
              v100 = v187;
              v101 = (unsigned __int16 *)(v97 + 2);
              do
              {
                v102 = *v101;
                v103 = (v16 - *(v101 - 1)) & 0x70000 | (unsigned __int64)((v18 - v101[1]) & 0x1C00000);
                v101 += 3;
                *v98++ = *(_BYTE *)((((v17 - v102) & 0x380000 | v103) >> 16) + v100);
                --v99;
              }
              while ( v99 );
              v12 = v167;
              v94 = SLODWORD(v189[3]);
              v95 = a5;
            }
          }
          while ( v14 );
        }
        return v193;
      }
      if ( v19 == 1 )
      {
        v76 = ((v16 + v17 + v18) ^ 0xFFF0) >> 4;
        v77 = -((v13 & 0x4000) == 0);
        if ( v14 )
        {
          v78 = SLODWORD(v189[3]);
          v79 = v12;
          v80 = a5;
          v81 = v12 & 7;
          v82 = (unsigned __int16 *)v189[0];
          v83 = v79 >> 3;
          do
          {
            v84 = v82;
            v85 = a4;
            v82 = (unsigned __int16 *)((char *)v82 + v78);
            a4 = (HSEMAPHORE *)((char *)a4 + v80);
            --v14;
            v195 = (unsigned __int64)v82;
            for ( j = v83; j; --j )
            {
              v87 = ((v76 - v84[7]) >> 16) & 0x20 | ((v76 - v84[16]) >> 16) & 4 | ((v76 - v84[19]) >> 16) & 2 | ((v76 - v84[4]) >> 16) & 0x40 | ((v76 - v84[22]) >> 16) & 1 | ((v76 - v84[1]) >> 16) & 0x80;
              v88 = v84[10];
              v89 = (v76 - v84[13]) >> 16;
              v84 += 24;
              *v85++ = v77 ^ (((v76 - v88) >> 16) & 0x10 | v89 & 8 | v87);
            }
            v90 = v81;
            if ( v81 )
            {
              v91 = 0;
              v92 = v84 + 1;
              do
              {
                v93 = v76 - *v92;
                v92 += 3;
                v91 = (2 * v91) | v93 & 0x10000;
                --v90;
              }
              while ( v90 );
              v169 = v91;
              v82 = (unsigned __int16 *)v195;
              BYTE2(v169) = v77 ^ BYTE2(v91);
              *v85 = (unsigned int)(v169 << (8 - v81)) >> 16;
            }
            v78 = SLODWORD(v189[3]);
            v80 = a5;
          }
          while ( v14 );
        }
        return v193;
      }
      if ( v19 == 2 )
      {
        v57 = (v13 & 0x4000) == 0 ? 0x77 : 0;
        if ( v14 )
        {
          v58 = SLODWORD(v189[3]);
          v59 = v12;
          v60 = a5;
          v61 = v12 & 1;
          v62 = (unsigned __int16 *)v189[0];
          v63 = v59 >> 1;
          LODWORD(v187) = v63;
          v168 = v61;
          do
          {
            --v14;
            v186 = a4;
            a4 = (HSEMAPHORE *)((char *)a4 + v60);
            v178 = v14;
            v64 = v62;
            v185 = a4;
            v62 = (unsigned __int16 *)((char *)v62 + v58);
            v65 = v63;
            v195 = (unsigned __int64)v62;
            if ( v63 )
            {
              v66 = v64;
              v184 = HIWORD(HIDWORD(v182));
              v67 = HIWORD(HIDWORD(v182));
              v191 = WORD1(v183);
              v188 = WORD1(v182);
              v175 = HIWORD(HIDWORD(v183));
              v192 = HIWORD(DWORD1(v182));
              v190 = HIWORD(DWORD2(v182));
              do
              {
                v68 = v66[5];
                v184 = v65 - 1;
                v69 = v17 - v66[4];
                v70 = v17 - v66[1];
                v71 = v190 & ((v18 - v66[2]) >> 16) | v175 & ((v18 - v68) >> 16);
                --v65;
                v72 = v16 - v66[3];
                v73 = *v66;
                v66 += 6;
                v74 = v191 & BYTE2(v69) | v71;
                v75 = v186;
                *v186 = ((v13 & 0x4000) == 0 ? 0x77 : 0) ^ (v188 & ((v16 - v73) >> 16) | v67 & BYTE2(v72) | v192 & BYTE2(v70) | v74);
                v186 = v75 + 1;
              }
              while ( v65 );
              a4 = v185;
              v61 = v168;
              v57 = (v13 & 0x4000) == 0 ? 0x77 : 0;
              v62 = (unsigned __int16 *)v195;
              v194 = v66;
              v64 = v66;
              v14 = v178;
            }
            if ( v61 )
              *v186 = v57 ^ (((v16 - *v64) >> 16) & BYTE2(v182) | ((v17 - v64[1]) >> 16) & BYTE6(v182) | ((v18 - v64[2]) >> 16) & BYTE10(v182));
            v63 = v187;
            v58 = SLODWORD(v189[3]);
            v60 = a5;
          }
          while ( v14 );
        }
        return v193;
      }
      if ( v19 > 4u )
      {
        if ( v19 <= 6u )
        {
          *((_BYTE *)a4 + BYTE5(v189[4])) = ~(_BYTE)v18;
          *((_BYTE *)a4 + BYTE6(v189[4])) = ~(_BYTE)v17;
          *((_BYTE *)a4 + HIBYTE(v189[4])) = ~(_BYTE)v16;
          if ( v19 == 5 )
          {
            v49 = 3;
            v50 = 3 * v12;
          }
          else
          {
            v49 = 4;
            *((_BYTE *)a4 + 3) = 0;
            v50 = 4 * v12;
          }
          v51 = (char *)a4 + v49;
          v52 = v50 - v49;
          if ( v50 != v49 )
          {
            do
            {
              v53 = v52;
              if ( v49 <= v52 )
                v53 = v49;
              v54 = v53;
              memmove(v51, a4, v53);
              v51 += v54;
              v49 += v54;
              v52 -= v54;
            }
            while ( v52 );
          }
          v55 = a4;
          for ( k = v14 - 1; k; --k )
          {
            a4 = (HSEMAPHORE *)((char *)a4 + a5);
            memmove(a4, v55, v50);
          }
          return v193;
        }
        if ( v19 > 0xF4u )
        {
          if ( v19 <= 0xF6u )
          {
            if ( v14 )
            {
              v38 = SLODWORD(v189[3]);
              v39 = a5;
              v40 = (HSEMAPHORE *)v189[0];
              do
              {
                v41 = v40;
                v42 = a4;
                v40 = (HSEMAPHORE *)((char *)v40 + v38);
                a4 = (HSEMAPHORE *)((char *)a4 + v39);
                --v14;
                v185 = v40;
                v43 = v12;
                if ( v12 )
                {
                  v44 = v187;
                  v195 = __PAIR64__(v17, v18);
                  v197 = v16;
                  v196 = v16;
                  v45 = *((_DWORD *)&v195
                        + ((v18 >= v17) | (unsigned __int64)(*(_DWORD *)((char *)&v195 + (v18 >= v17 ? 4 : 0)) >= v16
                                                           ? 2
                                                           : 0))) >> 21;
                  v46 = (unsigned __int16 *)v41 + 1;
                  do
                  {
                    --v43;
                    v47 = BYTE14(v182);
                    v174 = v46[1];
                    if ( v45 < v174 )
                    {
                      v177 = *v46;
                      if ( v45 < v177 )
                      {
                        v48 = *(v46 - 1);
                        if ( v45 < v48 )
                          v47 = *(_BYTE *)((((v17 - v177) & (v177 - DWORD1(v182)) & 0x38000 | (v18 - v174) & (v174 - DWORD2(v182)) & 0x1C0000 | (unsigned __int64)((unsigned __int16)(v16 - v48) & (unsigned __int16)(v48 - v182) & 0x7000)) >> 12)
                                         + v44);
                      }
                    }
                    *v42 = v47;
                    v46 += 3;
                    ++v42;
                  }
                  while ( v43 );
                  v12 = v167;
                  v40 = v185;
                  v38 = SLODWORD(v189[3]);
                  v39 = a5;
                }
              }
              while ( v14 );
            }
          }
          else if ( v14 )
          {
            v20 = SLODWORD(v189[3]);
            v21 = a5;
            v22 = (HSEMAPHORE *)v189[0];
            if ( v171 )
            {
              do
              {
                v23 = v22;
                v24 = a4;
                v22 = (HSEMAPHORE *)((char *)v22 + v20);
                a4 = (HSEMAPHORE *)((char *)a4 + v21);
                --v14;
                v185 = v22;
                v25 = v12;
                if ( v12 )
                {
                  v26 = v187;
                  v195 = __PAIR64__(v17, v18);
                  v197 = v16;
                  v196 = v16;
                  v27 = *((_DWORD *)&v195
                        + ((v18 >= v17) | (unsigned __int64)(*(_DWORD *)((char *)&v195 + (v18 >= v17 ? 4 : 0)) >= v16
                                                           ? 2
                                                           : 0))) >> 21;
                  v28 = (unsigned __int16 *)v23 + 1;
                  do
                  {
                    --v25;
                    v29 = BYTE14(v182);
                    v176 = v28[1];
                    if ( v27 < v176 )
                    {
                      v172 = *v28;
                      if ( v27 < v172 )
                      {
                        v30 = *(v28 - 1);
                        if ( v27 < v30 )
                          v29 = *(_BYTE *)((((v17 - v172) & (v172 - DWORD1(v182)) & 0x1C000 | (v18 - v176) & (v176 - DWORD2(v182)) & 0xE0000 | (unsigned __int64)((unsigned __int16)(v16 - v30) & (unsigned __int16)(v30 - v182) & 0x3000)) >> 12)
                                         + v26);
                      }
                    }
                    *v24 = v29;
                    v28 += 3;
                    ++v24;
                  }
                  while ( v25 );
                  v12 = v167;
                  v22 = v185;
                  v20 = SLODWORD(v189[3]);
                  v21 = a5;
                }
              }
              while ( v14 );
            }
            else
            {
              do
              {
                v31 = v22;
                v32 = a4;
                v22 = (HSEMAPHORE *)((char *)v22 + v20);
                a4 = (HSEMAPHORE *)((char *)a4 + v21);
                --v14;
                v185 = v22;
                if ( v12 )
                {
                  v195 = __PAIR64__(v17, v18);
                  v197 = v16;
                  v196 = v16;
                  v33 = *((_DWORD *)&v195
                        + ((v18 >= v17) | (unsigned __int64)(*(_DWORD *)((char *)&v195 + (v18 >= v17 ? 4 : 0)) >= v16
                                                           ? 2
                                                           : 0))) >> 21;
                  v34 = (unsigned __int16 *)v31 + 1;
                  do
                  {
                    --v12;
                    v35 = *(v34 - 1);
                    v36 = BYTE14(v182);
                    v173 = v34[1];
                    if ( v33 < v173 )
                    {
                      v37 = *v34;
                      v184 = v37;
                      if ( v33 < v37 && v33 < v35 )
                        v36 = ((v16 - v35) >> 12) & ((v35 - (unsigned int)v182) >> 12) & 3 | ((v17 - v184) >> 12) & ((v37 - DWORD1(v182)) >> 12) & 0x1C | ((v18 - v173) >> 12) & ((v173 - DWORD2(v182)) >> 12) & 0xE0;
                    }
                    *v32 = v36;
                    v34 += 3;
                    ++v32;
                  }
                  while ( v12 );
                  v12 = v167;
                  v22 = v185;
                  v20 = SLODWORD(v189[3]);
                  v21 = a5;
                }
              }
              while ( v14 );
            }
          }
          return v193;
        }
      }
      return 4294967285LL;
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(a1 + 8));
  return v10;
}
