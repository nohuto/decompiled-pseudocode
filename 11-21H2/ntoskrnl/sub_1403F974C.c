/*
 * XREFs of sub_1403F974C @ 0x1403F974C
 * Callers:
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     sub_140AB9010 @ 0x140AB9010 (sub_140AB9010.c)
 * Callees:
 *     sub_1403F966C @ 0x1403F966C (sub_1403F966C.c)
 *     sub_1403F96C8 @ 0x1403F96C8 (sub_1403F96C8.c)
 *     sub_140AD049C @ 0x140AD049C (sub_140AD049C.c)
 *     j__guard_dispatch_icall_nop @ 0x140AD23B0 (j__guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1403F974C(__int64 a1, int *a2)
{
  int *v2; // r14
  __int64 v3; // rbx
  __int64 v4; // r8
  unsigned int v5; // edx
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int8 CurrentIrql; // r12
  unsigned int *v17; // rcx
  unsigned int *v18; // rsi
  char v19; // r13
  unsigned __int64 v20; // rbp
  __int64 v21; // rdx
  char *v22; // r8
  unsigned int *v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rax
  bool v26; // zf
  char v27; // cl
  char v28; // al
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r9
  int *v32; // rsi
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r10
  __int64 v37; // rdx
  __int64 v38; // r15
  __int64 v39; // r11
  unsigned int v40; // eax
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rbp
  int *v45; // r12
  __int64 v46; // r9
  _QWORD *v47; // r8
  const char *v48; // rax
  unsigned __int64 v49; // rsi
  int v50; // r11d
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rsi
  unsigned __int64 v54; // rcx
  unsigned __int64 k; // rax
  _DWORD *v56; // r15
  unsigned int v57; // esi
  unsigned __int8 v58; // al
  unsigned __int64 v59; // r15
  unsigned __int64 v60; // r13
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // r8
  __int64 *v64; // r9
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rcx
  unsigned __int8 v69; // r12
  unsigned int *v70; // rcx
  unsigned int *v71; // rsi
  char v72; // r13
  unsigned __int64 v73; // rbp
  __int64 v74; // rdx
  char *v75; // r8
  unsigned int *v76; // r9
  __int64 v77; // rcx
  __int64 v78; // rax
  bool v79; // zf
  char v80; // cl
  char v81; // al
  int v82; // r12d
  unsigned __int8 v83; // r13
  unsigned __int64 v84; // rsi
  unsigned __int64 v85; // r15
  int v86; // eax
  __int64 v87; // rsi
  __int64 v88; // rax
  unsigned int v89; // ecx
  char **v90; // r15
  int v91; // r13d
  unsigned int v92; // r11d
  char **v93; // rbp
  char *v94; // r9
  char *v95; // r10
  unsigned __int64 v96; // rax
  int v97; // r12d
  const char *i; // rax
  unsigned __int64 v99; // r13
  unsigned __int64 v100; // r8
  __int64 v101; // rax
  __int64 v102; // r8
  unsigned __int64 v103; // rcx
  unsigned int v104; // r13d
  unsigned __int64 j; // rax
  __int64 v106; // r12
  __int64 v107; // r8
  __int64 *v108; // r9
  unsigned int v109; // ebp
  unsigned int *v110; // rsi
  _DWORD *v111; // r15
  unsigned __int64 v112; // rcx
  __int64 v113; // rdx
  unsigned __int8 v114; // r13
  unsigned __int64 v115; // rbp
  unsigned __int64 v116; // r12
  int v117; // eax
  __int64 v118; // rax
  __int64 *v119; // r10
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rcx
  unsigned __int8 v125; // r13
  unsigned __int64 v126; // rbp
  int v127; // eax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // [rsp+20h] [rbp-C8h]
  __int64 v133; // [rsp+20h] [rbp-C8h]
  __int64 v134; // [rsp+28h] [rbp-C0h]
  int v135; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v136; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v137; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v138; // [rsp+38h] [rbp-B0h]
  _DWORD *v139; // [rsp+38h] [rbp-B0h]
  unsigned int v140; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v141; // [rsp+40h] [rbp-A8h]
  __int64 v142; // [rsp+40h] [rbp-A8h]
  unsigned int v143; // [rsp+48h] [rbp-A0h]
  int v144; // [rsp+4Ch] [rbp-9Ch]
  __int64 v145; // [rsp+50h] [rbp-98h]
  __int64 v146; // [rsp+58h] [rbp-90h]
  __int64 v147; // [rsp+58h] [rbp-90h]
  __int64 v148; // [rsp+60h] [rbp-88h]
  __int64 v149; // [rsp+60h] [rbp-88h]
  __int64 v150; // [rsp+68h] [rbp-80h]
  __int64 v151; // [rsp+70h] [rbp-78h]
  _QWORD v152[2]; // [rsp+78h] [rbp-70h] BYREF
  _BYTE v153[96]; // [rsp+88h] [rbp-60h] BYREF
  unsigned int v155; // [rsp+F8h] [rbp+10h]
  unsigned int v156; // [rsp+100h] [rbp+18h]
  unsigned __int64 v157; // [rsp+100h] [rbp+18h]
  unsigned int v158; // [rsp+100h] [rbp+18h]
  unsigned __int8 v159; // [rsp+108h] [rbp+20h]
  unsigned __int64 v160; // [rsp+108h] [rbp+20h]
  int v161; // [rsp+108h] [rbp+20h]
  unsigned int v162; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  if ( *a2 != 12 )
    goto LABEL_39;
  if ( !*(_QWORD *)(a1 + 2376) )
    goto LABEL_38;
  v4 = *(unsigned int *)(a1 + 2028);
  v5 = *(_DWORD *)(a1 + 2396);
  if ( !(_DWORD)v4 )
  {
    LODWORD(a1) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(8 * v5)) & 0x20;
    *(_DWORD *)(v3 + 2396) = a1;
    goto LABEL_6;
  }
  LOBYTE(a1) = *(_DWORD *)(a1 + 2396);
  if ( (((unsigned __int8)v5 ^ (unsigned __int8)(v5 >> 3)) & 4) != 0 )
  {
LABEL_38:
    *(_DWORD *)(v3 + 2028) = 0;
    return;
  }
LABEL_6:
  if ( (a1 & 4) != 0 )
  {
    v6 = *((_QWORD *)v2 + 4);
    if ( v6 )
    {
      v7 = v6 + v4;
      v8 = ((_WORD)v4 + (_WORD)v6) & 0xFFF;
      v9 = (unsigned int)(v2[10] - v4) + 4095LL;
    }
    else
    {
      v9 = v2[2] & 0xFFF;
      v7 = *((_QWORD *)v2 + 1);
      v8 = (unsigned int)v2[4] + 4095LL;
    }
    v10 = v7 & 0xFFFFFFFFFFFFF000uLL;
    v11 = (unsigned __int64)(v9 + v8) >> 12;
    if ( v11 )
    {
      while ( 1 )
      {
        --v11;
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v3 + 672))(v10) && !*(_DWORD *)(v3 + 2240) )
        {
          *(_QWORD *)(v3 + 2248) = v3 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v3 + 2256) = (char *)v2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v3 + 2264) = *v2;
          *(_QWORD *)(v3 + 2272) = v10;
          *(_DWORD *)(v3 + 2240) = 1;
          sub_140AD049C(v3, 0LL, v12, v13);
        }
        *(_DWORD *)(v3 + 2032) += 256;
        v10 += 4096LL;
        v14 = *(_DWORD *)(v3 + 2032);
        if ( v6 )
        {
          *(_DWORD *)(v3 + 2028) += 4096;
          if ( v14 >= *(_DWORD *)(v3 + 2036) )
            break;
        }
        if ( !v11 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( !v6 )
        goto LABEL_20;
    }
    if ( !v11 )
      *(_DWORD *)(v3 + 2028) = 0;
LABEL_20:
    if ( !*(_DWORD *)(v3 + 2028) )
    {
      v15 = *(_QWORD *)(v3 + 1304);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      (*(void (__fastcall **)(__int64))(v3 + 320))(v15);
      v17 = **(unsigned int ***)(v3 + 1512);
      v18 = v17 + 4;
      v19 = *((_BYTE *)v17 + 12);
      v20 = (unsigned __int64)&v17[6 * *v17 + 4];
      while ( 2 )
      {
        v21 = 24LL;
        v22 = (char *)(v2 + 6);
        v23 = v18;
        while ( 1 )
        {
          v24 = *(_QWORD *)v23;
          v23 += 2;
          v25 = *(_QWORD *)v22;
          v22 += 8;
          if ( v24 != v25 )
            break;
          v21 = (unsigned int)(v21 - 8);
          if ( (unsigned int)v21 < 8 )
          {
            v26 = (_DWORD)v21 == 0;
            while ( !v26 )
            {
              v27 = *(_BYTE *)v23;
              v23 = (unsigned int *)((char *)v23 + 1);
              v28 = *v22++;
              if ( v27 != v28 )
                goto LABEL_29;
              v26 = (_DWORD)v21 == 1;
              v21 = (unsigned int)(v21 - 1);
            }
            goto LABEL_30;
          }
        }
LABEL_29:
        v18 += 6;
        if ( (unsigned __int64)v18 < v20 )
          continue;
        break;
      }
LABEL_30:
      (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v3 + 384))(
        *(_QWORD *)(v3 + 1304),
        v21,
        v22,
        v23);
      __writecr8(CurrentIrql);
      if ( !v19 )
        goto LABEL_35;
      if ( (*(_DWORD *)(v3 + 2396) & 0x10) != 0 && !*(_DWORD *)(v3 + 2240) )
      {
        *(_QWORD *)(v3 + 2248) = v3 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v3 + 2256) = (char *)v2 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v3 + 2264) = *v2;
        *(_QWORD *)(v3 + 2272) = 1LL;
        *(_DWORD *)(v3 + 2240) = 1;
        sub_140AD049C(v3, 0LL, v29, v30);
      }
      if ( *((_QWORD *)v2 + 3) != 1LL )
      {
LABEL_35:
        if ( v18 == (unsigned int *)v20 && !*(_DWORD *)(v3 + 2240) )
        {
          *(_QWORD *)(v3 + 2248) = v3 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v3 + 2256) = (char *)v2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v3 + 2264) = *v2;
          *(_QWORD *)(v3 + 2272) = v18;
          *(_DWORD *)(v3 + 2240) = 1;
          sub_140AD049C(v3, 0LL, v29, v30);
        }
      }
    }
    return;
  }
LABEL_39:
  v31 = *((_QWORD *)v2 + 4);
  v32 = v2 + 12;
  v33 = (unsigned int)v2[10];
  v132 = v31;
  v152[0] = v2 + 12;
  v34 = *(unsigned int *)(v3 + 2028);
  v35 = ((unsigned __int64)(v31 & 0xFFF) + v33 + 4095) >> 12;
  v36 = (unsigned int)v35;
  v135 = v35;
  v138 = (unsigned int)v35;
  v37 = (__int64)&v2[5 * (unsigned int)v35 + 12];
  v151 = v37;
  v38 = (__int64)&v2[5 * v34 + 12];
  v39 = v31 + (unsigned int)((_DWORD)v34 << 12);
  v150 = v38;
  v145 = v39;
  if ( ((*(_DWORD *)(v3 + 2392) & 0x40000000) == 0 || (*(_DWORD *)(v3 + 2396) & 0x1000) != 0) && *(_QWORD *)(v3 + 2640) )
  {
    while ( 1 )
    {
      if ( v38 == v37 )
        goto LABEL_82;
      if ( *(_DWORD *)(v3 + 2032) >= *(_DWORD *)(v3 + 2036) )
      {
        *(_DWORD *)(v3 + 2028) = (v38 - v152[0]) / 20;
        return;
      }
      v87 = 0LL;
      if ( v38 == v37 )
        goto LABEL_168;
      v88 = v38;
      do
      {
        if ( *(char *)(v88 + 15) < 0 )
          break;
        v87 = (unsigned int)(v87 + 1);
        v88 = v38 + 20 * v87;
      }
      while ( v88 != v37 );
      if ( !(_DWORD)v87 )
        goto LABEL_168;
      v89 = v87;
      v134 = v38;
      v90 = *(char ***)(v3 + 2640);
      LODWORD(v87) = 0;
      v142 = (__int64)v90;
      v144 = 0;
      v143 = v89;
      v133 = v39;
      do
      {
        v91 = 8;
        if ( v89 < 8 )
          v91 = v89;
        v92 = 0;
        v158 = v91;
        v93 = v90;
        v139 = v153;
        do
        {
          v93[1] = (char *)4096;
          v94 = (char *)(v133 + (v92 << 12));
          *v93 = v94;
          v95 = v94;
          v96 = *(_QWORD *)(v3 + 2016);
          *(_DWORD *)(v3 + 2032) += 4096;
          v97 = *(_DWORD *)(v3 + 2012);
          v160 = v96;
          for ( i = v94; i < v94 + 4096; i += 64 )
            _mm_prefetch(i, 0);
          v99 = v160;
          v100 = v160;
          v161 = 32;
          do
          {
            v101 = 8LL;
            do
            {
              v102 = *((_QWORD *)v95 + 1) ^ __ROL8__(*(_QWORD *)v95 ^ v100, v97);
              v95 += 16;
              v100 = __ROL8__(v102, v97);
              --v101;
            }
            while ( v101 );
            v103 = __ROL8__(v99 ^ (v95 - v94), 17) ^ v99 ^ (v95 - v94);
            v97 = ((unsigned __int8)(((v103 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v103) ^ (unsigned __int8)v97) & 0x3F;
            if ( !v97 )
              LOBYTE(v97) = 1;
            --v161;
          }
          while ( v161 );
          v104 = v158;
          for ( j = v100; ; LODWORD(v100) = j ^ v100 )
          {
            j >>= 31;
            if ( !j )
              break;
          }
          ++v92;
          v93 += 6;
          *v139++ = v100 & 0x7FFFFFFF;
        }
        while ( v92 < v158 );
        v2 = a2;
        v106 = v133;
        v90 = (char **)v142;
        sub_1403F96C8(v3, v142, v158);
        v109 = 0;
        v162 = 0;
        if ( v158 )
        {
          v110 = (unsigned int *)v153;
          v111 = (_DWORD *)(v134 + 16);
          while ( 1 )
          {
            v112 = (unsigned int)*v111;
            v140 = *v110;
            if ( *v110 != (*v111 & 0x7FFFFFFF) )
            {
              v113 = v106 + (v109 << 12);
              v148 = v113;
              if ( (*(_DWORD *)(v3 + 2396) & 0x40) != 0 )
              {
                v114 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v115 = v113 & 0xFFFFFFFFFFFFF000uLL;
                v146 = (v113 + 4095) | 0xFFF;
                v136 = (v113 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 2 )
                {
                  v116 = v114;
                  while ( 1 )
                  {
                    v117 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v3 + 1112))(v115, 0LL);
                    if ( v117 != -1073741267 )
                      break;
                    if ( v114 > 1u )
                      goto LABEL_135;
                    v116 = v114;
                    __writecr8(v114);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v117 < 0 )
                  {
                    __writecr8(v116);
                    v112 = (unsigned int)*v111;
                    v104 = v158;
                    v113 = v148;
                    v109 = v162;
                    v106 = v133;
                    break;
                  }
LABEL_135:
                  v115 += 4096LL;
                  v136 += 4096LL;
                  if ( v136 != v146 )
                    continue;
                  goto LABEL_136;
                }
              }
              LODWORD(v112) = v112 & 0x7FFFFFFF;
              if ( !*(_DWORD *)(v3 + 2240) )
              {
                *(_QWORD *)(*(_QWORD *)(v3 + 1384) + 24LL) = v140 ^ v112;
                if ( !*(_DWORD *)(v3 + 2240) )
                {
                  *(_QWORD *)(v3 + 2248) = v3 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v3 + 2256) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                  v118 = *a2;
                  *(_QWORD *)(v3 + 2272) = v113;
                  *(_QWORD *)(v3 + 2264) = v118;
                  *(_DWORD *)(v3 + 2240) = 1;
                  sub_140AD049C(v3, 0LL, v107, v108);
                }
              }
            }
            v107 = 16LL;
            v108 = (__int64 *)(v134 + 20LL * v109);
            v119 = (__int64 *)(48LL * v109 + v142 + 16);
            while ( 1 )
            {
              v120 = *v119++;
              v121 = *v108++;
              if ( v120 != v121 )
                break;
              v107 = (unsigned int)(v107 - 8);
              if ( (unsigned int)v107 < 8 )
              {
                if ( !(_DWORD)v107 )
                  goto LABEL_161;
                while ( 1 )
                {
                  v122 = *(unsigned __int8 *)v119;
                  v119 = (__int64 *)((char *)v119 + 1);
                  v123 = *(unsigned __int8 *)v108;
                  v108 = (__int64 *)((char *)v108 + 1);
                  if ( v122 != v123 )
                    goto LABEL_148;
                  v26 = (_DWORD)v107 == 1;
                  v107 = (unsigned int)(v107 - 1);
                  if ( v26 )
                    goto LABEL_161;
                }
              }
            }
LABEL_148:
            v124 = v106 + (v109 << 12);
            v147 = v124;
            if ( (*(_DWORD *)(v3 + 2396) & 0x40) != 0 )
            {
              v125 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v126 = v124 & 0xFFFFFFFFFFFFF000uLL;
              v149 = (v124 + 4095) | 0xFFF;
              v137 = (v124 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 2 )
              {
                v116 = v125;
                while ( 1 )
                {
                  v127 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(v3 + 1112))(
                           v126,
                           0LL,
                           v107,
                           v108);
                  if ( v127 != -1073741267 )
                    break;
                  if ( v125 > 1u )
                    goto LABEL_155;
                  v116 = v125;
                  __writecr8(v125);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v127 < 0 )
                {
                  __writecr8(v116);
                  v124 = v147;
                  v109 = v162;
                  goto LABEL_158;
                }
LABEL_155:
                v126 += 4096LL;
                v137 += 4096LL;
                if ( v137 != v149 )
                  continue;
                break;
              }
LABEL_136:
              __writecr8(v116);
              v109 = v162;
              goto LABEL_160;
            }
LABEL_158:
            if ( !*(_DWORD *)(v3 + 2240) )
            {
              *(_QWORD *)(v3 + 2248) = v3 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v3 + 2256) = (char *)a2 - 0x4C48B4211BBACBEBLL;
              v128 = *a2;
              *(_QWORD *)(v3 + 2272) = v124;
              *(_QWORD *)(v3 + 2264) = v128;
              *(_DWORD *)(v3 + 2240) = 1;
              sub_140AD049C(v3, 0LL, v107, v108);
            }
LABEL_160:
            v104 = v158;
LABEL_161:
            v106 = v133;
            ++v109;
            ++v110;
            v162 = v109;
            v111 += 5;
            if ( v109 >= v104 )
            {
              LODWORD(v87) = v144;
              v90 = (char **)v142;
              break;
            }
          }
        }
        v87 = v104 + (unsigned int)v87;
        v144 = v87;
        v133 = (v104 << 12) + v106;
        *(_DWORD *)(v3 + 2032) += v104 << 15;
        v89 = v143 - v104;
        v134 += 20LL * v104;
        v143 -= v104;
      }
      while ( *(_DWORD *)(v3 + 2032) < *(_DWORD *)(v3 + 2036) && v89 );
      v38 = v150;
      v37 = v151;
      v39 = v145;
LABEL_168:
      while ( 1 )
      {
        v129 = v38 + 20 * v87;
        if ( v129 == v37 || *(char *)(v129 + 15) >= 0 )
          break;
        v87 = (unsigned int)(v87 + 1);
      }
      v38 += 20 * v87;
      v39 += (unsigned int)((_DWORD)v87 << 12);
      v150 = v38;
      v145 = v39;
    }
  }
  v40 = 0;
  v155 = 0;
  do
  {
    if ( (unsigned int)v35 <= 0x10 )
    {
      v37 = v40;
      if ( v40 >= (unsigned int)v35 )
        break;
    }
    else
    {
      v41 = __rdtsc();
      v42 = __ROR8__(v41, 3);
      v37 = ((((v42 ^ v41) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v42 ^ v41)))
          % v36;
    }
    v43 = (unsigned int)v37;
    v37 = (unsigned int)((_DWORD)v37 << 12);
    v44 = v31 + (unsigned int)v37;
    v45 = &v32[5 * v43];
    if ( *((char *)v45 + 15) >= 0 )
    {
      *(_DWORD *)(v3 + 2032) += 4096;
      LODWORD(v46) = *(_DWORD *)(v3 + 2012);
      v47 = (_QWORD *)v44;
      v48 = (const char *)v44;
      if ( v44 < (unsigned __int64)(v44 + 4096) )
      {
        do
        {
          _mm_prefetch(v48, 0);
          v48 += 64;
        }
        while ( (unsigned __int64)v48 < v44 + 4096 );
      }
      v49 = *(_QWORD *)(v3 + 2016);
      v50 = 32;
      do
      {
        v51 = 8LL;
        do
        {
          v52 = v49 ^ *v47;
          v53 = v47[1];
          v47 += 2;
          v49 = __ROL8__(__ROL8__(v52, v46) ^ v53, v46);
          --v51;
        }
        while ( v51 );
        v54 = __ROL8__(*(_QWORD *)(v3 + 2016) ^ ((unsigned __int64)v47 - v44), 17) ^ *(_QWORD *)(v3 + 2016) ^ ((unsigned __int64)v47 - v44);
        v46 = ((unsigned __int8)(((v54 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v54) ^ (unsigned __int8)v46) & 0x3F;
        if ( !(_DWORD)v46 )
          v46 = 1LL;
        --v50;
      }
      while ( v50 );
      for ( k = v49; ; LODWORD(v49) = k ^ v49 )
      {
        k >>= 31;
        if ( !k )
          break;
      }
      v56 = v45 + 4;
      v57 = v49 & 0x7FFFFFFF;
      if ( v57 != (v45[4] & 0x7FFFFFFF) )
      {
        v156 = (unsigned int)v45[4] >> 31;
        if ( (*(_DWORD *)(v3 + 2396) & 0x40) != 0 )
        {
          v58 = KeGetCurrentIrql();
          v159 = v58;
          __writecr8(2uLL);
          v59 = v44 & 0xFFFFFFFFFFFFF000uLL;
          v141 = (v44 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v60 = v58;
            while ( 1 )
            {
              v61 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(v3 + 1112))(
                      v59,
                      0LL,
                      v47,
                      v46);
              if ( v61 != -1073741267 )
                break;
              if ( !v156 )
                goto LABEL_70;
              v58 = v159;
              if ( v159 > 1u )
                goto LABEL_68;
              v60 = v159;
              __writecr8(v159);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v61 < 0 )
            {
LABEL_70:
              __writecr8(v60);
              v56 = v45 + 4;
              goto LABEL_71;
            }
            v58 = v159;
LABEL_68:
            v46 = 4096LL;
            v59 += 4096LL;
            v141 += 4096LL;
            if ( v141 != ((v44 + 4095) | 0xFFF) )
              continue;
            break;
          }
          __writecr8(v60);
          v56 = v45 + 4;
        }
        else
        {
LABEL_71:
          v62 = (unsigned int)*v56;
          LODWORD(v62) = v62 & 0x7FFFFFFF;
          if ( !*(_DWORD *)(v3 + 2240) )
          {
            *(_QWORD *)(*(_QWORD *)(v3 + 1384) + 24LL) = v62 ^ v57;
            if ( !*(_DWORD *)(v3 + 2240) )
            {
              *(_QWORD *)(v3 + 2248) = v3 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v3 + 2256) = (char *)v2 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v3 + 2264) = *v2;
              *(_QWORD *)(v3 + 2272) = v44;
              *(_DWORD *)(v3 + 2240) = 1;
              sub_140AD049C(v3, 0LL, v47, v46);
            }
          }
        }
      }
      sub_1403F966C(v3, v44, 0x1000u, (__int64)v152);
      v63 = 16LL;
      v64 = v152;
      while ( 1 )
      {
        v65 = *v64++;
        v66 = *(_QWORD *)v45;
        v45 += 2;
        if ( v65 != v66 )
          break;
        v63 = (unsigned int)(v63 - 8);
        if ( (unsigned int)v63 < 8 )
        {
          if ( !(_DWORD)v63 )
            goto LABEL_80;
          while ( 1 )
          {
            v37 = *(unsigned __int8 *)v64;
            v64 = (__int64 *)((char *)v64 + 1);
            v67 = *(unsigned __int8 *)v45;
            v45 = (int *)((char *)v45 + 1);
            if ( v37 != v67 )
              goto LABEL_90;
            v26 = (_DWORD)v63 == 1;
            v63 = (unsigned int)(v63 - 1);
            if ( v26 )
              goto LABEL_80;
          }
        }
      }
LABEL_90:
      v82 = *v56 >> 31;
      if ( (*(_DWORD *)(v3 + 2396) & 0x40) != 0 )
      {
        v83 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v84 = v44 & 0xFFFFFFFFFFFFF000uLL;
        v157 = (v44 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 2 )
        {
          v85 = v83;
          while ( 1 )
          {
            v86 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(v3 + 1112))(
                    v84,
                    0LL,
                    v63,
                    v64);
            if ( v86 != -1073741267 )
              break;
            if ( !v82 )
              goto LABEL_100;
            if ( v83 > 1u )
              goto LABEL_98;
            v85 = v83;
            __writecr8(v83);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          if ( v86 < 0 )
          {
LABEL_100:
            __writecr8(v85);
            goto LABEL_101;
          }
LABEL_98:
          v84 += 4096LL;
          v157 += 4096LL;
          if ( v157 != ((v44 + 4095) | 0xFFF) )
            continue;
          break;
        }
        __writecr8(v85);
      }
      else
      {
LABEL_101:
        if ( !*(_DWORD *)(v3 + 2240) )
        {
          *(_QWORD *)(v3 + 2248) = v3 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v3 + 2256) = (char *)v2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v3 + 2264) = *v2;
          *(_QWORD *)(v3 + 2272) = v44;
          *(_DWORD *)(v3 + 2240) = 1;
          sub_140AD049C(v3, 0LL, v63, v64);
        }
      }
LABEL_80:
      *(_DWORD *)(v3 + 2032) += 0x10000;
      v32 = v2 + 12;
      LODWORD(v35) = v135;
      v31 = v132;
      v36 = v138;
    }
    v40 = v155 + 1;
    v155 = v40;
  }
  while ( v40 < 0x10 );
LABEL_82:
  v68 = *(_QWORD *)(v3 + 1304);
  v69 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64))(v3 + 320))(v68, v37);
  v70 = **(unsigned int ***)(v3 + 1512);
  v71 = v70 + 4;
  v72 = *((_BYTE *)v70 + 12);
  v73 = (unsigned __int64)&v70[6 * *v70 + 4];
  while ( 2 )
  {
    v74 = 24LL;
    v75 = (char *)(v2 + 6);
    v76 = v71;
    while ( 1 )
    {
      v77 = *(_QWORD *)v76;
      v76 += 2;
      v78 = *(_QWORD *)v75;
      v75 += 8;
      if ( v77 != v78 )
        break;
      v74 = (unsigned int)(v74 - 8);
      if ( (unsigned int)v74 < 8 )
      {
        v79 = (_DWORD)v74 == 0;
        while ( !v79 )
        {
          v80 = *(_BYTE *)v76;
          v76 = (unsigned int *)((char *)v76 + 1);
          v81 = *v75++;
          if ( v80 != v81 )
            goto LABEL_173;
          v79 = (_DWORD)v74 == 1;
          v74 = (unsigned int)(v74 - 1);
        }
        goto LABEL_174;
      }
    }
LABEL_173:
    v71 += 6;
    if ( (unsigned __int64)v71 < v73 )
      continue;
    break;
  }
LABEL_174:
  (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v3 + 384))(*(_QWORD *)(v3 + 1304), v74, v75, v76);
  __writecr8(v69);
  if ( !v72 )
    goto LABEL_185;
  if ( (*(_DWORD *)(v3 + 2396) & 0x10) != 0 && !*(_DWORD *)(v3 + 2240) )
  {
    *(_QWORD *)(v3 + 2248) = v3 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(v3 + 2256) = (char *)v2 - 0x4C48B4211BBACBEBLL;
    *(_QWORD *)(v3 + 2264) = *v2;
    *(_QWORD *)(v3 + 2272) = 1LL;
    *(_DWORD *)(v3 + 2240) = 1;
    sub_140AD049C(v3, 0LL, v130, v131);
  }
  if ( *((_QWORD *)v2 + 3) != 1LL )
  {
LABEL_185:
    if ( v71 == (unsigned int *)v73 && !*(_DWORD *)(v3 + 2240) )
    {
      *(_QWORD *)(v3 + 2248) = v3 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v3 + 2256) = (char *)v2 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(v3 + 2264) = *v2;
      *(_QWORD *)(v3 + 2272) = v71;
      *(_DWORD *)(v3 + 2240) = 1;
      sub_140AD049C(v3, 0LL, v130, v131);
    }
  }
  *(_DWORD *)(v3 + 2028) = 0;
}
