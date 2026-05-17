/*
 * XREFs of LdrpSearchPath @ 0x18002E074
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180011078 (LdrpMapDllSearchPath.c)
 *     LdrpFindLoadedDllInternal @ 0x18002B09C (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x180011018 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpFreeUnicodeString @ 0x180011348 (LdrpFreeUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x180014B60 (RtlCompareUnicodeStrings.c)
 *     RtlCompareUnicodeString @ 0x180014C80 (RtlCompareUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180019500 (RtlAppendUnicodeStringToString.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpResolveDllName @ 0x18002AA44 (LdrpResolveDllName.c)
 *     LdrpAllocateUnicodeString @ 0x18002B3D0 (LdrpAllocateUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x18002D860 (RtlCopyUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     LdrpComputeLazyDllPath @ 0x18007A914 (LdrpComputeLazyDllPath.c)
 *     EtwEventWriteNoRegistration @ 0x180086FD0 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlpLookupSafeCurDirList @ 0x1800E97D0 (RtlpLookupSafeCurDirList.c)
 */

__int64 __fastcall LdrpSearchPath(
        const void **a1,
        __int64 a2,
        char a3,
        __int16 **a4,
        _WORD *a5,
        __int64 a6,
        unsigned __int16 *a7,
        bool *a8,
        __int64 a9)
{
  unsigned int v9; // ebx
  char v11; // di
  unsigned __int16 *v14; // r15
  int UnicodeString; // edi
  unsigned int v16; // r8d
  __int16 *v17; // rdx
  __int16 *v18; // rcx
  __int16 v19; // ax
  int v20; // r9d
  unsigned int v21; // eax
  __int16 v22; // ax
  _WORD *v23; // rdx
  __int16 *v24; // r14
  __int16 *v25; // rsi
  char i; // al
  __int16 v27; // cx
  __int16 *v28; // r13
  _WORD *v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int16 **v35; // r13
  _DWORD *v36; // r15
  _QWORD *v38; // rax
  _QWORD *v39; // r13
  _QWORD *v40; // r15
  unsigned __int16 *v41; // r10
  unsigned __int16 v42; // cx
  unsigned __int16 v43; // ax
  __int64 Heap; // rax
  int v45; // eax
  void *v46; // rdx
  _DWORD *v47; // rdx
  int v48; // r10d
  _QWORD *v49; // r11
  __int16 *v51; // [rsp+40h] [rbp-89h]
  unsigned __int16 v52; // [rsp+40h] [rbp-89h]
  unsigned __int16 *v53; // [rsp+48h] [rbp-81h]
  const void *v54; // [rsp+58h] [rbp-71h] BYREF
  _WORD *v55; // [rsp+60h] [rbp-69h]
  const void **v56; // [rsp+68h] [rbp-61h]
  __int64 v57; // [rsp+70h] [rbp-59h]
  _WORD *v58; // [rsp+78h] [rbp-51h]
  __int16 **v59; // [rsp+80h] [rbp-49h]
  bool *v60; // [rsp+88h] [rbp-41h]
  __int64 v61; // [rsp+90h] [rbp-39h]
  __int64 v62; // [rsp+98h] [rbp-31h] BYREF
  int v63; // [rsp+A0h] [rbp-29h]
  int v64; // [rsp+A4h] [rbp-25h]
  __int64 v65; // [rsp+A8h] [rbp-21h]
  int v66; // [rsp+B0h] [rbp-19h]
  int v67; // [rsp+B4h] [rbp-15h]
  __int64 v68; // [rsp+B8h] [rbp-11h]
  int v69; // [rsp+C0h] [rbp-9h]
  int v70; // [rsp+C4h] [rbp-5h]

  v9 = 0;
  v11 = a3;
  v57 = a6;
  v14 = 0LL;
  v60 = a8;
  v61 = a9;
  v59 = a4;
  v56 = a1;
  v53 = 0LL;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrfind.c",
    1207LL,
    (__int64)"LdrpSearchPath",
    3LL,
    "DLL name: %wZ\n",
    a1);
  if ( !*(_QWORD *)a2 )
  {
    UnicodeString = LdrpComputeLazyDllPath(a2);
    if ( UnicodeString < 0 )
      goto LABEL_50;
    v11 = a3;
  }
  v16 = 0;
  if ( a4 )
  {
    v17 = *a4;
    if ( *a4 )
    {
      v18 = a4[1];
      goto LABEL_9;
    }
  }
  v17 = *(__int16 **)(a2 + 16);
  if ( v17 )
    goto LABEL_8;
  do
  {
    v17 = *(__int16 **)a2;
LABEL_8:
    v18 = v17;
LABEL_9:
    if ( *v18 )
    {
      do
      {
        v19 = *v18;
        v20 = (int)v18;
        do
        {
          if ( v19 == 59 )
            break;
          v19 = *++v18;
        }
        while ( *v18 );
        v21 = (_DWORD)v18 - v20;
        if ( (int)v18 - v20 <= v16 )
          v21 = v16;
        v16 = v21;
        v22 = *v18;
        if ( *v18 == 59 )
          v22 = *++v18;
      }
      while ( v22 );
    }
  }
  while ( v17 == *(__int16 **)(a2 + 16) && !v11 );
  UnicodeString = LdrpAllocateUnicodeString((__int64)&v54, v16 + *(unsigned __int16 *)a1 + 2);
  if ( UnicodeString < 0 )
    goto LABEL_50;
  v23 = v55;
  v58 = v55;
  if ( a4 && (v24 = *a4) != 0LL )
  {
    v25 = a4[1];
  }
  else
  {
    v24 = *(__int16 **)(a2 + 16);
    if ( !v24 )
      v24 = *(__int16 **)a2;
    v25 = v24;
  }
LABEL_25:
  for ( i = a3; ; i = a3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v27 = *v25;
        if ( *v25 )
          break;
        if ( v24 != *(__int16 **)(a2 + 16) || i )
        {
          UnicodeString = -1073741515;
          goto LABEL_42;
        }
        v24 = *(__int16 **)a2;
        v25 = *(__int16 **)a2;
      }
      v28 = v25;
      if ( v27 != 59 )
        break;
      ++v25;
    }
    v51 = *(__int16 **)(a2 + 8);
    v29 = v23;
    if ( v27 )
    {
      while ( v27 != 59 )
      {
        ++v25;
        *v29++ = v27;
        v27 = *v25;
        if ( !*v25 )
          goto LABEL_31;
      }
    }
    else
    {
LABEL_31:
      if ( *v25 != 59 )
        goto LABEL_33;
    }
    ++v25;
LABEL_33:
    if ( v29 == v23 )
      goto LABEL_25;
    if ( *(v29 - 1) != 92 && *(v29 - 1) != 47 )
    {
      *v29 = 92;
      LOWORD(v29) = (_WORD)v29 + 2;
    }
    LOWORD(v54) = (_WORD)v29 - (_WORD)v23;
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v54, v56);
    v30 = LdrpResolveDllName(&v54, (__int64)a5, v57, a7, 0);
    UnicodeString = v30;
    if ( v28 != v51 )
      break;
    if ( v30 < 0 )
      goto LABEL_39;
    v38 = (_QWORD *)RtlpLookupSafeCurDirList();
    v39 = v38;
    if ( v38 )
    {
      v40 = (_QWORD *)*v38;
      if ( (_QWORD *)*v38 != v38 )
      {
        v41 = a7;
        v42 = *a7 >> 1;
        v52 = v42;
        do
        {
          v43 = *((_WORD *)v40 + 8) >> 1;
          if ( v42 > v43 )
          {
            if ( !(unsigned int)RtlCompareUnicodeStrings(*((_WORD **)v41 + 1), v43, v40[3], v43, 1) )
            {
              v14 = v53;
              goto LABEL_42;
            }
            v42 = v52;
            v41 = a7;
          }
          v40 = (_QWORD *)*v40;
        }
        while ( v40 != v39 );
      }
    }
    Heap = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 0x40000), *a7 + 18LL);
    v53 = (unsigned __int16 *)Heap;
    v14 = (unsigned __int16 *)Heap;
    if ( Heap )
    {
      *(_WORD *)Heap = 0;
      *(_WORD *)(Heap + 2) = *a7;
      *(_QWORD *)(Heap + 8) = Heap + 16;
      RtlCopyUnicodeString((unsigned __int16 *)Heap, a7);
      *(_WORD *)(*((_QWORD *)v14 + 1) + 2 * ((unsigned __int64)*a7 >> 1)) = 0;
    }
LABEL_40:
    v23 = v58;
    *a5 = 0;
  }
  v53 = v14;
  if ( v30 >= 0 )
    goto LABEL_42;
LABEL_39:
  if ( v30 == -1073741515 || v30 == -1073741790 || v30 == -1073741757 || v30 == -1073741715 )
    goto LABEL_40;
LABEL_42:
  if ( v14 )
  {
    if ( UnicodeString < 0 || (unsigned int)RtlCompareUnicodeString(a7, v14, 1) )
    {
      v64 = 0;
      v67 = 0;
      v62 = *(_QWORD *)(LdrpImageEntry + 80);
      v63 = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
      v65 = *((_QWORD *)v14 + 1);
      v66 = *v14 + 2;
      if ( UnicodeString >= 0 )
      {
        v68 = *((_QWORD *)a7 + 1);
        v45 = *a7;
        v70 = 0;
        v69 = v45 + 2;
      }
      v46 = &CurDirDllLoadFailureWarning;
      if ( UnicodeString < 0 )
        v46 = &CurDirDllLoadFailureError;
      EtwEventWriteNoRegistration(&UserLoaderGuid, v46, (unsigned int)((UnicodeString >> 31) + 3), &v62);
    }
    RtlFreeHeap(LdrpHeap, 0LL, v14);
  }
  LdrpFreeUnicodeString((__int64)&v54);
  if ( UnicodeString >= 0 )
  {
    v35 = v59;
    if ( v59 )
    {
      *v59 = v24;
      v35[1] = v25;
    }
    v32 = (__int64)v60;
    if ( v60 )
      *v60 = v24 == *(__int16 **)(a2 + 16);
  }
  v36 = (_DWORD *)v61;
  if ( v61 && LdrpIsSecurityEtwLoggingEnabled(v32, v31, v33, v34) )
  {
    v47 = (_DWORD *)(a2 + 40);
    v48 = 0;
    if ( *(_WORD *)(a2 + 112) )
    {
      v49 = (_QWORD *)(a2 + 64);
      do
      {
        if ( (unsigned __int64)v25 <= *v49 )
          break;
        ++v9;
        v48 |= 16 << *v47;
        ++v49;
        ++v47;
      }
      while ( v9 < *(unsigned __int16 *)(a2 + 112) );
    }
    *v36 = v48;
  }
LABEL_50:
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrfind.c",
    1525LL,
    (__int64)"LdrpSearchPath",
    4LL,
    "Status: 0x%08lx\n",
    UnicodeString);
  return (unsigned int)UnicodeString;
}
