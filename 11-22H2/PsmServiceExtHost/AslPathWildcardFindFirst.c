/*
 * XREFs of AslPathWildcardFindFirst @ 0x18009DFEC
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x180095CE0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180074ADC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ULongLongMult @ 0x180090010 (ULongLongMult.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslDoesFileExistNtPath @ 0x1800987E0 (AslDoesFileExistNtPath.c)
 *     RtlStringCbCopyNW @ 0x1800998F4 (RtlStringCbCopyNW.c)
 *     RtlUShortAdd @ 0x1800999D0 (RtlUShortAdd.c)
 *     AslPathCleanUstr @ 0x18009DA00 (AslPathCleanUstr.c)
 *     AslPathWildcardFindNext @ 0x18009E5BC (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x18009F534 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x18009F75C (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x18009F85C (AslpPathWildcardFreeMatchNode.c)
 *     AslpPathWildcardMakeLeaves @ 0x18009F8C0 (AslpPathWildcardMakeLeaves.c)
 */

__int64 __fastcall AslPathWildcardFindFirst(unsigned __int16 *a1, ULONGLONG a2, const wchar_t *a3, _QWORD *a4)
{
  WCHAR *v8; // r14
  int matched; // eax
  int Next; // ebx
  const char *v11; // r9
  int v12; // r8d
  unsigned __int64 v13; // rbx
  WCHAR *Heap; // rax
  int Leaves; // eax
  const WCHAR *Buffer; // rcx
  PVOID v17; // rdi
  ULONGLONG v18; // r9
  void *v19; // r8
  void *v20; // rcx
  PVOID v21; // rax
  PVOID v22; // rbx
  void *v23; // r8
  _QWORD *v24; // rdi
  ULONGLONG v25; // r13
  ULONGLONG v26; // rcx
  __int64 v27; // rbx
  ULONGLONG v28; // rbx
  void *v29; // r8
  void *v30; // rcx
  PVOID v31; // rax
  PVOID v32; // rsi
  _OWORD *v33; // rdx
  __int64 v34; // [rsp+28h] [rbp-39h]
  __int64 v35; // [rsp+28h] [rbp-39h]
  ULONGLONG v36; // [rsp+38h] [rbp-29h] BYREF
  _DWORD *v37; // [rsp+40h] [rbp-21h] BYREF
  ULONGLONG v38; // [rsp+48h] [rbp-19h] BYREF
  ULONGLONG pullResult; // [rsp+50h] [rbp-11h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp+7h] BYREF
  __int128 v42; // [rsp+78h] [rbp+17h] BYREF
  __int128 v43; // [rsp+88h] [rbp+27h]
  ULONGLONG Size; // [rsp+D0h] [rbp+6Fh] BYREF

  Size = a2;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 || !*a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  *a4 = 0LL;
  *a1 = 0;
  v37 = 0LL;
  LOWORD(Size) = 0;
  UnicodeString = 0LL;
  v8 = 0LL;
  DestinationString = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  matched = RtlDosPathNameToNtPathName_U_WithStatus(a3, &UnicodeString, 0LL, 0LL);
  Next = matched;
  if ( matched < 0 )
  {
    v11 = "Failed to convert dos path to nt path [%x]";
    v12 = 2250;
LABEL_60:
    LODWORD(v34) = matched;
    AslLogCallPrintf(1LL, (unsigned int)"AslPathWildcardFindFirst", v12, (_DWORD)v11, v34);
    goto LABEL_61;
  }
  matched = AslPathCleanUstr(&UnicodeString.Length);
  Next = matched;
  if ( matched < 0 )
  {
    v11 = "AslPathCleanUstr failed [%x]";
    v12 = 2261;
    goto LABEL_60;
  }
  matched = RtlUShortAdd(UnicodeString.Length, 4, (__int16 *)&Size);
  Next = matched;
  if ( matched < 0 )
  {
    v11 = "RtlUShortAdd failed [%x]";
    v12 = 2267;
    goto LABEL_60;
  }
  v13 = (unsigned __int16)Size;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned __int16)Size);
  v8 = Heap;
  if ( !Heap )
    goto LABEL_14;
  matched = RtlStringCbCopyNW(Heap, v13, (__int64)UnicodeString.Buffer, UnicodeString.Length);
  Next = matched;
  if ( matched < 0 )
  {
    v11 = "RtlStringCbCopyNW failed [%x]";
    v12 = 2279;
    goto LABEL_60;
  }
  Leaves = AslpPathWildcardMakeLeaves(v8);
  if ( !Leaves )
  {
    Next = -1073741767;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslPathWildcardFindFirst",
      2297,
      (unsigned int)"Failed to split the wildcard path");
    goto LABEL_61;
  }
  if ( Leaves != 1 )
  {
    v37 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x40uLL);
    v17 = v37;
    if ( !v37 )
    {
LABEL_14:
      Next = -1073741801;
      goto LABEL_61;
    }
    *v37 = wcsncmp(a3, L"\\??\\", 4uLL) != 0;
    *((_QWORD *)v17 + 1) = v8;
    v8 = 0LL;
    *((_OWORD *)v17 + 1) = 0LL;
    *((_OWORD *)v17 + 2) = 0LL;
    *((_OWORD *)v17 + 3) = 0LL;
    *((_QWORD *)v17 + 2) = NtCurrentPeb()->ProcessHeap;
    *((_QWORD *)v17 + 6) = 16LL;
    *((_QWORD *)v17 + 4) = 0LL;
    *((_QWORD *)v17 + 5) = 0LL;
    *((_QWORD *)v17 + 7) = 0LL;
    *((_QWORD *)v17 + 3) = 32LL;
    if ( ULongLongMult(0LL, 0x20uLL, &pullResult) < 0 || ULongLongMult(v18, *((_QWORD *)v17 + 3), &Size) < 0 )
    {
      Next = -1073741675;
    }
    else
    {
      v19 = (void *)*((_QWORD *)v17 + 7);
      v20 = (void *)*((_QWORD *)v17 + 2);
      if ( v19 )
      {
        v22 = RtlReAllocateHeap(v20, 0, v19, Size);
      }
      else
      {
        v21 = RtlAllocateHeap(v20, 0, Size);
        v22 = v21;
        if ( v21 )
          memset_0(v21, 0, Size);
      }
      if ( v22 )
      {
        *((_QWORD *)v17 + 7) = v22;
        Next = 0;
        *((_QWORD *)v17 + 5) = 16LL;
      }
      else
      {
        Next = -1073741801;
      }
    }
    if ( Next )
    {
      v23 = (void *)*((_QWORD *)v17 + 7);
      if ( v23 )
        RtlFreeHeap(*((HANDLE *)v17 + 2), 0, v23);
      *((_OWORD *)v17 + 1) = 0LL;
      *((_OWORD *)v17 + 2) = 0LL;
      *((_OWORD *)v17 + 3) = 0LL;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpPathWildcardInitStack",
        2152,
        (unsigned int)"RtlArrayInitialize failed [%x]",
        Next);
      LODWORD(v35) = Next;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslPathWildcardFindFirst",
        2353,
        (unsigned int)"AslpPathWildcardInitStack failed [%x]",
        v35);
      goto LABEL_61;
    }
    v24 = v37;
    RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v37 + 1));
    matched = AslpPathWildcardAllocMatchNode(
                (unsigned int)&v42,
                (unsigned int)&DestinationString,
                *((_QWORD *)v37 + 1),
                1,
                0LL,
                0);
    Next = matched;
    if ( matched < 0 )
    {
      v11 = "AslpPathWildcardAllocMatchNode failed to create root of path [%x]";
      v12 = 2366;
      goto LABEL_60;
    }
    v25 = *((_QWORD *)v37 + 4);
    if ( v25 >= *((_QWORD *)v37 + 5) )
    {
      v26 = v25 + 1;
      if ( v25 + 1 <= *((_QWORD *)v37 + 5) )
      {
        Next = -1073741811;
        matched = -1073741811;
LABEL_59:
        v11 = "AslpPathWildcardPushNode failed [%x]";
        v12 = 2372;
        goto LABEL_60;
      }
      v27 = *((_QWORD *)v37 + 6) - 1LL;
      if ( v27 + v26 < v26 )
      {
LABEL_58:
        matched = -1073741675;
        Next = -1073741675;
        goto LABEL_59;
      }
      v28 = (v27 + v26) & ~v27;
      if ( ULongLongMult(*((_QWORD *)v37 + 5), *((_QWORD *)v37 + 3), &Size) < 0
        || ULongLongMult(v28, *((_QWORD *)v37 + 3), &v36) < 0 )
      {
        Next = -1073741675;
      }
      else
      {
        v29 = (void *)v24[7];
        v30 = (void *)v24[2];
        if ( v29 )
        {
          v32 = RtlReAllocateHeap(v30, 0, v29, v36);
        }
        else
        {
          v31 = RtlAllocateHeap(v30, 0, v36);
          v32 = v31;
          if ( v31 )
            memset_0(v31, 0, v36);
        }
        if ( v32 )
        {
          v24[5] = v28;
          Next = 0;
          v24[7] = v32;
        }
        else
        {
          Next = -1073741801;
        }
      }
      if ( Next )
      {
        matched = Next;
        goto LABEL_59;
      }
    }
    if ( ULongLongMult(v24[3], v25, &v38) >= 0 )
    {
      v33 = (_OWORD *)(v24[7] + v38);
      if ( (unsigned __int64)v33 >= v24[7] )
      {
        *v33 = v42;
        v33[1] = v43;
        ++v24[4];
        *a4 = v24;
        v42 = 0LL;
        v43 = 0LL;
        Next = AslPathWildcardFindNext(a1, 260LL, v24);
        goto LABEL_61;
      }
    }
    goto LABEL_58;
  }
  Buffer = UnicodeString.Buffer;
  *a4 = -1LL;
  if ( (unsigned int)AslDoesFileExistNtPath(Buffer) )
  {
    matched = RtlStringCchCopyW(a1, 260LL, a3);
    Next = matched;
    if ( matched < 0 )
    {
      v11 = "RtlStringCbCopyNW failed [%x]";
      v12 = 2315;
      goto LABEL_60;
    }
    Next = 0;
  }
  else
  {
    Next = -2147483642;
  }
LABEL_61:
  RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  if ( Next < 0 )
  {
    AslpPathWildcardFreeFindContext(&v37);
    AslpPathWildcardFreeMatchNode(&v42);
    *a4 = 0LL;
  }
  return (unsigned int)Next;
}
