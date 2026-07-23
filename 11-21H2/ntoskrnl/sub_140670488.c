/*
 * XREFs of sub_140670488 @ 0x140670488
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_140701F10 @ 0x140701F10 (sub_140701F10.c)
 * Callees:
 *     sub_1402585E8 @ 0x1402585E8 (sub_1402585E8.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405E09B4 @ 0x1405E09B4 (sub_1405E09B4.c)
 *     sub_1406C48C8 @ 0x1406C48C8 (sub_1406C48C8.c)
 *     sub_1406E91A0 @ 0x1406E91A0 (sub_1406E91A0.c)
 *     sub_1407021EC @ 0x1407021EC (sub_1407021EC.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_140852C00 @ 0x140852C00 (sub_140852C00.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140670488(unsigned __int64 *a1, char a2, int a3, __int64 a4)
{
  int v4; // r11d
  char v5; // r10
  __int64 v7; // r13
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 *v12; // rdi
  unsigned __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  _DWORD *v23; // rax
  _BYTE *v24; // rax
  SIZE_T v25; // rbx
  char *v26; // r15
  void *v27; // rcx
  SIZE_T v28; // rbx
  char *v29; // r15
  PVOID v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  _DWORD *v37; // rcx
  int v38; // edx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  _DWORD *v45; // rax
  _DWORD *v46; // rax
  SIZE_T v47; // rbx
  unsigned __int64 v48; // r12
  PVOID v49; // rax
  unsigned __int64 v50; // r15
  unsigned __int64 i; // r13
  SIZE_T v52; // rbx
  char *v53; // r15
  PVOID v54; // rax
  char v55; // al
  bool v56; // zf
  size_t v57; // r8
  unsigned __int64 v58; // rdx
  __int128 v59; // xmm6
  __int64 v60; // xmm2_8
  _WORD *v61; // rax
  SIZE_T v62; // rbx
  char *v63; // r15
  PVOID v64; // rax
  unsigned __int64 v65; // rbx
  _QWORD *v66; // rax
  _DWORD *v67; // rcx
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rax
  _PROCESSOR_NUMBER *v74; // rax
  ULONG ProcessorIndexFromNumber; // eax
  _OWORD *v76; // rax
  unsigned __int64 v77; // rcx
  size_t v78; // r8
  unsigned __int64 v79; // rdx
  __int128 v80; // xmm6
  __int64 v81; // xmm2_8
  _DWORD *v82; // rax
  SIZE_T v83; // r12
  const void *v84; // r15
  _OWORD *v85; // rax
  void **v86; // r13
  __int64 v87; // r11
  _QWORD *v88; // r15
  char *v89; // r9
  const void *v90; // r12
  unsigned __int16 v91; // cx
  __int64 v92; // rax
  char v93; // r10
  __int64 v94; // rdx
  _DWORD *v95; // rax
  __int64 v96; // rdx
  unsigned __int64 v97; // rdx
  char *v98; // rbx
  __int64 v99; // rdx
  char *v100; // r15
  PVOID PoolWithQuotaTag; // rax
  _QWORD *v102; // rax
  __int64 v103; // rcx
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rax
  unsigned __int64 *v109; // [rsp+48h] [rbp-230h]
  unsigned __int16 v110; // [rsp+50h] [rbp-228h]
  unsigned __int64 v111; // [rsp+60h] [rbp-218h]
  unsigned __int64 v112; // [rsp+60h] [rbp-218h]
  unsigned __int64 v113; // [rsp+60h] [rbp-218h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp-210h] BYREF
  int v115; // [rsp+6Ch] [rbp-20Ch]
  unsigned __int64 v116; // [rsp+70h] [rbp-208h]
  int v117; // [rsp+78h] [rbp-200h]
  int v118; // [rsp+7Ch] [rbp-1FCh]
  char *v119; // [rsp+80h] [rbp-1F8h]
  __int64 v120; // [rsp+88h] [rbp-1F0h]
  _QWORD *v121; // [rsp+90h] [rbp-1E8h]
  __int64 v122; // [rsp+A0h] [rbp-1D8h]
  _DWORD *v123; // [rsp+B0h] [rbp-1C8h]
  _BYTE *v124; // [rsp+B8h] [rbp-1C0h]
  unsigned __int64 v125; // [rsp+C0h] [rbp-1B8h]
  unsigned __int64 v126; // [rsp+C8h] [rbp-1B0h]
  unsigned __int64 v127; // [rsp+D0h] [rbp-1A8h]
  _DWORD *v128; // [rsp+D8h] [rbp-1A0h]
  _DWORD *v129; // [rsp+E0h] [rbp-198h]
  _DWORD *v130; // [rsp+E8h] [rbp-190h]
  __int64 v131; // [rsp+F0h] [rbp-188h] BYREF
  unsigned __int64 v132; // [rsp+F8h] [rbp-180h]
  _WORD *v133; // [rsp+100h] [rbp-178h]
  char *v134; // [rsp+108h] [rbp-170h]
  _PROCESSOR_NUMBER *v135; // [rsp+110h] [rbp-168h]
  _OWORD *v136; // [rsp+118h] [rbp-160h]
  _DWORD *v137; // [rsp+120h] [rbp-158h]
  const void *v138; // [rsp+128h] [rbp-150h]
  __int64 v139; // [rsp+130h] [rbp-148h]
  _QWORD *v140; // [rsp+138h] [rbp-140h]
  char *v141; // [rsp+148h] [rbp-130h]
  char *v142; // [rsp+150h] [rbp-128h]
  PVOID v143; // [rsp+158h] [rbp-120h]
  char *v144; // [rsp+160h] [rbp-118h]
  unsigned __int64 v145; // [rsp+168h] [rbp-110h]
  unsigned __int64 v146; // [rsp+170h] [rbp-108h]
  int v147; // [rsp+178h] [rbp-100h]
  char *v148; // [rsp+188h] [rbp-F0h]
  const void *v149; // [rsp+190h] [rbp-E8h]
  char *v150; // [rsp+198h] [rbp-E0h]
  char *v151; // [rsp+1A0h] [rbp-D8h]
  unsigned __int64 v152; // [rsp+1A8h] [rbp-D0h]
  __int128 v153; // [rsp+1B0h] [rbp-C8h] BYREF
  __int64 v154; // [rsp+1C0h] [rbp-B8h]
  __int128 v155; // [rsp+1D0h] [rbp-A8h] BYREF
  __int64 v156; // [rsp+1E0h] [rbp-98h]
  __int128 v157; // [rsp+1F0h] [rbp-88h] BYREF
  __int64 v158; // [rsp+200h] [rbp-78h]
  __int128 v159; // [rsp+208h] [rbp-70h] BYREF
  __int64 v160; // [rsp+218h] [rbp-60h]

  v139 = a4;
  v4 = a3;
  v5 = a2;
  v118 = a3;
  v122 = a4;
  v7 = a4;
  v120 = a4;
  v143 = 0LL;
  v126 = 0LL;
  v123 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v142 = 0LL;
  v136 = 0LL;
  v134 = 0LL;
  ProcNumber = 0;
  v135 = 0LL;
  v127 = 0LL;
  v132 = 0LL;
  v131 = 0LL;
  v133 = 0LL;
  v124 = 0LL;
  v141 = 0LL;
  v115 = 0;
  v128 = 0LL;
  v117 = 0;
  v125 = 0LL;
  v130 = 0LL;
  v129 = 0LL;
  v145 = 0LL;
  v146 = 0LL;
  v151 = 0LL;
  v138 = 0LL;
  v119 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v121 = 0LL;
  v137 = 0LL;
  v144 = 0LL;
  v140 = 0LL;
  *(_BYTE *)a4 = a2;
  if ( a2 )
  {
    v8 = (unsigned __int8)a1 & 3;
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v8 = (unsigned __int8)a1 & 3;
  }
  v9 = *a1;
  v116 = v9;
  if ( v9 < 0x28 )
    return 3221225485LL;
  if ( v5 && v9 != 40 )
  {
    if ( v8 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v9 > 0x7FFFFFFF0000LL || (unsigned __int64 *)((char *)a1 + v9) < a1 + 5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v116 = v9 - 8;
  if ( (((_BYTE)v9 - 8) & 0x1F) != 0 )
    return 3221225485LL;
  v11 = (v9 - 8) >> 5;
  v116 = v11;
  v12 = a1 + 1;
  v109 = a1 + 1;
  while ( v11 )
  {
    v13 = *v12;
    v152 = *v12;
    if ( v4 && (v13 & 0x10000) == 0 )
      goto LABEL_19;
    if ( (v13 & 0x20000) != 0 && v12[3] )
      goto LABEL_19;
    v147 = 1 << v13;
    v15 = *(unsigned int *)(a4 + 4);
    if ( ((1 << v13) & (unsigned int)v15) != 0 )
      goto LABEL_19;
    v16 = (unsigned int)v15 | (1 << v13);
    *(_DWORD *)(a4 + 4) = v16;
    if ( v13 > 0x20016 )
    {
      if ( v13 > 0x3001E )
      {
        v104 = v13 - 393216;
        if ( v104 )
        {
          v105 = v104 - 1;
          if ( v105 )
          {
            v106 = v105 - 1;
            if ( v106 )
            {
              v107 = v106 - 15;
              if ( !v107 )
              {
                if ( v12[1] != 1 )
                  goto LABEL_19;
                LOBYTE(v15) = *((_BYTE *)v12 + 16);
                *(_BYTE *)(a4 + 360) = v15;
                v55 = sub_1406E91A0(v15, v16, 0x7FFFFFFF8LL);
                goto LABEL_152;
              }
              v108 = v107 - 9;
              if ( v108 )
              {
                if ( v108 != 2 || v12[1] != 2 )
                  goto LABEL_19;
                *(_WORD *)(a4 + 160) = *((_WORD *)v12 + 8);
              }
              else
              {
                if ( v12[1] != 1 )
                  goto LABEL_19;
                *(_BYTE *)(a4 + 9) = *(_BYTE *)(a4 + 9) & 0x7F | (v12[2] != 0 ? 0x80 : 0);
              }
            }
            else
            {
              if ( v12[1] != 8 )
                goto LABEL_19;
              *(_QWORD *)(a4 + 144) = v12[2];
            }
          }
          else
          {
            if ( v12[1] != 8 )
              goto LABEL_19;
            *(_QWORD *)(a4 + 136) = v12[2];
          }
        }
        else
        {
          if ( v12[1] != 8 )
            goto LABEL_19;
          *(_QWORD *)(a4 + 120) = v12[2];
        }
      }
      else if ( v13 == 196638 )
      {
        if ( !v4 || v12[1] != 8 )
          goto LABEL_19;
        v102 = (_QWORD *)v12[2];
        v140 = v102;
        if ( v5 )
        {
          if ( ((unsigned __int8)v102 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v12 = v109;
          v102 = v140;
        }
        v103 = *v102;
        *(_QWORD *)(a4 + 496) = *v102;
        if ( (~MEMORY[0xFFFFF780000003D8] & v103) != 0 )
        {
LABEL_19:
          v14 = -1073741811;
          goto LABEL_300;
        }
        *(_QWORD *)(a4 + 496) = v103 & 0x40000;
      }
      else
      {
        v68 = v13 - 131095;
        if ( !v68 )
        {
          if ( v12[1] != 524 )
            goto LABEL_19;
          v100 = (char *)v12[2];
          v151 = v100;
          if ( v5 && ((unsigned __int64)(v100 + 524) > 0x7FFFFFFF0000LL || v100 + 524 < v100) )
            MEMORY[0x7FFFFFFF0000] = 0;
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x20CuLL, 0x634F7350u);
          *(_QWORD *)(a4 + 400) = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
            goto LABEL_54;
          memmove(PoolWithQuotaTag, v100, 0x20CuLL);
          *(_DWORD *)(a4 + 408) = 524;
          goto LABEL_265;
        }
        v69 = v68 - 1;
        if ( !v69 )
        {
          v83 = v12[1];
          if ( v83 != 40 )
            goto LABEL_19;
          v84 = (const void *)v12[2];
          v138 = v84;
          if ( v5 )
          {
            if ( ((unsigned __int8)v84 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v12 = v109;
            v83 = 40LL;
            v84 = v138;
          }
          v85 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v83, 0x70426E50u);
          v86 = (void **)(a4 + 416);
          v121 = (_QWORD *)(a4 + 416);
          *(_QWORD *)(a4 + 416) = v85;
          if ( !v85 )
            goto LABEL_54;
          *v85 = 0LL;
          v85[1] = 0LL;
          *((_QWORD *)v85 + 4) = 0LL;
          v115 = 0;
          memmove(*v86, v84, v83);
          v87 = v139;
          v88 = *v86;
          v121 = v88;
          v89 = (char *)v88[1];
          v150 = v89;
          v148 = v89;
          v90 = (const void *)v88[3];
          v149 = v90;
          v88[1] = 0LL;
          *((_QWORD *)*v86 + 3) = 0LL;
          v91 = *(_WORD *)v88;
          if ( *(_WORD *)v88 )
          {
            v92 = *((unsigned __int16 *)v88 + 1);
            if ( v91 > (unsigned __int16)v92 || (v91 & 1) != 0 || (v92 & 1) != 0 || (_WORD)v92 == 0xFFFF || !v89 )
              goto LABEL_19;
            v93 = a2;
            if ( a2 && (_WORD)v92 && ((unsigned __int64)&v89[v92] > 0x7FFFFFFF0000LL || &v89[v92] < v89) )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          else
          {
            v93 = a2;
          }
          v94 = *((unsigned int *)*v86 + 4);
          v95 = *v86;
          if ( (_DWORD)v94 )
          {
            if ( !v90 || (unsigned int)v94 > 0xFFFF )
              goto LABEL_19;
            if ( v93 )
            {
              v96 = 8 * v94;
              if ( v96 )
              {
                if ( ((unsigned __int8)v90 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v97 = (unsigned __int64)v90 + v96;
                if ( v97 > 0x7FFFFFFF0000LL || v97 < (unsigned __int64)v90 )
                {
                  MEMORY[0x7FFFFFFF0000] = 0;
                  v95 = *(_DWORD **)(v87 + 416);
                }
              }
            }
          }
          v98 = 0LL;
          v119 = 0LL;
          v99 = *((unsigned __int16 *)v88 + 1);
          if ( (_WORD)v99 || v95[4] )
          {
            v98 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v99 + 8LL * (unsigned int)v95[4], 0x70426E50u);
            v119 = v98;
            LOWORD(v99) = *((_WORD *)v88 + 1);
            v89 = v150;
          }
          if ( (_WORD)v99 )
          {
            v88[1] = v98;
            memmove(v98, v89, *((unsigned __int16 *)v88 + 1));
            v98 += *((unsigned __int16 *)v88 + 1);
            v119 = v98;
          }
          if ( *((_DWORD *)*v86 + 4) )
          {
            *((_QWORD *)*v86 + 3) = v98;
            memmove(*((void **)*v86 + 3), v90, 8LL * *((unsigned int *)*v86 + 4));
          }
          goto LABEL_264;
        }
        v70 = v69 - 1;
        if ( v70 )
        {
          v71 = v70 - 2;
          if ( !v71 )
          {
            v78 = v12[1];
            if ( v78 > 0x18 )
              goto LABEL_19;
            v159 = 0LL;
            v160 = 0LL;
            v12 = v109;
            v79 = v109[2];
            if ( v5 && v79 >= 0x7FFFFFFF0000LL )
              v79 = 0x7FFFFFFF0000LL;
            memmove(&v159, (const void *)v79, v78);
            v80 = v159;
            v155 = v159;
            v81 = v160;
            v156 = v160;
            v14 = sub_140852C00(&v155);
            if ( v14 < 0 )
              goto LABEL_300;
            *(_OWORD *)(a4 + 464) = v80;
            *(_QWORD *)(a4 + 480) = v81;
            goto LABEL_265;
          }
          v72 = v71 - 2;
          if ( v72 )
          {
            v73 = v72 - 65519;
            if ( !v73 )
            {
              if ( !v4 || v12[1] != 16 )
                goto LABEL_19;
              v76 = (_OWORD *)v12[2];
              v136 = v76;
              if ( v5 )
              {
                if ( ((unsigned __int8)v76 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v12 = v109;
                v76 = v136;
              }
              *(_OWORD *)(a4 + 320) = *v76;
              v55 = sub_1402585E8(a4 + 320, 1);
LABEL_152:
              v56 = v55 == 0;
              goto LABEL_153;
            }
            if ( v73 != 2 || !v4 || v12[1] != 4 )
              goto LABEL_19;
            v74 = (_PROCESSOR_NUMBER *)v12[2];
            v135 = v74;
            if ( v5 )
            {
              if ( ((unsigned __int8)v74 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v12 = v109;
              v74 = v135;
            }
            ProcNumber = *v74;
            ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
            *(_DWORD *)(a4 + 252) = ProcessorIndexFromNumber;
            v56 = ProcessorIndexFromNumber == -1;
LABEL_153:
            if ( v56 )
              goto LABEL_19;
LABEL_265:
            v4 = a3;
            v5 = a2;
            goto LABEL_266;
          }
          if ( v12[1] != 4 )
            goto LABEL_19;
          v77 = v12[2];
          v146 = v77;
          if ( v5 )
          {
            if ( (v77 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v77 + 4 > 0x7FFFFFFF0000LL || v77 + 4 < v77 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          if ( (*(_DWORD *)v77 & 0xFFFFFFFE) != 0 )
            return 3221225485LL;
          *(_QWORD *)(a4 + 456) = v77;
        }
        else
        {
          if ( v12[1] != 4 )
            goto LABEL_19;
          v82 = (_DWORD *)v12[2];
          v137 = v82;
          if ( v5 )
          {
            if ( ((unsigned __int8)v82 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v12 = v109;
            v82 = v137;
          }
          *(_DWORD *)(a4 + 424) = *v82;
        }
      }
    }
    else
    {
      if ( v13 == 131094 )
      {
        if ( v12[1] != 8 )
          goto LABEL_19;
        v65 = v12[2];
        v145 = v65;
        if ( v5 )
        {
          if ( (v65 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v65 + 8 > 0x7FFFFFFF0000LL || v65 + 8 < v65 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v66 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 8uLL, 0x77736350u);
        *(_QWORD *)(a4 + 448) = v66;
        if ( !v66 )
        {
          v14 = -1073741801;
          goto LABEL_300;
        }
        *v66 = *(_QWORD *)v65;
        v67 = *(_DWORD **)(a4 + 448);
        if ( (*v67 & 3) == 0 || (unsigned int)(v67[1] - 1) > 5 )
          goto LABEL_19;
        goto LABEL_265;
      }
      if ( v13 > 0x2000A )
      {
        v39 = v13 - 131083;
        if ( !v39 )
        {
          v62 = v12[1];
          if ( !v62 || (v62 & 7) != 0 || (v62 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFF8LL )
            goto LABEL_19;
          v63 = (char *)v12[2];
          v134 = v63;
          if ( v5 )
          {
            if ( ((unsigned __int8)v63 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v63[v62] > 0x7FFFFFFF0000LL || &v63[v62] < v63 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v64 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v62, 0x6C487350u);
          *(_QWORD *)(a4 + 296) = v64;
          if ( !v64 )
          {
LABEL_54:
            v14 = -1073741670;
            goto LABEL_300;
          }
          memmove(v64, v63, v62);
          *(_DWORD *)(a4 + 292) = v62 >> 3;
          goto LABEL_265;
        }
        v40 = v39 - 2;
        if ( v40 )
        {
          v41 = v40 - 3;
          if ( !v41 )
          {
            v57 = v12[1];
            if ( v57 > 0x18 )
              goto LABEL_19;
            v157 = 0LL;
            v158 = 0LL;
            v12 = v109;
            v58 = v109[2];
            if ( v5 && v58 >= 0x7FFFFFFF0000LL )
              v58 = 0x7FFFFFFF0000LL;
            memmove(&v157, (const void *)v58, v57);
            v59 = v157;
            v153 = v157;
            v60 = v158;
            v154 = v158;
            v14 = sub_1406C48C8(&v153, 0LL);
            if ( v14 < 0 )
              goto LABEL_300;
            *(_OWORD *)(a4 + 336) = v59;
            *(_QWORD *)(a4 + 352) = v60;
            goto LABEL_265;
          }
          v42 = v41 - 2;
          if ( !v42 )
          {
            v52 = v12[1];
            if ( !v52 || (v52 & 7) != 0 || v52 > 0x88 )
              goto LABEL_19;
            v53 = (char *)v12[2];
            v144 = v53;
            if ( v5 )
            {
              if ( ((unsigned __int8)v53 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (unsigned __int64)&v53[v52] > 0x7FFFFFFF0000LL || &v53[v52] < v53 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v54 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v52, 0x61547350u);
            *(_QWORD *)(a4 + 368) = v54;
            if ( !v54 )
              goto LABEL_54;
            memmove(v54, v53, v52);
            *(_DWORD *)(a4 + 384) = v52;
            v55 = sub_1405E09B4(*(_QWORD **)(a4 + 368), v52);
            goto LABEL_152;
          }
          v43 = v42 - 1;
          if ( !v43 )
          {
            v47 = v12[1];
            if ( !v47 || (v47 & 7) != 0 || (v47 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFF8LL )
              goto LABEL_19;
            v48 = v12[2];
            v134 = (char *)v48;
            if ( v5 )
            {
              if ( (v48 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v48 + v47 > 0x7FFFFFFF0000LL || v48 + v47 < v48 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v49 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v47, 0x6C4A7350u);
            *(_QWORD *)(a4 + 376) = v49;
            if ( !v49 )
              goto LABEL_54;
            memset(v49, 0, v47);
            *(_DWORD *)(a4 + 388) = v47 >> 3;
            v50 = 0LL;
            v132 = 0LL;
            for ( i = 0LL; i < *(unsigned int *)(a4 + 388); ++i )
            {
              v14 = sub_140732D40(*(_QWORD *)(v48 + 8 * v50), 0x6C4A7350u, (__int64)&v131, 0LL, 0LL);
              if ( v14 < 0 )
                goto LABEL_300;
              *(_QWORD *)(*(_QWORD *)(a4 + 376) + 8 * v50) = v131;
              v50 = i + 1;
              v132 = i + 1;
            }
LABEL_264:
            v7 = v120;
            goto LABEL_265;
          }
          v44 = v43 - 1;
          if ( v44 )
          {
            if ( v44 != 1 || v12[1] != 4 )
              goto LABEL_19;
            v45 = (_DWORD *)v12[2];
            v129 = v45;
            if ( v5 )
            {
              if ( ((unsigned __int8)v45 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v12 = v109;
              v45 = v129;
            }
            *(_DWORD *)(a4 + 396) = *v45;
          }
          else
          {
            if ( v12[1] != 4 )
              goto LABEL_19;
            v46 = (_DWORD *)v12[2];
            v130 = v46;
            if ( v5 )
            {
              if ( ((unsigned __int8)v46 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v12 = v109;
              v46 = v130;
            }
            *(_DWORD *)(a4 + 392) = *v46;
          }
        }
        else
        {
          if ( v12[1] != 2 )
            goto LABEL_19;
          v61 = (_WORD *)v12[2];
          v133 = v61;
          if ( v5 )
          {
            if ( ((unsigned __int8)v61 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v61 = v133;
          }
          v110 = *v61;
          if ( *v61 >= (unsigned __int16)word_140D05000 )
            goto LABEL_19;
          _mm_lfence();
          if ( !*(_DWORD *)(qword_140D31700[v110] + 16) )
            goto LABEL_19;
          *(_WORD *)(a4 + 250) = v110;
          v12 = v109;
        }
      }
      else if ( v13 == 131082 )
      {
        if ( v12[1] != 8 )
          goto LABEL_19;
        v37 = (_DWORD *)v12[2];
        v128 = v37;
        if ( v5 )
        {
          if ( ((unsigned __int8)v37 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v12 = v109;
          v37 = v128;
        }
        if ( (*v37 & 0x1C) != 0 )
        {
          v14 = -1073741637;
          goto LABEL_300;
        }
        v38 = *v37 & 3;
        v117 = v38;
        if ( (unsigned __int8)v38 >= 3u )
          goto LABEL_19;
        *(_BYTE *)(a4 + 9) ^= (*(_BYTE *)(a4 + 9) ^ (4 * v38)) & 0xC;
        if ( v38 == 1 )
          *(_DWORD *)(a4 + 288) = v37[1];
      }
      else
      {
        v17 = v13 - 6;
        if ( v17 )
        {
          v18 = v17 - 65533;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 65537;
              if ( !v20 )
              {
                v28 = v12[1];
                if ( !v28 || (v28 & 1) != 0 || v28 > 0xFFFF )
                  goto LABEL_19;
                v29 = (char *)v12[2];
                v142 = v29;
                if ( v5 && ((unsigned __int64)&v29[v28] > 0x7FFFFFFF0000LL || &v29[v28] < v29) )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v30 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v28, 0x6E467350u);
                v143 = v30;
                if ( !v30 )
                  goto LABEL_54;
                *(_OWORD *)(a4 + 232) = 0LL;
                *(_WORD *)(a4 + 234) = v28;
                *(_QWORD *)(a4 + 240) = v30;
                memmove(v30, v29, v28);
                *(_WORD *)(a4 + 232) = v28;
                goto LABEL_265;
              }
              v21 = v20 - 2;
              if ( !v21 )
              {
                v25 = v12[1];
                if ( !v25 || (v25 & 0xF) != 0 )
                  goto LABEL_19;
                v26 = (char *)v12[2];
                v141 = v26;
                if ( v5 )
                {
                  if ( ((unsigned __int8)v26 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( (unsigned __int64)&v26[v25] > 0x7FFFFFFF0000LL || &v26[v25] < v26 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
                if ( v25 > 0x10 )
                {
                  *(_QWORD *)(v7 + 280) = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v25, 0x6C527350u);
                  v27 = *(void **)(a4 + 280);
                  if ( !v27 )
                    goto LABEL_54;
                }
                else
                {
                  v27 = (void *)(a4 + 264);
                  *(_QWORD *)(v7 + 280) = a4 + 264;
                }
                memmove(v27, v26, v25);
                *(_QWORD *)(a4 + 256) = v25 >> 4;
                goto LABEL_265;
              }
              v22 = v21 - 1;
              if ( v22 )
              {
                if ( v22 != 1 || v12[1] != 4 )
                  goto LABEL_19;
                v23 = (_DWORD *)v12[2];
                v123 = v23;
                if ( v5 )
                {
                  if ( ((unsigned __int8)v23 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v12 = v109;
                  v23 = v123;
                }
                *(_DWORD *)(a4 + 316) = *v23;
              }
              else
              {
                if ( v12[1] != 1 )
                  goto LABEL_19;
                v24 = (_BYTE *)v12[2];
                v124 = v24;
                if ( v5 )
                {
                  v12 = v109;
                  v24 = v124;
                }
                *(_BYTE *)(a4 + 248) = *v24;
              }
            }
            else
            {
              if ( v12[1] != 8 )
                goto LABEL_19;
              v31 = v12[2];
              v125 = v31;
              if ( v5 )
              {
                if ( (v31 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v31 >= 0x7FFFFFFF0000LL )
                  v31 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v31 = *(_BYTE *)v31;
                *(_BYTE *)(v31 + 7) = *(_BYTE *)(v31 + 7);
                v12 = v109;
                v31 = v125;
              }
              *(_QWORD *)(a4 + 24) = v31;
              v32 = v12[3];
              v111 = v32;
              if ( v32 )
              {
                if ( v5 )
                {
                  if ( (v32 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v32 >= 0x7FFFFFFF0000LL )
                    v32 = 0x7FFFFFFF0000LL;
                  *(_BYTE *)v32 = *(_BYTE *)v32;
                  *(_BYTE *)(v32 + 7) = *(_BYTE *)(v32 + 7);
                  v12 = v109;
                  v32 = v111;
                }
                *(_QWORD *)v32 = 8LL;
              }
            }
          }
          else
          {
            if ( v12[1] != 16 )
              goto LABEL_19;
            v33 = v12[2];
            v126 = v33;
            if ( v5 )
            {
              if ( (v33 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v33 >= 0x7FFFFFFF0000LL )
                v33 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v33 = *(_BYTE *)v33;
              *(_BYTE *)(v33 + 15) = *(_BYTE *)(v33 + 15);
              v33 = v126;
              v12 = v109;
            }
            *(_QWORD *)(a4 + 16) = v33;
            v34 = v12[3];
            v112 = v34;
            if ( v34 )
            {
              if ( v5 )
              {
                if ( (v34 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v34 >= 0x7FFFFFFF0000LL )
                  v34 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v34 = *(_BYTE *)v34;
                *(_BYTE *)(v34 + 7) = *(_BYTE *)(v34 + 7);
                v12 = v109;
                v34 = v112;
              }
              *(_QWORD *)v34 = 16LL;
            }
          }
        }
        else
        {
          if ( v12[1] != 64 )
            goto LABEL_19;
          v35 = v12[2];
          v127 = v35;
          if ( v5 )
          {
            if ( (v35 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v35 >= 0x7FFFFFFF0000LL )
              v35 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v35 = *(_BYTE *)v35;
            *(_BYTE *)(v35 + 63) = *(_BYTE *)(v35 + 63);
            v12 = v109;
            v35 = v127;
          }
          *(_QWORD *)(a4 + 32) = v35;
          v36 = v12[3];
          v113 = v36;
          if ( v36 )
          {
            if ( v5 )
            {
              if ( (v36 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v36 >= 0x7FFFFFFF0000LL )
                v36 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v36 = *(_BYTE *)v36;
              *(_BYTE *)(v36 + 7) = *(_BYTE *)(v36 + 7);
              v12 = v109;
              v36 = v113;
            }
            *(_QWORD *)v36 = 64LL;
          }
        }
      }
    }
LABEL_266:
    v12 += 4;
    v109 = v12;
    v11 = --v116;
  }
  v14 = 0;
LABEL_300:
  if ( v14 < 0 )
    goto LABEL_306;
  if ( (*(_DWORD *)(a4 + 4) & 0x800) != 0 )
  {
    qsort(*(void **)(a4 + 296), *(unsigned int *)(a4 + 292), 8uLL, sub_1406E56B0);
    if ( **(int **)(a4 + 296) < 0 )
      v14 = -1073741811;
    *(_BYTE *)(a4 + 8) = *(_BYTE *)(a4 + 8) & 0xFE | (v118 != 0);
  }
  if ( v14 < 0 )
LABEL_306:
    sub_1407021EC(a4);
  return (unsigned int)v14;
}
