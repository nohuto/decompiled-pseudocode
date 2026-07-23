/*
 * XREFs of sub_140AD6FD0 @ 0x140AD6FD0
 * Callers:
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     sub_140AB9010 @ 0x140AB9010 (sub_140AB9010.c)
 *     sub_140ACD048 @ 0x140ACD048 (sub_140ACD048.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     sub_1403F966C @ 0x1403F966C (sub_1403F966C.c)
 *     sub_1403F96C8 @ 0x1403F96C8 (sub_1403F96C8.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140760F98 @ 0x140760F98 (sub_140760F98.c)
 *     sub_140ACFC24 @ 0x140ACFC24 (sub_140ACFC24.c)
 *     sub_140AD049C @ 0x140AD049C (sub_140AD049C.c)
 *     j__guard_dispatch_icall_nop @ 0x140AD23B0 (j__guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_140AD6FD0(__int64 a1, ULONG_PTR a2, char a3)
{
  _BYTE *v3; // rbx
  __int64 v5; // r13
  int v6; // edi
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // si
  int v9; // r12d
  unsigned int *v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // xmm1_8
  int v13; // ecx
  __int128 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // ecx
  unsigned int v19; // r15d
  unsigned int v20; // eax
  int v21; // r8d
  _BYTE *v22; // r14
  int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // r8
  int v26; // ecx
  unsigned __int64 v27; // rdx
  int v28; // ebx
  int v29; // ecx
  _BYTE *v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 i; // rax
  _QWORD *v35; // rdx
  __int64 v36; // r8
  char *v37; // rcx
  char v38; // al
  unsigned __int64 v39; // rbx
  _QWORD *v40; // rax
  unsigned __int64 v41; // rcx
  int v42; // r15d
  _DWORD *v43; // rdi
  bool v44; // zf
  int v45; // eax
  __int16 v46; // ax
  char *v47; // r8
  __int64 *v48; // r10
  signed __int64 v49; // r9
  char *v50; // rbx
  char *v51; // r12
  int v52; // r11d
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned int v55; // r8d
  __int64 *v56; // r9
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  int v61; // r9d
  signed __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rax
  int v65; // r9d
  signed __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rax
  unsigned int v69; // ecx
  unsigned int v70; // edx
  unsigned int v71; // eax
  BOOL v72; // r12d
  unsigned int v73; // r15d
  int v74; // eax
  _BYTE *v75; // rcx
  int v76; // r9d
  __int64 v77; // r8
  ULONG_PTR v78; // rax
  BOOL v79; // r11d
  _DWORD *v80; // r13
  unsigned int v81; // ebx
  int v82; // r15d
  char *v83; // rdi
  int v84; // eax
  __int16 v85; // ax
  char *v86; // r8
  __int64 *v87; // r11
  signed __int64 v88; // r9
  char *v89; // rbx
  int v90; // r10d
  char *v91; // r12
  __int64 v92; // rdx
  __int64 v93; // rax
  unsigned int v94; // r8d
  __int64 *v95; // r9
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  int v100; // r9d
  signed __int64 v101; // r8
  __int64 v102; // rdx
  __int64 v103; // rax
  int v104; // r8d
  signed __int64 v105; // rdi
  __int64 v106; // rdx
  __int64 v107; // rax
  unsigned int v108; // ecx
  int v109; // eax
  unsigned __int64 *v110; // rdx
  unsigned int *v111; // r8
  unsigned __int64 v112; // rcx
  _BYTE *v113; // rax
  unsigned __int64 v114; // rdx
  __int64 v115; // rdi
  unsigned __int64 v116; // rax
  unsigned int v117; // eax
  char **v118; // r15
  __int64 v119; // rbx
  unsigned int v120; // r11d
  ULONG_PTR v121; // rdi
  _DWORD *v122; // r13
  char *v123; // r9
  char *v124; // r10
  unsigned __int64 v125; // rax
  int v126; // r12d
  const char *j; // rax
  unsigned __int64 v128; // r14
  unsigned __int64 v129; // r8
  __int64 v130; // rax
  __int64 v131; // r8
  unsigned __int64 v132; // rcx
  unsigned __int64 v133; // rax
  unsigned __int64 v134; // rdi
  __int64 v135; // r15
  _DWORD *v136; // r12
  __int64 v137; // r13
  _DWORD *v138; // r9
  _QWORD *v139; // r11
  char *v140; // r15
  int v141; // r8d
  char *v142; // rcx
  _QWORD *v143; // rdx
  __int64 v144; // r10
  char v145; // al
  int v146; // ecx
  __int64 k; // rcx
  unsigned __int64 v148; // rax
  __int64 v149; // r15
  bool v150; // cf
  __int64 v151; // r13
  int v152; // r12d
  unsigned int v153; // eax
  __int64 v154; // rdi
  int v156; // ecx
  unsigned int v157; // eax
  __int64 v158; // r8
  int v159; // ecx
  unsigned __int64 v160; // rdx
  int v161; // r14d
  __int64 v162; // r14
  int v163; // ecx
  _QWORD *v164; // rax
  __int64 v165; // rdx
  _QWORD *v166; // r9
  int v167; // r10d
  const char *v168; // rax
  unsigned __int64 v169; // r8
  unsigned int v170; // r11d
  __int64 v171; // rax
  __int64 v172; // r8
  unsigned __int128 v173; // rax
  unsigned int v174; // edx
  unsigned __int64 v175; // rax
  __int64 v176; // rax
  unsigned __int64 m; // rax
  int v178; // [rsp+38h] [rbp-79h]
  ULONG_PTR v179; // [rsp+38h] [rbp-79h]
  int v180; // [rsp+38h] [rbp-79h]
  _BYTE *v181; // [rsp+40h] [rbp-71h]
  ULONG_PTR v182; // [rsp+40h] [rbp-71h]
  unsigned int v183; // [rsp+48h] [rbp-69h] BYREF
  unsigned int v184; // [rsp+4Ch] [rbp-65h]
  int v185; // [rsp+50h] [rbp-61h]
  unsigned __int64 v186; // [rsp+58h] [rbp-59h]
  __int64 v187; // [rsp+60h] [rbp-51h]
  unsigned __int64 v188; // [rsp+68h] [rbp-49h] BYREF
  char **v189; // [rsp+70h] [rbp-41h]
  __int64 v190; // [rsp+78h] [rbp-39h]
  _BYTE *v191; // [rsp+80h] [rbp-31h]
  __int128 v192; // [rsp+88h] [rbp-29h] BYREF
  __int64 v193; // [rsp+98h] [rbp-19h]
  __int64 v194; // [rsp+A0h] [rbp-11h]
  _BYTE v195[96]; // [rsp+A8h] [rbp-9h] BYREF
  ULONG_PTR v197; // [rsp+120h] [rbp+6Fh]
  int v199; // [rsp+128h] [rbp+77h]
  unsigned __int16 v200; // [rsp+130h] [rbp+7Fh]
  unsigned int v201; // [rsp+130h] [rbp+7Fh]
  unsigned __int64 v202; // [rsp+130h] [rbp+7Fh]
  int v203; // [rsp+130h] [rbp+7Fh]

  v197 = a2;
  v3 = *(_BYTE **)a1;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)a1 + 488LL))(a2);
  if ( !v5 )
    return 3221225595LL;
  v185 = (*((__int64 (__fastcall **)(ULONG_PTR))v3 + 83))(a2);
  v200 = *(_WORD *)(v5 + 6);
  if ( !v200 || *(_DWORD *)(v5 + 56) < 0x1000u || (a2 & 0xFFF) != 0 )
  {
    if ( (*((_DWORD *)v3 + 598) & 0x200000) == 0 )
      KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, a2, 4uLL, 0LL);
    if ( !*((_DWORD *)v3 + 560) )
    {
      *((_QWORD *)v3 + 282) = 0LL;
      *((_QWORD *)v3 + 283) = 271LL;
      *((_QWORD *)v3 + 281) = v3 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v3 + 284) = a2;
      *((_DWORD *)v3 + 560) = 1;
      sub_140AD049C((__int64)v3, 0LL);
    }
    return 3221225595LL;
  }
  v6 = -1073741275;
  v7 = *((_QWORD *)v3 + 163);
  LODWORD(v189) = *(_DWORD *)(v5 + 84);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*((void (__fastcall **)(__int64))v3 + 40))(v7);
  v9 = 24;
  v10 = (unsigned int *)**((_QWORD **)v3 + 189);
  v11 = (unsigned __int64)(v10 + 4);
  while ( *(_QWORD *)(v11 + 8) != a2 )
  {
    v11 += 24LL;
    if ( v11 >= (unsigned __int64)&v10[6 * *v10 + 4] )
      goto LABEL_10;
  }
  v6 = 0;
  v12 = *(_QWORD *)(v11 + 16);
  v192 = *(_OWORD *)v11;
  v193 = v12;
LABEL_10:
  (*((void (__fastcall **)(_QWORD))v3 + 48))(*((_QWORD *)v3 + 163));
  __writecr8(CurrentIrql);
  if ( v6 >= 0 )
  {
    v16 = (unsigned int)v193;
  }
  else
  {
    v13 = 24;
    v14 = &v192;
    v15 = 3LL;
    do
    {
      *(_QWORD *)v14 = 0LL;
      v13 -= 8;
      v14 = (__int128 *)((char *)v14 + 8);
      --v15;
    }
    while ( v15 );
    for ( ; v13; --v13 )
    {
      *(_BYTE *)v14 = 0;
      v14 = (__int128 *)((char *)v14 + 1);
    }
    v16 = *(unsigned int *)(v5 + 80);
    LODWORD(v193) = *(_DWORD *)(v5 + 80);
    *((_QWORD *)&v192 + 1) = a2;
    *(_QWORD *)&v192 = 1LL;
  }
  v17 = *((unsigned int *)v3 + 491);
  v18 = *((_DWORD *)v3 + 571);
  v186 = ((a2 & 0xFFF) + 4095 + v16) >> 12;
  v19 = 20 * v186;
  v20 = 20 * v186 + v17 + 48;
  v21 = (v185 != 0) + 33;
  v178 = v21;
  if ( v20 <= *((_DWORD *)v3 + 633) )
  {
    v22 = v3;
    v190 = (__int64)v3;
    *((_DWORD *)v3 + 491) = v20;
  }
  else
  {
    v190 = sub_140ACFC24(v3, v20, v18);
    v22 = (_BYTE *)v190;
    if ( !v190 )
      return 3221225626LL;
    v23 = *((_DWORD *)v3 + 598);
    if ( (v23 & 4) == 0 )
    {
      v24 = *((_DWORD *)v3 + 491);
      v25 = *((_QWORD *)v3 + 242);
      v26 = (v23 & 0x20000000) != 0 ? *((_DWORD *)v3 + 571) : 0;
      if ( v24 >= 8 )
      {
        v27 = (unsigned __int64)v24 >> 3;
        do
        {
          *(_QWORD *)v3 = 0LL;
          v24 -= 8;
          v3 += 8;
          --v27;
        }
        while ( v27 );
      }
      for ( ; v24; --v24 )
        *v3++ = 0;
      v28 = *((_DWORD *)v22 + 571);
      *((_DWORD *)v22 + 571) = v26;
      if ( v26 == 3 )
      {
        (*((void (__fastcall **)(__int64))v22 + 107))(v25);
      }
      else if ( (*((_DWORD *)v22 + 598) & 0x10000000) != 0 || !v26 )
      {
        (*((void (__fastcall **)(__int64))v22 + 30))(v25);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v22 + 67))(v25 - 8, *(_QWORD *)(v25 - 8));
      }
      *((_DWORD *)v22 + 571) = v28;
    }
    *((_DWORD *)v22 + 598) &= ~4u;
    v21 = v178;
  }
  ++*((_DWORD *)v22 + 501);
  v29 = 48;
  v30 = &v22[v17];
  v31 = v30;
  v32 = 6LL;
  do
  {
    *v31 = 0LL;
    v29 -= 8;
    ++v31;
    --v32;
  }
  while ( v32 );
  for ( ; v29; --v29 )
  {
    *(_BYTE *)v31 = 0;
    v31 = (_QWORD *)((char *)v31 + 1);
  }
  *(_DWORD *)v30 = v21;
  *((_QWORD *)v30 + 1) = 0LL;
  *((_DWORD *)v30 + 4) = 0;
  v33 = *((_QWORD *)v22 + 252);
  for ( i = v33; ; LODWORD(v33) = i ^ v33 )
  {
    i >>= 31;
    if ( !i )
      break;
  }
  v35 = v30 + 24;
  v36 = 3LL;
  *((_DWORD *)v30 + 5) = v33 & 0x7FFFFFFF;
  v37 = (char *)&v192;
  *(_QWORD *)a1 = v22;
  do
  {
    v9 -= 8;
    *v35 = *(_QWORD *)v37;
    v37 += 8;
    ++v35;
    --v36;
  }
  while ( v36 );
  for ( ; v9; --v9 )
  {
    v38 = *v37++;
    *(_BYTE *)v35 = v38;
    v35 = (_QWORD *)((char *)v35 + 1);
  }
  LOBYTE(v35) = 1;
  v39 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD *, __int64, unsigned int *))v22 + 60))(v197, v35, 12LL, &v183);
  v188 = v39;
  v183 &= -(v39 != 0);
  v199 = a3 & 1;
  if ( !v199 )
  {
    v39 = 0LL;
    v183 = 0;
    v188 = 0LL;
  }
  v191 = v30 + 48;
  v181 = v30 + 48;
  v187 = (__int64)&v30[20 * (unsigned int)v186 + 48];
  v40 = v30 + 48;
  if ( v19 >= 8 )
  {
    v41 = (unsigned __int64)v19 >> 3;
    do
    {
      *v40 = -1LL;
      v19 -= 8;
      ++v40;
      --v41;
    }
    while ( v41 );
  }
  for ( ; v19; --v19 )
  {
    *(_BYTE *)v40 = -1;
    v40 = (_QWORD *)((char *)v40 + 1);
  }
  v42 = 0;
  v43 = (_DWORD *)(v5 + *(unsigned __int16 *)(v5 + 20) + 24LL);
  v44 = (v43[9] & 0x2000000) == 0;
  v186 = (unsigned __int64)&v43[10 * v200];
  if ( !v44 )
    goto LABEL_55;
  v45 = *v43;
  if ( *v43 == 1414090313 )
  {
    if ( v43[1] == 1195525195 )
    {
LABEL_55:
      v42 = 1;
      goto LABEL_56;
    }
  }
  else if ( v45 == 1162297680 )
  {
    v46 = *((_WORD *)v43 + 2);
    if ( v46 == 30839 || v46 == 29303 || v46 == 30583 )
      goto LABEL_55;
    goto LABEL_65;
  }
  if ( v45 == 1095914053 && *((_WORD *)v43 + 2) == 16724 )
    goto LABEL_55;
LABEL_65:
  v47 = (char *)*((_QWORD *)v22 + 287);
  v48 = (__int64 *)*((_QWORD *)v22 + 288);
  v49 = (char *)v43 - v47;
  v50 = (char *)*((_QWORD *)v22 + 289);
  v51 = (char *)*((_QWORD *)v22 + 290);
  v52 = 7;
  while ( 1 )
  {
    v53 = (unsigned __int8)v47[v49];
    v54 = (unsigned __int8)*v47++;
    if ( v53 != v54 )
      break;
    if ( !--v52 )
    {
LABEL_83:
      v39 = v188;
      goto LABEL_55;
    }
  }
  v55 = 8;
  v56 = (__int64 *)v43;
  while ( 1 )
  {
    v57 = *v56++;
    v58 = *v48++;
    if ( v57 != v58 )
      break;
    v55 -= 8;
    if ( v55 < 8 )
    {
      if ( !v55 )
        goto LABEL_83;
      while ( 1 )
      {
        v59 = *(unsigned __int8 *)v56;
        v56 = (__int64 *)((char *)v56 + 1);
        v60 = *(unsigned __int8 *)v48;
        v48 = (__int64 *)((char *)v48 + 1);
        if ( v59 != v60 )
          goto LABEL_76;
        if ( !--v55 )
          goto LABEL_83;
      }
    }
  }
LABEL_76:
  v61 = 4;
  v62 = (char *)v43 - v50;
  while ( 1 )
  {
    v63 = (unsigned __int8)v50[v62];
    v64 = (unsigned __int8)*v50++;
    if ( v63 != v64 )
      break;
    if ( !--v61 )
      goto LABEL_83;
  }
  v65 = 6;
  v66 = (char *)v43 - v51;
  while ( 1 )
  {
    v67 = (unsigned __int8)v51[v66];
    v68 = (unsigned __int8)*v51++;
    if ( v67 != v68 )
      break;
    if ( !--v65 )
      goto LABEL_83;
  }
  v39 = v188;
LABEL_56:
  if ( (int)v43[9] < 0 )
  {
    v42 = 1;
LABEL_86:
    if ( *v43 == 1414090313 && v43[1] == 1195525195 && (*((_DWORD *)v22 + 599) & 0x2000) != 0 )
      v42 = 0;
    goto LABEL_90;
  }
  if ( v42 )
    goto LABEL_86;
LABEL_90:
  v69 = v43[4];
  v70 = v43[3];
  v71 = v43[2];
  v72 = v42 == 0;
  v184 = v70;
  if ( v69 <= v71 )
    v69 = v71;
  v73 = (v69 + v70 + 4095) & 0xFFFFF000;
  v74 = sub_140760F98((__int64)v43);
  v75 = v181;
  v76 = 0;
  v77 = v187;
  v44 = v74 == 0;
  v78 = v197;
  v79 = !v44;
  v179 = v197;
  v201 = 0;
  if ( v181 != (_BYTE *)v187 )
  {
    v80 = v43 + 1;
    v81 = 0;
    while ( v81 < v184 )
    {
      if ( v81 < (unsigned int)v189 )
      {
LABEL_142:
        v110 = &v188;
        v111 = &v183;
        do
        {
          v112 = *v110;
          if ( *v111 && v179 >= v112 && v179 <= v112 + *v111 - 1LL )
          {
            v75 = v181;
            v78 = v179;
            v77 = v187;
            v76 = 0;
            goto LABEL_154;
          }
          ++v76;
          ++v111;
          ++v110;
        }
        while ( !v76 );
        v76 = 0;
        if ( v81 >= v184 && v79 )
        {
          v113 = v181;
        }
        else
        {
          v113 = v181;
          *((_DWORD *)v181 + 4) &= ~0x80000000;
        }
        v113[15] &= ~0x80u;
        v78 = v179;
        v75 = v181;
        v77 = v187;
      }
LABEL_154:
      v81 += 4096;
      v78 += 4096LL;
      v75 += 20;
      v201 = v81;
      v179 = v78;
      v181 = v75;
      if ( v75 == (_BYTE *)v77 )
      {
        v114 = (unsigned __int64)v191;
        do
        {
          LODWORD(v115) = 0;
          v116 = v114;
          do
          {
            if ( *(char *)(v116 + 15) < 0 )
              break;
            v115 = (unsigned int)(v115 + 1);
            v116 = v114 + 20 * v115;
          }
          while ( v116 != v77 );
          v180 = v115;
          if ( (_DWORD)v115 )
          {
            v117 = v115;
            v118 = (char **)*((_QWORD *)v22 + 330);
            v184 = v115;
            v182 = v197;
            v189 = v118;
            v186 = v114;
            do
            {
              v119 = 8LL;
              v120 = 0;
              if ( v117 < 8 )
                v119 = v117;
              v121 = v182;
              v122 = v195;
              do
              {
                v118[1] = (char *)4096;
                v123 = (char *)(v121 + (v120 << 12));
                *v118 = v123;
                v124 = v123;
                v125 = *((_QWORD *)v22 + 252);
                *((_DWORD *)v22 + 508) += 4096;
                v126 = *((_DWORD *)v22 + 503);
                v202 = v125;
                for ( j = v123; j < v123 + 4096; j += 64 )
                  _mm_prefetch(j, 0);
                v128 = v202;
                v129 = v202;
                v203 = 32;
                do
                {
                  v130 = 8LL;
                  do
                  {
                    v131 = *((_QWORD *)v124 + 1) ^ __ROL8__(*(_QWORD *)v124 ^ v129, v126);
                    v124 += 16;
                    v129 = __ROL8__(v131, v126);
                    --v130;
                  }
                  while ( v130 );
                  v132 = __ROL8__(v128 ^ (v124 - v123), 17) ^ v128 ^ (v124 - v123);
                  v194 = (v132 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v126 = ((unsigned __int8)(v194 ^ v132) ^ (unsigned __int8)v126) & 0x3F;
                  if ( !v126 )
                    LOBYTE(v126) = 1;
                  --v203;
                }
                while ( v203 );
                v22 = (_BYTE *)v190;
                v133 = v129;
                v121 = v182;
                while ( 1 )
                {
                  v133 >>= 31;
                  if ( !v133 )
                    break;
                  LODWORD(v129) = v133 ^ v129;
                }
                ++v120;
                *v122 = v129 & 0x7FFFFFFF;
                v118 += 6;
                ++v122;
              }
              while ( v120 < (unsigned int)v119 );
              v134 = v186;
              v135 = (__int64)v189;
              sub_1403F96C8((__int64)v22, (__int64)v189, v119);
              v136 = v195;
              v137 = (unsigned int)v119;
              v138 = (_DWORD *)(v134 + 16);
              v139 = (_QWORD *)v134;
              v140 = (char *)(v135 + 16);
              do
              {
                v141 = 16;
                v142 = v140;
                v143 = v139;
                v144 = 2LL;
                do
                {
                  v141 -= 8;
                  *v143 = *(_QWORD *)v142;
                  v142 += 8;
                  ++v143;
                  --v144;
                }
                while ( v144 );
                for ( ; v141; --v141 )
                {
                  v145 = *v142++;
                  *(_BYTE *)v143 = v145;
                  v143 = (_QWORD *)((char *)v143 + 1);
                }
                v140 += 48;
                v139 = (_QWORD *)((char *)v139 + 20);
                v146 = (*v136++ ^ *v138) & 0x7FFFFFFF;
                *v138 ^= v146;
                v138 += 5;
                --v137;
              }
              while ( v137 );
              v22 = (_BYTE *)v190;
              v118 = v189;
              v182 += (unsigned int)((_DWORD)v119 << 12);
              v117 = v184 - v119;
              v186 = v134 + 20 * v119;
              *(_DWORD *)(v190 + 2032) += (_DWORD)v119 << 15;
              v184 = v117;
            }
            while ( v117 );
            LODWORD(v115) = v180;
            v114 = (unsigned __int64)v191;
            v77 = v187;
          }
          for ( k = 5LL * (unsigned int)v115; ; k = 5 * v115 )
          {
            v148 = v114 + 4 * k;
            if ( v148 == v77 || *(char *)(v148 + 15) >= 0 )
              break;
            v115 = (unsigned int)(v115 + 1);
          }
          v197 += (unsigned int)((_DWORD)v115 << 12);
          v114 += 20LL * (unsigned int)v115;
          v191 = (_BYTE *)v114;
        }
        while ( v114 != v77 );
        v39 = v188;
        goto LABEL_190;
      }
    }
    if ( v81 < v73 )
    {
LABEL_139:
      if ( v72 )
        goto LABEL_142;
      goto LABEL_154;
    }
    if ( v80 + 9 == (_DWORD *)v186 || v81 < v80[12] )
    {
      v78 = v179;
      goto LABEL_154;
    }
    v80 += 10;
    v82 = 0;
    if ( (v80[8] & 0x2000000) != 0 )
      goto LABEL_101;
    v83 = (char *)(v80 - 1);
    v84 = *(v80 - 1);
    if ( v84 == 1414090313 )
    {
      if ( *v80 == 1195525195 )
      {
LABEL_101:
        v82 = 1;
        goto LABEL_129;
      }
    }
    else if ( v84 == 1162297680 )
    {
      v85 = *(_WORD *)v80;
      if ( *(_WORD *)v80 == 30839 || v85 == 29303 || v85 == 30583 )
        goto LABEL_101;
      goto LABEL_109;
    }
    if ( v84 == 1095914053 && *(_WORD *)v80 == 16724 )
      goto LABEL_101;
LABEL_109:
    v86 = (char *)*((_QWORD *)v22 + 287);
    v87 = (__int64 *)*((_QWORD *)v22 + 288);
    v88 = v83 - v86;
    v89 = (char *)*((_QWORD *)v22 + 289);
    v90 = 7;
    v91 = (char *)*((_QWORD *)v22 + 290);
    while ( 1 )
    {
      v92 = (unsigned __int8)v86[v88];
      v93 = (unsigned __int8)*v86++;
      if ( v92 != v93 )
        break;
      if ( !--v90 )
      {
LABEL_127:
        v82 = 1;
        goto LABEL_128;
      }
    }
    v94 = 8;
    v95 = (__int64 *)(v80 - 1);
    while ( 1 )
    {
      v96 = *v95++;
      v97 = *v87++;
      if ( v96 != v97 )
        break;
      v94 -= 8;
      if ( v94 < 8 )
      {
        if ( !v94 )
          goto LABEL_127;
        while ( 1 )
        {
          v98 = *(unsigned __int8 *)v95;
          v95 = (__int64 *)((char *)v95 + 1);
          v99 = *(unsigned __int8 *)v87;
          v87 = (__int64 *)((char *)v87 + 1);
          if ( v98 != v99 )
            goto LABEL_120;
          if ( !--v94 )
            goto LABEL_127;
        }
      }
    }
LABEL_120:
    v100 = 4;
    v101 = v83 - v89;
    while ( 1 )
    {
      v102 = (unsigned __int8)v89[v101];
      v103 = (unsigned __int8)*v89++;
      if ( v102 != v103 )
        break;
      if ( !--v100 )
        goto LABEL_127;
    }
    v104 = 6;
    v105 = v83 - v91;
    while ( 1 )
    {
      v106 = (unsigned __int8)v91[v105];
      v107 = (unsigned __int8)*v91++;
      if ( v106 != v107 )
        break;
      if ( !--v104 )
        goto LABEL_127;
    }
LABEL_128:
    v81 = v201;
LABEL_129:
    if ( (int)v80[8] >= 0 )
    {
      if ( !v82 )
      {
LABEL_136:
        v108 = v80[3];
        v72 = v82 == 0;
        if ( v108 <= v80[1] )
          v108 = v80[1];
        v73 = (v108 + 4095 + v80[2]) & 0xFFFFF000;
        v109 = sub_140760F98((__int64)(v80 - 1));
        v75 = v181;
        v76 = 0;
        v77 = v187;
        v44 = v109 == 0;
        v78 = v179;
        v79 = !v44;
        goto LABEL_139;
      }
    }
    else
    {
      v82 = 1;
    }
    if ( *(v80 - 1) == 1414090313 && *v80 == 1195525195 && (*((_DWORD *)v22 + 599) & 0x2000) != 0 )
      v82 = 0;
    goto LABEL_136;
  }
LABEL_190:
  if ( v199 )
  {
    v149 = v183;
    if ( v183 )
    {
      v150 = v185 != 0;
      v185 = -v185;
      v151 = *((unsigned int *)v22 + 491);
      v152 = v150 + 13;
      v153 = v151 + 48;
      if ( (unsigned int)(v151 + 48) <= *((_DWORD *)v22 + 633) )
      {
        v154 = (__int64)v22;
        *((_DWORD *)v22 + 491) = v153;
      }
      else
      {
        v154 = sub_140ACFC24(v22, v153, *((_DWORD *)v22 + 571));
        if ( !v154 )
          return 3221225626LL;
        v156 = *((_DWORD *)v22 + 598);
        if ( (v156 & 4) == 0 )
        {
          v157 = *((_DWORD *)v22 + 491);
          v158 = *((_QWORD *)v22 + 242);
          v159 = (v156 & 0x20000000) != 0 ? *((_DWORD *)v22 + 571) : 0;
          if ( v157 >= 8 )
          {
            v160 = (unsigned __int64)v157 >> 3;
            do
            {
              *(_QWORD *)v22 = 0LL;
              v157 -= 8;
              v22 += 8;
              --v160;
            }
            while ( v160 );
          }
          for ( ; v157; --v157 )
            *v22++ = 0;
          v161 = *(_DWORD *)(v154 + 2284);
          *(_DWORD *)(v154 + 2284) = v159;
          if ( v159 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v154 + 856))(v158);
          }
          else if ( (*(_DWORD *)(v154 + 2392) & 0x10000000) != 0 || !v159 )
          {
            (*(void (__fastcall **)(__int64))(v154 + 240))(v158);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v154 + 536))(v158 - 8, *(_QWORD *)(v158 - 8));
          }
          *(_DWORD *)(v154 + 2284) = v161;
        }
        *(_DWORD *)(v154 + 2392) &= ~4u;
      }
      ++*(_DWORD *)(v154 + 2004);
      v162 = v154 + v151;
      v163 = 48;
      v164 = (_QWORD *)(v154 + v151);
      v165 = 6LL;
      do
      {
        *v164 = 0LL;
        v163 -= 8;
        ++v164;
        --v165;
      }
      while ( v165 );
      for ( ; v163; --v163 )
      {
        *(_BYTE *)v164 = 0;
        v164 = (_QWORD *)((char *)v164 + 1);
      }
      *(_DWORD *)v162 = v152;
      *(_QWORD *)(v162 + 8) = v39;
      v166 = (_QWORD *)v39;
      *(_DWORD *)(v162 + 16) = v149;
      *(_DWORD *)(v154 + 2032) += v149;
      v167 = *(_DWORD *)(v154 + 2012);
      if ( v39 < v39 + v149 )
      {
        v168 = (const char *)v39;
        do
        {
          _mm_prefetch(v168, 0);
          v168 += 64;
        }
        while ( (unsigned __int64)v168 < v39 + v149 );
      }
      v169 = *(_QWORD *)(v154 + 2016);
      v170 = (unsigned int)v149 >> 7;
      if ( (unsigned int)v149 >> 7 )
      {
        do
        {
          v171 = 8LL;
          do
          {
            v172 = v166[1] ^ __ROL8__(*v166 ^ v169, v167);
            v166 += 2;
            v169 = __ROL8__(v172, v167);
            --v171;
          }
          while ( v171 );
          v173 = (__ROL8__(*(_QWORD *)(v154 + 2016) ^ ((unsigned __int64)v166 - v39), 17) ^ *(_QWORD *)(v154 + 2016) ^ ((unsigned __int64)v166 - v39))
               * (unsigned __int128)0x7010008004002001uLL;
          v167 = ((unsigned __int8)v173 ^ (unsigned __int8)(BYTE8(v173) ^ v167)) & 0x3F;
          if ( !v167 )
            LOBYTE(v167) = 1;
          --v170;
        }
        while ( v170 );
        v162 = v154 + v151;
      }
      v174 = v149 & 0x7F;
      if ( v174 >= 8 )
      {
        v175 = (unsigned __int64)(v149 & 0x7F) >> 3;
        do
        {
          v169 = __ROL8__(*v166++ ^ v169, v167);
          v174 -= 8;
          --v175;
        }
        while ( v175 );
      }
      for ( ; v174; --v174 )
      {
        v176 = *(unsigned __int8 *)v166;
        v166 = (_QWORD *)((char *)v166 + 1);
        v169 = __ROL8__(v176 ^ v169, v167);
      }
      for ( m = v169; ; LODWORD(v169) = m ^ v169 )
      {
        m >>= 31;
        if ( !m )
          break;
      }
      *(_DWORD *)(v162 + 20) = v169 & 0x7FFFFFFF;
      *(_DWORD *)(v154 + 2032) += v149;
      if ( (*(_DWORD *)(v154 + 2392) & 0x40000000) != 0 )
      {
        if ( (_DWORD)v149 )
          sub_1403F966C(v154, v39, v149, v162 + 28);
      }
      *(_DWORD *)(v162 + 24) = 1;
      *(_QWORD *)a1 = v154;
    }
  }
  return 0LL;
}
