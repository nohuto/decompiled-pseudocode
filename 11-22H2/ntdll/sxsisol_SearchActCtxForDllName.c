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
        _UNICODE_STRING *a1,
        char a2,
        unsigned __int64 *a3,
        _DWORD *a4,
        unsigned __int16 *a5)
{
  _UNICODE_STRING v8; // xmm0
  _ACTIVATION_CONTEXT *hActCtx; // r15
  NTSTATUS ActivationContextSectionString; // eax
  int v11; // ebx
  wchar_t *v12; // rcx
  _DWORD *lpData; // r13
  ULONG ulSectionTotalLength; // esi
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  bool v18; // zf
  int v19; // edx
  int v20; // ecx
  int AssemblyStorageRoot; // eax
  char *v22; // r15
  int v23; // edx
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
  int v39; // ebx
  wchar_t *Buffer; // r12
  unsigned __int16 Length; // bx
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
  NTSTATUS CharInUnicodeString; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rcx
  PACTCTX_SECTION_KEYED_DATA ReturnedData; // [rsp+20h] [rbp-E0h]
  USHORT NonInclusivePrefixLength[2]; // [rsp+30h] [rbp-D0h] BYREF
  _ACTIVATION_CONTEXT *v64; // [rsp+38h] [rbp-C8h]
  const void **v65; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING StringToFind; // [rsp+48h] [rbp-B8h] BYREF
  void *Src; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v68; // [rsp+60h] [rbp-A0h]
  _DWORD *v69; // [rsp+68h] [rbp-98h]
  tagACTCTX_SECTION_KEYED_DATA v70; // [rsp+70h] [rbp-90h] BYREF
  int v71; // [rsp+E0h] [rbp-20h] BYREF
  void *v72; // [rsp+E8h] [rbp-18h]
  wchar_t *v73; // [rsp+F0h] [rbp-10h]
  wchar_t *v74; // [rsp+F8h] [rbp-8h]
  __int64 v75; // [rsp+100h] [rbp+0h]
  __int64 v76; // [rsp+108h] [rbp+8h]
  __int16 v77; // [rsp+110h] [rbp+10h] BYREF

  v68 = a3;
  v69 = a4;
  v70.cbSize = 112;
  memset_thunk_772440563353939046(&v70.ulDataFormatVersion, 0, 0x6CuLL);
  v8 = *a1;
  v71 = 0x20000;
  v65 = 0LL;
  v73 = (wchar_t *)&v77;
  v77 = 0;
  v74 = (wchar_t *)&v77;
  v75 = 2LL;
  v76 = 2LL;
  v72 = &v77;
  hActCtx = 0LL;
  StringToFind = v8;
  ActivationContextSectionString = RtlFindActivationContextSectionString(3u, 0LL, 2u, &StringToFind, &v70);
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
  hActCtx = (_ACTIVATION_CONTEXT *)v70.hActCtx;
  v64 = (_ACTIVATION_CONTEXT *)v70.hActCtx;
  if ( v70.ulLength < 0x14
    || v70.ulDataFormatVersion != 1
    || (lpData = v70.lpData,
        ulSectionTotalLength = v70.ulSectionTotalLength,
        v16 = *((unsigned int *)v70.lpData + 4),
        (unsigned int)v16 > v70.ulSectionTotalLength)
    || (v17 = *((_DWORD *)v70.lpData + 3), v17 > 0x1FFFFFFF)
    || v16 > 0xFFFFFFFF - 8 * (unsigned __int64)v17
    || (unsigned int)v16 + 8 * v17 > v70.ulSectionTotalLength )
  {
LABEL_60:
    v11 = -1072365565;
    goto LABEL_4;
  }
  if ( (*((_BYTE *)v70.lpData + 4) & 2) == 0 )
    goto LABEL_28;
  v18 = (*((_BYTE *)v70.lpData + 4) & 4) == 0;
  v19 = 0;
  *(_DWORD *)NonInclusivePrefixLength = 0;
  if ( !v18 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "[%x.%x] SXS: %s - Relative redirection plus env var expansion.\n",
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
      "sxsisol_SearchActCtxForDllName");
    goto LABEL_60;
  }
  if ( (v70.ulFlags & 1) != 0 )
  {
    if ( (v70.ulFlags & 2) != 0 )
      RtlAssert(
        "Internal error check failed",
        "minkernel\\ntdll\\sxsisol.cpp",
        0x41Au,
        (PSTR)"!(askd.Flags & ACTIVATION_CONTEXT_SECTION_KEYED_DATA_FLAG_FOUND_IN_SYSTEM_DEFAULT)");
    v19 = 1;
  }
  v20 = v19 | 2;
  if ( (v70.ulFlags & 2) == 0 )
    v20 = v19;
  AssemblyStorageRoot = RtlGetAssemblyStorageRoot(
                          v20,
                          v70.hActCtx,
                          v70.ulAssemblyRosterIndex,
                          (unsigned int)&v65,
                          (__int64)ReturnedData,
                          (__int64)NonInclusivePrefixLength);
  v11 = AssemblyStorageRoot;
  if ( AssemblyStorageRoot >= 0 )
  {
LABEL_28:
    v22 = (char *)v70.lpSectionBase + (unsigned int)lpData[4];
    v23 = 0;
    *a3 = 0LL;
    v24 = 0LL;
    v25 = lpData[3];
    *(_DWORD *)NonInclusivePrefixLength = v25;
    if ( v25 )
    {
      while ( 1 )
      {
        v47 = *(_DWORD *)&v22[8 * v23 + 4];
        if ( v47 > ulSectionTotalLength )
          break;
        v48 = *(_DWORD *)&v22[8 * v23];
        if ( v47 > ~v48 || v48 + v47 > ulSectionTotalLength )
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
        v50 = *(unsigned __int16 *)&v22[8 * v39];
        v51 = v50 + v49 + 2;
        Src = (char *)v70.lpSectionBase + *(unsigned int *)&v22[8 * v39 + 4];
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
        v55 = Src;
        *((_QWORD *)a5 + 1) = *v31;
        memmove((void *)(v53 + 2 * (v54 >> 1)), v55, v50);
        v56 = (unsigned __int16)(*a5 + v50);
        ++v39;
        *a5 = v56;
        a5[1] = v56 + 2;
        v24 = v56 >> 1;
        *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v24) = 0;
        if ( v39 == *(_DWORD *)NonInclusivePrefixLength )
          goto LABEL_43;
      }
    }
    else
    {
LABEL_43:
      if ( (lpData[1] & 1) != 0 )
      {
LABEL_52:
        if ( (lpData[1] & 4) == 0 )
        {
LABEL_53:
          if ( v69 )
            *v69 |= 2u;
          v11 = 0;
          goto LABEL_56;
        }
        v11 = sxsisol_ExpandEnvironmentStrings_UEx(v24, a5, &v71);
        if ( v11 >= 0 )
        {
          v58 = (unsigned __int16)v71;
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
              LOWORD(v58) = v71;
            }
            v59 = *v31;
            v60 = (unsigned __int64)*a5 >> 1;
            *((_QWORD *)a5 + 1) = *v31;
            memmove((void *)(v59 + 2 * v60), v72, (unsigned __int16)v58);
            v61 = (unsigned __int16)(*a5 + v71);
            *a5 = v61;
            a5[1] = v61 + 2;
            *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * (v61 >> 1)) = 0;
            goto LABEL_53;
          }
          v11 = -1073741562;
        }
LABEL_56:
        hActCtx = v64;
        goto LABEL_4;
      }
      if ( (lpData[1] & 8) != 0 )
      {
        CharInUnicodeString = RtlFindCharInUnicodeString(
                                1u,
                                &StringToFind,
                                &RtlDosPathSeperatorsString,
                                NonInclusivePrefixLength);
        v11 = CharInUnicodeString;
        if ( CharInUnicodeString < 0 )
        {
          if ( CharInUnicodeString == -1073741275 )
            RtlAssert(
              "Internal error check failed",
              "minkernel\\ntdll\\sxsisol.cpp",
              0x476u,
              (PSTR)"Status != STATUS_NOT_FOUND");
          goto LABEL_56;
        }
        Length = -2 - NonInclusivePrefixLength[0] + StringToFind.Length;
        Buffer = &StringToFind.Buffer[((unsigned __int64)NonInclusivePrefixLength[0] >> 1) + 1];
      }
      else
      {
        Buffer = StringToFind.Buffer;
        Length = StringToFind.Length;
      }
      v42 = v68;
      *v68 += Length;
      if ( *v42 < 0xFFFF )
      {
        v43 = Length + *a5 + 2LL;
        if ( v43 <= 0xFFFE )
        {
          if ( a5 != (unsigned __int16 *)-16LL && v43 <= *(_QWORD *)v28 || (int)RtlpEnsureBufferSize(0LL, a5 + 8) >= 0 )
          {
            v44 = *v31;
            v45 = (unsigned __int64)*a5 >> 1;
            *((_QWORD *)a5 + 1) = *v31;
            memmove((void *)(v44 + 2 * v45), Buffer, Length);
            v46 = *a5 + Length;
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
  if ( AssemblyStorageRoot == -1073741536 && *(int *)NonInclusivePrefixLength < 0 )
    v11 = *(_DWORD *)NonInclusivePrefixLength;
LABEL_4:
  v12 = v74;
  if ( v73 )
  {
    if ( v73 != v74 )
    {
      StringToFind.Buffer = v73;
      RtlFreeUnicodeString(&StringToFind);
      v12 = v74;
    }
    v75 = v76;
    v73 = v12;
  }
  v72 = v12;
  if ( v12 )
    *v12 = 0;
  HIWORD(v71) = v76;
  LOWORD(v71) = 0;
  if ( hActCtx )
    RtlReleaseActivationContext(hActCtx);
  return (unsigned int)v11;
}
