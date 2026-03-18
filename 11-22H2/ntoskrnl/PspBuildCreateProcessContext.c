/*
 * XREFs of PspBuildCreateProcessContext @ 0x140771678
 * Callers:
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     NtCreateThreadEx @ 0x14076F910 (NtCreateThreadEx.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140255090 (KeGetProcessorIndexFromNumber.c)
 *     KeVerifyGroupAffinity @ 0x140321194 (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     qsort @ 0x1403D9DD0 (qsort.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x1405A402C (IsTrustletCreateAttributeWellFormed.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspDeleteCreateProcessContext @ 0x14076F720 (PspDeleteCreateProcessContext.c)
 *     PspValidateMitigationOptions @ 0x1407C69CC (PspValidateMitigationOptions.c)
 *     RtlValidProcessProtection @ 0x1407EA140 (RtlValidProcessProtection.c)
 *     PspValidateMitigationAuditOptions @ 0x14084AFE4 (PspValidateMitigationAuditOptions.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspBuildCreateProcessContext(unsigned __int64 *a1, char a2, int a3, __int64 a4)
{
  int v5; // r11d
  char v6; // r10
  __int64 v7; // r13
  unsigned __int64 v8; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
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
  size_t v25; // rbx
  char *v26; // r15
  void *v27; // rcx
  __int64 v28; // rax
  size_t v29; // rbx
  char *v30; // r15
  void *v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  _DWORD *v38; // rcx
  int v39; // edx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  _DWORD *v46; // rax
  _DWORD *v47; // rax
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // r15
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  __int64 v52; // r13
  __int64 v53; // r12
  size_t v54; // rbx
  char *v55; // r15
  void *v56; // rax
  char valid; // al
  bool v58; // zf
  size_t v59; // r8
  unsigned __int64 v60; // rdx
  __int128 v61; // xmm6
  __int64 v62; // xmm2_8
  _WORD *v63; // rax
  size_t v64; // rbx
  char *v65; // r15
  void *v66; // rax
  unsigned __int64 v67; // rbx
  _QWORD *v68; // rax
  _DWORD *v69; // rcx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  struct _PROCESSOR_NUMBER *v76; // rax
  ULONG ProcessorIndexFromNumber; // eax
  _OWORD *v78; // rax
  unsigned __int64 v79; // rcx
  size_t v80; // r8
  unsigned __int64 v81; // rdx
  __int128 v82; // xmm6
  __int64 v83; // xmm2_8
  _DWORD *v84; // rax
  size_t v85; // r12
  const void *v86; // r15
  void *v87; // rax
  __int64 v88; // r13
  __int64 v89; // r15
  char *v90; // r9
  const void *v91; // r12
  __int64 v92; // rax
  char v93; // r10
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  unsigned __int64 v97; // rdx
  char *v98; // rbx
  __int64 v99; // rdx
  char *v100; // r15
  void *Pool2; // rax
  _QWORD *v102; // rax
  __int64 v103; // rdx
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
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp-210h] BYREF
  int v115; // [rsp+6Ch] [rbp-20Ch]
  unsigned __int64 v116; // [rsp+70h] [rbp-208h]
  int v117; // [rsp+78h] [rbp-200h]
  int v118; // [rsp+7Ch] [rbp-1FCh]
  char *v119; // [rsp+80h] [rbp-1F8h]
  __int64 v120; // [rsp+88h] [rbp-1F0h]
  __int64 v121; // [rsp+90h] [rbp-1E8h]
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
  __int64 v132; // [rsp+F8h] [rbp-180h]
  _WORD *v133; // [rsp+100h] [rbp-178h]
  char *v134; // [rsp+108h] [rbp-170h]
  struct _PROCESSOR_NUMBER *v135; // [rsp+110h] [rbp-168h]
  _OWORD *v136; // [rsp+118h] [rbp-160h]
  _DWORD *v137; // [rsp+120h] [rbp-158h]
  const void *v138; // [rsp+128h] [rbp-150h]
  _QWORD *v139; // [rsp+130h] [rbp-148h]
  char *v140; // [rsp+140h] [rbp-138h]
  char *v141; // [rsp+148h] [rbp-130h]
  void *v142; // [rsp+150h] [rbp-128h]
  char *v143; // [rsp+158h] [rbp-120h]
  unsigned __int64 v144; // [rsp+160h] [rbp-118h]
  unsigned __int64 v145; // [rsp+168h] [rbp-110h]
  int v146; // [rsp+170h] [rbp-108h]
  char *v147; // [rsp+178h] [rbp-100h]
  const void *v148; // [rsp+180h] [rbp-F8h]
  char *v149; // [rsp+188h] [rbp-F0h]
  char *v150; // [rsp+190h] [rbp-E8h]
  __int64 v151; // [rsp+198h] [rbp-E0h]
  unsigned __int64 v152; // [rsp+1A0h] [rbp-D8h]
  __int128 v153; // [rsp+1B0h] [rbp-C8h] BYREF
  __int64 v154; // [rsp+1C0h] [rbp-B8h]
  __int128 v155; // [rsp+1D0h] [rbp-A8h] BYREF
  __int64 v156; // [rsp+1E0h] [rbp-98h]
  __int128 v157; // [rsp+1F0h] [rbp-88h] BYREF
  __int64 v158; // [rsp+200h] [rbp-78h]
  __int128 v159; // [rsp+208h] [rbp-70h] BYREF
  __int64 v160; // [rsp+218h] [rbp-60h]

  v5 = a3;
  v6 = a2;
  v118 = a3;
  v122 = a4;
  v7 = a4;
  v120 = a4;
  v142 = 0LL;
  v126 = 0LL;
  v123 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v141 = 0LL;
  v136 = 0LL;
  v134 = 0LL;
  ProcNumber = 0;
  v135 = 0LL;
  v127 = 0LL;
  v132 = 0LL;
  v131 = 0LL;
  v133 = 0LL;
  v124 = 0LL;
  v140 = 0LL;
  v115 = 0;
  v128 = 0LL;
  v117 = 0;
  v125 = 0LL;
  v130 = 0LL;
  v129 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  v150 = 0LL;
  v138 = 0LL;
  v119 = 0LL;
  v147 = 0LL;
  v148 = 0LL;
  v121 = 0LL;
  v137 = 0LL;
  v143 = 0LL;
  v151 = 0LL;
  v139 = 0LL;
  *(_BYTE *)a4 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = *a1;
  v116 = v8;
  if ( v8 < 0x28 )
    return 3221225485LL;
  if ( v6 && v8 != 40 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v8 > 0x7FFFFFFF0000LL || (unsigned __int64 *)((char *)a1 + v8) < a1 + 5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v10 = v8 - 8;
  v116 = v10;
  if ( (v10 & 0x1F) != 0 )
    return 3221225485LL;
  v11 = v10 >> 5;
  v116 = v11;
  v12 = a1 + 1;
  v109 = a1 + 1;
  while ( v11 )
  {
    v13 = *v12;
    v152 = *v12;
    if ( v5 && (v13 & 0x10000) == 0 )
      goto LABEL_17;
    if ( (v13 & 0x20000) != 0 && v12[3] )
      goto LABEL_17;
    v146 = 1 << v13;
    v15 = *(unsigned int *)(a4 + 4);
    if ( ((1 << v13) & (unsigned int)v15) != 0 )
      goto LABEL_17;
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
                  goto LABEL_17;
                LOBYTE(v15) = *((_BYTE *)v12 + 16);
                *(_BYTE *)(a4 + 360) = v15;
                valid = RtlValidProcessProtection(v15, v16, 0x7FFFFFFF8LL);
                goto LABEL_150;
              }
              v108 = v107 - 9;
              if ( v108 )
              {
                if ( v108 != 2 || v12[1] != 2 )
                  goto LABEL_17;
                *(_WORD *)(a4 + 160) = *((_WORD *)v12 + 8);
              }
              else
              {
                if ( v12[1] != 1 )
                  goto LABEL_17;
                *(_BYTE *)(a4 + 9) = *(_BYTE *)(a4 + 9) & 0x7F | (v12[2] != 0 ? 0x80 : 0);
              }
            }
            else
            {
              if ( v12[1] != 8 )
                goto LABEL_17;
              *(_QWORD *)(a4 + 144) = v12[2];
            }
          }
          else
          {
            if ( v12[1] != 8 )
              goto LABEL_17;
            *(_QWORD *)(a4 + 136) = v12[2];
          }
        }
        else
        {
          if ( v12[1] != 8 )
            goto LABEL_17;
          *(_QWORD *)(a4 + 120) = v12[2];
        }
      }
      else if ( v13 == 196638 )
      {
        if ( !v5 || v12[1] != 8 )
          goto LABEL_17;
        v102 = (_QWORD *)v12[2];
        v139 = v102;
        if ( v6 )
        {
          if ( ((unsigned __int8)v102 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v12 = v109;
          v102 = v139;
        }
        v103 = *v102;
        *(_QWORD *)(a4 + 496) = *v102;
        v151 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
        if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & v103) != 0 )
        {
LABEL_17:
          v14 = -1073741811;
          goto LABEL_298;
        }
        *(_QWORD *)(a4 + 496) = v103 & 0x40000;
      }
      else
      {
        v70 = v13 - 131095;
        if ( !v70 )
        {
          if ( v12[1] != 524 )
            goto LABEL_17;
          v100 = (char *)v12[2];
          v150 = v100;
          if ( v6 && ((unsigned __int64)(v100 + 524) > 0x7FFFFFFF0000LL || v100 + 524 < v100) )
            MEMORY[0x7FFFFFFF0000] = 0;
          Pool2 = (void *)ExAllocatePool2(65LL, 524LL, 1666151248LL);
          *(_QWORD *)(a4 + 400) = Pool2;
          if ( !Pool2 )
            goto LABEL_52;
          memmove(Pool2, v100, 0x20CuLL);
          *(_DWORD *)(a4 + 408) = 524;
          if ( (**(_DWORD **)(a4 + 400) & 0x40) != 0 )
            goto LABEL_17;
          goto LABEL_262;
        }
        v71 = v70 - 1;
        if ( !v71 )
        {
          v85 = v12[1];
          if ( v85 != 40 )
            goto LABEL_17;
          v86 = (const void *)v12[2];
          v138 = v86;
          if ( v6 )
          {
            if ( ((unsigned __int8)v86 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v12 = v109;
            v85 = 40LL;
            v86 = v138;
          }
          v87 = (void *)ExAllocatePool2(65LL, v85, 1883401808LL);
          v88 = a4 + 416;
          v121 = a4 + 416;
          *(_QWORD *)(a4 + 416) = v87;
          if ( !v87 )
            goto LABEL_52;
          v115 = 0;
          memmove(v87, v86, v85);
          v89 = *(_QWORD *)v88;
          v121 = v89;
          v90 = *(char **)(v89 + 8);
          v149 = v90;
          v147 = v90;
          v91 = *(const void **)(v89 + 24);
          v148 = v91;
          *(_QWORD *)(v89 + 8) = 0LL;
          *(_QWORD *)(*(_QWORD *)v88 + 24LL) = 0LL;
          v92 = *(unsigned __int16 *)(v89 + 2);
          if ( (_WORD)v92 )
          {
            if ( *(_WORD *)v89 > (unsigned __int16)v92
              || (*(_WORD *)v89 & 1) != 0
              || (v92 & 1) != 0
              || (_WORD)v92 == 0xFFFF
              || !v90 )
            {
              goto LABEL_17;
            }
            v93 = a2;
            if ( a2 && ((unsigned __int64)&v90[v92] > 0x7FFFFFFF0000LL || &v90[v92] < v90) )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          else
          {
            v93 = a2;
          }
          v94 = *(unsigned int *)(*(_QWORD *)v88 + 16LL);
          v95 = *(_QWORD *)v88;
          if ( (_DWORD)v94 )
          {
            if ( !v91 || (unsigned int)v94 > 0xFFFF )
              goto LABEL_17;
            if ( v93 )
            {
              v96 = 8 * v94;
              if ( v96 )
              {
                if ( ((unsigned __int8)v91 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v97 = (unsigned __int64)v91 + v96;
                if ( v97 > 0x7FFFFFFF0000LL || v97 < (unsigned __int64)v91 )
                {
                  MEMORY[0x7FFFFFFF0000] = 0;
                  v95 = *(_QWORD *)v88;
                }
              }
            }
          }
          v98 = 0LL;
          v119 = 0LL;
          v99 = *(unsigned __int16 *)(v89 + 2);
          if ( (_WORD)v99 || *(_DWORD *)(v95 + 16) )
          {
            v98 = (char *)ExAllocatePool2(65LL, v99 + 8LL * *(unsigned int *)(v95 + 16), 1883401808LL);
            v119 = v98;
            v90 = v149;
          }
          if ( *(_WORD *)(v89 + 2) )
          {
            *(_QWORD *)(v89 + 8) = v98;
            memmove(v98, v90, *(unsigned __int16 *)(v89 + 2));
            v98 += *(unsigned __int16 *)(v89 + 2);
            v119 = v98;
          }
          if ( *(_DWORD *)(*(_QWORD *)v88 + 16LL) )
          {
            *(_QWORD *)(*(_QWORD *)v88 + 24LL) = v98;
            memmove(*(void **)(*(_QWORD *)v88 + 24LL), v91, 8LL * *(unsigned int *)(*(_QWORD *)v88 + 16LL));
          }
          goto LABEL_261;
        }
        v72 = v71 - 1;
        if ( v72 )
        {
          v73 = v72 - 2;
          if ( !v73 )
          {
            v80 = v12[1];
            if ( v80 > 0x18 )
              goto LABEL_17;
            v159 = 0LL;
            v160 = 0LL;
            v12 = v109;
            v81 = v109[2];
            if ( v6 && v81 >= 0x7FFFFFFF0000LL )
              v81 = 0x7FFFFFFF0000LL;
            memmove(&v159, (const void *)v81, v80);
            v82 = v159;
            v155 = v159;
            v83 = v160;
            v156 = v160;
            v14 = PspValidateMitigationAuditOptions(&v155);
            if ( v14 < 0 )
              goto LABEL_298;
            *(_OWORD *)(a4 + 464) = v82;
            *(_QWORD *)(a4 + 480) = v83;
            goto LABEL_262;
          }
          v74 = v73 - 2;
          if ( v74 )
          {
            v75 = v74 - 65519;
            if ( !v75 )
            {
              if ( !v5 || v12[1] != 16 )
                goto LABEL_17;
              v78 = (_OWORD *)v12[2];
              v136 = v78;
              if ( v6 )
              {
                if ( ((unsigned __int8)v78 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v12 = v109;
                v78 = v136;
              }
              *(_OWORD *)(a4 + 320) = *v78;
              valid = KeVerifyGroupAffinity(a4 + 320, 1);
LABEL_150:
              v58 = valid == 0;
              goto LABEL_151;
            }
            if ( v75 != 2 || !v5 || v12[1] != 4 )
              goto LABEL_17;
            v76 = (struct _PROCESSOR_NUMBER *)v12[2];
            v135 = v76;
            if ( v6 )
            {
              if ( ((unsigned __int8)v76 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v12 = v109;
              v76 = v135;
            }
            ProcNumber = *v76;
            ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
            *(_DWORD *)(a4 + 252) = ProcessorIndexFromNumber;
            v58 = ProcessorIndexFromNumber == -1;
LABEL_151:
            if ( v58 )
              goto LABEL_17;
LABEL_262:
            v5 = a3;
            v6 = a2;
            goto LABEL_263;
          }
          if ( v12[1] != 4 )
            goto LABEL_17;
          v79 = v12[2];
          v145 = v79;
          if ( v6 )
          {
            if ( (v79 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v79 + 4 > 0x7FFFFFFF0000LL || v79 + 4 < v79 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          if ( (*(_DWORD *)v79 & 0xFFFFFFFE) != 0 )
            return 3221225485LL;
          *(_QWORD *)(a4 + 456) = v79;
        }
        else
        {
          if ( v12[1] != 4 )
            goto LABEL_17;
          v84 = (_DWORD *)v12[2];
          v137 = v84;
          if ( v6 )
          {
            if ( ((unsigned __int8)v84 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v12 = v109;
            v84 = v137;
          }
          *(_DWORD *)(a4 + 424) = *v84;
        }
      }
    }
    else
    {
      if ( v13 == 131094 )
      {
        if ( v12[1] != 8 )
          goto LABEL_17;
        v67 = v12[2];
        v144 = v67;
        if ( v6 )
        {
          if ( (v67 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v67 + 8 > 0x7FFFFFFF0000LL || v67 + 8 < v67 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v68 = (_QWORD *)ExAllocatePool2(65LL, 8LL, 2004050768LL);
        *(_QWORD *)(a4 + 448) = v68;
        if ( !v68 )
        {
          v14 = -1073741801;
          goto LABEL_298;
        }
        *v68 = *(_QWORD *)v67;
        v69 = *(_DWORD **)(a4 + 448);
        if ( (*v69 & 3) == 0 || (unsigned int)(v69[1] - 1) > 5 )
          goto LABEL_17;
        goto LABEL_262;
      }
      if ( v13 > 0x2000A )
      {
        v40 = v13 - 131083;
        if ( !v40 )
        {
          v64 = v12[1];
          if ( !v64 || (v64 & 7) != 0 || (v64 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFF8LL )
            goto LABEL_17;
          v65 = (char *)v12[2];
          v134 = v65;
          if ( v6 )
          {
            if ( ((unsigned __int8)v65 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v65[v64] > 0x7FFFFFFF0000LL || &v65[v64] < v65 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v66 = (void *)ExAllocatePool2(65LL, v64, 1816687440LL);
          *(_QWORD *)(a4 + 296) = v66;
          if ( !v66 )
          {
LABEL_52:
            v14 = -1073741670;
            goto LABEL_298;
          }
          memmove(v66, v65, v64);
          *(_DWORD *)(a4 + 292) = v64 >> 3;
          goto LABEL_262;
        }
        v41 = v40 - 2;
        if ( v41 )
        {
          v42 = v41 - 3;
          if ( !v42 )
          {
            v59 = v12[1];
            if ( v59 > 0x18 )
              goto LABEL_17;
            v157 = 0LL;
            v158 = 0LL;
            v12 = v109;
            v60 = v109[2];
            if ( v6 && v60 >= 0x7FFFFFFF0000LL )
              v60 = 0x7FFFFFFF0000LL;
            memmove(&v157, (const void *)v60, v59);
            v61 = v157;
            v153 = v157;
            v62 = v158;
            v154 = v158;
            v14 = PspValidateMitigationOptions(&v153, 0LL);
            if ( v14 < 0 )
              goto LABEL_298;
            *(_OWORD *)(a4 + 336) = v61;
            *(_QWORD *)(a4 + 352) = v62;
            goto LABEL_262;
          }
          v43 = v42 - 2;
          if ( !v43 )
          {
            v54 = v12[1];
            if ( !v54 || (v54 & 7) != 0 || v54 > 0x88 )
              goto LABEL_17;
            v55 = (char *)v12[2];
            v143 = v55;
            if ( v6 )
            {
              if ( ((unsigned __int8)v55 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (unsigned __int64)&v55[v54] > 0x7FFFFFFF0000LL || &v55[v54] < v55 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v56 = (void *)ExAllocatePool2(65LL, v54, 1632924496LL);
            *(_QWORD *)(a4 + 368) = v56;
            if ( !v56 )
              goto LABEL_52;
            memmove(v56, v55, v54);
            *(_DWORD *)(a4 + 384) = v54;
            valid = IsTrustletCreateAttributeWellFormed(*(_QWORD **)(a4 + 368), v54);
            goto LABEL_150;
          }
          v44 = v43 - 1;
          if ( !v44 )
          {
            v48 = v12[1];
            if ( !v48 || (v48 & 7) != 0 || (v48 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFF8LL )
              goto LABEL_17;
            v49 = v12[2];
            v134 = (char *)v49;
            if ( v6 )
            {
              if ( (v49 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v49 + v48 > 0x7FFFFFFF0000LL || v49 + v48 < v49 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v50 = ExAllocatePool2(65LL, v48, 1816818512LL);
            *(_QWORD *)(a4 + 376) = v50;
            if ( !v50 )
              goto LABEL_52;
            *(_DWORD *)(a4 + 388) = v48 >> 3;
            v132 = 0LL;
            v51 = 0LL;
            v52 = 0LL;
            v53 = 0LL;
            while ( v51 < *(unsigned int *)(a4 + 388) )
            {
              v14 = ObpReferenceObjectByHandleWithTag(
                      *(_QWORD *)(v49 + 8 * v53),
                      1,
                      (__int64)PsJobType,
                      a2,
                      0x6C4A7350u,
                      &v131,
                      0LL,
                      0LL);
              if ( v14 < 0 )
                goto LABEL_298;
              *(_QWORD *)(*(_QWORD *)(a4 + 376) + 8 * v53) = v131;
              v51 = v52 + 1;
              v53 = v52 + 1;
              v132 = ++v52;
            }
LABEL_261:
            v7 = v120;
            goto LABEL_262;
          }
          v45 = v44 - 1;
          if ( v45 )
          {
            if ( v45 != 1 || v12[1] != 4 )
              goto LABEL_17;
            v46 = (_DWORD *)v12[2];
            v129 = v46;
            if ( v6 )
            {
              if ( ((unsigned __int8)v46 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v12 = v109;
              v46 = v129;
            }
            *(_DWORD *)(a4 + 396) = *v46;
          }
          else
          {
            if ( v12[1] != 4 )
              goto LABEL_17;
            v47 = (_DWORD *)v12[2];
            v130 = v47;
            if ( v6 )
            {
              if ( ((unsigned __int8)v47 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v12 = v109;
              v47 = v130;
            }
            *(_DWORD *)(a4 + 392) = *v47;
          }
        }
        else
        {
          if ( v12[1] != 2 )
            goto LABEL_17;
          v63 = (_WORD *)v12[2];
          v133 = v63;
          if ( v6 )
          {
            if ( ((unsigned __int8)v63 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v63 = v133;
          }
          v110 = *v63;
          if ( *v63 >= (unsigned __int16)KeNumberNodes )
            goto LABEL_17;
          _mm_lfence();
          if ( !*(_DWORD *)(KeNodeBlock[v110] + 16) )
            goto LABEL_17;
          *(_WORD *)(a4 + 250) = v110;
          v12 = v109;
        }
      }
      else if ( v13 == 131082 )
      {
        if ( v12[1] != 8 )
          goto LABEL_17;
        v38 = (_DWORD *)v12[2];
        v128 = v38;
        if ( v6 )
        {
          if ( ((unsigned __int8)v38 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v12 = v109;
          v38 = v128;
        }
        if ( (*v38 & 0x1C) != 0 )
        {
          v14 = -1073741637;
          goto LABEL_298;
        }
        v39 = *v38 & 3;
        v117 = v39;
        if ( (unsigned __int8)v39 >= 3u )
          goto LABEL_17;
        *(_BYTE *)(a4 + 9) ^= (*(_BYTE *)(a4 + 9) ^ (4 * v39)) & 0xC;
        if ( v39 == 1 )
          *(_DWORD *)(a4 + 288) = v38[1];
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
                v29 = v12[1];
                if ( !v29 || (v29 & 1) != 0 || v29 > 0xFFFF )
                  goto LABEL_17;
                v30 = (char *)v12[2];
                v141 = v30;
                if ( v6 && ((unsigned __int64)&v30[v29] > 0x7FFFFFFF0000LL || &v30[v29] < v30) )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v31 = (void *)ExAllocatePool2(65LL, v29, 1850110800LL);
                v142 = v31;
                if ( !v31 )
                  goto LABEL_52;
                *(_OWORD *)(a4 + 232) = 0LL;
                *(_WORD *)(a4 + 234) = v29;
                *(_QWORD *)(a4 + 240) = v31;
                memmove(v31, v30, v29);
                *(_WORD *)(a4 + 232) = v29;
                goto LABEL_262;
              }
              v21 = v20 - 2;
              if ( !v21 )
              {
                v25 = v12[1];
                if ( !v25 || (v25 & 0xF) != 0 )
                  goto LABEL_17;
                v26 = (char *)v12[2];
                v140 = v26;
                if ( v6 )
                {
                  if ( ((unsigned __int8)v26 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( (unsigned __int64)&v26[v25] > 0x7FFFFFFF0000LL || &v26[v25] < v26 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
                if ( v25 > 0x10 )
                {
                  v28 = ExAllocatePool2(65LL, v25, 1817342800LL);
                  *(_QWORD *)(v7 + 280) = v28;
                  v27 = (void *)v28;
                  if ( !v28 )
                    goto LABEL_52;
                }
                else
                {
                  v27 = (void *)(a4 + 264);
                  *(_QWORD *)(v7 + 280) = a4 + 264;
                }
                memmove(v27, v26, v25);
                *(_QWORD *)(a4 + 256) = v25 >> 4;
                goto LABEL_262;
              }
              v22 = v21 - 1;
              if ( v22 )
              {
                if ( v22 != 1 || v12[1] != 4 )
                  goto LABEL_17;
                v23 = (_DWORD *)v12[2];
                v123 = v23;
                if ( v6 )
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
                  goto LABEL_17;
                v24 = (_BYTE *)v12[2];
                v124 = v24;
                if ( v6 )
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
                goto LABEL_17;
              v32 = v12[2];
              v125 = v32;
              if ( v6 )
              {
                if ( (v32 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v32 >= 0x7FFFFFFF0000LL )
                  v32 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v32 = *(_BYTE *)v32;
                *(_BYTE *)(v32 + 7) = *(_BYTE *)(v32 + 7);
                v12 = v109;
                v32 = v125;
              }
              *(_QWORD *)(a4 + 24) = v32;
              v33 = v12[3];
              v111 = v33;
              if ( v33 )
              {
                if ( v6 )
                {
                  if ( (v33 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v33 >= 0x7FFFFFFF0000LL )
                    v33 = 0x7FFFFFFF0000LL;
                  *(_BYTE *)v33 = *(_BYTE *)v33;
                  *(_BYTE *)(v33 + 7) = *(_BYTE *)(v33 + 7);
                  v12 = v109;
                  v33 = v111;
                }
                *(_QWORD *)v33 = 8LL;
              }
            }
          }
          else
          {
            if ( v12[1] != 16 )
              goto LABEL_17;
            v34 = v12[2];
            v126 = v34;
            if ( v6 )
            {
              if ( (v34 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v34 >= 0x7FFFFFFF0000LL )
                v34 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v34 = *(_BYTE *)v34;
              *(_BYTE *)(v34 + 15) = *(_BYTE *)(v34 + 15);
              v34 = v126;
              v12 = v109;
            }
            *(_QWORD *)(a4 + 16) = v34;
            v35 = v12[3];
            v112 = v35;
            if ( v35 )
            {
              if ( v6 )
              {
                if ( (v35 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v35 >= 0x7FFFFFFF0000LL )
                  v35 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v35 = *(_BYTE *)v35;
                *(_BYTE *)(v35 + 7) = *(_BYTE *)(v35 + 7);
                v12 = v109;
                v35 = v112;
              }
              *(_QWORD *)v35 = 16LL;
            }
          }
        }
        else
        {
          if ( v12[1] != 64 )
            goto LABEL_17;
          v36 = v12[2];
          v127 = v36;
          if ( v6 )
          {
            if ( (v36 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v36 >= 0x7FFFFFFF0000LL )
              v36 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v36 = *(_BYTE *)v36;
            *(_BYTE *)(v36 + 63) = *(_BYTE *)(v36 + 63);
            v12 = v109;
            v36 = v127;
          }
          *(_QWORD *)(a4 + 32) = v36;
          v37 = v12[3];
          v113 = v37;
          if ( v37 )
          {
            if ( v6 )
            {
              if ( (v37 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v37 >= 0x7FFFFFFF0000LL )
                v37 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v37 = *(_BYTE *)v37;
              *(_BYTE *)(v37 + 7) = *(_BYTE *)(v37 + 7);
              v12 = v109;
              v37 = v113;
            }
            *(_QWORD *)v37 = 64LL;
          }
        }
      }
    }
LABEL_263:
    v12 += 4;
    v109 = v12;
    v11 = --v116;
  }
  v14 = 0;
LABEL_298:
  if ( v14 < 0 )
    goto LABEL_304;
  if ( (*(_DWORD *)(a4 + 4) & 0x800) != 0 )
  {
    qsort(*(void **)(a4 + 296), *(unsigned int *)(a4 + 292), 8uLL, PspSortHandleList);
    if ( **(int **)(a4 + 296) < 0 )
      v14 = -1073741811;
    *(_BYTE *)(a4 + 8) = *(_BYTE *)(a4 + 8) & 0xFE | (v118 != 0);
  }
  if ( v14 < 0 )
LABEL_304:
    PspDeleteCreateProcessContext(a4);
  return (unsigned int)v14;
}
