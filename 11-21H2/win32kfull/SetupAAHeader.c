/*
 * XREFs of SetupAAHeader @ 0x1C006DC90
 * Callers:
 *     AAHalftoneBitmap @ 0x1C0093280 (AAHalftoneBitmap.c)
 * Callees:
 *     _ALIGN_MEM @ 0x1C006E4F4 (_ALIGN_MEM.c)
 *     ComputeByteOffset @ 0x1C006E514 (ComputeByteOffset.c)
 *     CheckBMPNeedFixup @ 0x1C00E4948 (CheckBMPNeedFixup.c)
 *     ComputeAABBP @ 0x1C00E4C84 (ComputeAABBP.c)
 *     ComputeInputColorInfo @ 0x1C00F5EB8 (ComputeInputColorInfo.c)
 *     ComputeBytesPerScanLine @ 0x1C013D228 (ComputeBytesPerScanLine.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall SetupAAHeader(_QWORD *a1, __int64 a2, __int64 a3, __int64 (__fastcall **a4)(__int128 *a1))
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  _BYTE *v8; // r10
  __int64 v9; // rax
  int v10; // esi
  BOOL v11; // ecx
  int v12; // r15d
  int v13; // eax
  int v14; // r9d
  __int64 v15; // r13
  __int64 v16; // rdx
  int v17; // r14d
  int v18; // eax
  __int64 v19; // r13
  unsigned int *v20; // r8
  bool v21; // zf
  __int16 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // r12
  __int64 v25; // r13
  unsigned int v26; // r11d
  char v27; // al
  unsigned int v28; // r9d
  __int64 (__fastcall *v29)(); // rdx
  __int64 (__fastcall *v30)(int, int, int, int, int); // rax
  __int64 (__fastcall *v31)(int, int, int, int, int); // rcx
  unsigned int v32; // esi
  unsigned int v33; // ecx
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // r10
  unsigned int v37; // r11d
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // r10
  signed int v41; // esi
  int v42; // r11d
  int v43; // r9d
  _QWORD *v44; // r15
  unsigned int v45; // r13d
  unsigned int v46; // r14d
  unsigned __int64 v47; // r10
  int v48; // r12d
  unsigned __int64 v49; // rcx
  unsigned int v50; // edx
  unsigned int v51; // ecx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  unsigned int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // r15d
  __int64 v57; // rax
  int *v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // r15
  __int64 v64; // rax
  __int64 v65; // rdx
  char *v66; // rcx
  size_t v67; // r8
  unsigned int v68; // r13d
  int v69; // eax
  int v70; // r14d
  int v71; // r10d
  _DWORD *v72; // r9
  int v73; // eax
  __int64 v74; // rdi
  __int64 v75; // rdx
  int v76; // r9d
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rdi
  int v80; // r9d
  __int64 v81; // rcx
  __int64 v82; // rdx
  int v83; // eax
  int v84; // r10d
  int v85; // r11d
  __int64 v86; // rcx
  int v87; // eax
  int v88; // r9d
  int v89; // r10d
  __int64 v90; // rcx
  int v91; // eax
  __int64 v92; // rdx
  int v93; // eax
  int v94; // eax
  __int64 (__fastcall **v95)(__int128 *); // rcx
  __int64 (__fastcall *v96)(__int128 *); // rax
  __int64 v97; // rcx
  __int64 result; // rax
  _QWORD *v99; // rax
  __int64 v100; // r8
  __int64 v101; // rax
  unsigned __int64 v102; // rax
  int v103; // edx
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  unsigned __int64 v107; // rcx
  __int64 (__fastcall *v108)(); // r10
  __int64 v109; // rax
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rcx
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rdx
  unsigned int v114; // eax
  __int64 (__fastcall *v115)(); // r10
  unsigned __int64 v116; // rcx
  unsigned __int64 v117; // rcx
  bool v118; // cf
  unsigned int v119; // eax
  __int64 v120; // rcx
  unsigned __int64 v121; // rcx
  unsigned __int64 v122; // rcx
  unsigned __int64 v123; // rdx
  unsigned int v124; // eax
  __int64 v125; // rax
  __int64 v126; // rax
  bool v127; // sf
  unsigned int v128; // r12d
  int v129; // r8d
  int v130; // r15d
  int v131; // r15d
  __int64 v132; // rdx
  _DWORD *v133; // rdi
  __int64 v134; // r8
  int v135; // eax
  int v136; // r15d
  int v137; // r9d
  __int64 v138; // rcx
  _BYTE *v139; // rax
  int *v140; // rcx
  unsigned int v141; // [rsp+60h] [rbp-A0h]
  unsigned int v142; // [rsp+64h] [rbp-9Ch] BYREF
  int v143; // [rsp+68h] [rbp-98h] BYREF
  PVOID pv; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v145)(__int128 *); // [rsp+78h] [rbp-88h]
  signed int v146; // [rsp+80h] [rbp-80h] BYREF
  int v147; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v148; // [rsp+88h] [rbp-78h] BYREF
  int v149; // [rsp+8Ch] [rbp-74h]
  int v150; // [rsp+90h] [rbp-70h]
  int v151; // [rsp+94h] [rbp-6Ch] BYREF
  int v152; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v153; // [rsp+9Ch] [rbp-64h]
  __int64 v154; // [rsp+A0h] [rbp-60h]
  int v155; // [rsp+A8h] [rbp-58h]
  _DWORD *v156; // [rsp+B0h] [rbp-50h]
  _QWORD *v157; // [rsp+B8h] [rbp-48h]
  __int64 v158; // [rsp+C0h] [rbp-40h]
  _BYTE *v159; // [rsp+C8h] [rbp-38h]
  __int64 v160; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall **v161)(__int128 *); // [rsp+D8h] [rbp-28h]
  _QWORD v162[18]; // [rsp+E0h] [rbp-20h] BYREF

  v158 = a2;
  v157 = a1;
  v161 = a4;
  memset(v162, 0, sizeof(v162));
  v6 = 0;
  v7 = a1[5];
  v8 = (_BYTE *)a1[2];
  v154 = a1[3];
  v156 = (_DWORD *)a1[4];
  v153 = *(unsigned __int8 *)(v7 + 10);
  v9 = a1[1];
  v148 = 0;
  v151 = 0;
  v159 = v8;
  v10 = *(_DWORD *)(v9 + 56);
  v11 = (*(_BYTE *)(v9 + 24) & 1) == 0;
  v160 = v7;
  v12 = 2 * v11;
  v141 = 2 * v11 + 1;
  LODWORD(v162[0]) = (v10 & 0x80000) != 0 ? 0x200 : 0;
  if ( (*v8 & 0x40) != 0 )
    LODWORD(v162[0]) = 1536;
  if ( (int)ComputeAABBP(v8, v7, v162, v12 == 0) <= 0 )
    return 0LL;
  v13 = v162[0];
  v143 = 3100;
  if ( (v10 & 0x100000) != 0 )
  {
    v13 = LODWORD(v162[0]) | 0x800;
    LODWORD(v162[0]) |= 0x800u;
    if ( (v10 & 0x200000) != 0 )
    {
      v13 |= 0x1000u;
      v103 = 5148;
      LODWORD(v162[0]) = v13;
    }
    else
    {
      if ( (v10 & 0x800000) != 0 )
        *(_BYTE *)(a3 + 8) |= 8u;
      if ( (v10 & 0x1000000) != 0 )
      {
        v13 |= 0x100000u;
        LODWORD(v162[0]) = v13;
      }
      v103 = 3868;
    }
    v143 = v103;
  }
  if ( (v10 & 0x40000000) != 0 )
    LODWORD(v162[0]) = v13 & 0xFFFFFFE7;
  if ( (int)ALIGN_MEM(&v143) < 0 )
    return 4294967294LL;
  v14 = (_DWORD)a1 + 64;
  v15 = v154;
  ComputeInputColorInfo(
    *(_QWORD *)(*(_QWORD *)(v154 + 32) + 16LL),
    *(unsigned __int8 *)(*(_QWORD *)(v154 + 32) + 2LL),
    *(unsigned __int8 *)(*(_QWORD *)(v154 + 32) + 3LL),
    v14,
    a3 + 8);
  v16 = LODWORD(v162[0]);
  *(_BYTE *)(a3 + 8) |= v12 != 0 ? 2 : 6;
  if ( (v10 & 0x4000) != 0 )
  {
    v16 = (unsigned int)v16 | 4;
    LODWORD(v162[0]) = v16;
  }
  if ( (*v159 & 0x40) != 0 )
  {
    v16 = (unsigned int)v16 & 0xFFFFFFBF;
    LODWORD(v162[0]) = v16;
  }
  if ( (v16 & 0x200) != 0 )
  {
    v16 = (unsigned int)v16 & 0xFFFFFFBF;
    LODWORD(v162[0]) = v16;
  }
  if ( (v16 & 0x40) != 0 )
  {
    CheckBMPNeedFixup(4294967231LL, a3, v15, v162);
    v16 = LODWORD(v162[0]);
    if ( (v162[0] & 0x80000) != 0 )
    {
      if ( (v10 & 0x80000) != 0 )
        v16 = LODWORD(v162[0]) | 0x200u;
      else
        LODWORD(v16) = v162[0] & 0xFFFFFDFF;
      LODWORD(v162[0]) = v16;
    }
  }
  if ( (v16 & 0x200) != 0 )
  {
    LODWORD(v16) = v16 & 0xFFFFBFFF;
    LODWORD(v162[0]) = v16;
  }
  if ( v156 )
  {
    LODWORD(v16) = v16 | 0x80;
    LODWORD(v162[0]) = v16;
  }
  v17 = v143;
  v18 = *(_DWORD *)(v15 + 12);
  v19 = v158;
  pv = (PVOID)((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD *, int, _DWORD, _DWORD, _QWORD *, _QWORD *, int))v162[2])(
                v158,
                v16,
                &v162[8],
                &v162[9],
                v18,
                v162[12],
                v162[13],
                &v162[10],
                &v162[11],
                v143);
  v20 = (unsigned int *)pv;
  if ( !pv )
  {
    v17 = 0;
    pv = (PVOID)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *, _QWORD *, _DWORD, _DWORD, _DWORD, _QWORD *, _QWORD *, _DWORD))v162[2])(
                  v19,
                  LODWORD(v162[0]),
                  &v162[8],
                  &v162[9],
                  *(_DWORD *)(v154 + 12),
                  v162[12],
                  v162[13],
                  &v162[10],
                  &v162[11],
                  0);
    v20 = (unsigned int *)pv;
    if ( !pv )
      return 4294967294LL;
  }
  if ( !*v20 || !v20[1] )
    goto LABEL_117;
  v21 = v17 == 0;
  *(_QWORD *)(a3 + 304) = v20;
  v22 = v162[0];
  if ( !v21 )
  {
    v23 = *((_QWORD *)v20 + 4);
    *(_QWORD *)(a3 + 376) = v23;
    if ( (v22 & 0x800) == 0 )
      goto LABEL_24;
    v104 = v23 + 3100;
    goto LABEL_137;
  }
  LODWORD(v162[0]) |= 0x80000000;
  v22 = v162[0];
  v23 = v19 + 856;
  *(_QWORD *)(a3 + 376) = v19 + 856;
  if ( (v22 & 0x800) != 0 )
  {
    v105 = *(_QWORD *)(v19 + 7064);
    *(_QWORD *)(a3 + 336) = v105;
    if ( (v10 & 0x200000) != 0 )
    {
      v104 = v105 + 768;
LABEL_137:
      *(_QWORD *)(a3 + 336) = v104;
    }
  }
LABEL_24:
  *(_QWORD *)(a3 + 384) = v23 + 28;
  if ( (v22 & 1) != 0 )
  {
    LODWORD(v162[10]) = LODWORD(v162[14]) - LODWORD(v162[10]) - 1;
    LODWORD(v162[11]) = LODWORD(v162[14]) - LODWORD(v162[11]) - 1;
  }
  v24 = *v20;
  v25 = v20[1];
  v155 = v24;
  v149 = v25;
  v26 = v24 + 6;
  if ( (int)v24 + 6 < (unsigned int)v24 )
    goto LABEL_117;
  v27 = BYTE4(v162[0]);
  v28 = 0;
  v142 = 0;
  v145 = 0LL;
  if ( (v22 & 0x200) != 0 )
  {
    if ( BYTE4(v162[0]) == 1 )
    {
      v145 = BltDIB_CY;
    }
    else
    {
      if ( BYTE4(v162[0]) <= 1u )
        goto LABEL_43;
      if ( BYTE4(v162[0]) <= 3u )
      {
        v29 = SkipDIB_CY;
      }
      else
      {
        if ( BYTE4(v162[0]) > 5u )
          goto LABEL_43;
        if ( (v22 & 0x800) != 0 )
        {
          v106 = (unsigned int)(v25 + 6);
          if ( (unsigned int)v106 < (unsigned int)v25 )
            goto LABEL_117;
          v28 = 3 * v106;
          if ( (unsigned __int64)(3 * v106) > 0xFFFFFFFF )
            goto LABEL_117;
        }
        v142 = v28;
        v29 = RepDIB_CY;
      }
      v145 = (__int64 (__fastcall *)(__int128 *))v29;
    }
    if ( BYTE5(v162[0]) )
    {
      if ( BYTE5(v162[0]) == 1 )
      {
        v30 = SkipDIB_CX;
        v31 = GraySkipDIB_CX;
      }
      else
      {
        if ( BYTE5(v162[0]) != 2 )
        {
LABEL_42:
          v27 = -1;
          BYTE4(v162[0]) = -1;
          goto LABEL_43;
        }
        v30 = RepDIB_CX;
        v31 = GrayRepDIB_CX;
      }
    }
    else
    {
      v30 = CopyDIB_CX;
      v31 = (__int64 (__fastcall *)(int, int, int, int, int))GrayCopyDIB_CXGray;
    }
    if ( !v12 )
      v30 = v31;
    v162[1] = v30;
    goto LABEL_42;
  }
LABEL_43:
  switch ( v27 )
  {
    case 0:
      v145 = (__int64 (__fastcall *)(__int128 *))TileDIB_CY;
      if ( v12 )
      {
        v142 = 0;
      }
      else
      {
        if ( (unsigned __int64)(2 * v24) > 0xFFFFFFFF )
        {
LABEL_210:
          v140 = (int *)v20;
          goto LABEL_211;
        }
        v142 = 2 * v24;
      }
      break;
    case 1:
      v145 = BltDIB_CY;
      break;
    case 2:
      if ( v12 )
      {
        v32 = v141;
        v122 = v141 * (unsigned __int64)v26;
        v145 = (__int64 (__fastcall *)(__int128 *))ShrinkDIB_CY;
        if ( v122 > 0xFFFFFFFF )
          goto LABEL_117;
        v123 = 36 * v24;
      }
      else
      {
        LODWORD(v122) = 12 * v25;
        v145 = (__int64 (__fastcall *)(__int128 *))GrayShrinkDIB_CY;
        if ( (unsigned __int64)(12 * v25) > 0xFFFFFFFF || (int)v25 + 6 < (unsigned int)v25 )
          goto LABEL_117;
        v32 = v141;
        v123 = v141 * (unsigned __int64)(unsigned int)(v25 + 6);
      }
      if ( v123 <= 0xFFFFFFFF && (unsigned int)v123 < 0xFFFFF800 )
      {
        v114 = v122 + v123 + 2048;
        v118 = v114 < (unsigned int)v122;
LABEL_176:
        if ( !v118 )
        {
          v142 = v114;
          goto LABEL_50;
        }
      }
LABEL_117:
      EngFreeMem(v20);
      return 0LL;
    case 3:
      v119 = v20[5];
      v145 = (__int64 (__fastcall *)(__int128 *))ShrinkDIB_CY_SrkCX;
      v120 = v119 + 2;
      if ( (unsigned int)v120 >= v119 )
      {
        v121 = 36 * v120;
        if ( v121 <= 0xFFFFFFFF && (unsigned int)v121 < 0xFFFFF800 )
        {
          v142 = v121 + 2048;
          break;
        }
      }
      goto LABEL_117;
    case 4:
      v115 = GrayExpandDIB_CY;
      if ( v12 )
        v115 = ExpandDIB_CY;
      v145 = (__int64 (__fastcall *)(__int128 *))v115;
      if ( (int)v25 + 6 >= (unsigned int)v25 )
      {
        v32 = v141;
        v116 = v141 * (unsigned __int64)(unsigned int)(v25 + 6);
        if ( v116 <= 0xFFFFFFFF )
        {
          v117 = 6LL * (unsigned int)v116;
          if ( v117 <= 0xFFFFFFFF )
          {
            v114 = v117 + 4096;
            goto LABEL_162;
          }
        }
      }
      goto LABEL_117;
    case 5:
      if ( (v22 & 0x4000) != 0 )
      {
        v32 = v141;
        v107 = v141 * (unsigned __int64)v26;
        if ( v107 <= 0xFFFFFFFF && 5 * (unsigned __int64)(unsigned int)v107 <= 0xFFFFFFFF )
        {
          v142 = 5 * v107;
          v145 = (__int64 (__fastcall *)(__int128 *))FastExpAA_CY;
          goto LABEL_50;
        }
        goto LABEL_117;
      }
      v108 = GrayExpandDIB_CY_ExpCX;
      if ( v12 )
        v108 = ExpandDIB_CY_ExpCX;
      v109 = (unsigned int)(v25 + 6);
      v145 = (__int64 (__fastcall *)(__int128 *))v108;
      if ( (unsigned int)v109 >= (unsigned int)v25 )
      {
        v32 = v141;
        v110 = v141 * v109;
        if ( v110 <= 0xFFFFFFFF )
        {
          v111 = 4LL * (unsigned int)v110;
          if ( v111 <= 0xFFFFFFFF )
          {
            v112 = v141 * (unsigned __int64)v26;
            if ( v112 <= 0xFFFFFFFF )
            {
              v113 = 3LL * (unsigned int)v112;
              if ( v113 <= 0xFFFFFFFF && (int)v111 + (int)v113 >= (unsigned int)v113 )
              {
                v114 = v111 + v113 + 4096;
LABEL_162:
                v118 = v114 < 0x1000;
                goto LABEL_176;
              }
            }
          }
        }
      }
      goto LABEL_117;
  }
  v32 = v141;
LABEL_50:
  v33 = (v22 & 0x800) != 0 ? v25 : 0;
  *(_BYTE *)(a3 + 96) = v12 != 0 ? 0 : 4;
  *(_DWORD *)(a3 + 152) = v32 * v33;
  v34 = v33 + 8;
  if ( (unsigned int)v34 < v33 )
    goto LABEL_209;
  v35 = v32 * v34;
  if ( v35 > 0xFFFFFFFF )
    goto LABEL_209;
  v143 = v35;
  if ( (int)ALIGN_MEM(&v143) < 0 )
    goto LABEL_116;
  if ( (int)ALIGN_MEM(&v142) < 0 )
    goto LABEL_116;
  v38 = v37 + 2;
  if ( (unsigned int)v38 < v37 )
    goto LABEL_116;
  v39 = v36 * v38;
  if ( v39 > 0xFFFFFFFF )
    goto LABEL_116;
  v147 = v39;
  if ( (int)ALIGN_MEM(&v147) < 0 )
    goto LABEL_116;
  if ( (unsigned int)v25 >= 0xFFFFFFF6 )
    goto LABEL_116;
  if ( 4 * (unsigned __int64)(unsigned int)(v25 + 10) > 0xFFFFFFFF )
    goto LABEL_116;
  v152 = 4 * (v25 + 10);
  if ( (int)ALIGN_MEM(&v152) < 0 )
    goto LABEL_116;
  if ( (v22 & 0x80u) != 0 )
  {
    v124 = ComputeBytesPerScanLine(1LL, 4LL, (unsigned int)v24);
    if ( v124 + 4 < v124 )
      goto LABEL_116;
    v146 = v124 + 4;
    if ( (int)ALIGN_MEM(&v146) < 0 )
      goto LABEL_116;
    v41 = v146;
  }
  else
  {
    v41 = 0;
    v146 = 0;
  }
  v42 = v147;
  if ( v147 < v143 )
    v42 = v143;
  v150 = v42;
  if ( (v22 & 0x1800) == 0x800 )
  {
    if ( (int)ALIGN_MEM(&v143) < 0 )
      goto LABEL_116;
    v43 = v143;
    v147 = v143;
  }
  else
  {
    v43 = 0;
    v147 = 0;
  }
  v44 = v157;
  if ( v153 == 254 && v157[7] )
  {
    if ( (int)ALIGN_MEM(&v148) < 0 )
      goto LABEL_116;
    v45 = v148;
  }
  else
  {
    v45 = 0;
  }
  if ( (v22 & 0x40) != 0 )
  {
    v101 = (unsigned int)(v24 + 4);
    if ( (unsigned int)v101 >= (unsigned int)v24 )
    {
      v102 = v40 * v101;
      if ( v102 <= 0xFFFFFFFF )
      {
        v148 = v102;
        if ( (int)ALIGN_MEM(&v148) >= 0 )
        {
          v46 = v148;
          goto LABEL_70;
        }
      }
    }
LABEL_116:
    v20 = (unsigned int *)pv;
LABEL_209:
    v6 = -2;
    goto LABEL_210;
  }
  v46 = 0;
  v47 = 0xFFFFFFFFLL;
LABEL_70:
  if ( (*(_BYTE *)(a3 + 8) & 4) != 0 && (v44[8] & 1) != 0 && (*(_BYTE *)(a3 + 72) & 1) != 0 && *((_BYTE *)v44 + 84) != 4 )
  {
    if ( (int)ALIGN_MEM(&v151) >= 0 )
    {
      v48 = v151;
      goto LABEL_72;
    }
    goto LABEL_116;
  }
  v48 = 0;
LABEL_72:
  v49 = 6LL * v46;
  if ( v49 > v47 )
    goto LABEL_208;
  v50 = v49 + v42;
  if ( (int)v49 + v42 < (unsigned int)v49 )
    goto LABEL_208;
  v51 = v50 + v152;
  if ( v50 + v152 < v50
    || (v52 = v51 + v41, v51 + v41 < v51)
    || (v53 = v52 + v43, v52 + v43 < v52)
    || (v54 = v53 + v48, v53 + v48 < v53)
    || (v55 = v54 + v45, v54 + v45 < v54)
    || (v56 = v142, v55 + v142 < v55)
    || (v57 = ((__int64 (__fastcall *)(__int64, _QWORD, char *, char *, _DWORD, _DWORD, _DWORD, char *, char *, unsigned int))v162[3])(
                v158,
                LODWORD(v162[0]),
                (char *)&v162[8] + 4,
                (char *)&v162[9] + 4,
                *(_DWORD *)(v154 + 16),
                HIDWORD(v162[12]),
                HIDWORD(v162[13]),
                (char *)&v162[10] + 4,
                (char *)&v162[11] + 4,
                v55 + v142),
        (v58 = (int *)v57) == 0LL) )
  {
LABEL_208:
    EngFreeMem(pv);
    return 4294967294LL;
  }
  if ( !*(_DWORD *)v57 || !*(_DWORD *)(v57 + 4) )
  {
    v72 = pv;
    goto LABEL_207;
  }
  v59 = v147;
  *(_QWORD *)(a3 + 312) = v57;
  v60 = *(_QWORD *)(v57 + 32) + v56;
  *(_DWORD *)a3 = v162[0];
  v61 = v155 * v141;
  *(_QWORD *)(a3 + 536) = v60;
  *(_DWORD *)(a3 + 64) = v61;
  v62 = v150 + v60;
  if ( (_DWORD)v59 )
  {
    v63 = v149;
    *(_QWORD *)(a3 + 352) = v62;
    *(_QWORD *)(a3 + 344) = v62;
    *(_DWORD *)(a3 + 368) = 1;
    v125 = v62 + v63;
    v62 += v59;
    *(_QWORD *)(a3 + 360) = v125;
  }
  else
  {
    LODWORD(v63) = v149;
  }
  if ( v46 )
  {
    *(_QWORD *)(a3 + 264) = v62;
    v99 = (_QWORD *)(a3 + 480);
    *(_DWORD *)(a3 + 528) = v46;
    v100 = 6LL;
    do
    {
      *v99 = v62;
      v62 += (int)v46;
      ++v99;
      --v100;
    }
    while ( v100 );
  }
  if ( v45 )
  {
    *(_QWORD *)(a3 + 400) = v62;
    v62 += (int)v45;
  }
  v64 = v146;
  if ( v146 )
  {
    *(_QWORD *)(a3 + 208) = v62;
    v62 += v64;
  }
  v65 = v62;
  if ( v48 )
    v62 += v48;
  else
    v65 = *(_QWORD *)(a3 + 384);
  *(_QWORD *)(a3 + 16) = v65;
  v66 = (char *)(v62 + 20);
  *(_QWORD *)(a3 + 576) = v66;
  *(_QWORD *)(a3 + 544) = v66;
  *(_QWORD *)(a3 + 560) = v66;
  v67 = 4LL * (int)v63;
  *(_QWORD *)(a3 + 568) = &v66[v67];
  *(_QWORD *)(a3 + 552) = &v66[v67];
  *(_QWORD *)(a3 + 584) = &v66[v67];
  memset(v66, 255, v67);
  v68 = v162[10];
  if ( SLODWORD(v162[10]) > SLODWORD(v162[11]) )
  {
    v68 = v162[11];
    LODWORD(v162[11]) = v162[10];
    v126 = *(_QWORD *)(a3 + 568) - 4LL;
    LODWORD(v162[10]) = v68;
    *(_QWORD *)(a3 + 576) = v126;
    *(_QWORD *)(a3 + 584) = *(_QWORD *)(a3 + 560) - 4LL;
    *(_QWORD *)(a3 + 352) = *(_QWORD *)(a3 + 360) - 1LL;
    *(_QWORD *)(a3 + 360) = *(_QWORD *)(a3 + 344) - 1LL;
    *(_DWORD *)(a3 + 368) = -*(_DWORD *)(a3 + 368);
    v69 = -4;
  }
  else
  {
    v69 = 4;
  }
  *(_DWORD *)(a3 + 592) = v69;
  v70 = v162[0];
  *(_DWORD *)(a3 + 328) = v68 - LODWORD(v162[16]);
  if ( (v70 & 2) != 0 )
  {
    v71 = HIDWORD(v162[14]) - HIDWORD(v162[10]) - 1;
    HIDWORD(v162[10]) = v71;
    HIDWORD(v162[11]) = HIDWORD(v162[14]) - HIDWORD(v162[11]) - 1;
  }
  else
  {
    v71 = HIDWORD(v162[10]);
  }
  v72 = pv;
  *(_DWORD *)(a3 + 332) = v71 - HIDWORD(v162[16]);
  *(_QWORD *)(a3 + 288) = v162[1];
  *(_DWORD *)(a3 + 56) = *v72;
  v73 = *v58;
  *(_DWORD *)(a3 + 60) = *v58;
  *(_DWORD *)(a3 + 40) = v73;
  if ( (v70 & 0x80u) == 0 )
    goto LABEL_97;
  v127 = v72[30] + LODWORD(v162[17]) < 0;
  v128 = v72[30] + LODWORD(v162[17]);
  v129 = v156[5];
  LODWORD(v162[17]) = v128;
  v130 = v58[30];
  v150 = v129;
  v131 = v130 + HIDWORD(v162[17]);
  HIDWORD(v162[17]) = v131;
  v132 = v72[31] + v128;
  if ( v127 || v131 < 0 || (v133 = v156, (int)v132 > v156[3]) || v131 + v58[31] > v156[4] )
  {
    v6 = -13;
LABEL_207:
    EngFreeMem(v72);
    v140 = v58;
LABEL_211:
    EngFreeMem(v140);
    return v6;
  }
  *(_DWORD *)(a3 + 224) = v129;
  *(_DWORD *)(a3 + 228) = v58[31];
  ComputeByteOffset(1LL, v132, a3 + 4);
  v135 = ComputeByteOffset(1LL, v128, v134);
  v136 = v150 * v131;
  *(_DWORD *)(a3 + 200) = v137 - v135 + 1;
  v138 = v135 + *((_QWORD *)v133 + 3) + v136;
  v139 = v159;
  *(_QWORD *)(a3 + 216) = v138;
  if ( (*v139 & 8) != 0 )
  {
    v70 |= 0x100u;
    LODWORD(v162[0]) = v70;
  }
  LODWORD(v63) = v149;
  *(_QWORD *)(a3 + 184) = v162[4];
  *(_QWORD *)(a3 + 192) = v162[5];
LABEL_97:
  v74 = v154;
  v75 = LODWORD(v162[8]);
  v76 = *(_DWORD *)(v154 + 20);
  *(_DWORD *)(a3 + 68) = v76;
  *(_DWORD *)(a3 + 260) = v76;
  v77 = ComputeByteOffset(*(unsigned __int8 *)(v74 + 10), v75, a3 + 9);
  v78 = *(_QWORD *)(v74 + 24);
  v79 = v160;
  v81 = v80 * HIDWORD(v162[8]) + (__int64)v77;
  *(_QWORD *)(a3 + 232) = v162[6];
  v82 = v81 + v78;
  *(_QWORD *)(a3 + 240) = v162[7];
  *(_QWORD *)(a3 + 48) = v82;
  *(_QWORD *)(a3 + 32) = v82;
  v83 = *(_DWORD *)(v79 + 20);
  if ( v84 > v85 )
    v83 = -v83;
  v86 = v153;
  *(_DWORD *)(a3 + 156) = v83;
  v87 = ComputeByteOffset(v86, v68, a3 + 97);
  v90 = v88 * v89 + (__int64)v87;
  v91 = *(_DWORD *)(a3 + 156);
  v92 = v90 + *(_QWORD *)(v79 + 24);
  *(_QWORD *)(a3 + 136) = v92;
  *(_QWORD *)(a3 + 120) = v92;
  v93 = v58[1] * v91;
  *(_DWORD *)(a3 + 144) = v63;
  *(_QWORD *)(a3 + 320) = v92 + v93;
  v94 = v58[1];
  v95 = v161;
  *(_DWORD *)(a3 + 148) = v94;
  *(_DWORD *)(a3 + 128) = v94;
  v96 = v145;
  *(_DWORD *)a3 = v70;
  *v95 = v96;
  if ( (v70 & 0x400) != 0 )
  {
    *(_BYTE *)(a3 + 8) |= 1u;
    *(_QWORD *)(a3 + 48) += v58[6] * *(_DWORD *)(a3 + 68);
    *(_DWORD *)(a3 + 60) -= v58[6];
  }
  v97 = *(_QWORD *)(a3 + 48);
  *(_DWORD *)(a3 + 256) = *(_DWORD *)(a3 + 60);
  result = 1LL;
  *(_QWORD *)(a3 + 248) = v97;
  return result;
}
