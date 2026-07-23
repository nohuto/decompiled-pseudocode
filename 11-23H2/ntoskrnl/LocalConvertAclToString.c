/*
 * XREFs of LocalConvertAclToString @ 0x14069D4D0
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x14069CE68 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     _ultow_s @ 0x1403DE9D0 (_ultow_s.c)
 *     wcscpy_s @ 0x1403DFF70 (wcscpy_s.c)
 *     LookupAccessMaskInTable @ 0x14069DD6C (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x14069DE04 (LookupAceTypeInTable.c)
 *     LocalGetAceCondition @ 0x14069DEA0 (LocalGetAceCondition.c)
 *     SddlpAlloc @ 0x14069DF28 (SddlpAlloc.c)
 *     LookupSidInTable @ 0x1406C3690 (LookupSidInTable.c)
 *     RtlNtStatusToDosError @ 0x1407AA570 (RtlNtStatusToDosError.c)
 *     LocalConvertSidToStringSidW @ 0x140836144 (LocalConvertSidToStringSidW.c)
 *     LookupAceFlagsInTable @ 0x140840374 (LookupAceFlagsInTable.c)
 *     SddlpUuidToString @ 0x1409D2D58 (SddlpUuidToString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalConvertAclToString(
        __int64 a1,
        char a2,
        __int64 a3,
        wchar_t **a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        char a9)
{
  unsigned int v11; // edi
  unsigned __int8 *v12; // r13
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // ebx
  int v17; // edi
  unsigned int v18; // ecx
  unsigned int v19; // r9d
  __int64 v20; // rbx
  void *v21; // r15
  unsigned int v22; // r12d
  ULONG AceCondition; // esi
  int v24; // ebx
  _DWORD *v25; // rdi
  __int64 *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  wchar_t **v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  PVOID *v33; // r12
  wchar_t *v34; // rdi
  unsigned __int64 v35; // rbx
  unsigned __int8 *v36; // r13
  __int64 v37; // r12
  wchar_t *v38; // rdi
  rsize_t v39; // rbx
  const wchar_t **v40; // rax
  const wchar_t **v41; // rsi
  __int64 v42; // rax
  unsigned int v43; // esi
  wchar_t *v44; // rdi
  rsize_t v45; // rbx
  rsize_t v46; // rbx
  unsigned int v47; // ecx
  wchar_t *v48; // rdi
  unsigned int v49; // eax
  __int64 v50; // rsi
  __int64 v51; // r13
  int v52; // eax
  const wchar_t **v53; // rax
  const wchar_t **v54; // r14
  __int64 v55; // rax
  rsize_t v56; // rbx
  wchar_t *v57; // rdi
  __int64 v58; // rax
  rsize_t v59; // rbx
  wchar_t *v60; // rdi
  _QWORD *v61; // rax
  rsize_t v62; // rbx
  wchar_t *v63; // rdi
  const wchar_t *v64; // r14
  __int64 v65; // rax
  const wchar_t *v66; // r14
  wchar_t *v67; // rdi
  unsigned __int64 v68; // rbx
  unsigned __int8 *v69; // r13
  unsigned int v70; // ebx
  _QWORD *v71; // r12
  _BYTE *v72; // r14
  __int64 result; // rax
  unsigned int v74; // eax
  int v75; // edi
  __int64 *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  unsigned int v79; // ecx
  unsigned int v80; // ecx
  unsigned int v81; // ecx
  unsigned int v82; // ecx
  unsigned int v83; // ecx
  unsigned int v84; // ecx
  unsigned int v85; // ecx
  unsigned int v86; // ecx
  NTSTATUS v87; // eax
  void *v88; // rcx
  __int64 *v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  const wchar_t **v92; // rax
  const wchar_t **v93; // r14
  __int64 v94; // rax
  unsigned int v95; // eax
  unsigned int i; // r14d
  const wchar_t **v97; // rax
  const wchar_t **v98; // r15
  __int64 v99; // rax
  wchar_t *v100; // rax
  PVOID v101; // rcx
  unsigned int v102; // ecx
  unsigned int v103; // ecx
  unsigned int v104; // ecx
  unsigned int v105; // ecx
  unsigned int v106; // ecx
  unsigned int v107; // ecx
  unsigned int v108; // ecx
  int v109; // edx
  unsigned int v110; // r8d
  unsigned __int8 *v111; // rax
  wchar_t *v112; // rax
  unsigned int v113; // ecx
  unsigned int v114; // ecx
  unsigned int v115; // ecx
  unsigned int v116; // ecx
  unsigned int v117; // ecx
  int v118; // edx
  unsigned int v119; // r8d
  unsigned int v120; // ecx
  unsigned int v121; // ecx
  int v122; // eax
  wchar_t *v123; // r15
  __int64 v124; // r14
  wchar_t *v125; // r15
  __int64 v126; // r14
  rsize_t v127; // rbx
  wchar_t *v128; // rdi
  __int64 v129; // rax
  unsigned int Val; // [rsp+58h] [rbp-69h]
  unsigned int v131; // [rsp+60h] [rbp-61h]
  unsigned int v132; // [rsp+60h] [rbp-61h]
  ULONG v133; // [rsp+64h] [rbp-5Dh] BYREF
  wchar_t Str2[4]; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int8 *v135; // [rsp+70h] [rbp-51h]
  PVOID v136; // [rsp+78h] [rbp-49h] BYREF
  __int64 v137; // [rsp+80h] [rbp-41h] BYREF
  unsigned __int8 *v138; // [rsp+88h] [rbp-39h]
  wchar_t *Src; // [rsp+90h] [rbp-31h] BYREF
  PVOID P; // [rsp+98h] [rbp-29h]
  PVOID v141; // [rsp+A0h] [rbp-21h]
  int v142; // [rsp+A8h] [rbp-19h]
  PVOID v143; // [rsp+B0h] [rbp-11h]
  __int64 v144; // [rsp+B8h] [rbp-9h]
  unsigned int v147; // [rsp+140h] [rbp+7Fh]

  v147 = 0;
  v142 = 0;
  v11 = 0;
  Src = 0LL;
  Val = 0;
  v135 = 0LL;
  v137 = 0LL;
  v136 = 0LL;
  if ( !a4 || !a5 )
    return 87LL;
  if ( !a2 )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  if ( !a1 )
  {
    *a4 = 0LL;
    *a5 = 36;
    v100 = (wchar_t *)SddlpAlloc(0x24uLL);
    *a4 = v100;
    if ( !v100 )
    {
      result = 8LL;
      goto LABEL_116;
    }
    wcscpy(v100, L"NO_ACCESS_CONTROL");
    return 0LL;
  }
  if ( !*(_WORD *)(a1 + 4) )
  {
    *a4 = 0LL;
    result = 0LL;
LABEL_116:
    *a5 = 0;
    return result;
  }
  P = (PVOID)SddlpAlloc(8LL * *(unsigned __int16 *)(a1 + 4));
  if ( !P )
    return 8LL;
  v143 = (PVOID)SddlpAlloc(*(unsigned __int16 *)(a1 + 4));
  if ( !v143 )
  {
    v101 = P;
LABEL_130:
    ExFreePoolWithTag(v101, 0);
    return 8LL;
  }
  v141 = (PVOID)SddlpAlloc(4LL * *(unsigned __int16 *)(a1 + 4));
  if ( !v141 )
  {
    ExFreePoolWithTag(P, 0);
    v101 = v143;
    goto LABEL_130;
  }
  v131 = 0;
  v12 = (unsigned __int8 *)(a1 + 8);
  v138 = (unsigned __int8 *)(a1 + 8);
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_193;
  while ( 1 )
  {
    v11 += 2;
    v147 = v11;
    v13 = (__int64 *)LookupAceTypeInTable(0LL);
    if ( !v13 )
    {
LABEL_139:
      AceCondition = 1336;
      goto LABEL_33;
    }
    v14 = *v13;
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(v14 + 2 * v15) );
    v16 = 0;
    v17 = v11 + 2 + 2 * v15;
    do
    {
      if ( ((unsigned __int8)(1 << v16) & v12[1]) != 0 )
      {
        v89 = (__int64 *)LookupAceFlagsInTable(0LL);
        if ( v89 )
        {
          v90 = *v89;
          v91 = -1LL;
          do
            ++v91;
          while ( *(_WORD *)(v90 + 2 * v91) );
          v17 += 2 * v91;
        }
      }
      ++v16;
    }
    while ( v16 < 8 );
    v18 = *v12;
    v11 = v17 + 2;
    v147 = v11;
    *(_DWORD *)Str2 = v11;
    if ( v18 > 9 )
    {
      v79 = v18 - 10;
      if ( !v79 )
        goto LABEL_19;
      v80 = v79 - 1;
      if ( v80 )
      {
        v81 = v80 - 2;
        if ( v81 )
        {
          v82 = v81 - 4;
          if ( v82 )
          {
            v107 = v82 - 1;
            if ( v107 )
            {
              v108 = v107 - 1;
              if ( v108 )
              {
                if ( v108 - 1 > 1 )
                  goto LABEL_139;
              }
            }
          }
        }
LABEL_19:
        v19 = *((_DWORD *)v12 + 1);
        v20 = (__int64)(v12 + 8);
        v135 = v12 + 8;
        Val = v19;
        goto LABEL_20;
      }
    }
    else
    {
      if ( v18 == 9 )
        goto LABEL_19;
      if ( !v18 )
        goto LABEL_19;
      v102 = v18 - 1;
      if ( !v102 )
        goto LABEL_19;
      v103 = v102 - 1;
      if ( !v103 )
        goto LABEL_19;
      v104 = v103 - 1;
      if ( !v104 )
        goto LABEL_19;
      v105 = v104 - 2;
      if ( v105 )
      {
        v106 = v105 - 1;
        if ( v106 )
        {
          if ( v106 - 1 >= 2 )
            goto LABEL_139;
        }
      }
    }
    v19 = *((_DWORD *)v12 + 1);
    v109 = *((_DWORD *)v12 + 2) & 2;
    v110 = *((_DWORD *)v12 + 2) & 1;
    Val = v19;
    v20 = (__int64)&v12[16 * v110 + (v109 != 0 ? 28LL : 12LL)];
    v111 = v12 + 12;
    v135 = (unsigned __int8 *)v20;
    if ( v110 && v12 != (unsigned __int8 *)-12LL )
    {
      v11 += 72;
      *(_DWORD *)Str2 = v11;
    }
    if ( v109 )
    {
      if ( v110 )
        v111 = v12 + 28;
      if ( v111 )
        *(_DWORD *)Str2 = v11 + 72;
    }
LABEL_20:
    v21 = (void *)v20;
    v22 = v19;
    if ( v136 )
    {
      ExFreePoolWithTag(v136, 0);
      v136 = 0LL;
    }
    v133 = 0;
    AceCondition = LocalGetAceCondition(v12, v20, &v136, &v133);
    if ( AceCondition )
      break;
    v24 = 0;
    v25 = v141;
    *((_DWORD *)v141 + v131) = 0;
    v26 = (__int64 *)LookupAccessMaskInTable(0LL);
    if ( !v26 )
    {
      v74 = Val;
      v75 = 0;
      while ( 1 )
      {
        if ( (v74 & (1 << v75)) != 0 )
        {
          v76 = (__int64 *)LookupAccessMaskInTable(0LL);
          if ( !v76 )
          {
            v24 = 20;
            *((_DWORD *)v141 + v131) = 2;
            goto LABEL_27;
          }
          v77 = *v76;
          v78 = -1LL;
          do
            ++v78;
          while ( *(_WORD *)(v77 + 2 * v78) );
          v24 += 2 * v78;
          v74 = Val;
        }
        if ( (unsigned int)++v75 >= 0x20 )
          goto LABEL_27;
      }
    }
    v25[v131] = 1;
    v27 = -1LL;
    v28 = *v26;
    do
      ++v27;
    while ( *(_WORD *)(v28 + 2 * v27) );
    v24 = 2 * v27;
LABEL_27:
    v11 = v24 + *(_DWORD *)Str2 + 6;
    v147 = v11;
    v29 = LookupSidInTable(0LL, v21, Str2, a9, (__int64)&v137);
    v30 = (wchar_t **)((char *)P + 8 * v131);
    if ( v29 )
    {
      *v30 = (wchar_t *)(v29 + 2);
      goto LABEL_29;
    }
    if ( v137 )
    {
      v112 = (wchar_t *)SddlpAlloc(6uLL);
      *v30 = v112;
      if ( v112 )
      {
        wcscpy_s(v112, 3uLL, L"SA");
        goto LABEL_106;
      }
      AceCondition = 8;
LABEL_32:
      Val = v22;
      v135 = (unsigned __int8 *)v21;
      goto LABEL_33;
    }
    v87 = LocalConvertSidToStringSidW(v21);
    if ( v87 < 0 )
    {
      AceCondition = RtlNtStatusToDosError(v87);
      goto LABEL_32;
    }
LABEL_106:
    *((_BYTE *)v143 + v131) = 1;
LABEL_29:
    v31 = -1LL;
    do
      ++v31;
    while ( (*v30)[v31] );
    v11 += 2 * v31 + 4;
    v12 += *((unsigned __int16 *)v12 + 1);
    v147 = v11;
    ++v131;
    Val = v22;
    v135 = (unsigned __int8 *)v21;
    if ( v131 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_32;
  }
  v11 = *(_DWORD *)Str2;
  v147 = *(_DWORD *)Str2;
LABEL_33:
  if ( !v11 )
  {
LABEL_193:
    AceCondition = 1336;
    goto LABEL_71;
  }
  if ( AceCondition )
    goto LABEL_71;
  if ( (v11 & 1) != 0 )
    v147 = ++v11;
  v32 = v11;
  v33 = (PVOID *)a4;
  v34 = (wchar_t *)SddlpAlloc(v11);
  *a4 = v34;
  if ( !v34 )
  {
    AceCondition = 8;
    goto LABEL_158;
  }
  v35 = v32 >> 1;
  v132 = 0;
  if ( !*(_WORD *)(a1 + 4) )
  {
LABEL_158:
    v11 = v147;
    goto LABEL_72;
  }
  v36 = v138;
  v37 = 0LL;
  while ( v35 )
  {
    *v34 = 40;
    v38 = v34 + 1;
    v39 = v35 - 1;
    v40 = (const wchar_t **)LookupAceTypeInTable(0LL);
    v41 = v40;
    if ( v40 )
    {
      wcscpy_s(v38, v39, *v40);
      v42 = *((unsigned int *)v41 + 2);
      v39 -= v42;
      v38 += v42;
    }
    if ( !v39 )
      break;
    v43 = v37;
    *v38 = 59;
    v44 = v38 + 1;
    v45 = v39 - 1;
    do
    {
      if ( ((unsigned __int8)(1 << v43) & v36[1]) != 0 )
      {
        v92 = (const wchar_t **)LookupAceFlagsInTable(0LL);
        v93 = v92;
        if ( v92 )
        {
          wcscpy_s(v44, v45, *v92);
          v94 = *((unsigned int *)v93 + 2);
          v45 -= v94;
          v44 += v94;
        }
      }
      ++v43;
    }
    while ( v43 < 8 );
    if ( !v45 )
      break;
    v137 = v37;
    *(_QWORD *)Str2 = 0LL;
    *v44 = 59;
    v46 = v45 - 1;
    v47 = *v36;
    v48 = v44 + 1;
    if ( v47 > 9 )
    {
      v83 = v47 - 10;
      if ( !v83 )
        goto LABEL_51;
      v84 = v83 - 1;
      if ( v84 )
      {
        v85 = v84 - 2;
        if ( !v85 || (v86 = v85 - 4) == 0 || (v120 = v86 - 1) == 0 || (v121 = v120 - 1) == 0 || v121 - 1 < 2 )
        {
LABEL_51:
          v49 = *((_DWORD *)v36 + 1);
          v50 = (__int64)(v36 + 8);
          v135 = v36 + 8;
          Val = v49;
          goto LABEL_52;
        }
LABEL_171:
        v50 = (__int64)v135;
        goto LABEL_52;
      }
    }
    else
    {
      if ( v47 == 9 )
        goto LABEL_51;
      if ( !*v36 )
        goto LABEL_51;
      v113 = v47 - 1;
      if ( !v113 )
        goto LABEL_51;
      v114 = v113 - 1;
      if ( !v114 )
        goto LABEL_51;
      v115 = v114 - 1;
      if ( !v115 )
        goto LABEL_51;
      v116 = v115 - 2;
      if ( v116 )
      {
        v117 = v116 - 1;
        if ( v117 )
        {
          if ( v117 - 1 > 1 )
            goto LABEL_171;
        }
      }
    }
    v118 = *((_DWORD *)v36 + 2) & 2;
    v119 = *((_DWORD *)v36 + 2) & 1;
    Val = *((_DWORD *)v36 + 1);
    v50 = (__int64)&v36[16 * v119 + (v118 != 0 ? 28LL : 12LL)];
    v135 = (unsigned __int8 *)v50;
    if ( v118 )
    {
      if ( !v119 )
      {
        *(_QWORD *)Str2 = v36 + 12;
LABEL_173:
        v37 = 0LL;
        v137 = 0LL;
        goto LABEL_52;
      }
      *(_QWORD *)Str2 = v36 + 28;
    }
    else
    {
      *(_QWORD *)Str2 = 0LL;
      if ( !v119 )
        goto LABEL_173;
    }
    v37 = (__int64)(v36 + 12);
    v137 = (__int64)(v36 + 12);
LABEL_52:
    if ( v136 )
    {
      ExFreePoolWithTag(v136, 0);
      v136 = 0LL;
    }
    v133 = 0;
    v133 = LocalGetAceCondition(v36, v50, &v136, &v133);
    AceCondition = v133;
    if ( v133 )
      goto LABEL_70;
    v51 = v132;
    v144 = v132;
    v52 = *((_DWORD *)v141 + v132);
    if ( v52 == 2 )
    {
      wcscpy_s(v48, v46, L"0x");
      v48 += 2;
      v46 -= 2LL;
      ultow_s(Val, v48, v46, 16);
      v55 = -1LL;
      do
        ++v55;
      while ( v48[v55] );
LABEL_59:
      v48 += v55;
      v46 -= v55;
      goto LABEL_60;
    }
    if ( v52 == 1 )
    {
      v53 = (const wchar_t **)LookupAccessMaskInTable(0LL);
      v54 = v53;
      if ( !v53 )
        goto LABEL_60;
      wcscpy_s(v48, v46, *v53);
      v55 = *((unsigned int *)v54 + 2);
      goto LABEL_59;
    }
    v95 = Val;
    for ( i = 0; i < 0x20; ++i )
    {
      if ( (v95 & (1 << i)) != 0 )
      {
        v97 = (const wchar_t **)LookupAccessMaskInTable(0LL);
        v98 = v97;
        if ( v97 )
        {
          wcscpy_s(v48, v46, *v97);
          v99 = *((unsigned int *)v98 + 2);
          v46 -= v99;
          v48 += v99;
        }
        v95 = Val;
      }
    }
    AceCondition = v133;
    v37 = v137;
    v51 = v144;
LABEL_60:
    if ( !v46 )
      break;
    v56 = v46 - 1;
    *v48 = 59;
    v57 = v48 + 1;
    if ( v37 )
    {
      v122 = SddlpUuidToString(v37, &Src);
      v37 = 0LL;
      if ( !v122 )
        goto LABEL_70;
      v123 = Src;
      v124 = -1LL;
      do
        ++v124;
      while ( Src[v124] );
      wcscpy_s(v57, v56, Src);
      v56 -= v124;
      v57 += v124;
      if ( v123 )
        ExFreePoolWithTag(v123, 0);
    }
    if ( !v56 )
      break;
    v58 = *(_QWORD *)Str2;
    v59 = v56 - 1;
    *v57 = 59;
    v60 = v57 + 1;
    if ( v58 )
    {
      if ( !(unsigned int)SddlpUuidToString(v58, &Src) )
        goto LABEL_70;
      v125 = Src;
      v126 = -1LL;
      do
        ++v126;
      while ( Src[v126] != (_WORD)v37 );
      wcscpy_s(v60, v59, Src);
      v59 -= v126;
      v60 += v126;
      if ( v125 )
        ExFreePoolWithTag(v125, 0);
    }
    if ( !v59 )
      break;
    v61 = P;
    v62 = v59 - 1;
    *v60 = 59;
    v63 = v60 + 1;
    v64 = (const wchar_t *)v61[v51];
    wcscpy_s(v63, v62, v64);
    v65 = -1LL;
    do
      ++v65;
    while ( v64[v65] != (_WORD)v37 );
    v66 = (const wchar_t *)v136;
    v67 = &v63[v65];
    v68 = v62 - v65;
    if ( v136 )
    {
      if ( !v68 )
        break;
      v127 = v68 - 1;
      *v67 = 59;
      v128 = v67 + 1;
      wcscpy_s(v128, v127, v66);
      v129 = -1LL;
      do
        ++v129;
      while ( v66[v129] != (_WORD)v37 );
      v67 = &v128[v129];
      v68 = v127 - v129;
    }
    if ( v68 <= 1 )
      break;
    v69 = v138;
    v35 = v68 - 1;
    *v67 = 41;
    v34 = v67 + 1;
    ++v132;
    *v34 = v37;
    v36 = &v69[*((unsigned __int16 *)v69 + 1)];
    v138 = v36;
    if ( v132 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_70;
  }
  AceCondition = 1336;
LABEL_70:
  v11 = v147;
LABEL_71:
  v33 = (PVOID *)a4;
LABEL_72:
  v70 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v71 = P;
    v72 = v143;
    do
    {
      if ( v72[v70] )
      {
        v88 = (void *)v71[v70];
        if ( v88 )
          ExFreePoolWithTag(v88, 0);
      }
      ++v70;
    }
    while ( v70 < *(unsigned __int16 *)(a1 + 4) );
    v11 = v147;
    v33 = (PVOID *)a4;
  }
  ExFreePoolWithTag(P, 0);
  ExFreePoolWithTag(v143, 0);
  ExFreePoolWithTag(v141, 0);
  if ( v136 )
    ExFreePoolWithTag(v136, 0);
  if ( AceCondition )
  {
    if ( *v33 )
      ExFreePoolWithTag(*v33, 0);
    *v33 = 0LL;
    *a5 = 0;
  }
  else
  {
    *a5 = v11;
  }
  return AceCondition;
}
