/*
 * XREFs of LdrpSearchPath @ 0x18002DEA4
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180010E68 (LdrpMapDllSearchPath.c)
 *     LdrpFindLoadedDllInternal @ 0x18002AECC (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x180010E08 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpFreeUnicodeString @ 0x180011138 (LdrpFreeUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x180014950 (RtlCompareUnicodeStrings.c)
 *     RtlCompareUnicodeString @ 0x180014A70 (RtlCompareUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1800192F0 (RtlAppendUnicodeStringToString.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     LdrpResolveDllName @ 0x18002A874 (LdrpResolveDllName.c)
 *     LdrpAllocateUnicodeString @ 0x18002B200 (LdrpAllocateUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x18002D690 (RtlCopyUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     LdrpComputeLazyDllPath @ 0x18007AF84 (LdrpComputeLazyDllPath.c)
 *     EtwEventWriteNoRegistration @ 0x1800877D0 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlpLookupSafeCurDirList @ 0x1800EAB00 (RtlpLookupSafeCurDirList.c)
 */

__int64 __fastcall LdrpSearchPath(
        const UNICODE_STRING *a1,
        __int64 a2,
        char a3,
        wchar_t **a4,
        _WORD *a5,
        __int64 a6,
        _UNICODE_STRING *a7,
        bool *a8,
        __int64 a9)
{
  unsigned int v9; // ebx
  char v11; // di
  _UNICODE_STRING *v14; // r15
  int UnicodeString; // edi
  unsigned int v16; // r8d
  __int16 *v17; // rdx
  __int16 *v18; // rcx
  __int16 v19; // ax
  int v20; // r9d
  unsigned int v21; // eax
  __int16 v22; // ax
  wchar_t *Buffer; // rdx
  wchar_t *v24; // r14
  wchar_t *v25; // rsi
  char i; // al
  wchar_t v27; // cx
  wchar_t *v28; // r13
  wchar_t *v29; // rax
  int v30; // eax
  wchar_t **v31; // r13
  _DWORD *v32; // r15
  _QWORD *v34; // rax
  _QWORD *v35; // r13
  _QWORD *v36; // r15
  PCWCH *v37; // r10
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // ax
  _UNICODE_STRING *Heap; // rax
  int Length; // eax
  const EVENT_DESCRIPTOR *v42; // rdx
  _DWORD *v43; // rdx
  int v44; // r10d
  _QWORD *v45; // r11
  wchar_t *v47; // [rsp+40h] [rbp-89h]
  unsigned __int16 v48; // [rsp+40h] [rbp-89h]
  _UNICODE_STRING *v49; // [rsp+48h] [rbp-81h]
  _UNICODE_STRING Destination; // [rsp+58h] [rbp-71h] BYREF
  PCUNICODE_STRING Source; // [rsp+68h] [rbp-61h]
  __int64 v52; // [rsp+70h] [rbp-59h]
  wchar_t *v53; // [rsp+78h] [rbp-51h]
  wchar_t **v54; // [rsp+80h] [rbp-49h]
  bool *v55; // [rsp+88h] [rbp-41h]
  __int64 v56; // [rsp+90h] [rbp-39h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-31h] BYREF
  wchar_t *v58; // [rsp+A8h] [rbp-21h]
  int v59; // [rsp+B0h] [rbp-19h]
  int v60; // [rsp+B4h] [rbp-15h]
  wchar_t *v61; // [rsp+B8h] [rbp-11h]
  int v62; // [rsp+C0h] [rbp-9h]
  int v63; // [rsp+C4h] [rbp-5h]

  v9 = 0;
  v11 = a3;
  v52 = a6;
  v14 = 0LL;
  v55 = a8;
  v56 = a9;
  v54 = a4;
  Source = a1;
  v49 = 0LL;
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
      goto LABEL_50;
    v11 = a3;
  }
  v16 = 0;
  if ( a4 )
  {
    v17 = (__int16 *)*a4;
    if ( *a4 )
    {
      v18 = (__int16 *)a4[1];
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
  UnicodeString = LdrpAllocateUnicodeString((__int64)&Destination, v16 + a1->Length + 2);
  if ( UnicodeString < 0 )
    goto LABEL_50;
  Buffer = Destination.Buffer;
  v53 = Destination.Buffer;
  if ( a4 && (v24 = *a4) != 0LL )
  {
    v25 = a4[1];
  }
  else
  {
    v24 = *(wchar_t **)(a2 + 16);
    if ( !v24 )
      v24 = *(wchar_t **)a2;
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
        if ( v24 != *(wchar_t **)(a2 + 16) || i )
        {
          UnicodeString = -1073741515;
          goto LABEL_42;
        }
        v24 = *(wchar_t **)a2;
        v25 = *(wchar_t **)a2;
      }
      v28 = v25;
      if ( v27 != 59 )
        break;
      ++v25;
    }
    v47 = *(wchar_t **)(a2 + 8);
    v29 = Buffer;
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
    if ( v29 == Buffer )
      goto LABEL_25;
    if ( *(v29 - 1) != 92 && *(v29 - 1) != 47 )
    {
      *v29 = 92;
      LOWORD(v29) = (_WORD)v29 + 2;
    }
    Destination.Length = (_WORD)v29 - (_WORD)Buffer;
    RtlAppendUnicodeStringToString(&Destination, Source);
    v30 = LdrpResolveDllName((const void **)&Destination, (__int64)a5, v52, a7, 0);
    UnicodeString = v30;
    if ( v28 != v47 )
      break;
    if ( v30 < 0 )
      goto LABEL_39;
    v34 = (_QWORD *)RtlpLookupSafeCurDirList();
    v35 = v34;
    if ( v34 )
    {
      v36 = (_QWORD *)*v34;
      if ( (_QWORD *)*v34 != v34 )
      {
        v37 = (PCWCH *)a7;
        v38 = a7->Length >> 1;
        v48 = v38;
        do
        {
          v39 = *((_WORD *)v36 + 8) >> 1;
          if ( v38 > v39 )
          {
            if ( !RtlCompareUnicodeStrings(v37[1], v39, (PCWCH)v36[3], v39, 1u) )
            {
              v14 = v49;
              goto LABEL_42;
            }
            v38 = v48;
            v37 = (PCWCH *)a7;
          }
          v36 = (_QWORD *)*v36;
        }
        while ( v36 != v35 );
      }
    }
    Heap = (_UNICODE_STRING *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, a7->Length + 18LL);
    v49 = Heap;
    v14 = Heap;
    if ( Heap )
    {
      Heap->Length = 0;
      Heap->MaximumLength = a7->Length;
      Heap->Buffer = &Heap[1].Length;
      RtlCopyUnicodeString(Heap, a7);
      v14->Buffer[(unsigned __int64)a7->Length >> 1] = 0;
    }
LABEL_40:
    Buffer = v53;
    *a5 = 0;
  }
  v49 = v14;
  if ( v30 >= 0 )
    goto LABEL_42;
LABEL_39:
  if ( v30 == -1073741515 || v30 == -1073741790 || v30 == -1073741757 || v30 == -1073741715 )
    goto LABEL_40;
LABEL_42:
  if ( v14 )
  {
    if ( UnicodeString < 0 || RtlCompareUnicodeString(a7, v14, 1u) )
    {
      UserData.Reserved = 0;
      v60 = 0;
      UserData.Ptr = *(_QWORD *)(LdrpImageEntry + 80);
      UserData.Size = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
      v58 = v14->Buffer;
      v59 = v14->Length + 2;
      if ( UnicodeString >= 0 )
      {
        v61 = a7->Buffer;
        Length = a7->Length;
        v63 = 0;
        v62 = Length + 2;
      }
      v42 = (const EVENT_DESCRIPTOR *)&CurDirDllLoadFailureWarning;
      if ( UnicodeString < 0 )
        v42 = &CurDirDllLoadFailureError;
      EtwEventWriteNoRegistration(&UserLoaderGuid, v42, (UnicodeString >> 31) + 3, &UserData);
    }
    RtlFreeHeap(LdrpHeap, 0, v14);
  }
  LdrpFreeUnicodeString((__int64)&Destination);
  if ( UnicodeString >= 0 )
  {
    v31 = v54;
    if ( v54 )
    {
      *v54 = v24;
      v31[1] = v25;
    }
    if ( v55 )
      *v55 = v24 == *(wchar_t **)(a2 + 16);
  }
  v32 = (_DWORD *)v56;
  if ( v56 && LdrpIsSecurityEtwLoggingEnabled() )
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
LABEL_50:
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrfind.c",
    1525,
    (__int64)"LdrpSearchPath",
    4u,
    "Status: 0x%08lx\n",
    UnicodeString);
  return (unsigned int)UnicodeString;
}
