/*
 * XREFs of sxsisol_SearchActCtxForDllName @ 0x18001D1D8
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B790 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlFindActivationContextSectionString @ 0x18001D600 (RtlFindActivationContextSectionString.c)
 *     RtlFindCharInUnicodeString @ 0x18001E050 (RtlFindCharInUnicodeString.c)
 *     RtlReleaseActivationContext @ 0x180033EF0 (RtlReleaseActivationContext.c)
 *     DbgPrintEx @ 0x180053A30 (DbgPrintEx.c)
 *     RtlpEnsureBufferSize @ 0x18006EAF0 (RtlpEnsureBufferSize.c)
 *     RtlGetAssemblyStorageRoot @ 0x180074B10 (RtlGetAssemblyStorageRoot.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800E9BBC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlAssert @ 0x1800F8BD0 (RtlAssert.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
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
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  __int16 *v15; // rcx
  __int64 v17; // r13
  unsigned int v18; // esi
  bool v19; // zf
  int v20; // edx
  int v21; // ecx
  int AssemblyStorageRoot; // eax
  __int64 v23; // r15
  unsigned __int64 v24; // rcx
  int v25; // r12d
  __int64 v26; // r8
  unsigned __int16 *v27; // r14
  int v28; // eax
  __int64 *v29; // rsi
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  _WORD *v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // ebx
  char *v35; // r12
  unsigned __int16 v36; // bx
  unsigned __int64 *v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int16 v40; // bx
  int v41; // r10d
  size_t v42; // r12
  int v43; // eax
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  void *v46; // rdx
  unsigned __int64 v47; // rcx
  int CharInUnicodeString; // eax
  __int64 v49; // rcx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx
  __int64 v52; // [rsp+20h] [rbp-E0h]
  int v53; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v54; // [rsp+38h] [rbp-C8h]
  _WORD *v55; // [rsp+40h] [rbp-C0h] BYREF
  void *Src[2]; // [rsp+48h] [rbp-B8h] BYREF
  void *v57; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v58; // [rsp+60h] [rbp-A0h]
  _DWORD *v59; // [rsp+68h] [rbp-98h]
  int v60; // [rsp+70h] [rbp-90h] BYREF
  int v61; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v62; // [rsp+78h] [rbp-88h]
  unsigned int v63; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+98h] [rbp-68h]
  unsigned int v65; // [rsp+A0h] [rbp-60h]
  __int64 v66; // [rsp+A8h] [rbp-58h]
  int v67; // [rsp+B0h] [rbp-50h]
  int v68; // [rsp+B4h] [rbp-4Ch]
  int v69; // [rsp+E0h] [rbp-20h] BYREF
  void *v70; // [rsp+E8h] [rbp-18h]
  __int16 *v71; // [rsp+F0h] [rbp-10h]
  __int16 *v72; // [rsp+F8h] [rbp-8h]
  __int64 v73; // [rsp+100h] [rbp+0h]
  __int64 v74; // [rsp+108h] [rbp+8h]
  __int16 v75; // [rsp+110h] [rbp+10h] BYREF

  v58 = a3;
  v59 = a4;
  v60 = 112;
  memset_thunk_772440563353939046(&v61, 0, 0x6CuLL);
  v8 = *a1;
  v69 = 0x20000;
  v55 = 0LL;
  v71 = &v75;
  v75 = 0;
  v72 = &v75;
  v73 = 2LL;
  v74 = 2LL;
  v70 = &v75;
  v9 = 0LL;
  *(_OWORD *)Src = v8;
  ActivationContextSectionString = RtlFindActivationContextSectionString(3, 0, 2, (unsigned int)Src, (__int64)&v60);
  v14 = ActivationContextSectionString;
  if ( ActivationContextSectionString < 0 )
  {
    if ( ActivationContextSectionString == -1072365567 )
      v14 = -1072365560;
    goto LABEL_4;
  }
  if ( a2 )
  {
    v14 = 0;
    goto LABEL_4;
  }
  v9 = v66;
  v54 = v66;
  if ( v63 < 0x14
    || v61 != 1
    || (v17 = v62, v18 = v65, v11 = *(unsigned int *)(v62 + 16), (unsigned int)v11 > v65)
    || (v12 = *(unsigned int *)(v62 + 12), (unsigned int)v12 > 0x1FFFFFFF)
    || v11 > 0xFFFFFFFF - 8 * (unsigned __int64)(unsigned int)v12
    || (int)v11 + 8 * (int)v12 > v65 )
  {
LABEL_60:
    v14 = -1072365565;
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(v62 + 4) & 2) == 0 )
    goto LABEL_28;
  v19 = (*(_BYTE *)(v62 + 4) & 4) == 0;
  v20 = 0;
  v53 = 0;
  if ( !v19 )
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
  if ( (v68 & 1) != 0 )
  {
    if ( (v68 & 2) != 0 )
    {
      RtlAssert(
        "Internal error check failed",
        "minkernel\\ntdll\\sxsisol.cpp",
        1050LL,
        "!(askd.Flags & ACTIVATION_CONTEXT_SECTION_KEYED_DATA_FLAG_FOUND_IN_SYSTEM_DEFAULT)");
      v14 = -1073741595;
      goto LABEL_4;
    }
    v20 = 1;
  }
  v21 = v20 | 2;
  if ( (v68 & 2) == 0 )
    v21 = v20;
  AssemblyStorageRoot = RtlGetAssemblyStorageRoot(v21, v66, v67, (unsigned int)&v55, v52, (__int64)&v53);
  v14 = AssemblyStorageRoot;
  if ( AssemblyStorageRoot >= 0 )
  {
LABEL_28:
    v23 = v64 + *(unsigned int *)(v17 + 16);
    v11 = 0LL;
    *a3 = 0LL;
    v24 = 0LL;
    v25 = *(_DWORD *)(v17 + 12);
    v53 = v25;
    if ( v25 )
    {
      while ( 1 )
      {
        v13 = (unsigned int)v11;
        v12 = *(unsigned int *)(v23 + 8LL * (unsigned int)v11 + 4);
        if ( (unsigned int)v12 > v18 )
          break;
        v41 = *(_DWORD *)(v23 + 8LL * (unsigned int)v11);
        if ( (unsigned int)v12 > ~v41 || v41 + (int)v12 > v18 )
          break;
        v11 = (unsigned int)(v11 + 1);
        v24 += (unsigned __int16)v41;
        *a3 = v24;
        if ( (_DWORD)v11 == v25 )
          goto LABEL_29;
      }
      v14 = -1072365565;
      goto LABEL_56;
    }
LABEL_29:
    v11 = (unsigned __int64)v55;
    if ( v55 )
      *a3 = v24 + (unsigned __int16)*v55;
    v26 = *(unsigned __int16 *)a3;
    v27 = a5 + 16;
    v12 = v26 + 2;
    if ( v12 > 0xFFFE )
    {
      v14 = -1073741562;
    }
    else if ( (a5 == (unsigned __int16 *)-16LL || v12 > *(_QWORD *)v27)
           && (v28 = RtlpEnsureBufferSize(0LL, a5 + 8), v11 = (unsigned __int64)v55, v28 < 0) )
    {
      v14 = -1073741801;
    }
    else
    {
      v14 = 0;
      *((_QWORD *)a5 + 1) = *((_QWORD *)a5 + 2);
      a5[1] = *v27;
    }
    v29 = (__int64 *)(a5 + 8);
    if ( v14 < 0 )
      goto LABEL_56;
    if ( v11 )
    {
      *a5 = 0;
      v12 = *(unsigned __int16 *)v11 + 2LL;
      if ( v12 > 0xFFFE )
        goto LABEL_73;
      if ( a5 == (unsigned __int16 *)-16LL || v12 > *(_QWORD *)v27 )
      {
        if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
          goto LABEL_76;
        v11 = (unsigned __int64)v55;
      }
      v30 = *v29;
      v31 = *a5;
      *((_QWORD *)a5 + 1) = *v29;
      memmove((void *)(v30 + 2 * (v31 >> 1)), *(const void **)(v11 + 8), *(unsigned __int16 *)v11);
      v11 = *a5;
      v32 = v55;
      a5[1] = *v55 + v11 + 2;
      LOWORD(v11) = *v32 + v11;
      v33 = *((_QWORD *)a5 + 1);
      *a5 = v11;
      v24 = (unsigned __int64)(unsigned __int16)v11 >> 1;
      *(_WORD *)(v33 + 2 * v24) = 0;
    }
    v34 = 0;
    if ( v25 )
    {
      while ( 1 )
      {
        v11 = *a5;
        v42 = *(unsigned __int16 *)(v23 + 8LL * v34);
        v12 = v42 + v11 + 2;
        v57 = (void *)(v64 + *(unsigned int *)(v23 + 8LL * v34 + 4));
        if ( v12 > 0xFFFE )
          break;
        if ( a5 == (unsigned __int16 *)-16LL || v12 > *(_QWORD *)v27 )
        {
          v43 = RtlpEnsureBufferSize(0LL, a5 + 8);
          v11 = *a5;
          if ( v43 < 0 )
            goto LABEL_76;
        }
        v44 = *v29;
        v45 = (unsigned __int16)v11;
        v46 = v57;
        *((_QWORD *)a5 + 1) = *v29;
        memmove((void *)(v44 + 2 * (v45 >> 1)), v46, v42);
        v47 = (unsigned __int16)(*a5 + v42);
        ++v34;
        *a5 = v47;
        a5[1] = v47 + 2;
        v24 = v47 >> 1;
        *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v24) = 0;
        if ( v34 == v53 )
          goto LABEL_43;
      }
    }
    else
    {
LABEL_43:
      if ( (*(_BYTE *)(v17 + 4) & 1) != 0 )
      {
LABEL_52:
        if ( (*(_BYTE *)(v17 + 4) & 4) == 0 )
        {
LABEL_53:
          if ( v59 )
            *v59 |= 2u;
          v14 = 0;
          goto LABEL_56;
        }
        v14 = sxsisol_ExpandEnvironmentStrings_UEx(v24, a5, &v69);
        if ( v14 >= 0 )
        {
          v11 = (unsigned __int16)v69;
          *a5 = 0;
          v12 = v11 + 2;
          if ( v11 + 2 <= 0xFFFE )
          {
            if ( a5 == (unsigned __int16 *)-16LL || v12 > *(_QWORD *)v27 )
            {
              if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
              {
                v14 = -1073741801;
                goto LABEL_56;
              }
              LOWORD(v11) = v69;
            }
            v49 = *v29;
            v50 = (unsigned __int64)*a5 >> 1;
            *((_QWORD *)a5 + 1) = *v29;
            memmove((void *)(v49 + 2 * v50), v70, (unsigned __int16)v11);
            v51 = (unsigned __int16)(*a5 + v69);
            *a5 = v51;
            a5[1] = v51 + 2;
            *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * (v51 >> 1)) = 0;
            goto LABEL_53;
          }
          v14 = -1073741562;
        }
LABEL_56:
        v9 = v54;
        goto LABEL_4;
      }
      if ( (*(_BYTE *)(v17 + 4) & 8) != 0 )
      {
        CharInUnicodeString = RtlFindCharInUnicodeString(1LL, Src, &RtlDosPathSeperatorsString, &v53);
        v14 = CharInUnicodeString;
        if ( CharInUnicodeString < 0 )
        {
          if ( CharInUnicodeString == -1073741275 )
          {
            RtlAssert(
              "Internal error check failed",
              "minkernel\\ntdll\\sxsisol.cpp",
              1142LL,
              "Status != STATUS_NOT_FOUND");
            v14 = -1073741595;
          }
          goto LABEL_56;
        }
        v36 = -2 - v53 + LOWORD(Src[0]);
        v35 = (char *)Src[1] + 2 * ((unsigned __int64)(unsigned __int16)v53 >> 1) + 2;
      }
      else
      {
        v35 = (char *)Src[1];
        v36 = (unsigned __int16)Src[0];
      }
      v37 = v58;
      *v58 += v36;
      if ( *v37 < 0xFFFF )
      {
        v12 = v36 + *a5 + 2LL;
        if ( v12 <= 0xFFFE )
        {
          if ( a5 != (unsigned __int16 *)-16LL && v12 <= *(_QWORD *)v27 || (int)RtlpEnsureBufferSize(0LL, a5 + 8) >= 0 )
          {
            v38 = *v29;
            v39 = (unsigned __int64)*a5 >> 1;
            *((_QWORD *)a5 + 1) = *v29;
            memmove((void *)(v38 + 2 * v39), v35, v36);
            v40 = *a5 + v36;
            *a5 = v40;
            v24 = (unsigned __int64)v40 >> 1;
            a5[1] = v40 + 2;
            *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v24) = 0;
            goto LABEL_52;
          }
LABEL_76:
          v14 = -1073741801;
          goto LABEL_56;
        }
      }
    }
LABEL_73:
    v14 = -1073741562;
    goto LABEL_56;
  }
  if ( AssemblyStorageRoot == -1073741536 && v53 < 0 )
    v14 = v53;
LABEL_4:
  v15 = v72;
  if ( v71 )
  {
    if ( v71 != v72 )
    {
      Src[1] = v71;
      RtlFreeUnicodeString((PUNICODE_STRING)Src);
      v15 = v72;
    }
    v73 = v74;
    v71 = v15;
  }
  v70 = v15;
  if ( v15 )
    *v15 = 0;
  HIWORD(v69) = v74;
  LOWORD(v69) = 0;
  if ( v9 )
    RtlReleaseActivationContext(v9, v11, v12, v13, v52);
  return (unsigned int)v14;
}
