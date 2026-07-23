/*
 * XREFs of sub_1409C1520 @ 0x1409C1520
 * Callers:
 *     sub_1409C1150 @ 0x1409C1150 (sub_1409C1150.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409C21D4 @ 0x1409C21D4 (sub_1409C21D4.c)
 */

__int64 __fastcall sub_1409C1520(int a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  int v8; // r9d
  unsigned __int16 v9; // dx
  int v10; // ecx
  int v11; // r8d
  int v12; // eax
  unsigned __int16 v13; // r8
  unsigned int v14; // ecx
  __int64 v15; // r15
  unsigned int v16; // r14d
  _DWORD *v17; // r12
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // ecx
  char v21; // r11
  unsigned int v22; // edi
  _BYTE *v23; // r8
  unsigned int v24; // r9d
  unsigned int v25; // esi
  unsigned int v26; // edx
  __int64 v27; // rax
  _BYTE *v28; // r8
  unsigned int v29; // r9d
  unsigned __int64 v30; // rcx
  unsigned int v31; // r10d
  __int64 v32; // rax
  __int64 v33; // rax
  _BYTE *v34; // r8
  unsigned int v35; // edx
  unsigned __int64 v36; // rcx
  unsigned int v37; // ecx
  int v38; // edi
  _BYTE *v39; // r8
  unsigned int v40; // r11d
  unsigned int v41; // edx
  unsigned int v42; // r9d
  unsigned int v43; // r10d
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // r9d
  _BYTE *v47; // r8
  unsigned __int64 v48; // rcx
  unsigned int v49; // r9d
  __int64 v50; // rax
  __int64 v51; // rax
  _BYTE *v52; // r8
  unsigned int v53; // edx
  unsigned __int64 v54; // rcx
  unsigned int v55; // edx
  int v56; // r13d
  unsigned __int16 v57; // r12
  int v58; // ecx
  unsigned int v59; // edx
  int v60; // eax
  unsigned int v61; // ecx
  __int64 v62; // rax
  unsigned int v63; // edx
  unsigned int v64; // r11d
  _BYTE *v65; // r8
  unsigned int v66; // r10d
  unsigned int v67; // r9d
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned int v70; // r9d
  _BYTE *v71; // r8
  unsigned __int64 v72; // rcx
  unsigned __int16 v73; // r9
  int v74; // r14d
  unsigned int v75; // edx
  unsigned int v76; // r15d
  unsigned int v77; // esi
  int v78; // ecx
  _BYTE *v79; // r8
  unsigned int v80; // edi
  unsigned int v81; // r11d
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned int v84; // r10d
  _BYTE *v85; // r8
  unsigned __int64 v86; // rcx
  unsigned int v87; // r10d
  unsigned int v88; // edx
  int v89; // r14d
  unsigned int v90; // r15d
  unsigned int v91; // esi
  int v92; // ecx
  _BYTE *v93; // r8
  unsigned int v94; // edi
  unsigned int v95; // r11d
  __int64 v96; // rax
  __int64 v97; // rax
  unsigned int v98; // r9d
  _BYTE *v99; // r8
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // r8
  unsigned int v102; // edi
  __int64 v103; // rdx
  unsigned int v104; // ecx
  int v105; // r14d
  unsigned int v106; // r11d
  _BYTE *v107; // r9
  unsigned int v108; // esi
  __int64 v109; // rax
  __int64 v110; // rax
  unsigned int v111; // r11d
  _BYTE *v112; // r9
  unsigned __int64 v113; // rcx
  unsigned int v114; // ecx
  unsigned int v115; // eax
  int v116; // esi
  _BYTE *v117; // r9
  unsigned int v118; // edi
  unsigned int v119; // r10d
  unsigned int v120; // r11d
  __int64 v121; // rax
  __int64 v122; // rax
  unsigned int v123; // r10d
  _BYTE *v124; // r9
  unsigned __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rax
  _BYTE *v128; // r9
  unsigned int v129; // edx
  unsigned __int64 v130; // rcx
  unsigned int v131; // r10d
  __int64 v132; // r14
  unsigned int v133; // r11d
  int v134; // edi
  _BYTE *v135; // r9
  unsigned int v136; // esi
  int v137; // eax
  __int64 v138; // rax
  __int64 v139; // rax
  _BYTE *v140; // r9
  unsigned int v141; // edx
  unsigned __int64 v142; // rcx
  _BYTE *v143; // r9
  int v144; // esi
  unsigned int v145; // edi
  __int64 v146; // rax
  unsigned __int64 v147; // rcx
  __int16 v149; // [rsp+30h] [rbp-D0h]
  int v151; // [rsp+38h] [rbp-C8h]
  _DWORD v153[36]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v154[36]; // [rsp+E0h] [rbp-20h] BYREF

  memset(v153, 0, 0x84uLL);
  memset(v154, 0, 0x84uLL);
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
      ++v153[v11];
      ++v9;
    }
    else
    {
      v13 = v9;
      while ( v9 < a3 && (*(_DWORD *)(a2 + 4LL * v9) & 0x1F) == 0 )
        ++v9;
      for ( ; (unsigned __int16)(v13 ^ v9) >= 0x10u; v13 = (v13 & 0xFFF0) + 16 )
        ++v153[28];
      v14 = v9 - v13;
      if ( v9 != v13 )
      {
        if ( v14 >= 5 )
          ++v153[29];
        else
          v153[0] += v14;
      }
    }
  }
  v15 = 33LL;
  sub_1409C21D4(a1, (unsigned int)v153, 33, 8, (__int64)v154);
  v16 = 4;
  v17 = v154;
  do
  {
    v18 = *((_DWORD *)a4 + 2);
    v19 = *a4;
    v20 = *((_DWORD *)a4 + 3);
    v21 = v18 & 7;
    v22 = v18 + 1;
    v23 = (_BYTE *)(*a4 + ((unsigned __int64)v18 >> 3));
    v24 = 8 - (v18 & 7);
    v25 = *v17 & 0x1F;
    if ( v25 == v16 )
    {
      v26 = 1;
      if ( v22 <= v20 || (v26 = v20 - v18, v20 != v18) )
      {
        if ( v24 >= v26 )
          v24 = v26;
        v27 = v26 - v24;
        v28 = v23 + 1;
        v29 = 0;
        if ( (unsigned int)v27 >= 8 )
        {
          v30 = (unsigned __int64)(unsigned int)v27 >> 3;
          do
          {
            *v28 = v29;
            v27 = (unsigned int)(v27 - 8);
            v29 >>= 8;
            ++v28;
            --v30;
          }
          while ( v30 );
        }
        if ( (_DWORD)v27 )
          *v28 |= (unsigned __int8)v29 & byte_14001BB70[4 * v27];
        *((_DWORD *)a4 + 2) += v26;
      }
    }
    else
    {
      v31 = 1;
      if ( v22 <= v20 || (v31 = v20 - v18, v20 != v18) )
      {
        v32 = v24;
        if ( v24 >= v31 )
          v32 = v31;
        *v23 |= (byte_14001BB70[4 * v32] & 1) << v21;
        v33 = v31 - (unsigned int)v32;
        v34 = v23 + 1;
        v35 = 1u >> v24;
        if ( (unsigned int)v33 >= 8 )
        {
          v36 = (unsigned __int64)(unsigned int)v33 >> 3;
          do
          {
            *v34 = v35;
            v33 = (unsigned int)(v33 - 8);
            v35 >>= 8;
            ++v34;
            --v36;
          }
          while ( v36 );
        }
        if ( (_DWORD)v33 )
          *v34 |= (unsigned __int8)v35 & byte_14001BB70[4 * v33];
        *((_DWORD *)a4 + 2) += v31;
        v18 = *((_DWORD *)a4 + 2);
        v19 = *a4;
      }
      v37 = *((_DWORD *)a4 + 3);
      v38 = v18 & 7;
      v39 = (_BYTE *)(v19 + ((unsigned __int64)v18 >> 3));
      v40 = 8 - v38;
      v41 = v18 + 3;
      if ( v25 <= v16 )
      {
        v49 = 3;
        if ( v41 <= v37 || (v49 = v37 - v18, v37 != v18) )
        {
          v50 = v40;
          if ( v40 >= v49 )
            v50 = v49;
          *v39 |= ((unsigned __int8)v25 & (unsigned __int8)byte_14001BB70[4 * v50]) << v38;
          v51 = v49 - (unsigned int)v50;
          v52 = v39 + 1;
          v53 = v25 >> v40;
          if ( (unsigned int)v51 >= 8 )
          {
            v54 = (unsigned __int64)(unsigned int)v51 >> 3;
            do
            {
              *v52 = v53;
              v51 = (unsigned int)(v51 - 8);
              v53 >>= 8;
              ++v52;
              --v54;
            }
            while ( v54 );
          }
          if ( (_DWORD)v51 )
            *v52 |= (unsigned __int8)v53 & byte_14001BB70[4 * v51];
          *((_DWORD *)a4 + 2) += v49;
        }
      }
      else
      {
        v42 = v25 - 1;
        v43 = 3;
        if ( v41 <= v37 || (v43 = v37 - v18, v37 != v18) )
        {
          v44 = v40;
          if ( v40 >= v43 )
            v44 = v43;
          *v39 |= ((unsigned __int8)v42 & (unsigned __int8)byte_14001BB70[4 * v44]) << v38;
          v45 = v43 - (unsigned int)v44;
          v46 = v42 >> v40;
          v47 = v39 + 1;
          if ( (unsigned int)v45 >= 8 )
          {
            v48 = (unsigned __int64)(unsigned int)v45 >> 3;
            do
            {
              *v47 = v46;
              v45 = (unsigned int)(v45 - 8);
              v46 >>= 8;
              ++v47;
              --v48;
            }
            while ( v48 );
          }
          if ( (_DWORD)v45 )
            *v47 |= (unsigned __int8)v46 & byte_14001BB70[4 * v45];
          *((_DWORD *)a4 + 2) += v43;
        }
      }
      v16 = v25;
    }
    ++v17;
    --v15;
  }
  while ( v15 );
  v55 = a3;
  v56 = 8;
  v151 = 8;
  v57 = 0;
  v149 = 0;
  while ( v57 < v55 )
  {
    v58 = *(_DWORD *)(a2 + 4LL * v57) & 0x1F;
    if ( v58 )
    {
      v59 = *(_DWORD *)(a2 + 4LL * v57) & 0x1F;
      if ( v58 == v56 )
      {
        v59 = 30;
      }
      else
      {
        if ( v57 >= 0x10u )
        {
          v60 = *(_DWORD *)(a2 + 4LL * v57 - 64) & 0x1F;
          if ( v58 == v60 )
          {
            v59 = 31;
          }
          else if ( v58 == v60 + 1 )
          {
            v59 = 32;
          }
        }
        v56 = *(_DWORD *)(a2 + 4LL * v57) & 0x1F;
        v151 = v56;
      }
      v61 = *((_DWORD *)a4 + 3);
      v62 = v59;
      v63 = *((_DWORD *)a4 + 2);
      v64 = 8 - (v63 & 7);
      v65 = (_BYTE *)(*a4 + ((unsigned __int64)v63 >> 3));
      v66 = v154[v62] & 0x1F;
      v67 = v154[v62] >> 5;
      if ( v63 + v66 <= v61 || (v66 = v61 - v63, v61 != v63) )
      {
        v68 = v64;
        if ( v64 >= v66 )
          v68 = v66;
        *v65 |= ((unsigned __int8)v67 & (unsigned __int8)byte_14001BB70[4 * v68]) << (v63 & 7);
        v69 = v66 - (unsigned int)v68;
        v70 = v67 >> v64;
        v71 = v65 + 1;
        if ( (unsigned int)v69 >= 8 )
        {
          v72 = (unsigned __int64)(unsigned int)v69 >> 3;
          do
          {
            *v71 = v70;
            v69 = (unsigned int)(v69 - 8);
            v70 >>= 8;
            ++v71;
            --v72;
          }
          while ( v72 );
        }
        if ( (_DWORD)v69 )
          *v71 |= (unsigned __int8)v70 & byte_14001BB70[4 * v69];
        *((_DWORD *)a4 + 2) += v66;
      }
      v149 = ++v57;
    }
    else
    {
      v73 = v57;
      if ( v57 < v55 )
      {
        do
        {
          if ( (*(_DWORD *)(a2 + 4LL * v57) & 0x1F) != 0 )
            break;
          ++v57;
        }
        while ( v57 < v55 );
        v149 = v57;
      }
      if ( (unsigned __int16)(v73 ^ v57) >= 0x10u )
      {
        v74 = v154[28] & 0x1F;
        v75 = *((_DWORD *)a4 + 2);
        v76 = v154[28] >> 5;
        do
        {
          v77 = *((_DWORD *)a4 + 3);
          v78 = v75 & 7;
          v79 = (_BYTE *)(*a4 + ((unsigned __int64)v75 >> 3));
          v80 = 8 - v78;
          v81 = v74;
          if ( v75 + v74 <= v77 || (v81 = v77 - v75, v77 != v75) )
          {
            v82 = v80;
            if ( v80 >= v81 )
              v82 = v81;
            *v79 |= ((unsigned __int8)v76 & (unsigned __int8)byte_14001BB70[4 * v82]) << v78;
            v83 = v81 - (unsigned int)v82;
            v84 = v76 >> v80;
            v85 = v79 + 1;
            if ( (unsigned int)v83 >= 8 )
            {
              v86 = (unsigned __int64)(unsigned int)v83 >> 3;
              do
              {
                *v85 = v84;
                v83 = (unsigned int)(v83 - 8);
                v84 >>= 8;
                ++v85;
                --v86;
              }
              while ( v86 );
            }
            if ( (_DWORD)v83 )
              *v85 |= (unsigned __int8)v84 & byte_14001BB70[4 * v83];
            *((_DWORD *)a4 + 2) += v81;
            v75 = *((_DWORD *)a4 + 2);
          }
          v73 = (v73 & 0xFFF0) + 16;
        }
        while ( (unsigned __int16)(v73 ^ v57) >= 0x10u );
        v56 = v151;
        v55 = a3;
      }
      v87 = v57 - v73;
      if ( v57 == v73 )
        continue;
      v88 = *((_DWORD *)a4 + 2);
      if ( v87 >= 5 )
      {
        v101 = *((unsigned int *)a4 + 2);
        v102 = v154[29] & 0x1F;
        v103 = *a4;
        v104 = *((_DWORD *)a4 + 3);
        v105 = a4[1] & 7;
        v106 = v154[29] >> 5;
        v107 = (_BYTE *)(*a4 + (v101 >> 3));
        v108 = 8 - v105;
        if ( (unsigned int)v101 + v102 <= v104 || (v102 = v104 - v101, v104 != (_DWORD)v101) )
        {
          v109 = v108;
          if ( v108 >= v102 )
            v109 = v102;
          *v107 |= ((unsigned __int8)v106 & (unsigned __int8)byte_14001BB70[4 * v109]) << v105;
          v110 = v102 - (unsigned int)v109;
          v111 = v106 >> v108;
          v112 = v107 + 1;
          if ( (unsigned int)v110 >= 8 )
          {
            v113 = (unsigned __int64)(unsigned int)v110 >> 3;
            do
            {
              *v112 = v111;
              v110 = (unsigned int)(v110 - 8);
              v111 >>= 8;
              ++v112;
              --v113;
            }
            while ( v113 );
          }
          if ( (_DWORD)v110 )
            *v112 |= (unsigned __int8)v111 & byte_14001BB70[4 * v110];
          *((_DWORD *)a4 + 2) += v102;
          LODWORD(v101) = *((_DWORD *)a4 + 2);
          v103 = *a4;
        }
        v114 = *((_DWORD *)a4 + 3);
        v115 = v101 + 2;
        v116 = v101 & 7;
        v117 = (_BYTE *)(v103 + ((unsigned __int64)(unsigned int)v101 >> 3));
        v118 = 8 - v116;
        v119 = v87 - 5;
        v120 = 2;
        if ( v119 >= 3 )
        {
          if ( v115 <= v114 || (v120 = v114 - v101, v114 != (_DWORD)v101) )
          {
            v126 = v118;
            if ( v118 >= v120 )
              v126 = v120;
            *v117 |= (byte_14001BB70[4 * v126] & 3) << v116;
            v127 = v120 - (unsigned int)v126;
            v128 = v117 + 1;
            v129 = 3u >> v118;
            if ( (unsigned int)v127 >= 8 )
            {
              v130 = (unsigned __int64)(unsigned int)v127 >> 3;
              do
              {
                *v128 = v129;
                v127 = (unsigned int)(v127 - 8);
                v129 >>= 8;
                ++v128;
                --v130;
              }
              while ( v130 );
            }
            if ( (_DWORD)v127 )
              *v128 |= (unsigned __int8)v129 & byte_14001BB70[4 * v127];
            *((_DWORD *)a4 + 2) += v120;
            LODWORD(v101) = *((_DWORD *)a4 + 2);
            v103 = *a4;
            v114 = *((_DWORD *)a4 + 3);
          }
          v131 = v119 - 3;
          if ( v131 >= 7 )
          {
            v132 = v131 / 7;
            do
            {
              v103 = *a4;
              v114 = *((_DWORD *)a4 + 3);
              v133 = 3;
              v134 = v101 & 7;
              v135 = (_BYTE *)(*a4 + ((unsigned __int64)(unsigned int)v101 >> 3));
              v136 = 8 - v134;
              if ( (int)v101 + 3 <= v114 || (v137 = v101, v133 = v114 - v101, v114 != (_DWORD)v101) )
              {
                v138 = v136;
                if ( v136 >= v133 )
                  v138 = v133;
                *v135 |= (byte_14001BB70[4 * v138] & 7) << v134;
                v139 = v133 - (unsigned int)v138;
                v140 = v135 + 1;
                v141 = 7u >> v136;
                if ( (unsigned int)v139 >= 8 )
                {
                  v142 = (unsigned __int64)(unsigned int)v139 >> 3;
                  do
                  {
                    *v140 = v141;
                    v139 = (unsigned int)(v139 - 8);
                    v141 >>= 8;
                    ++v140;
                    --v142;
                  }
                  while ( v142 );
                }
                if ( (_DWORD)v139 )
                  *v140 |= (unsigned __int8)v141 & byte_14001BB70[4 * v139];
                *((_DWORD *)a4 + 2) += v133;
                v137 = *((_DWORD *)a4 + 2);
                v103 = *a4;
                v114 = *((_DWORD *)a4 + 3);
              }
              v131 -= 7;
              LODWORD(v101) = v137;
              --v132;
            }
            while ( v132 );
            v57 = v149;
            v56 = v151;
          }
          v120 = 3;
          v143 = (_BYTE *)(v103 + ((unsigned __int64)(unsigned int)v101 >> 3));
          v144 = v101 & 7;
          v145 = 8 - v144;
          if ( (int)v101 + 3 > v114 )
          {
            v120 = v114 - v101;
            if ( v114 == (_DWORD)v101 )
              goto LABEL_175;
          }
          v146 = v145;
          if ( v145 >= v120 )
            v146 = v120;
          *v143 |= ((unsigned __int8)v131 & (unsigned __int8)byte_14001BB70[4 * v146]) << v144;
          v122 = v120 - (unsigned int)v146;
          v123 = v131 >> v145;
          v124 = v143 + 1;
          if ( (unsigned int)v122 >= 8 )
          {
            v147 = (unsigned __int64)(unsigned int)v122 >> 3;
            do
            {
              *v124 = v123;
              v122 = (unsigned int)(v122 - 8);
              v123 >>= 8;
              ++v124;
              --v147;
            }
            while ( v147 );
          }
          goto LABEL_172;
        }
        if ( v115 <= v114 || (v120 = v114 - v101, v114 != (_DWORD)v101) )
        {
          v121 = v118;
          if ( v118 >= v120 )
            v121 = v120;
          *v117 |= ((unsigned __int8)v119 & (unsigned __int8)byte_14001BB70[4 * v121]) << v116;
          v122 = v120 - (unsigned int)v121;
          v123 = v119 >> v118;
          v124 = v117 + 1;
          if ( (unsigned int)v122 >= 8 )
          {
            v125 = (unsigned __int64)(unsigned int)v122 >> 3;
            do
            {
              *v124 = v123;
              v122 = (unsigned int)(v122 - 8);
              v123 >>= 8;
              ++v124;
              --v125;
            }
            while ( v125 );
          }
LABEL_172:
          if ( (_DWORD)v122 )
            *v124 |= (unsigned __int8)v123 & byte_14001BB70[4 * v122];
          *((_DWORD *)a4 + 2) += v120;
        }
      }
      else
      {
        v89 = v154[0] & 0x1F;
        v90 = v154[0] >> 5;
        do
        {
          v91 = *((_DWORD *)a4 + 3);
          v92 = v88 & 7;
          v93 = (_BYTE *)(*a4 + ((unsigned __int64)v88 >> 3));
          v94 = 8 - v92;
          v95 = v89;
          if ( v88 + v89 <= v91 || (v95 = v91 - v88, v91 != v88) )
          {
            v96 = v94;
            if ( v94 >= v95 )
              v96 = v95;
            *v93 |= ((unsigned __int8)v90 & (unsigned __int8)byte_14001BB70[4 * v96]) << v92;
            v97 = v95 - (unsigned int)v96;
            v98 = v90 >> v94;
            v99 = v93 + 1;
            if ( (unsigned int)v97 >= 8 )
            {
              v100 = (unsigned __int64)(unsigned int)v97 >> 3;
              do
              {
                *v99 = v98;
                v97 = (unsigned int)(v97 - 8);
                v98 >>= 8;
                ++v99;
                --v100;
              }
              while ( v100 );
            }
            if ( (_DWORD)v97 )
              *v99 |= (unsigned __int8)v98 & byte_14001BB70[4 * v97];
            *((_DWORD *)a4 + 2) += v95;
            v88 = *((_DWORD *)a4 + 2);
          }
          --v87;
        }
        while ( v87 );
        v57 = v149;
        v56 = v151;
      }
    }
LABEL_175:
    v55 = a3;
  }
  return 0LL;
}
