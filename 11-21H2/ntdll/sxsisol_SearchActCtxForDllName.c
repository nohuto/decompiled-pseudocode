/*
 * XREFs of sxsisol_SearchActCtxForDllName @ 0x1800458B4
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800452F0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     DbgPrintEx @ 0x180005CC0 (DbgPrintEx.c)
 *     RtlReleaseActivationContext @ 0x18001C640 (RtlReleaseActivationContext.c)
 *     RtlFindActivationContextSectionString @ 0x180045CB0 (RtlFindActivationContextSectionString.c)
 *     RtlFindCharInUnicodeString @ 0x180047A60 (RtlFindCharInUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlGetAssemblyStorageRoot @ 0x180068384 (RtlGetAssemblyStorageRoot.c)
 *     RtlpEnsureBufferSize @ 0x1800753A0 (RtlpEnsureBufferSize.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800EA85C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlAssert @ 0x1800F8990 (RtlAssert.c)
 */

__int64 __fastcall sxsisol_SearchActCtxForDllName(
        _UNICODE_STRING *a1,
        char a2,
        unsigned __int64 *a3,
        _DWORD *a4,
        unsigned __int16 *a5)
{
  _UNICODE_STRING v8; // xmm0
  _ACTIVATION_CONTEXT *hActCtx; // r12
  NTSTATUS ActivationContextSectionString; // eax
  int v11; // ebx
  wchar_t *v12; // rcx
  _DWORD *lpData; // r15
  ULONG ulSectionTotalLength; // esi
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  bool v18; // zf
  int v19; // edx
  int v20; // ecx
  int AssemblyStorageRoot; // eax
  char *v22; // rbx
  int v23; // edx
  unsigned __int64 v24; // rcx
  int v25; // r13d
  const void **v26; // rdx
  unsigned __int64 v27; // r8
  _QWORD *v28; // rsi
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  const void **v32; // rcx
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // r12d
  int v36; // eax
  wchar_t *Buffer; // r13
  unsigned __int16 Length; // bx
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int16 v42; // bx
  unsigned int v43; // ecx
  int v44; // r9d
  unsigned __int64 v45; // r8
  char *v46; // r13
  __int64 v47; // rcx
  size_t v48; // r8
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  NTSTATUS CharInUnicodeString; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  PACTCTX_SECTION_KEYED_DATA ReturnedData; // [rsp+20h] [rbp-E0h]
  USHORT NonInclusivePrefixLength[2]; // [rsp+30h] [rbp-D0h] BYREF
  _ACTIVATION_CONTEXT *v59; // [rsp+38h] [rbp-C8h]
  const void **v60; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING StringToFind; // [rsp+48h] [rbp-B8h] BYREF
  size_t Size; // [rsp+58h] [rbp-A8h]
  _DWORD *v63; // [rsp+60h] [rbp-A0h]
  tagACTCTX_SECTION_KEYED_DATA v64; // [rsp+70h] [rbp-90h] BYREF
  int v65; // [rsp+E0h] [rbp-20h] BYREF
  void *Src; // [rsp+E8h] [rbp-18h]
  wchar_t *v67; // [rsp+F0h] [rbp-10h]
  wchar_t *v68; // [rsp+F8h] [rbp-8h]
  __int64 v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  __int16 v71; // [rsp+110h] [rbp+10h] BYREF

  v63 = a4;
  v64.cbSize = 112;
  memset(&v64.ulDataFormatVersion, 0, 0x6CuLL);
  v8 = *a1;
  v65 = 0x20000;
  v60 = 0LL;
  v67 = (wchar_t *)&v71;
  v71 = 0;
  v68 = (wchar_t *)&v71;
  v69 = 2LL;
  v70 = 2LL;
  Src = &v71;
  hActCtx = 0LL;
  StringToFind = v8;
  ActivationContextSectionString = RtlFindActivationContextSectionString(3u, 0LL, 2u, &StringToFind, &v64);
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
  hActCtx = (_ACTIVATION_CONTEXT *)v64.hActCtx;
  v59 = (_ACTIVATION_CONTEXT *)v64.hActCtx;
  if ( v64.ulLength < 0x14
    || v64.ulDataFormatVersion != 1
    || (lpData = v64.lpData,
        ulSectionTotalLength = v64.ulSectionTotalLength,
        v16 = *((unsigned int *)v64.lpData + 4),
        (unsigned int)v16 > v64.ulSectionTotalLength)
    || (v17 = *((_DWORD *)v64.lpData + 3), v17 > 0x1FFFFFFF)
    || v16 > 0xFFFFFFFF - 8 * (unsigned __int64)v17
    || (unsigned int)v16 + 8 * v17 > v64.ulSectionTotalLength )
  {
LABEL_56:
    v11 = -1072365565;
    goto LABEL_4;
  }
  if ( (*((_BYTE *)v64.lpData + 4) & 2) == 0 )
    goto LABEL_28;
  v18 = (*((_BYTE *)v64.lpData + 4) & 4) == 0;
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
    goto LABEL_56;
  }
  if ( (v64.ulFlags & 1) != 0 )
  {
    if ( (v64.ulFlags & 2) != 0 )
      RtlAssert(
        "Internal error check failed",
        "minkernel\\ntdll\\sxsisol.cpp",
        0x41Au,
        (PSTR)"!(askd.Flags & ACTIVATION_CONTEXT_SECTION_KEYED_DATA_FLAG_FOUND_IN_SYSTEM_DEFAULT)");
    v19 = 1;
  }
  v20 = v19 | 2;
  if ( (v64.ulFlags & 2) == 0 )
    v20 = v19;
  AssemblyStorageRoot = RtlGetAssemblyStorageRoot(
                          v20,
                          v64.hActCtx,
                          v64.ulAssemblyRosterIndex,
                          (unsigned int)&v60,
                          (__int64)ReturnedData,
                          (__int64)NonInclusivePrefixLength);
  v11 = AssemblyStorageRoot;
  if ( AssemblyStorageRoot < 0 )
  {
    if ( AssemblyStorageRoot == -1073741536 && *(int *)NonInclusivePrefixLength < 0 )
      v11 = *(_DWORD *)NonInclusivePrefixLength;
    goto LABEL_4;
  }
LABEL_28:
  v22 = (char *)v64.lpSectionBase + (unsigned int)lpData[4];
  v23 = 0;
  *a3 = 0LL;
  v24 = 0LL;
  v25 = lpData[3];
  *(_DWORD *)NonInclusivePrefixLength = v25;
  if ( !v25 )
  {
LABEL_29:
    v26 = v60;
    if ( v60 )
      *a3 = v24 + *(unsigned __int16 *)v60;
    v27 = *(unsigned __int16 *)a3 + 2LL;
    if ( v27 <= 0xFFFE )
    {
      v28 = a5 + 8;
      if ( a5 == (unsigned __int16 *)-16LL || v27 > *((_QWORD *)a5 + 4) )
      {
        if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
          goto LABEL_67;
        v26 = v60;
      }
      *((_QWORD *)a5 + 1) = *v28;
      a5[1] = a5[16];
      if ( !v26 )
        goto LABEL_40;
      *a5 = 0;
      v29 = *(unsigned __int16 *)v26 + 2LL;
      if ( v29 <= 0xFFFE )
      {
        if ( v29 <= *((_QWORD *)a5 + 4) )
        {
LABEL_39:
          v30 = *v28;
          v31 = *a5;
          *((_QWORD *)a5 + 1) = *v28;
          memmove((void *)(v30 + 2 * (v31 >> 1)), v26[1], *(unsigned __int16 *)v26);
          v32 = v60;
          a5[1] = *a5 + *(_WORD *)v60 + 2;
          v33 = (unsigned __int16)(*a5 + *(_WORD *)v32);
          v34 = *((_QWORD *)a5 + 1);
          *a5 = v33;
          v24 = v33 >> 1;
          *(_WORD *)(v34 + 2 * v24) = 0;
LABEL_40:
          v35 = 0;
          if ( v25 )
          {
            while ( 1 )
            {
              v45 = *(unsigned __int16 *)&v22[8 * v35] + *a5 + 2LL;
              v46 = (char *)v64.lpSectionBase + *(unsigned int *)&v22[8 * v35 + 4];
              Size = *(unsigned __int16 *)&v22[8 * v35];
              if ( v45 > 0xFFFE )
                break;
              if ( v45 > *((_QWORD *)a5 + 4) && (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
                goto LABEL_76;
              v47 = *v28;
              v48 = Size;
              v49 = (unsigned __int64)*a5 >> 1;
              *((_QWORD *)a5 + 1) = *v28;
              memmove((void *)(v47 + 2 * v49), v46, v48);
              v24 = *a5;
              ++v35;
              v50 = (unsigned __int16)(v24 + Size);
              LOWORD(v24) = Size + v24 + 2;
              v51 = *((_QWORD *)a5 + 1);
              *a5 = v50;
              a5[1] = v24;
              *(_WORD *)(v51 + 2 * (v50 >> 1)) = 0;
              if ( v35 == *(_DWORD *)NonInclusivePrefixLength )
                goto LABEL_41;
            }
          }
          else
          {
LABEL_41:
            v36 = lpData[1];
            if ( (v36 & 1) != 0 )
              goto LABEL_49;
            if ( (v36 & 8) != 0 )
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
                goto LABEL_53;
              }
              Length = -2 - NonInclusivePrefixLength[0] + StringToFind.Length;
              Buffer = &StringToFind.Buffer[((unsigned __int64)NonInclusivePrefixLength[0] >> 1) + 1];
            }
            else
            {
              Buffer = StringToFind.Buffer;
              Length = StringToFind.Length;
            }
            *a3 += Length;
            if ( *a3 < 0xFFFF )
            {
              v39 = *a5 + (unsigned int)Length + 2LL;
              if ( v39 <= 0xFFFE )
              {
                if ( v39 > *((_QWORD *)a5 + 4) && (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
                {
LABEL_76:
                  v11 = -1073741801;
                  goto LABEL_53;
                }
                v40 = *v28;
                v41 = (unsigned __int64)*a5 >> 1;
                *((_QWORD *)a5 + 1) = *v28;
                memmove((void *)(v40 + 2 * v41), Buffer, Length);
                v42 = *a5 + Length;
                *a5 = v42;
                v24 = (unsigned __int64)v42 >> 1;
                a5[1] = v42 + 2;
                *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v24) = 0;
                v36 = lpData[1];
LABEL_49:
                if ( (v36 & 4) == 0 )
                {
LABEL_50:
                  if ( v63 )
                    *v63 |= 2u;
                  v11 = 0;
                  goto LABEL_53;
                }
                v11 = sxsisol_ExpandEnvironmentStrings_UEx(v24, a5, &v65);
                if ( v11 >= 0 )
                {
                  v53 = (unsigned __int16)v65;
                  *a5 = 0;
                  if ( (unsigned __int64)(v53 + 2) <= 0xFFFE )
                  {
                    if ( (unsigned __int64)(v53 + 2) > *((_QWORD *)a5 + 4) )
                    {
                      if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
                      {
                        v11 = -1073741801;
                        goto LABEL_53;
                      }
                      LOWORD(v53) = v65;
                    }
                    v54 = *v28;
                    v55 = (unsigned __int64)*a5 >> 1;
                    *((_QWORD *)a5 + 1) = *v28;
                    memmove((void *)(v54 + 2 * v55), Src, (unsigned __int16)v53);
                    v56 = (unsigned __int16)(*a5 + v65);
                    *a5 = v56;
                    a5[1] = v56 + 2;
                    *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * (v56 >> 1)) = 0;
                    goto LABEL_50;
                  }
                  v11 = -1073741562;
                }
LABEL_53:
                hActCtx = v59;
                goto LABEL_4;
              }
            }
          }
          v11 = -1073741562;
          goto LABEL_53;
        }
        if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) >= 0 )
        {
          v26 = v60;
          goto LABEL_39;
        }
LABEL_67:
        v11 = -1073741801;
        goto LABEL_4;
      }
    }
    v11 = -1073741562;
    goto LABEL_4;
  }
  while ( 1 )
  {
    v43 = *(_DWORD *)&v22[8 * v23 + 4];
    if ( v43 > ulSectionTotalLength )
      break;
    v44 = *(_DWORD *)&v22[8 * v23];
    if ( v43 > ~v44 || v44 + v43 > ulSectionTotalLength )
      break;
    ++v23;
    v24 = *a3 + (unsigned __int16)v44;
    *a3 = v24;
    if ( v23 == v25 )
      goto LABEL_29;
  }
  v11 = -1072365565;
LABEL_4:
  v12 = v68;
  if ( v67 )
  {
    if ( v67 != v68 )
    {
      StringToFind.Buffer = v67;
      RtlFreeUnicodeString(&StringToFind);
      v12 = v68;
    }
    v69 = v70;
    v67 = v12;
  }
  Src = v12;
  if ( v12 )
    *v12 = 0;
  HIWORD(v65) = v70;
  LOWORD(v65) = 0;
  if ( hActCtx )
    RtlReleaseActivationContext(hActCtx);
  return (unsigned int)v11;
}
