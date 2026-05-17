/*
 * XREFs of sxsisol_SearchActCtxForDllName @ 0x18001CFF8
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlFindActivationContextSectionString @ 0x18001D420 (RtlFindActivationContextSectionString.c)
 *     RtlFindCharInUnicodeString @ 0x18001DE70 (RtlFindCharInUnicodeString.c)
 *     RtlReleaseActivationContext @ 0x180033D90 (RtlReleaseActivationContext.c)
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     RtlpEnsureBufferSize @ 0x18006EAF0 (RtlpEnsureBufferSize.c)
 *     RtlGetAssemblyStorageRoot @ 0x180075180 (RtlGetAssemblyStorageRoot.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800EAEEC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlAssert @ 0x1800F9FE0 (RtlAssert.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall sxsisol_SearchActCtxForDllName(
        __int128 *a1,
        char a2,
        unsigned __int64 *a3,
        _DWORD *a4,
        unsigned __int16 *a5)
{
  __int128 v8; // xmm0
  __int64 v9; // r15
  int ActivationContextSectionString; // eax
  int v11; // ebx
  __int16 *v12; // rcx
  __int64 v14; // r13
  unsigned int v15; // esi
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  bool v18; // zf
  int v19; // edx
  int v20; // ecx
  int AssemblyStorageRoot; // eax
  __int64 v22; // r15
  unsigned int v23; // edx
  unsigned __int64 v24; // rcx
  int v25; // r12d
  const void **v26; // rdx
  __int64 v27; // r8
  unsigned __int16 *v28; // r14
  unsigned __int64 v29; // r8
  int v30; // eax
  __int64 *v31; // rsi
  unsigned __int64 v32; // r8
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int16 v35; // dx
  const void **v36; // rcx
  unsigned __int16 v37; // dx
  __int64 v38; // rax
  unsigned int v39; // ebx
  char *v40; // r12
  unsigned __int16 v41; // bx
  unsigned __int64 *v42; // rax
  unsigned __int64 v43; // r8
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int16 v46; // bx
  unsigned int v47; // r8d
  int v48; // r10d
  __int64 v49; // rdx
  size_t v50; // r12
  unsigned __int64 v51; // r8
  int v52; // eax
  __int64 v53; // rcx
  unsigned __int64 v54; // rax
  void *v55; // rdx
  unsigned __int64 v56; // rcx
  int CharInUnicodeString; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rcx
  __int64 v62; // [rsp+20h] [rbp-E0h]
  int v63; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v64; // [rsp+38h] [rbp-C8h]
  const void **v65; // [rsp+40h] [rbp-C0h] BYREF
  void *Src[2]; // [rsp+48h] [rbp-B8h] BYREF
  void *v67; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v68; // [rsp+60h] [rbp-A0h]
  _DWORD *v69; // [rsp+68h] [rbp-98h]
  int v70; // [rsp+70h] [rbp-90h] BYREF
  int v71; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v72; // [rsp+78h] [rbp-88h]
  unsigned int v73; // [rsp+80h] [rbp-80h]
  __int64 v74; // [rsp+98h] [rbp-68h]
  unsigned int v75; // [rsp+A0h] [rbp-60h]
  __int64 v76; // [rsp+A8h] [rbp-58h]
  int v77; // [rsp+B0h] [rbp-50h]
  int v78; // [rsp+B4h] [rbp-4Ch]
  int v79; // [rsp+E0h] [rbp-20h] BYREF
  void *v80; // [rsp+E8h] [rbp-18h]
  __int16 *v81; // [rsp+F0h] [rbp-10h]
  __int16 *v82; // [rsp+F8h] [rbp-8h]
  __int64 v83; // [rsp+100h] [rbp+0h]
  __int64 v84; // [rsp+108h] [rbp+8h]
  __int16 v85; // [rsp+110h] [rbp+10h] BYREF

  v68 = a3;
  v69 = a4;
  v70 = 112;
  memset_thunk_772440563353939046(&v71, 0, 0x6CuLL);
  v8 = *a1;
  v79 = 0x20000;
  v65 = 0LL;
  v81 = &v85;
  v85 = 0;
  v82 = &v85;
  v83 = 2LL;
  v84 = 2LL;
  v80 = &v85;
  v9 = 0LL;
  *(_OWORD *)Src = v8;
  ActivationContextSectionString = RtlFindActivationContextSectionString(3, 0, 2, (unsigned int)Src, (__int64)&v70);
  v11 = ActivationContextSectionString;
  if ( ActivationContextSectionString < 0 )
  {
    if ( ActivationContextSectionString == -1072365567 )
      v11 = -1072365560;
    goto LABEL_4;
  }
  if ( a2 )
  {
    v11 = 0;
    goto LABEL_4;
  }
  v9 = v76;
  v64 = v76;
  if ( v73 < 0x14
    || v71 != 1
    || (v14 = v72, v15 = v75, v16 = *(unsigned int *)(v72 + 16), (unsigned int)v16 > v75)
    || (v17 = *(_DWORD *)(v72 + 12), v17 > 0x1FFFFFFF)
    || v16 > 0xFFFFFFFF - 8 * (unsigned __int64)v17
    || (unsigned int)v16 + 8 * v17 > v75 )
  {
LABEL_60:
    v11 = -1072365565;
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(v72 + 4) & 2) == 0 )
    goto LABEL_28;
  v18 = (*(_BYTE *)(v72 + 4) & 4) == 0;
  v19 = 0;
  v63 = 0;
  if ( !v18 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "[%x.%x] SXS: %s - Relative redirection plus env var expansion.\n",
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
      "sxsisol_SearchActCtxForDllName");
    goto LABEL_60;
  }
  if ( (v78 & 1) != 0 )
  {
    if ( (v78 & 2) != 0 )
    {
      RtlAssert(
        "Internal error check failed",
        "minkernel\\ntdll\\sxsisol.cpp",
        1050LL,
        "!(askd.Flags & ACTIVATION_CONTEXT_SECTION_KEYED_DATA_FLAG_FOUND_IN_SYSTEM_DEFAULT)");
      v11 = -1073741595;
      goto LABEL_4;
    }
    v19 = 1;
  }
  v20 = v19 | 2;
  if ( (v78 & 2) == 0 )
    v20 = v19;
  AssemblyStorageRoot = RtlGetAssemblyStorageRoot(v20, v76, v77, (unsigned int)&v65, v62, (__int64)&v63);
  v11 = AssemblyStorageRoot;
  if ( AssemblyStorageRoot >= 0 )
  {
LABEL_28:
    v22 = v74 + *(unsigned int *)(v14 + 16);
    v23 = 0;
    *a3 = 0LL;
    v24 = 0LL;
    v25 = *(_DWORD *)(v14 + 12);
    v63 = v25;
    if ( v25 )
    {
      while ( 1 )
      {
        v47 = *(_DWORD *)(v22 + 8LL * v23 + 4);
        if ( v47 > v15 )
          break;
        v48 = *(_DWORD *)(v22 + 8LL * v23);
        if ( v47 > ~v48 || v48 + v47 > v15 )
          break;
        ++v23;
        v24 += (unsigned __int16)v48;
        *a3 = v24;
        if ( v23 == v25 )
          goto LABEL_29;
      }
      v11 = -1072365565;
      goto LABEL_56;
    }
LABEL_29:
    v26 = v65;
    if ( v65 )
      *a3 = v24 + *(unsigned __int16 *)v65;
    v27 = *(unsigned __int16 *)a3;
    v28 = a5 + 16;
    v29 = v27 + 2;
    if ( v29 > 0xFFFE )
    {
      v11 = -1073741562;
    }
    else if ( (a5 == (unsigned __int16 *)-16LL || v29 > *(_QWORD *)v28)
           && (v30 = RtlpEnsureBufferSize(0LL, a5 + 8), v26 = v65, v30 < 0) )
    {
      v11 = -1073741801;
    }
    else
    {
      v11 = 0;
      *((_QWORD *)a5 + 1) = *((_QWORD *)a5 + 2);
      a5[1] = *v28;
    }
    v31 = (__int64 *)(a5 + 8);
    if ( v11 < 0 )
      goto LABEL_56;
    if ( v26 )
    {
      *a5 = 0;
      v32 = *(unsigned __int16 *)v26 + 2LL;
      if ( v32 > 0xFFFE )
        goto LABEL_73;
      if ( a5 == (unsigned __int16 *)-16LL || v32 > *(_QWORD *)v28 )
      {
        if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
          goto LABEL_76;
        v26 = v65;
      }
      v33 = *v31;
      v34 = *a5;
      *((_QWORD *)a5 + 1) = *v31;
      memmove((void *)(v33 + 2 * (v34 >> 1)), v26[1], *(unsigned __int16 *)v26);
      v35 = *a5;
      v36 = v65;
      a5[1] = *(_WORD *)v65 + *a5 + 2;
      v37 = *(_WORD *)v36 + v35;
      v38 = *((_QWORD *)a5 + 1);
      *a5 = v37;
      v24 = (unsigned __int64)v37 >> 1;
      *(_WORD *)(v38 + 2 * v24) = 0;
    }
    v39 = 0;
    if ( v25 )
    {
      while ( 1 )
      {
        v49 = *a5;
        v50 = *(unsigned __int16 *)(v22 + 8LL * v39);
        v51 = v50 + v49 + 2;
        v67 = (void *)(v74 + *(unsigned int *)(v22 + 8LL * v39 + 4));
        if ( v51 > 0xFFFE )
          break;
        if ( a5 == (unsigned __int16 *)-16LL || v51 > *(_QWORD *)v28 )
        {
          v52 = RtlpEnsureBufferSize(0LL, a5 + 8);
          LOWORD(v49) = *a5;
          if ( v52 < 0 )
            goto LABEL_76;
        }
        v53 = *v31;
        v54 = (unsigned __int16)v49;
        v55 = v67;
        *((_QWORD *)a5 + 1) = *v31;
        memmove((void *)(v53 + 2 * (v54 >> 1)), v55, v50);
        v56 = (unsigned __int16)(*a5 + v50);
        ++v39;
        *a5 = v56;
        a5[1] = v56 + 2;
        v24 = v56 >> 1;
        *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v24) = 0;
        if ( v39 == v63 )
          goto LABEL_43;
      }
    }
    else
    {
LABEL_43:
      if ( (*(_BYTE *)(v14 + 4) & 1) != 0 )
      {
LABEL_52:
        if ( (*(_BYTE *)(v14 + 4) & 4) == 0 )
        {
LABEL_53:
          if ( v69 )
            *v69 |= 2u;
          v11 = 0;
          goto LABEL_56;
        }
        v11 = sxsisol_ExpandEnvironmentStrings_UEx(v24, a5, &v79);
        if ( v11 >= 0 )
        {
          v58 = (unsigned __int16)v79;
          *a5 = 0;
          if ( (unsigned __int64)(v58 + 2) <= 0xFFFE )
          {
            if ( a5 == (unsigned __int16 *)-16LL || (unsigned __int64)(v58 + 2) > *(_QWORD *)v28 )
            {
              if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
              {
                v11 = -1073741801;
                goto LABEL_56;
              }
              LOWORD(v58) = v79;
            }
            v59 = *v31;
            v60 = (unsigned __int64)*a5 >> 1;
            *((_QWORD *)a5 + 1) = *v31;
            memmove((void *)(v59 + 2 * v60), v80, (unsigned __int16)v58);
            v61 = (unsigned __int16)(*a5 + v79);
            *a5 = v61;
            a5[1] = v61 + 2;
            *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * (v61 >> 1)) = 0;
            goto LABEL_53;
          }
          v11 = -1073741562;
        }
LABEL_56:
        v9 = v64;
        goto LABEL_4;
      }
      if ( (*(_BYTE *)(v14 + 4) & 8) != 0 )
      {
        CharInUnicodeString = RtlFindCharInUnicodeString(1LL, Src, &RtlDosPathSeperatorsString, &v63);
        v11 = CharInUnicodeString;
        if ( CharInUnicodeString < 0 )
        {
          if ( CharInUnicodeString == -1073741275 )
          {
            RtlAssert(
              "Internal error check failed",
              "minkernel\\ntdll\\sxsisol.cpp",
              1142LL,
              "Status != STATUS_NOT_FOUND");
            v11 = -1073741595;
          }
          goto LABEL_56;
        }
        v41 = -2 - v63 + LOWORD(Src[0]);
        v40 = (char *)Src[1] + 2 * ((unsigned __int64)(unsigned __int16)v63 >> 1) + 2;
      }
      else
      {
        v40 = (char *)Src[1];
        v41 = (unsigned __int16)Src[0];
      }
      v42 = v68;
      *v68 += v41;
      if ( *v42 < 0xFFFF )
      {
        v43 = v41 + *a5 + 2LL;
        if ( v43 <= 0xFFFE )
        {
          if ( a5 != (unsigned __int16 *)-16LL && v43 <= *(_QWORD *)v28 || (int)RtlpEnsureBufferSize(0LL, a5 + 8) >= 0 )
          {
            v44 = *v31;
            v45 = (unsigned __int64)*a5 >> 1;
            *((_QWORD *)a5 + 1) = *v31;
            memmove((void *)(v44 + 2 * v45), v40, v41);
            v46 = *a5 + v41;
            *a5 = v46;
            v24 = (unsigned __int64)v46 >> 1;
            a5[1] = v46 + 2;
            *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v24) = 0;
            goto LABEL_52;
          }
LABEL_76:
          v11 = -1073741801;
          goto LABEL_56;
        }
      }
    }
LABEL_73:
    v11 = -1073741562;
    goto LABEL_56;
  }
  if ( AssemblyStorageRoot == -1073741536 && v63 < 0 )
    v11 = v63;
LABEL_4:
  v12 = v82;
  if ( v81 )
  {
    if ( v81 != v82 )
    {
      Src[1] = v81;
      RtlFreeUnicodeString((PUNICODE_STRING)Src);
      v12 = v82;
    }
    v83 = v84;
    v81 = v12;
  }
  v80 = v12;
  if ( v12 )
    *v12 = 0;
  HIWORD(v79) = v84;
  LOWORD(v79) = 0;
  if ( v9 )
    RtlReleaseActivationContext(v9);
  return (unsigned int)v11;
}
