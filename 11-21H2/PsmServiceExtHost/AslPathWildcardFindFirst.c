/*
 * XREFs of AslPathWildcardFindFirst @ 0x1800A42F4
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x18009AC20 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     RtlStringCchCopyW @ 0x180094FC4 (RtlStringCchCopyW.c)
 *     ULongLongMult @ 0x180096690 (ULongLongMult.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslDoesFileExistNtPath @ 0x18009DDF0 (AslDoesFileExistNtPath.c)
 *     RtlStringCbCopyNW @ 0x18009EEDC (RtlStringCbCopyNW.c)
 *     RtlUShortAdd @ 0x18009F014 (RtlUShortAdd.c)
 *     AslPathCleanUstr @ 0x1800A3D64 (AslPathCleanUstr.c)
 *     AslPathWildcardFindNext @ 0x1800A48BC (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1800A57E8 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x1800A5A10 (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1800A5B10 (AslpPathWildcardFreeMatchNode.c)
 *     AslpPathWildcardMakeLeaves @ 0x1800A5B74 (AslpPathWildcardMakeLeaves.c)
 */

__int64 __fastcall AslPathWildcardFindFirst(_WORD *a1, ULONGLONG a2, const wchar_t *a3, _QWORD *a4)
{
  _WORD *v6; // r14
  WCHAR *v8; // r15
  int matched; // ebx
  unsigned __int64 v10; // rbx
  WCHAR *Heap; // rax
  int Leaves; // eax
  const WCHAR *Buffer; // rcx
  PVOID v14; // rsi
  HRESULT v15; // eax
  ULONGLONG v16; // r10
  int v17; // r9d
  void *v18; // r8
  void *v19; // rcx
  PVOID v20; // rax
  PVOID v21; // rbx
  void *v22; // r8
  _QWORD *v23; // rsi
  ULONGLONG v24; // r13
  ULONGLONG v25; // rcx
  __int64 v26; // rbx
  ULONGLONG v27; // rbx
  void *v28; // r8
  void *v29; // rcx
  PVOID v30; // rax
  PVOID v31; // r14
  _OWORD *v32; // rdx
  __int128 v33; // xmm0
  ULONGLONG v34; // [rsp+38h] [rbp-39h] BYREF
  _DWORD *v35; // [rsp+40h] [rbp-31h] BYREF
  ULONGLONG v36; // [rsp+48h] [rbp-29h] BYREF
  ULONGLONG pullResult; // [rsp+50h] [rbp-21h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-9h] BYREF
  __int128 v40; // [rsp+78h] [rbp+7h] BYREF
  __int128 v41; // [rsp+88h] [rbp+17h]
  ULONGLONG Size; // [rsp+E0h] [rbp+6Fh] BYREF

  Size = a2;
  v6 = a1;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 || !*a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  *a4 = 0LL;
  *a1 = 0;
  v35 = 0LL;
  LOWORD(Size) = 0;
  UnicodeString = 0LL;
  v8 = 0LL;
  DestinationString = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  matched = RtlDosPathNameToNtPathName_U_WithStatus(a3, &UnicodeString, 0LL, 0LL);
  if ( matched < 0 )
    goto LABEL_42;
  matched = AslPathCleanUstr(&UnicodeString.Length);
  if ( matched < 0 )
    goto LABEL_42;
  matched = RtlUShortAdd(UnicodeString.Length, 4, (__int16 *)&Size);
  if ( matched < 0 )
    goto LABEL_42;
  v10 = (unsigned __int16)Size;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned __int16)Size);
  v8 = Heap;
  if ( Heap )
  {
    matched = RtlStringCbCopyNW(Heap, v10, (__int64)UnicodeString.Buffer, UnicodeString.Length);
    if ( matched < 0 )
      goto LABEL_42;
    Leaves = AslpPathWildcardMakeLeaves(v8);
    if ( !Leaves )
    {
      matched = -1073741767;
      AslLogCallPrintf(1LL);
      goto LABEL_43;
    }
    if ( Leaves == 1 )
    {
      Buffer = UnicodeString.Buffer;
      *a4 = -1LL;
      if ( !(unsigned int)AslDoesFileExistNtPath(Buffer) )
      {
        matched = -2147483642;
        goto LABEL_43;
      }
      matched = RtlStringCchCopyW(v6, 260LL, (__int64)a3);
      if ( matched >= 0 )
      {
        matched = 0;
        goto LABEL_43;
      }
LABEL_42:
      AslLogCallPrintf(1LL);
      goto LABEL_43;
    }
    v35 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x40uLL);
    v14 = v35;
    if ( !v35 )
      goto LABEL_11;
    *v35 = wcsncmp(a3, L"\\??\\", 4uLL) != 0;
    *((_QWORD *)v14 + 1) = v8;
    v8 = 0LL;
    *((_OWORD *)v14 + 1) = 0LL;
    *((_OWORD *)v14 + 2) = 0LL;
    *((_OWORD *)v14 + 3) = 0LL;
    *((_QWORD *)v14 + 2) = NtCurrentPeb()->ProcessHeap;
    *((_QWORD *)v14 + 6) = 16LL;
    *((_QWORD *)v14 + 4) = 0LL;
    *((_QWORD *)v14 + 5) = 0LL;
    *((_QWORD *)v14 + 7) = 0LL;
    *((_QWORD *)v14 + 3) = 32LL;
    v15 = ULongLongMult(0LL, *((_QWORD *)v14 + 3), &pullResult);
    v17 = -1073741675;
    if ( v15 < 0 || ULongLongMult(v16, *((_QWORD *)v14 + 3), &Size) < 0 )
    {
      matched = v17;
    }
    else
    {
      v18 = (void *)*((_QWORD *)v14 + 7);
      v19 = (void *)*((_QWORD *)v14 + 2);
      if ( v18 )
      {
        v21 = RtlReAllocateHeap(v19, 0, v18, Size);
      }
      else
      {
        v20 = RtlAllocateHeap(v19, 0, Size);
        v21 = v20;
        if ( v20 )
          memset_0(v20, 0, Size);
      }
      if ( v21 )
      {
        *((_QWORD *)v14 + 7) = v21;
        *((_QWORD *)v14 + 5) = 16LL;
        goto LABEL_35;
      }
      matched = -1073741801;
    }
    v22 = (void *)*((_QWORD *)v14 + 7);
    if ( v22 )
      RtlFreeHeap(*((HANDLE *)v14 + 2), 0, v22);
    *((_OWORD *)v14 + 1) = 0LL;
    *((_OWORD *)v14 + 2) = 0LL;
    *((_OWORD *)v14 + 3) = 0LL;
    if ( matched < 0 )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_42;
    }
LABEL_35:
    v23 = v35;
    RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v35 + 1));
    matched = AslpPathWildcardAllocMatchNode(
                (unsigned int)&v40,
                (unsigned int)&DestinationString,
                *((_QWORD *)v35 + 1),
                1,
                0LL,
                0);
    if ( matched < 0 )
      goto LABEL_42;
    v24 = *((_QWORD *)v35 + 4);
    if ( v24 >= *((_QWORD *)v35 + 5) )
    {
      v25 = v24 + 1;
      if ( v24 + 1 <= *((_QWORD *)v35 + 5) )
      {
        matched = -1073741811;
        goto LABEL_42;
      }
      v26 = *((_QWORD *)v35 + 6) - 1LL;
      if ( v26 + v25 < v25
        || (v27 = (v26 + v25) & ~v26, ULongLongMult(*((_QWORD *)v35 + 5), *((_QWORD *)v35 + 3), &Size) < 0)
        || ULongLongMult(v27, *((_QWORD *)v35 + 3), &v34) < 0 )
      {
LABEL_41:
        matched = -1073741675;
        goto LABEL_42;
      }
      v28 = (void *)v23[7];
      v29 = (void *)v23[2];
      if ( v28 )
      {
        v31 = RtlReAllocateHeap(v29, 0, v28, v34);
      }
      else
      {
        v30 = RtlAllocateHeap(v29, 0, v34);
        v31 = v30;
        if ( v30 )
          memset_0(v30, 0, v34);
      }
      if ( !v31 )
      {
        matched = -1073741801;
        goto LABEL_42;
      }
      v23[7] = v31;
      v6 = a1;
      v23[5] = v27;
    }
    if ( ULongLongMult(v23[3], v24, &v36) >= 0 )
    {
      v32 = (_OWORD *)(v23[7] + v36);
      if ( (unsigned __int64)v32 >= v23[7] )
      {
        v33 = v40;
        *a4 = v23;
        *v32 = v33;
        v32[1] = v41;
        ++v23[4];
        v40 = 0LL;
        v41 = 0LL;
        matched = AslPathWildcardFindNext(v6, 260LL, v23);
        goto LABEL_43;
      }
    }
    goto LABEL_41;
  }
LABEL_11:
  matched = -1073741801;
LABEL_43:
  RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  if ( matched < 0 )
  {
    AslpPathWildcardFreeFindContext(&v35);
    AslpPathWildcardFreeMatchNode(&v40);
    *a4 = 0LL;
  }
  return (unsigned int)matched;
}
