/*
 * XREFs of sub_140676B80 @ 0x140676B80
 * Callers:
 *     sub_140676314 @ 0x140676314 (sub_140676314.c)
 * Callees:
 *     _ultow_s @ 0x1403E6130 (_ultow_s.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     sub_1406773CC @ 0x1406773CC (sub_1406773CC.c)
 *     sub_140677460 @ 0x140677460 (sub_140677460.c)
 *     sub_1406774E8 @ 0x1406774E8 (sub_1406774E8.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 *     sub_1406775C8 @ 0x1406775C8 (sub_1406775C8.c)
 *     sub_140677764 @ 0x140677764 (sub_140677764.c)
 *     RtlNtStatusToDosError @ 0x14069E070 (RtlNtStatusToDosError.c)
 *     sub_1406C85A0 @ 0x1406C85A0 (sub_1406C85A0.c)
 *     sub_1409CFFF0 @ 0x1409CFFF0 (sub_1409CFFF0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140676B80(
        __int64 a1,
        char a2,
        char a3,
        wchar_t **a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        char a9)
{
  __int64 v10; // rsi
  unsigned int v11; // edi
  size_t v12; // rcx
  unsigned int v13; // r13d
  char *v14; // r15
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // ebx
  int v19; // edi
  unsigned __int8 v20; // al
  unsigned int v21; // edi
  char *v22; // rbx
  ULONG v23; // r14d
  int v24; // ebx
  _QWORD *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  wchar_t **v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r13
  unsigned __int64 v31; // rbx
  PVOID *v32; // r15
  wchar_t *v33; // rdi
  unsigned __int64 v34; // rbx
  wchar_t *v35; // rdi
  rsize_t v36; // rbx
  const wchar_t **v37; // rax
  const wchar_t **v38; // rsi
  __int64 v39; // rax
  char *v40; // r15
  unsigned int v41; // esi
  wchar_t *v42; // rdi
  rsize_t v43; // rbx
  __int64 v44; // r15
  char *v45; // r14
  rsize_t v46; // rbx
  wchar_t *v47; // rdi
  __int64 v48; // r12
  unsigned __int8 v49; // al
  unsigned int v50; // esi
  int v51; // eax
  const wchar_t **v52; // rax
  const wchar_t **v53; // rsi
  __int64 v54; // rax
  rsize_t v55; // rbx
  wchar_t *v56; // rdi
  rsize_t v57; // rbx
  wchar_t *v58; // rdi
  _QWORD *v59; // r12
  __int64 v60; // r15
  rsize_t v61; // rbx
  wchar_t *v62; // rdi
  const wchar_t *v63; // rsi
  __int64 v64; // rax
  const wchar_t *v65; // rsi
  wchar_t *v66; // rdi
  unsigned __int64 v67; // rbx
  char *v68; // rcx
  unsigned int v69; // r15d
  unsigned int v70; // ebx
  _BYTE *v71; // r13
  __int64 *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  const wchar_t **v76; // rax
  const wchar_t **v77; // r14
  __int64 v78; // rax
  unsigned int v79; // eax
  int v80; // edi
  __int64 *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  NTSTATUS v84; // eax
  void *v85; // rcx
  bool v86; // cc
  unsigned int v87; // eax
  const wchar_t **v88; // rax
  const wchar_t **v89; // r15
  __int64 v90; // rax
  unsigned int v91; // ecx
  wchar_t *v92; // rax
  PVOID v93; // rcx
  int v94; // edx
  unsigned int v95; // r8d
  char *v96; // rax
  wchar_t *v97; // rax
  int v98; // edx
  unsigned int v99; // r8d
  wchar_t *v100; // r15
  __int64 v101; // rsi
  int v102; // eax
  wchar_t *v103; // r15
  __int64 v104; // rsi
  rsize_t v105; // rbx
  wchar_t *v106; // rdi
  __int64 v107; // rax
  unsigned int Val; // [rsp+58h] [rbp-69h]
  wchar_t Str2[2]; // [rsp+5Ch] [rbp-65h] BYREF
  int v110; // [rsp+60h] [rbp-61h]
  PVOID P; // [rsp+68h] [rbp-59h]
  ULONG v112; // [rsp+70h] [rbp-51h] BYREF
  PVOID v113; // [rsp+78h] [rbp-49h] BYREF
  PSID Sid1; // [rsp+80h] [rbp-41h]
  char *v115; // [rsp+88h] [rbp-39h]
  __int64 v116; // [rsp+90h] [rbp-31h] BYREF
  PVOID v117; // [rsp+98h] [rbp-29h]
  __int64 v118; // [rsp+A0h] [rbp-21h]
  wchar_t *Src; // [rsp+A8h] [rbp-19h] BYREF
  int v120; // [rsp+B0h] [rbp-11h]
  PVOID v121; // [rsp+B8h] [rbp-9h]
  unsigned int v124; // [rsp+140h] [rbp+7Fh]

  v120 = 0;
  v10 = a1;
  Src = 0LL;
  v11 = 0;
  Val = 0;
  Sid1 = 0LL;
  v116 = 0LL;
  v113 = 0LL;
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
    v92 = (wchar_t *)sub_14067757C(0x24uLL);
    *a4 = v92;
    if ( !v92 )
    {
      v91 = 8;
      goto LABEL_119;
    }
    wcscpy(v92, L"NO_ACCESS_CONTROL");
    return 0LL;
  }
  if ( !*(_WORD *)(a1 + 4) )
  {
    *a4 = 0LL;
    v91 = 0;
LABEL_119:
    *a5 = 0;
    return v91;
  }
  v12 = 8LL * *(unsigned __int16 *)(a1 + 4);
  v110 = 2 - (a3 != 0);
  P = (PVOID)sub_14067757C(v12);
  if ( !P )
    return 8LL;
  v121 = (PVOID)sub_14067757C(*(unsigned __int16 *)(v10 + 4));
  if ( !v121 )
  {
    v93 = P;
LABEL_126:
    ExFreePoolWithTag(v93, 0);
    return 8LL;
  }
  v117 = (PVOID)sub_14067757C(4LL * *(unsigned __int16 *)(v10 + 4));
  if ( !v117 )
  {
    ExFreePoolWithTag(P, 0);
    v93 = v121;
    goto LABEL_126;
  }
  v13 = 0;
  v14 = (char *)(v10 + 8);
  v115 = (char *)(v10 + 8);
  if ( !*(_WORD *)(v10 + 4) )
    goto LABEL_182;
  while ( 1 )
  {
    v11 += 2;
    v124 = v11;
    v15 = (__int64 *)sub_1406774E8(0LL);
    if ( !v15 )
      break;
    v16 = *v15;
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(v16 + 2 * v17) );
    v18 = 0;
    v19 = v11 + 2 + 2 * v17;
    do
    {
      if ( ((unsigned __int8)(1 << v18) & (unsigned __int8)v14[1]) != 0 )
      {
        v73 = (__int64 *)sub_140677764(0LL);
        if ( v73 )
        {
          v74 = *v73;
          v75 = -1LL;
          do
            ++v75;
          while ( *(_WORD *)(v74 + 2 * v75) );
          v19 += 2 * v75;
        }
      }
      ++v18;
    }
    while ( v18 < 8 );
    v20 = *v14;
    v11 = v19 + 2;
    v124 = v11;
    *(_DWORD *)Str2 = v11;
    if ( v20 > 0xBu )
    {
      if ( v20 != 13 )
      {
        if ( v20 <= 0x10u )
          break;
        v86 = v20 <= 0x15u;
        goto LABEL_105;
      }
LABEL_19:
      v21 = *((_DWORD *)v14 + 1);
      v22 = v14 + 8;
      Sid1 = v14 + 8;
      Val = v21;
      goto LABEL_20;
    }
    if ( v20 != 11 )
    {
      if ( v20 <= 3u )
        goto LABEL_19;
      if ( v20 <= 4u )
        break;
      if ( v20 > 8u )
      {
        v86 = v20 <= 0xAu;
LABEL_105:
        if ( !v86 )
          break;
        goto LABEL_19;
      }
    }
    v94 = *((_DWORD *)v14 + 2) & 2;
    v95 = *((_DWORD *)v14 + 2) & 1;
    Val = *((_DWORD *)v14 + 1);
    v22 = &v14[16 * v95 + (v94 != 0 ? 28LL : 12LL)];
    Sid1 = v22;
    if ( v95 && v14 != (char *)-12LL )
    {
      v11 += 72;
      *(_DWORD *)Str2 = v11;
    }
    if ( v94 )
    {
      v96 = v14 + 28;
      if ( !v95 )
        v96 = v14 + 12;
      if ( v96 )
        *(_DWORD *)Str2 = v11 + 72;
    }
LABEL_20:
    if ( v113 )
    {
      ExFreePoolWithTag(v113, 0);
      v113 = 0LL;
    }
    v112 = 0;
    v23 = sub_140677460(v14, v22, &v113, &v112);
    if ( v23 )
    {
      v11 = *(_DWORD *)Str2;
      v124 = *(_DWORD *)Str2;
      goto LABEL_145;
    }
    v24 = 0;
    *((_DWORD *)v117 + v13) = 0;
    v25 = (_QWORD *)sub_1406773CC(0LL);
    if ( !v25 )
    {
      v79 = Val;
      v80 = 0;
      while ( 1 )
      {
        if ( (v79 & (1 << v80)) != 0 )
        {
          v81 = (__int64 *)sub_1406773CC(0LL);
          if ( !v81 )
          {
            v24 = 20;
            *((_DWORD *)v117 + v13) = 2;
            goto LABEL_27;
          }
          v82 = *v81;
          v83 = -1LL;
          do
            ++v83;
          while ( *(_WORD *)(v82 + 2 * v83) );
          v24 += 2 * v83;
          v79 = Val;
        }
        if ( (unsigned int)++v80 >= 0x20 )
          goto LABEL_27;
      }
    }
    v26 = -1LL;
    *((_DWORD *)v117 + v13) = 1;
    do
      ++v26;
    while ( *(_WORD *)(*v25 + 2 * v26) );
    v24 = 2 * v26;
LABEL_27:
    v11 = v24 + *(_DWORD *)Str2 + 6;
    v124 = v11;
    v27 = sub_1406775C8(0LL, Sid1, Str2, a9, (__int64)&v116);
    v28 = (wchar_t **)((char *)P + 8 * v13);
    if ( v27 )
    {
      *v28 = (wchar_t *)(v27 + 2);
    }
    else
    {
      if ( v116 )
      {
        v97 = (wchar_t *)sub_14067757C(6uLL);
        *v28 = v97;
        if ( !v97 )
        {
          v23 = 8;
LABEL_145:
          v10 = a1;
          goto LABEL_32;
        }
        wcscpy_s(v97, 3uLL, L"SA");
      }
      else
      {
        v84 = sub_1406C85A0(Sid1);
        if ( v84 < 0 )
        {
          v23 = RtlNtStatusToDosError(v84);
          goto LABEL_145;
        }
      }
      *((_BYTE *)v121 + v13) = 1;
    }
    v29 = -1LL;
    do
      ++v29;
    while ( *(_WORD *)(*((_QWORD *)P + v13) + 2 * v29) );
    v10 = a1;
    v11 += 2 * v29 + 4;
    v14 += *((unsigned __int16 *)v14 + 1);
    v124 = v11;
    if ( ++v13 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_32;
  }
  v23 = 1336;
LABEL_32:
  v30 = 0LL;
  if ( !v11 )
  {
LABEL_182:
    v23 = 1336;
    goto LABEL_180;
  }
  if ( v23 )
    goto LABEL_180;
  if ( (v11 & 1) != 0 )
    v124 = ++v11;
  v31 = v11;
  v32 = (PVOID *)a4;
  v33 = (wchar_t *)sub_14067757C(v11);
  *a4 = v33;
  if ( !v33 )
  {
    v11 = v124;
    v23 = 8;
    goto LABEL_181;
  }
  v34 = v31 >> 1;
  *(_DWORD *)Str2 = 0;
  if ( !*(_WORD *)(v10 + 4) )
    goto LABEL_179;
  while ( 2 )
  {
    if ( v34 )
    {
      *v33 = 40;
      v35 = v33 + 1;
      v36 = v34 - 1;
      v37 = (const wchar_t **)sub_1406774E8(0LL);
      v38 = v37;
      if ( v37 )
      {
        wcscpy_s(v35, v36, *v37);
        v39 = *((unsigned int *)v38 + 2);
        v36 -= v39;
        v35 += v39;
      }
      if ( v36 )
      {
        v40 = v115;
        *v35 = 59;
        v41 = v30;
        v42 = v35 + 1;
        v43 = v36 - 1;
        do
        {
          if ( ((unsigned __int8)(1 << v41) & (unsigned __int8)v40[1]) != 0 )
          {
            v76 = (const wchar_t **)sub_140677764(0LL);
            v77 = v76;
            if ( v76 )
            {
              wcscpy_s(v42, v43, *v76);
              v78 = *((unsigned int *)v77 + 2);
              v43 -= v78;
              v42 += v78;
            }
          }
          ++v41;
        }
        while ( v41 < 8 );
        v44 = *(unsigned int *)Str2;
        if ( v43 )
        {
          v45 = v115;
          *v42 = 59;
          v46 = v43 - 1;
          v47 = v42 + 1;
          v116 = v30;
          v48 = v30;
          v118 = v30;
          v49 = *v45;
          if ( (unsigned __int8)*v45 > 0xBu )
          {
            if ( v49 == 13 || v49 > 0x10u && v49 <= 0x15u )
              goto LABEL_49;
          }
          else
          {
            if ( *v45 == 11 )
              goto LABEL_153;
            if ( v49 <= 3u )
              goto LABEL_49;
            if ( v49 > 4u )
            {
              if ( v49 > 8u )
              {
                if ( v49 > 0xAu )
                  goto LABEL_50;
LABEL_49:
                Val = *((_DWORD *)v45 + 1);
                Sid1 = v45 + 8;
                goto LABEL_50;
              }
LABEL_153:
              v98 = *((_DWORD *)v45 + 2) & 2;
              v99 = *((_DWORD *)v45 + 2) & 1;
              Val = *((_DWORD *)v45 + 1);
              Sid1 = &v45[16 * v99 + 12 + (v98 != 0 ? 0x10 : 0)];
              if ( v98 )
              {
                if ( v99 )
                {
                  v30 = (__int64)(v45 + 28);
                  v118 = (__int64)(v45 + 28);
                  goto LABEL_156;
                }
                v30 = (__int64)(v45 + 12);
              }
              else
              {
                v30 = 0LL;
              }
              v118 = v30;
              if ( !v99 )
              {
                v48 = 0LL;
                v116 = 0LL;
                goto LABEL_50;
              }
LABEL_156:
              v48 = (__int64)(v45 + 12);
              v116 = (__int64)(v45 + 12);
            }
          }
LABEL_50:
          v50 = (unsigned int)v113;
          if ( v113 )
          {
            ExFreePoolWithTag(v113, 0);
            v50 = 0;
            v113 = 0LL;
          }
          v112 = v50;
          v112 = sub_140677460(v45, Sid1, &v113, &v112);
          v23 = v112;
          if ( v112 )
            goto LABEL_179;
          v51 = *((_DWORD *)v117 + v44);
          if ( v51 == 2 )
          {
            wcscpy_s(v47, v46, L"0x");
            v47 += 2;
            v46 -= 2LL;
            ultow_s(Val, v47, v46, 16);
            v54 = -1LL;
            do
              ++v54;
            while ( v47[v54] != (_WORD)v50 );
LABEL_57:
            v47 += v54;
            v46 -= v54;
          }
          else if ( v51 == 1 )
          {
            v52 = (const wchar_t **)sub_1406773CC(0LL);
            v53 = v52;
            if ( v52 )
            {
              wcscpy_s(v47, v46, *v52);
              v54 = *((unsigned int *)v53 + 2);
              goto LABEL_57;
            }
          }
          else
          {
            v87 = Val;
            do
            {
              if ( (v87 & (1 << v50)) != 0 )
              {
                v88 = (const wchar_t **)sub_1406773CC(0LL);
                v89 = v88;
                if ( v88 )
                {
                  wcscpy_s(v47, v46, *v88);
                  v90 = *((unsigned int *)v89 + 2);
                  v46 -= v90;
                  v47 += v90;
                }
                v87 = Val;
              }
              ++v50;
            }
            while ( v50 < 0x20 );
            v23 = v112;
            v48 = v116;
            v30 = v118;
          }
          if ( !v46 )
            break;
          v55 = v46 - 1;
          *v47 = 59;
          v56 = v47 + 1;
          if ( v48 )
          {
            if ( !(unsigned int)sub_1409CFFF0(v48, &Src) )
              goto LABEL_179;
            v100 = Src;
            v101 = -1LL;
            do
              ++v101;
            while ( Src[v101] );
            wcscpy_s(v56, v55, Src);
            v55 -= v101;
            v56 += v101;
            if ( v100 )
              ExFreePoolWithTag(v100, 0);
          }
          if ( !v55 )
            break;
          *v56 = 59;
          v57 = v55 - 1;
          v58 = v56 + 1;
          if ( v30 )
          {
            v102 = sub_1409CFFF0(v30, &Src);
            v30 = 0LL;
            if ( !v102 )
              goto LABEL_179;
            v103 = Src;
            v104 = -1LL;
            do
              ++v104;
            while ( Src[v104] );
            wcscpy_s(v58, v57, Src);
            v57 -= v104;
            v58 += v104;
            if ( v103 )
              ExFreePoolWithTag(v103, 0);
          }
          v59 = P;
          if ( !v57 )
          {
LABEL_177:
            v23 = 1336;
LABEL_68:
            v11 = v124;
            v32 = (PVOID *)a4;
            goto LABEL_69;
          }
          v60 = *(unsigned int *)Str2;
          v61 = v57 - 1;
          *v58 = 59;
          v62 = v58 + 1;
          v63 = (const wchar_t *)v59[v60];
          wcscpy_s(v62, v61, v63);
          v64 = -1LL;
          do
            ++v64;
          while ( v63[v64] != (_WORD)v30 );
          v65 = (const wchar_t *)v113;
          v66 = &v62[v64];
          v67 = v61 - v64;
          if ( v113 )
          {
            if ( !v67 )
              goto LABEL_177;
            v105 = v67 - 1;
            *v66 = 59;
            v106 = v66 + 1;
            wcscpy_s(v106, v105, v65);
            v107 = -1LL;
            do
              ++v107;
            while ( v65[v107] != (_WORD)v30 );
            v66 = &v106[v107];
            v67 = v105 - v107;
          }
          if ( v67 <= 1 )
            goto LABEL_177;
          v68 = v115;
          *v66 = 41;
          v69 = v60 + 1;
          v33 = v66 + 1;
          *(_DWORD *)Str2 = v69;
          v34 = v67 - 1;
          *v33 = v30;
          v115 = &v68[*((unsigned __int16 *)v68 + 1)];
          if ( v69 >= *(unsigned __int16 *)(a1 + 4) )
            goto LABEL_68;
          continue;
        }
      }
    }
    break;
  }
  v23 = 1336;
LABEL_179:
  v11 = v124;
LABEL_180:
  v32 = (PVOID *)a4;
LABEL_181:
  v59 = P;
LABEL_69:
  v70 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v71 = v121;
    do
    {
      if ( v71[v70] )
      {
        v85 = (void *)v59[v70];
        if ( v85 )
          ExFreePoolWithTag(v85, 0);
      }
      ++v70;
    }
    while ( v70 < *(unsigned __int16 *)(a1 + 4) );
  }
  ExFreePoolWithTag(v59, 0);
  ExFreePoolWithTag(v121, 0);
  ExFreePoolWithTag(v117, 0);
  if ( v113 )
    ExFreePoolWithTag(v113, 0);
  if ( v23 )
  {
    if ( *v32 )
      ExFreePoolWithTag(*v32, 0);
    *v32 = 0LL;
    *a5 = 0;
  }
  else
  {
    *a5 = v11;
  }
  return v23;
}
