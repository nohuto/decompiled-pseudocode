/*
 * XREFs of LdrpSearchPath @ 0x1800501B4
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x18004F834 (LdrpFindLoadedDllInternal.c)
 *     LdrpMapDllSearchPath @ 0x180051844 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlCopyUnicodeString @ 0x180034770 (RtlCopyUnicodeString.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlCompareUnicodeString @ 0x1800415D0 (RtlCompareUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x1800416B0 (RtlCompareUnicodeStrings.c)
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     LdrpResolveDllName @ 0x18004F58C (LdrpResolveDllName.c)
 *     LdrpAllocateUnicodeString @ 0x18004FAEC (LdrpAllocateUnicodeString.c)
 *     LdrpFreeUnicodeString @ 0x180051B14 (LdrpFreeUnicodeString.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x180051B4C (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpComputeLazyDllPath @ 0x180051BAC (LdrpComputeLazyDllPath.c)
 *     EtwEventWriteNoRegistration @ 0x18008AEB0 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     RtlpLookupSafeCurDirList @ 0x1800EA470 (RtlpLookupSafeCurDirList.c)
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
  unsigned __int16 *v14; // r13
  int UnicodeString; // edi
  unsigned int v16; // r8d
  __int16 *v17; // rdx
  __int16 *v18; // r9
  __int16 *v19; // rcx
  __int16 v20; // ax
  unsigned int v21; // eax
  int v22; // r10d
  _WORD *v23; // rdx
  __int16 *v24; // r14
  __int16 *v25; // rsi
  __int16 v26; // ax
  __int16 *v27; // r15
  _WORD *i; // rax
  __int16 v29; // cx
  int v30; // eax
  __int16 **v31; // r15
  _DWORD *v32; // r15
  _QWORD *v34; // rax
  _QWORD *v35; // r13
  _QWORD *v36; // r15
  unsigned __int16 *v37; // r10
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // ax
  __int64 Heap; // rax
  int v41; // eax
  void *v42; // rdx
  _DWORD *v43; // rdx
  int v44; // r10d
  _QWORD *v45; // r11
  unsigned __int16 v47; // [rsp+32h] [rbp-97h]
  unsigned __int16 *v48; // [rsp+40h] [rbp-89h]
  __int128 v49; // [rsp+50h] [rbp-79h] BYREF
  const void **v50; // [rsp+60h] [rbp-69h]
  __int64 v51; // [rsp+68h] [rbp-61h]
  __int16 *v52; // [rsp+70h] [rbp-59h]
  _WORD *v53; // [rsp+78h] [rbp-51h]
  __int16 **v54; // [rsp+80h] [rbp-49h]
  bool *v55; // [rsp+88h] [rbp-41h]
  __int64 v56; // [rsp+90h] [rbp-39h]
  __int64 v57; // [rsp+98h] [rbp-31h] BYREF
  int v58; // [rsp+A0h] [rbp-29h]
  int v59; // [rsp+A4h] [rbp-25h]
  __int64 v60; // [rsp+A8h] [rbp-21h]
  int v61; // [rsp+B0h] [rbp-19h]
  int v62; // [rsp+B4h] [rbp-15h]
  __int64 v63; // [rsp+B8h] [rbp-11h]
  int v64; // [rsp+C0h] [rbp-9h]
  int v65; // [rsp+C4h] [rbp-5h]

  v9 = 0;
  v11 = a3;
  v51 = a6;
  v14 = 0LL;
  v55 = a8;
  v56 = a9;
  v54 = a4;
  v50 = a1;
  v48 = 0LL;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrfind.c",
    1207,
    (__int64)"LdrpSearchPath",
    3u,
    "DLL name: %wZ\n",
    a1);
  if ( !*(_QWORD *)a2 )
  {
    UnicodeString = LdrpComputeLazyDllPath(a2);
    if ( UnicodeString < 0 )
      goto LABEL_45;
    v11 = a3;
  }
  v16 = 0;
  if ( a4 )
  {
    v17 = *a4;
    if ( *a4 )
    {
      v19 = a4[1];
      v18 = *(__int16 **)(a2 + 16);
      goto LABEL_15;
    }
  }
  v18 = *(__int16 **)(a2 + 16);
  v17 = v18;
  if ( v18 )
    goto LABEL_8;
  do
  {
    v17 = *(__int16 **)a2;
LABEL_8:
    v19 = v17;
LABEL_15:
    while ( 1 )
    {
      v20 = *v19;
      if ( !*v19 )
        break;
      v22 = (int)v19;
      do
      {
        if ( v20 == 59 )
          break;
        v20 = *++v19;
      }
      while ( *v19 );
      v21 = (_DWORD)v19 - v22;
      if ( (int)v19 - v22 <= v16 )
        v21 = v16;
      v16 = v21;
      if ( *v19 == 59 )
        ++v19;
    }
  }
  while ( v17 == v18 && !v11 );
  UnicodeString = LdrpAllocateUnicodeString((__int64)&v49, v16 + *(unsigned __int16 *)a1 + 2);
  if ( UnicodeString >= 0 )
  {
    v23 = (_WORD *)*((_QWORD *)&v49 + 1);
    v53 = (_WORD *)*((_QWORD *)&v49 + 1);
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
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v26 = *v25;
            if ( *v25 )
              break;
            if ( v24 != *(__int16 **)(a2 + 16) || a3 )
            {
              UnicodeString = -1073741515;
              goto LABEL_37;
            }
            v24 = *(__int16 **)a2;
            v25 = *(__int16 **)a2;
          }
          v52 = v25;
          if ( v26 != 59 )
            break;
          ++v25;
        }
        v27 = *(__int16 **)(a2 + 8);
        for ( i = v23; ; ++i )
        {
          v29 = *v25;
          if ( !*v25 )
            break;
          if ( v29 == 59 )
            goto LABEL_30;
          *i = v29;
          ++v25;
        }
        if ( *v25 == 59 )
LABEL_30:
          ++v25;
      }
      while ( i == v23 );
      if ( *(i - 1) != 92 && *(i - 1) != 47 )
      {
        *i = 92;
        LOWORD(i) = (_WORD)i + 2;
      }
      LOWORD(v49) = (_WORD)i - (_WORD)v23;
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v49, v50);
      v30 = LdrpResolveDllName(&v49, (__int64)a5, v51, a7, 0);
      UnicodeString = v30;
      if ( v52 != v27 )
        break;
      if ( v30 < 0 )
        goto LABEL_47;
      v34 = (_QWORD *)RtlpLookupSafeCurDirList();
      v35 = v34;
      if ( v34 )
      {
        v36 = (_QWORD *)*v34;
        if ( (_QWORD *)*v34 != v34 )
        {
          v37 = a7;
          v38 = *a7 >> 1;
          v47 = v38;
          do
          {
            v39 = *((_WORD *)v36 + 8) >> 1;
            if ( v38 > v39 )
            {
              if ( !(unsigned int)RtlCompareUnicodeStrings(*((_WORD **)v37 + 1), v39, v36[3], v39, 1) )
              {
                v14 = v48;
                goto LABEL_37;
              }
              v38 = v47;
              v37 = a7;
            }
            v36 = (_QWORD *)*v36;
          }
          while ( v36 != v35 );
        }
      }
      Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, *a7 + 18LL);
      v48 = (unsigned __int16 *)Heap;
      v14 = (unsigned __int16 *)Heap;
      if ( Heap )
      {
        *(_WORD *)Heap = 0;
        *(_WORD *)(Heap + 2) = *a7;
        *(_QWORD *)(Heap + 8) = Heap + 16;
        RtlCopyUnicodeString((unsigned __int16 *)Heap, a7);
        *(_WORD *)(*((_QWORD *)v14 + 1) + 2 * ((unsigned __int64)*a7 >> 1)) = 0;
      }
LABEL_48:
      v23 = v53;
      *a5 = 0;
    }
    v48 = v14;
    if ( v30 >= 0 )
      goto LABEL_37;
LABEL_47:
    if ( v30 == -1073741515 || v30 == -1073741790 || v30 == -1073741757 || v30 == -1073741715 )
      goto LABEL_48;
LABEL_37:
    if ( v14 )
    {
      if ( UnicodeString < 0 || (unsigned int)RtlCompareUnicodeString(a7, v14, 1) )
      {
        v59 = 0;
        v62 = 0;
        v57 = *(_QWORD *)(LdrpImageEntry + 80);
        v58 = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
        v60 = *((_QWORD *)v14 + 1);
        v61 = *v14 + 2;
        if ( UnicodeString >= 0 )
        {
          v63 = *((_QWORD *)a7 + 1);
          v41 = *a7;
          v65 = 0;
          v64 = v41 + 2;
        }
        v42 = &CurDirDllLoadFailureWarning;
        if ( UnicodeString < 0 )
          v42 = &CurDirDllLoadFailureError;
        EtwEventWriteNoRegistration(&UserLoaderGuid, v42, (unsigned int)((UnicodeString >> 31) + 3), &v57);
      }
      RtlFreeHeap(LdrpHeap, 0, (__int64)v14);
    }
    LdrpFreeUnicodeString(&v49);
    if ( UnicodeString >= 0 )
    {
      v31 = v54;
      if ( v54 )
      {
        *v54 = v24;
        v31[1] = v25;
      }
      if ( v55 )
        *v55 = v24 == *(__int16 **)(a2 + 16);
    }
    v32 = (_DWORD *)v56;
    if ( v56 && (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled() )
    {
      v43 = (_DWORD *)(a2 + 40);
      v44 = 0;
      if ( *(_WORD *)(a2 + 112) )
      {
        v45 = (_QWORD *)(a2 + 64);
        do
        {
          if ( (unsigned __int64)v25 <= *v45 )
            break;
          ++v9;
          v44 |= 16 << *v43;
          ++v45;
          ++v43;
        }
        while ( v9 < *(unsigned __int16 *)(a2 + 112) );
      }
      *v32 = v44;
    }
  }
LABEL_45:
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrfind.c",
    1525,
    (__int64)"LdrpSearchPath",
    4u,
    "Status: 0x%08lx\n",
    UnicodeString);
  return (unsigned int)UnicodeString;
}
