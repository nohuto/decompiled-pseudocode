/*
 * XREFs of sub_140804350 @ 0x140804350
 * Callers:
 *     <none>
 * Callees:
 *     sub_140220238 @ 0x140220238 (sub_140220238.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     sub_14039A190 @ 0x14039A190 (sub_14039A190.c)
 *     sub_14039F184 @ 0x14039F184 (sub_14039F184.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_14069A1F8 @ 0x14069A1F8 (sub_14069A1F8.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x1407CD7A0 (RtlCompareUnicodeStrings.c)
 *     sub_1408048F4 @ 0x1408048F4 (sub_1408048F4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140804350(__int64 a1, void *a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  unsigned int *v6; // r13
  int v7; // edi
  __int16 v8; // r10
  __int64 v9; // r14
  _WORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  PVOID **v13; // r15
  int v14; // eax
  __int64 v15; // rax
  PVOID **v16; // rbx
  PVOID *v17; // rcx
  wchar_t **v19; // rdx
  unsigned int v20; // ecx
  __int64 *v21; // rdx
  unsigned int v22; // r8d
  __int64 v23; // r9
  size_t v24; // r15
  __int16 v25; // r12
  __int64 v26; // r14
  wchar_t *v27; // r13
  __int64 *v28; // rsi
  unsigned int v29; // eax
  unsigned int v30; // r9d
  int v31; // ecx
  unsigned int v32; // r8d
  int v33; // ecx
  __int64 v34; // rax
  int v35; // ebx
  wchar_t *v36; // rax
  __int128 *v37; // rsi
  __int64 v38; // r14
  _QWORD *v39; // rbx
  void *v40; // rcx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  bool v46; // cc
  unsigned __int16 v47; // r8
  int v48; // ecx
  unsigned __int16 v49; // bx
  wchar_t *v50; // r13
  wchar_t *v51; // r12
  unsigned __int16 v52; // r15
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  BOOL v58; // ecx
  unsigned int v59; // eax
  bool v60; // al
  unsigned int v61; // eax
  int v62; // ecx
  int v63; // edx
  unsigned int v64; // eax
  _WORD *v65; // rdx
  int v66; // ecx
  bool v67; // zf
  __int64 v68; // rax
  unsigned int v69; // ebx
  int v70; // ecx
  int v71; // ecx
  int v72; // ecx
  wchar_t *v73; // rax
  __int64 v74; // rax
  __int16 v75; // ax
  _WORD *v76; // r8
  int v77; // ecx
  int v78; // ecx
  int v79; // ecx
  char v80; // al
  int v81; // edx
  int v82; // ecx
  unsigned __int64 v83; // r13
  const WCHAR *v84; // r8
  const WCHAR *v85; // r12
  int v86; // ecx
  int v87; // ecx
  int v88; // ecx
  int v89; // ecx
  int v90; // ecx
  int v91; // eax
  __int64 v92; // rax
  unsigned int v93; // r15d
  __int64 v94; // rax
  unsigned __int64 v95; // rbx
  int v96; // r9d
  wchar_t *v97; // rax
  const void *v98; // rdx
  char *v99; // rcx
  size_t v100; // r8
  LONG v101; // eax
  int v102; // ecx
  int v103; // ecx
  int v104; // ecx
  int v105; // ecx
  LONG v106; // eax
  LONG v107; // eax
  LONG v108; // eax
  LONG v109; // eax
  LONG v110; // eax
  bool v111; // zf
  int v112; // r8d
  _WORD *v113; // rbx
  unsigned int v114; // r15d
  int i; // ecx
  __int64 v116; // rax
  wchar_t *v117; // rax
  unsigned __int64 v118; // r15
  const WCHAR *v119; // r8
  const WCHAR *v120; // r13
  size_t v121; // r12
  __int64 v122; // rbx
  wchar_t *v123; // rax
  signed __int64 v124; // rbx
  wchar_t *v125; // rax
  const WCHAR *v126; // rdx
  int v127; // ecx
  int v128; // ecx
  int v129; // ecx
  int v130; // ecx
  int v131; // ecx
  int v132; // ecx
  int v133; // ecx
  int v134; // ecx
  int v135; // r8d
  unsigned int v136; // r9d
  int v137; // ecx
  int v138; // ecx
  int v139; // ecx
  bool v140; // zf
  const void *v141; // r10
  size_t v142; // r8
  const void *v143; // r11
  int v144; // r9d
  size_t v145; // rbx
  const void *v146; // r12
  const void *v147; // r13
  wchar_t *v148; // rax
  __int128 *v149; // rbx
  __int64 v150; // r14
  _QWORD *v151; // rsi
  void *v152; // rcx
  int v153; // ecx
  int v154; // ecx
  int v155; // ecx
  wchar_t *v156; // rax
  wchar_t *v157; // rdx
  int v158; // ecx
  _BYTE *v159; // rdx
  unsigned __int16 v161; // [rsp+30h] [rbp-69h]
  int v162; // [rsp+30h] [rbp-69h]
  __int16 v163; // [rsp+34h] [rbp-65h]
  wchar_t *v164; // [rsp+38h] [rbp-61h]
  unsigned int v165; // [rsp+40h] [rbp-59h]
  unsigned int v166; // [rsp+44h] [rbp-55h]
  UNICODE_STRING String1; // [rsp+48h] [rbp-51h] BYREF
  PVOID *v168; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v169; // [rsp+60h] [rbp-39h]
  UNICODE_STRING String2; // [rsp+68h] [rbp-31h] BYREF
  PVOID P; // [rsp+78h] [rbp-21h] BYREF
  __int64 v172; // [rsp+80h] [rbp-19h]
  __int64 Pool2; // [rsp+88h] [rbp-11h]
  __int64 v174; // [rsp+90h] [rbp-9h]
  __int64 v175; // [rsp+98h] [rbp-1h]
  __int128 v176; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v177; // [rsp+B0h] [rbp+17h]

  v174 = a1;
  v175 = a3;
  P = 0LL;
  v3 = 0;
  v166 = 0;
  v4 = 0LL;
  v172 = 0LL;
  v176 = 0LL;
  v177 = 0LL;
  v5 = sub_14067B838(a2, L"Tokens", 0, &P);
  v6 = (unsigned int *)P;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( !sub_14039A190(P) )
      goto LABEL_356;
    v9 = (__int64)v6 + v6[2];
    v168 = (PVOID *)v9;
    v10 = (_WORD *)v9;
    if ( *(_WORD *)v9 == v8 )
      goto LABEL_356;
    do
    {
      ++v3;
      v11 = -1LL;
      do
        ++v11;
      while ( v10[v11] != v8 );
      v10 += v11 + 1;
    }
    while ( *v10 != v8 );
    v169 = v3;
    v12 = 0LL;
    if ( v3 )
    {
      Pool2 = ExAllocatePool2(256LL, 8LL * v3, 1667526736LL);
      v13 = (PVOID **)Pool2;
      if ( Pool2 )
      {
        if ( *(_WORD *)v9 )
        {
          while ( 1 )
          {
            if ( *(_WORD *)(v9 + 2) && *(_WORD *)(v9 + 4) )
              goto LABEL_12;
            v19 = &off_140A3D790;
            v20 = 1;
            while ( *(_DWORD *)v9 != *(_DWORD *)*v19 )
            {
              ++v20;
              v19 += 3;
              if ( v20 >= 0x1B )
                goto LABEL_12;
            }
            v21 = &qword_140A3D770[3 * v20];
            if ( !v21 )
            {
LABEL_12:
              if ( (unsigned int)v12 >= v3 )
              {
                v7 = -1073741571;
                goto LABEL_92;
              }
              v168 = 0LL;
              v14 = sub_14069A1F8(v174, (const WCHAR *)v9, (__int64 *)&v168);
              v7 = v14;
              if ( v14 < 0 )
              {
                if ( v14 != -1073741772 )
                  goto LABEL_92;
                goto LABEL_90;
              }
              v13[v12] = v168;
              goto LABEL_15;
            }
            v22 = *((_DWORD *)v21 + 4);
            v23 = 0LL;
            v165 = 0;
            if ( v22 )
            {
              v165 = 0;
              while ( (_DWORD)v12 )
              {
                v12 = (unsigned int)(v12 - 1);
                v166 = v12;
                *((_QWORD *)&v176 + v23) = v13[v12];
                v23 = (unsigned int)(v23 + 1);
                v165 = v23;
                if ( (unsigned int)v23 >= v22 )
                {
                  v4 = v177;
                  v172 = v177;
                  goto LABEL_40;
                }
              }
              v7 = -1073741823;
LABEL_91:
              v61 = v165;
              if ( !v165 )
                goto LABEL_92;
              goto LABEL_298;
            }
LABEL_40:
            if ( v7 < 0 )
              goto LABEL_91;
            *(_DWORD *)&String1.Length = 0;
            LOWORD(v24) = 0;
            v163 = 0;
            v25 = 0;
            v161 = 0;
            LODWORD(v26) = 0;
            v164 = 0LL;
            v27 = 0LL;
            v28 = 0LL;
            if ( (_DWORD)v23 == 1 )
            {
              v62 = *(_DWORD *)v21;
              v63 = *(_DWORD *)v21 - 22;
              if ( v63 )
              {
                if ( v63 == 1 )
                {
                  LODWORD(v26) = *(_DWORD *)(v176 + 32) == 0;
                  goto LABEL_52;
                }
                v64 = *(_DWORD *)(v176 + 32);
                if ( !v64 )
                  goto LABEL_128;
                if ( v64 <= 2 )
                {
                  v76 = *(_WORD **)(v176 + 40);
                  v77 = v62 - 11;
                  if ( v77 )
                  {
                    v78 = v77 - 1;
                    if ( !v78 )
                    {
                      v67 = *v76 == 0;
                      goto LABEL_134;
                    }
                    v79 = v78 - 13;
                    if ( !v79 )
                    {
                      v80 = sub_140220238(*(_QWORD *)(v176 + 40), (unsigned int *)&String1.Length);
                      v81 = 0;
                      if ( v80 )
                      {
                        LODWORD(v26) = *(_DWORD *)&String1.Length;
                        goto LABEL_52;
                      }
LABEL_132:
                      LODWORD(v26) = v81;
                      goto LABEL_52;
                    }
                    if ( v79 != 1 )
                      goto LABEL_128;
                    v28 = (__int64 *)v176;
                  }
                  else
                  {
                    v26 = -1LL;
                    do
                      ++v26;
                    while ( v76[v26] );
                  }
                  goto LABEL_51;
                }
                if ( v64 == 4 )
                {
                  v69 = **(_DWORD **)(v176 + 40);
                  v70 = v62 - 11;
                  if ( v70 )
                  {
                    v71 = v70 - 1;
                    if ( !v71 )
                    {
                      v67 = v69 == 0;
                      goto LABEL_134;
                    }
                    v72 = v71 - 13;
                    if ( !v72 )
                    {
                      LODWORD(v26) = **(_DWORD **)(v176 + 40);
                      goto LABEL_52;
                    }
                    if ( v72 != 1 )
                      goto LABEL_128;
                    v163 = 22;
                    LOWORD(v24) = 22;
                    v25 = 20;
                    v73 = (wchar_t *)ExAllocatePool2(256LL, 22LL, 1667526736LL);
                    v27 = v73;
                    if ( !v73 )
                      goto LABEL_297;
                    v7 = sub_1402E0198(v73, 11LL, L"%u", v69);
                    if ( v7 >= 0 )
                    {
                      v74 = -1LL;
                      do
                        ++v74;
                      while ( v27[v74] );
                      v75 = 2 * v74;
                      LOWORD(v24) = v75 + 2;
                      v25 = v75;
                      v163 = v75 + 2;
                      goto LABEL_52;
                    }
                    ExFreePoolWithTag(v27, 0);
                    v27 = 0LL;
                  }
                  else
                  {
                    LODWORD(v26) = ~v69;
                  }
                }
                else
                {
                  if ( v64 != 7 )
                    goto LABEL_128;
                  v65 = *(_WORD **)(v176 + 40);
                  v66 = v62 - 11;
                  if ( v66 )
                  {
                    if ( v66 == 1 )
                    {
                      v67 = *v65 == 0;
LABEL_134:
                      LOBYTE(v26) = v67;
                      goto LABEL_52;
                    }
LABEL_128:
                    v28 = qword_140A37DC0;
                    goto LABEL_57;
                  }
                  if ( !*v65 )
                    goto LABEL_52;
                  do
                  {
                    LODWORD(v26) = v26 + 1;
                    v68 = -1LL;
                    do
                      ++v68;
                    while ( v65[v68] );
                    v65 += v68 + 1;
                  }
                  while ( *v65 );
                }
              }
              else
              {
                if ( !*(_DWORD *)(v176 + 32) )
                  goto LABEL_52;
                LODWORD(v26) = 1;
              }
              goto LABEL_50;
            }
            if ( (_DWORD)v23 != 2 )
              break;
            v29 = *(_DWORD *)(*((_QWORD *)&v176 + 1) + 32LL);
            if ( !v29 )
              goto LABEL_272;
            if ( v29 <= 2 )
            {
              v45 = *(_DWORD *)(v176 + 32);
              if ( (unsigned int)(v45 - 1) <= 1 )
              {
                v46 = *(_DWORD *)(*((_QWORD *)&v176 + 1) + 36LL) <= 0xFFFEu;
                String1 = 0LL;
                String2 = 0LL;
                if ( !v46 || *(_DWORD *)(v176 + 36) > 0xFFFEu )
                {
                  v61 = v165;
                  v7 = -2147483643;
LABEL_298:
                  v149 = &v176;
                  v150 = v61;
                  do
                  {
                    v151 = *(_QWORD **)v149;
                    if ( !*(_QWORD *)(*(_QWORD *)v149 + 24LL) )
                    {
                      v152 = (void *)v151[5];
                      if ( v152 )
                        ExFreePoolWithTag(v152, 0);
                      ExFreePoolWithTag(v151, 0);
                    }
                    v149 = (__int128 *)((char *)v149 + 8);
                    --v150;
                  }
                  while ( v150 );
                  v12 = v166;
                  goto LABEL_92;
                }
                v47 = *(_WORD *)(*((_QWORD *)&v176 + 1) + 36LL);
                v48 = *(_DWORD *)v21;
                v49 = v47 - 2;
                v50 = *(wchar_t **)(*((_QWORD *)&v176 + 1) + 40LL);
                v51 = *(wchar_t **)(v176 + 40);
                String2.MaximumLength = *(_WORD *)(v176 + 36);
                v52 = String2.MaximumLength - 2;
                String1.Buffer = v50;
                String1.MaximumLength = v47;
                String1.Length = v47 - 2;
                String2.Buffer = v51;
                String2.Length = String2.MaximumLength - 2;
                v53 = v48 - 1;
                if ( v53 )
                {
                  v54 = v53 - 12;
                  if ( !v54 )
                  {
                    if ( v49 >= 2u )
                    {
                      v91 = 1;
                      if ( v52 >= 2u )
                        goto LABEL_159;
                    }
LABEL_158:
                    v91 = 0;
                    goto LABEL_159;
                  }
                  v55 = v54 - 1;
                  if ( !v55 )
                  {
                    if ( v49 < 2u )
                    {
                      v91 = 0;
                      if ( v52 < 2u )
                        goto LABEL_159;
                    }
                    goto LABEL_322;
                  }
                  v56 = v55 - 1;
                  if ( !v56 )
                  {
                    v101 = RtlCompareUnicodeString(&String1, &String2, 1u);
                    goto LABEL_319;
                  }
                  v57 = v56 - 1;
                  if ( !v57 )
                  {
                    v58 = RtlCompareUnicodeString(&String1, &String2, 1u) != 0;
                    goto LABEL_79;
                  }
                  v153 = v57 - 1;
                  if ( !v153 )
                  {
                    v109 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_317:
                    v58 = v109 < 0;
                    goto LABEL_79;
                  }
                  v154 = v153 - 1;
                  if ( !v154 )
                  {
                    v108 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_315:
                    v58 = v108 > 0;
                    goto LABEL_79;
                  }
                  v155 = v154 - 1;
                  if ( !v155 )
                  {
                    v107 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_313:
                    v58 = v107 <= 0;
LABEL_79:
                    LODWORD(v26) = v58;
LABEL_80:
                    v25 = 0;
                    v27 = 0LL;
                    LOWORD(v24) = 0;
                    goto LABEL_52;
                  }
                  if ( v155 == 1 )
                  {
                    v106 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_311:
                    v58 = v106 >= 0;
                    goto LABEL_79;
                  }
                  goto LABEL_194;
                }
                if ( *v50 )
                {
                  if ( !*v51 )
                  {
                    v28 = (__int64 *)*((_QWORD *)&v176 + 1);
                    goto LABEL_222;
                  }
                  if ( v49 + (unsigned int)v52 >= 0xFFFE )
                    goto LABEL_350;
                  v163 = v47 + v52;
                  v156 = (wchar_t *)ExAllocatePool2(256LL, (unsigned __int16)(v47 + v52), 1667526736LL);
                  if ( !v156 )
                  {
LABEL_297:
                    v61 = v165;
                    v7 = -1073741670;
                    goto LABEL_298;
                  }
                  v157 = v50;
                  v27 = v156;
                  memmove(v156, v157, v49);
                  memmove(&v27[(unsigned __int64)v49 >> 1], v51, v52 + 2LL);
                  v25 = v49 + v52;
                  LOWORD(v24) = v163;
                }
                else
                {
                  v28 = (__int64 *)v176;
LABEL_222:
                  v27 = 0LL;
LABEL_223:
                  v25 = 0;
                  LOWORD(v24) = 0;
                }
LABEL_51:
                if ( !v28 )
                  goto LABEL_52;
                goto LABEL_57;
              }
              if ( v45 != 7 )
              {
                v28 = qword_140A37DC0;
                goto LABEL_57;
              }
              v145 = *(unsigned int *)(*((_QWORD *)&v176 + 1) + 36LL);
              v146 = *(const void **)(*((_QWORD *)&v176 + 1) + 40LL);
              v147 = *(const void **)(v176 + 40);
              v24 = *(unsigned int *)(v176 + 36);
              if ( (unsigned int)v145 > 0xFFFE || (unsigned int)v24 > 0xFFFE )
              {
LABEL_350:
                v61 = v165;
                v7 = -2147483643;
                goto LABEL_298;
              }
              if ( *(_DWORD *)v21 == 1 )
                goto LABEL_295;
              if ( *(_DWORD *)v21 != 8 )
              {
                if ( *(_DWORD *)v21 != 9 )
                {
                  v28 = qword_140A37DC0;
                  goto LABEL_186;
                }
                if ( sub_14039F184(*(PCWSTR *)(v176 + 40), *(const WCHAR **)(*((_QWORD *)&v176 + 1) + 40LL)) )
                {
                  v28 = (__int64 *)v176;
                  goto LABEL_186;
                }
LABEL_295:
                if ( (unsigned int)(v24 + v145) > 0xFFFE )
                  goto LABEL_350;
                v161 = v24 + v145;
                v148 = (wchar_t *)ExAllocatePool2(256LL, (unsigned __int16)(v24 + v145), 1667526736LL);
                v164 = v148;
                if ( !v148 )
                  goto LABEL_297;
                memmove(v148, v146, v145);
                v98 = v147;
                v99 = (char *)&v164[v145 >> 1];
LABEL_182:
                v100 = v24;
LABEL_184:
                memmove(v99, v98, v100);
                goto LABEL_186;
              }
              if ( sub_14039F184(*(PCWSTR *)(v176 + 40), *(const WCHAR **)(*((_QWORD *)&v176 + 1) + 40LL)) )
LABEL_294:
                v28 = (__int64 *)*((_QWORD *)&v176 + 1);
LABEL_186:
              v25 = v161;
              LOWORD(v24) = v161;
              v163 = v161;
LABEL_226:
              v27 = v164;
              goto LABEL_51;
            }
            if ( v29 == 4 )
            {
              if ( *(_DWORD *)(v176 + 32) == 4 )
              {
                v30 = **(_DWORD **)(*((_QWORD *)&v176 + 1) + 40LL);
                v31 = *(_DWORD *)v21;
                v32 = **(_DWORD **)(v176 + 40);
                if ( *(int *)v21 <= 10 )
                {
                  if ( v31 == 10 )
                  {
                    v135 = v30 ^ v32;
                    goto LABEL_254;
                  }
                  v127 = v31 - 1;
                  if ( !v127 )
                  {
                    LODWORD(v26) = v32 + v30;
                    goto LABEL_52;
                  }
                  v128 = v127 - 1;
                  if ( !v128 )
                  {
                    v136 = v30 - v32;
LABEL_256:
                    LODWORD(v26) = v136;
LABEL_52:
                    v34 = ExAllocatePool2(256LL, 48LL, 1667526736LL);
                    v28 = (__int64 *)v34;
                    if ( !v34 )
                      goto LABEL_352;
                    *(_DWORD *)(v34 + 16) = 0;
                    *(_QWORD *)(v34 + 24) = 0LL;
                    if ( v27 )
                    {
                      v35 = 7;
                      LODWORD(v24) = (unsigned __int16)v24;
                      if ( v25 != v163 )
                        v35 = 1;
                    }
                    else
                    {
                      v35 = 4;
                      LODWORD(v24) = 4;
                      v36 = (wchar_t *)ExAllocatePool2(256LL, 4LL, 1667526736LL);
                      v27 = v36;
                      if ( !v36 )
                      {
LABEL_352:
                        v7 = -1073741670;
LABEL_353:
                        v12 = v166;
                        goto LABEL_91;
                      }
                      *(_DWORD *)v36 = v26;
                    }
                    *((_DWORD *)v28 + 8) = v35;
                    *((_DWORD *)v28 + 9) = v24;
                    v28[5] = (__int64)v27;
                    goto LABEL_57;
                  }
                  v129 = v128 - 1;
                  if ( !v129 )
                  {
                    v135 = v30 * v32;
LABEL_254:
                    LODWORD(v26) = v135;
                    goto LABEL_52;
                  }
                  v130 = v129 - 1;
                  if ( v130 )
                  {
                    v131 = v130 - 1;
                    if ( v131 )
                    {
                      v132 = v131 - 1;
                      if ( !v132 )
                      {
                        v136 = v30 << v32;
                        goto LABEL_256;
                      }
                      v133 = v132 - 1;
                      if ( !v133 )
                      {
                        v136 = v30 >> v32;
                        goto LABEL_256;
                      }
                      v134 = v133 - 1;
                      if ( !v134 )
                      {
                        v135 = v30 & v32;
                        goto LABEL_254;
                      }
                      if ( v134 == 1 )
                      {
                        v135 = v30 | v32;
                        goto LABEL_254;
                      }
                      goto LABEL_194;
                    }
                    if ( v32 )
                    {
                      v81 = v30 % v32;
                      goto LABEL_132;
                    }
                  }
                  else if ( v32 )
                  {
                    v44 = v30 / v32;
                    goto LABEL_69;
                  }
                  v7 = -1073741676;
                  goto LABEL_50;
                }
                v33 = v31 - 13;
                if ( v33 )
                {
                  v41 = v33 - 1;
                  if ( !v41 )
                  {
                    if ( !v30 )
                    {
                      v140 = v32 == 0;
                      v44 = 0;
                      goto LABEL_279;
                    }
                    goto LABEL_280;
                  }
                  v42 = v41 - 1;
                  if ( !v42 )
                  {
                    v44 = v30 == v32;
                    goto LABEL_69;
                  }
                  v43 = v42 - 1;
                  if ( !v43 )
                  {
                    v44 = v30 != v32;
                    goto LABEL_69;
                  }
                  v137 = v43 - 1;
                  if ( !v137 )
                  {
                    v44 = v30 < v32;
                    goto LABEL_69;
                  }
                  v138 = v137 - 1;
                  if ( !v138 )
                  {
                    v44 = v30 > v32;
                    goto LABEL_69;
                  }
                  v139 = v138 - 1;
                  if ( !v139 )
                  {
                    v44 = v30 <= v32;
                    goto LABEL_69;
                  }
                  if ( v139 == 1 )
                  {
                    v44 = v30 >= v32;
                    goto LABEL_69;
                  }
                  goto LABEL_194;
                }
                if ( !v30 )
                {
LABEL_50:
                  if ( v7 < 0 )
                    goto LABEL_353;
                  goto LABEL_51;
                }
                v111 = v32 == 0;
LABEL_270:
                if ( !v111 )
                  goto LABEL_283;
                goto LABEL_50;
              }
LABEL_272:
              v28 = qword_140A37DC0;
              goto LABEL_50;
            }
            if ( v29 != 3 )
            {
              if ( v29 != 7 )
                goto LABEL_272;
              v82 = *(_DWORD *)(v176 + 32);
              if ( v82 == 7 )
              {
                v83 = *(unsigned int *)(*((_QWORD *)&v176 + 1) + 36LL);
                v84 = *(const WCHAR **)(v176 + 40);
                v85 = *(const WCHAR **)(*((_QWORD *)&v176 + 1) + 40LL);
                v24 = *(unsigned int *)(v176 + 36);
                *(_QWORD *)&String1.Length = v84;
                if ( (unsigned int)v83 > 0xFFFE || (unsigned int)v24 > 0xFFFE )
                  goto LABEL_350;
                v86 = *(_DWORD *)v21;
                if ( *(int *)v21 > 15 )
                {
                  v102 = v86 - 16;
                  if ( v102 )
                  {
                    v103 = v102 - 1;
                    if ( !v103 )
                    {
                      v109 = RtlCompareUnicodeStrings(v85, v83 >> 1, v84, v24 >> 1, 1u);
                      goto LABEL_317;
                    }
                    v104 = v103 - 1;
                    if ( !v104 )
                    {
                      v108 = RtlCompareUnicodeStrings(v85, v83 >> 1, v84, v24 >> 1, 1u);
                      goto LABEL_315;
                    }
                    v105 = v104 - 1;
                    if ( !v105 )
                    {
                      v107 = RtlCompareUnicodeStrings(v85, v83 >> 1, v84, v24 >> 1, 1u);
                      goto LABEL_313;
                    }
                    if ( v105 == 1 )
                    {
                      v106 = RtlCompareUnicodeStrings(v85, v83 >> 1, v84, v24 >> 1, 1u);
                      goto LABEL_311;
                    }
LABEL_194:
                    v28 = qword_140A37DC0;
                    goto LABEL_57;
                  }
                  v110 = RtlCompareUnicodeStrings(v85, v83 >> 1, v84, v24 >> 1, 1u);
                  v25 = 0;
                  LOWORD(v24) = 0;
                  v111 = v110 == 0;
                  v27 = 0LL;
                  goto LABEL_270;
                }
                if ( v86 == 15 )
                {
                  v101 = RtlCompareUnicodeStrings(v85, v83 >> 1, v84, v24 >> 1, 1u);
LABEL_319:
                  v58 = v101 == 0;
                  goto LABEL_79;
                }
                v87 = v86 - 1;
                if ( !v87 )
                {
LABEL_174:
                  if ( !*v85 )
                  {
                    v28 = (__int64 *)v176;
                    goto LABEL_186;
                  }
                  if ( !*v84 )
                  {
                    v28 = (__int64 *)*((_QWORD *)&v176 + 1);
                    goto LABEL_186;
                  }
                  if ( (unsigned __int64)(unsigned int)(v24 + v83) - 2 > 0xFFFE )
                    goto LABEL_350;
                  v161 = v24 + v83 - 2;
                  v97 = (wchar_t *)ExAllocatePool2(256LL, v161, 1667526736LL);
                  v164 = v97;
                  if ( !v97 )
                    goto LABEL_297;
                  memmove(v97, v85, v83 - 2);
                  v98 = *(const void **)&String1.Length;
                  v99 = (char *)&v164[(v83 >> 1) - 1];
                  goto LABEL_182;
                }
                v88 = v87 - 7;
                if ( v88 )
                {
                  v89 = v88 - 1;
                  if ( v89 )
                  {
                    v90 = v89 - 4;
                    if ( !v90 )
                    {
                      if ( (unsigned int)v83 > 2 )
                      {
                        v91 = 1;
                        if ( (unsigned int)v24 > 2 )
                          goto LABEL_159;
                      }
                      goto LABEL_158;
                    }
                    if ( v90 == 1 )
                    {
                      if ( (unsigned int)v83 <= 2 )
                      {
                        v91 = 0;
                        if ( (unsigned int)v24 <= 2 )
                          goto LABEL_159;
                      }
LABEL_322:
                      v91 = 1;
LABEL_159:
                      LODWORD(v26) = v91;
                      goto LABEL_80;
                    }
                    goto LABEL_194;
                  }
                  goto LABEL_174;
                }
                v162 = 0;
                if ( *v85 )
                {
                  LOWORD(v162) = 0;
                  while ( 1 )
                  {
                    v92 = -1LL;
                    do
                      ++v92;
                    while ( v85[v92] );
                    v93 = 2 * v92 + 2;
                    if ( sub_14039F184(v84, v85) )
                    {
                      v94 = (__int64)v164;
                      if ( !v164 )
                      {
                        LOWORD(v162) = 0;
                        v94 = ExAllocatePool2(256LL, v83, 1667526736LL);
                        v164 = (wchar_t *)v94;
                        if ( !v94 )
                        {
                          v7 = -1073741670;
                          v27 = 0LL;
                          goto LABEL_334;
                        }
                      }
                      v95 = v93;
                      memmove((void *)(v94 + (unsigned __int16)v162), v85, v93);
                      HIWORD(v96) = HIWORD(v162);
                      LOWORD(v96) = v93 + v162;
                      v162 = v96;
                    }
                    else
                    {
                      LOWORD(v96) = v162;
                      v95 = v93;
                    }
                    v85 += v95 >> 1;
                    if ( !*v85 )
                      break;
                    v84 = *(const WCHAR **)&String1.Length;
                  }
                  v25 = v96;
                  v27 = v164;
                  if ( v164 )
                  {
                    LOWORD(v24) = v96 + 2;
                    v25 = v96 + 2;
                    v163 = v96 + 2;
                    v164[((unsigned __int64)(unsigned __int16)(v96 + 2) >> 1) - 1] = 0;
                    goto LABEL_50;
                  }
                  goto LABEL_335;
                }
                v27 = 0LL;
LABEL_334:
                v25 = v162;
LABEL_335:
                LOWORD(v24) = v163;
                goto LABEL_50;
              }
              if ( (unsigned int)(v82 - 1) <= 1 )
              {
                v118 = *(unsigned int *)(*((_QWORD *)&v176 + 1) + 36LL);
                v119 = *(const WCHAR **)(v176 + 40);
                v120 = *(const WCHAR **)(*((_QWORD *)&v176 + 1) + 40LL);
                v121 = *(unsigned int *)(v176 + 36);
                *(_QWORD *)&String1.Length = v119;
                if ( (unsigned int)v118 > 0xFFFE || (unsigned int)v121 > 0xFFFE )
                  goto LABEL_350;
                if ( *(_DWORD *)v21 != 1 )
                {
                  if ( *(_DWORD *)v21 == 2 )
                  {
                    *(_QWORD *)&String1.Length = sub_14039F184(v120, v119);
                    v122 = *(_QWORD *)&String1.Length;
                    if ( *(_QWORD *)&String1.Length )
                    {
                      v161 = v118 - v121;
                      v123 = (wchar_t *)ExAllocatePool2(256LL, (unsigned __int16)(v118 - v121), 1667526736LL);
                      v164 = v123;
                      if ( !v123 )
                        goto LABEL_297;
                      v124 = (v122 - (__int64)v120) >> 1;
                      if ( v124 > 0 )
                      {
                        memmove(v123, v120, v124);
                        v123 = v164;
                      }
                      v99 = (char *)v123 + v124;
                      v100 = (unsigned int)(v118 - v121) - v124;
                      v98 = (const void *)(*(_QWORD *)&String1.Length + v121);
                      goto LABEL_184;
                    }
                    goto LABEL_294;
                  }
                  if ( *(_DWORD *)v21 == 8 )
                  {
                    v25 = 0;
                    LOWORD(v24) = 0;
                    if ( !sub_14039F184(v120, v119) )
                    {
                      v27 = 0LL;
                      goto LABEL_51;
                    }
                    v28 = (__int64 *)v176;
                    goto LABEL_226;
                  }
                  if ( *(_DWORD *)v21 != 9 )
                    goto LABEL_194;
                  if ( sub_14039F184(v120, v119) )
                  {
                    v28 = (__int64 *)*((_QWORD *)&v176 + 1);
                    v27 = 0LL;
                    goto LABEL_223;
                  }
                }
                if ( (unsigned int)(v121 + v118) > 0xFFFE )
                  goto LABEL_350;
                *(_QWORD *)&String2.Length = (unsigned __int16)(v121 + v118);
                LOWORD(v162) = v121 + v118;
                v163 = v121 + v118;
                v125 = (wchar_t *)ExAllocatePool2(256LL, *(_QWORD *)&String2.Length, 1667526736LL);
                if ( !v125 )
                  goto LABEL_297;
                v126 = v120;
                v27 = v125;
                memmove(v125, v126, v118 - 2);
                memmove(&v27[(v118 >> 1) - 1], *(const void **)&String1.Length, v121);
                v27[(*(_QWORD *)&String2.Length >> 1) - 1] = 0;
                goto LABEL_334;
              }
              if ( v82 != 4 )
                goto LABEL_194;
              v112 = **(_DWORD **)(v176 + 40);
              if ( *(_DWORD *)v21 != 24 )
                goto LABEL_194;
              v113 = *(_WORD **)(*((_QWORD *)&v176 + 1) + 40LL);
              v114 = 0;
              for ( i = 0; *v113; v113 += (unsigned __int64)v114 >> 1 )
              {
                v116 = -1LL;
                do
                  ++v116;
                while ( v113[v116] );
                v114 = 2 * v116 + 2;
                if ( i == v112 )
                  goto LABEL_208;
                ++i;
              }
              if ( i == v112 )
              {
LABEL_208:
                if ( *v113 && v114 > 2 )
                {
                  v25 = v114 - 16;
                  v163 = v114;
                  v117 = (wchar_t *)ExAllocatePool2(256LL, (unsigned __int16)v114, 1667526736LL);
                  v27 = v117;
                  if ( !v117 )
                    goto LABEL_297;
                  memmove(v117, v113, v114);
                  goto LABEL_335;
                }
              }
              v28 = qword_140A37DC0;
              goto LABEL_335;
            }
            if ( *(_DWORD *)(v176 + 32) != 3 )
            {
              v28 = qword_140A37DC0;
              goto LABEL_51;
            }
            v141 = *(const void **)(*((_QWORD *)&v176 + 1) + 40LL);
            v142 = *(unsigned int *)(*((_QWORD *)&v176 + 1) + 36LL);
            v143 = *(const void **)(v176 + 40);
            v144 = *(_DWORD *)(v176 + 36);
            if ( *(_DWORD *)v21 == 15 )
            {
              if ( (_DWORD)v142 == v144 && !memcmp(v141, v143, v142) )
              {
LABEL_283:
                LODWORD(v26) = 1;
                goto LABEL_52;
              }
              goto LABEL_51;
            }
            if ( *(_DWORD *)v21 == 16 )
            {
              if ( (_DWORD)v142 != v144 )
                goto LABEL_280;
              v140 = memcmp(v141, v143, v142) == 0;
              v44 = 0;
LABEL_279:
              if ( !v140 )
LABEL_280:
                v44 = 1;
LABEL_69:
              LODWORD(v26) = v44;
              goto LABEL_52;
            }
            v28 = qword_140A37DC0;
LABEL_57:
            v13 = (PVOID **)Pool2;
            *(_QWORD *)(Pool2 + 8LL * v166) = v28;
            if ( v165 )
            {
              v37 = &v176;
              v38 = v165;
              do
              {
                v39 = *(_QWORD **)v37;
                if ( !*(_QWORD *)(*(_QWORD *)v37 + 24LL) )
                {
                  v40 = (void *)v39[5];
                  if ( v40 )
                    ExFreePoolWithTag(v40, 0);
                  ExFreePoolWithTag(v39, 0);
                }
                v37 = (__int128 *)((char *)v37 + 8);
                --v38;
              }
              while ( v38 );
            }
            v3 = v169;
            v4 = v172;
            v9 = (__int64)v168;
            LODWORD(v12) = v166;
LABEL_15:
            v12 = (unsigned int)(v12 + 1);
            v166 = v12;
            v15 = -1LL;
            do
              ++v15;
            while ( *(_WORD *)(v9 + 2 * v15) );
            v9 += 2 * v15 + 2;
            v168 = (PVOID *)v9;
            if ( !*(_WORD *)v9 )
            {
              if ( (_DWORD)v12 != 1 )
                goto LABEL_90;
              v7 = sub_1408048F4(v175, *v13);
              goto LABEL_20;
            }
          }
          if ( (_DWORD)v23 != 3 )
            goto LABEL_52;
          v59 = *(_DWORD *)(v4 + 32);
          if ( !v59 )
          {
LABEL_87:
            v28 = (__int64 *)v176;
            goto LABEL_51;
          }
          if ( v59 <= 2 )
          {
            v60 = *(_DWORD *)(v4 + 36) >= 2u;
          }
          else
          {
            switch ( v59 )
            {
              case 4u:
                v60 = **(_DWORD **)(v4 + 40) != 0;
                break;
              case 3u:
                v158 = *(_DWORD *)(v4 + 36);
                v159 = *(_BYTE **)(v4 + 40);
                if ( !v158 )
                  goto LABEL_87;
                while ( !*v159++ )
                {
                  if ( !--v158 )
                    goto LABEL_87;
                }
                goto LABEL_344;
              case 7u:
                v60 = *(_DWORD *)(v4 + 36) > 4u;
                break;
              default:
                goto LABEL_344;
            }
          }
          if ( !v60 )
            goto LABEL_87;
LABEL_344:
          v28 = (__int64 *)*((_QWORD *)&v176 + 1);
          goto LABEL_51;
        }
LABEL_90:
        v7 = -1073741823;
LABEL_92:
        v13 = (PVOID **)Pool2;
        if ( (_DWORD)v12 )
        {
LABEL_20:
          v16 = v13;
          do
          {
            v17 = *v16;
            if ( !(*v16)[3] )
            {
              if ( v17[5] )
              {
                ExFreePoolWithTag(v17[5], 0);
                v17 = *v16;
              }
              ExFreePoolWithTag(v17, 0);
            }
            ++v16;
            --v12;
          }
          while ( v12 );
        }
        ExFreePoolWithTag(v13, 0);
        v6 = (unsigned int *)P;
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
LABEL_356:
      v7 = -1073741823;
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v7;
}
