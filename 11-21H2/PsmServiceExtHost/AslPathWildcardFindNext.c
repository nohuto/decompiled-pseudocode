/*
 * XREFs of AslPathWildcardFindNext @ 0x1800A48BC
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x18009AC20 (SdbpCheckMatchingWildcardFiles.c)
 *     AslPathWildcardFindFirst @ 0x1800A42F4 (AslPathWildcardFindFirst.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memmove_0 @ 0x18005022E (memmove_0.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ULongLongMult @ 0x180096690 (ULongLongMult.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     RtlStringCbCopyNW @ 0x18009EEDC (RtlStringCbCopyNW.c)
 *     RtlUShortAdd @ 0x18009F014 (RtlUShortAdd.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1800A57E8 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1800A5B10 (AslpPathWildcardFreeMatchNode.c)
 */

__int64 __fastcall AslPathWildcardFindNext(_WORD *a1, __int64 a2, __int64 a3)
{
  char *FileInformation; // r13
  int v7; // ebx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int16 *v10; // rsi
  __int64 v11; // rax
  ULONGLONG v12; // rdx
  __int64 v13; // r10
  __int64 v14; // r9
  char *v15; // r14
  __int64 v16; // rsi
  ULONGLONG v17; // r10
  const void *v18; // rdx
  ULONGLONG v19; // rcx
  ULONGLONG v20; // r14
  void *v21; // r8
  void *v22; // rcx
  PVOID Heap; // rax
  PVOID v24; // rsi
  size_t v25; // r8
  SIZE_T v26; // r9
  NTSTATUS v27; // eax
  __int64 v28; // rax
  ULONGLONG v29; // rdx
  __int64 v30; // r10
  __int64 v31; // r9
  char *v32; // r14
  __int64 v33; // rsi
  ULONGLONG v34; // r10
  const void *v35; // rdx
  ULONGLONG v36; // rcx
  __int64 v37; // rcx
  int matched; // eax
  ULONGLONG v39; // r15
  ULONGLONG v40; // rcx
  __int64 v41; // r14
  ULONGLONG v42; // r14
  void *v43; // r8
  void *v44; // rcx
  PVOID v45; // rax
  PVOID v46; // rsi
  _OWORD *v47; // rdx
  SIZE_T v48; // r9
  PUCHAR StaticBuffer; // rax
  WCHAR *p_ReservedForAllocatedSize; // rcx
  SIZE_T v51; // r8
  SIZE_T v52; // rdx
  USHORT Length; // r9
  SIZE_T v54; // r8
  USHORT v55; // cx
  unsigned __int64 v56; // r8
  USHORT v57; // ax
  USHORT v58; // r10
  PWSTR Buffer; // r9
  USHORT v60; // dx
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // rcx
  unsigned __int16 v63; // [rsp+60h] [rbp-A0h] BYREF
  ULONGLONG Size; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  ULONGLONG v66; // [rsp+80h] [rbp-80h] BYREF
  ULONGLONG v67; // [rsp+88h] [rbp-78h] BYREF
  ULONGLONG v68; // [rsp+90h] [rbp-70h] BYREF
  ULONGLONG pullResult; // [rsp+98h] [rbp-68h] BYREF
  ULONGLONG v70; // [rsp+A0h] [rbp-60h] BYREF
  ULONGLONG v71; // [rsp+A8h] [rbp-58h] BYREF
  ULONGLONG v72; // [rsp+B0h] [rbp-50h] BYREF
  ULONGLONG v73; // [rsp+B8h] [rbp-48h] BYREF
  ULONGLONG v74; // [rsp+C0h] [rbp-40h] BYREF
  ULONGLONG v75; // [rsp+C8h] [rbp-38h] BYREF
  ULONGLONG v76; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v77; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v78; // [rsp+E8h] [rbp-18h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F8h] [rbp-8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+108h] [rbp+8h] BYREF
  _RTL_UNICODE_STRING_BUFFER Path; // [rsp+118h] [rbp+18h] BYREF

  if ( a3 == -1 )
    return 2147483654LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  v63 = 0;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  memset(&Path, 0, 56);
  FileInformation = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x268uLL);
  if ( !FileInformation )
  {
    v7 = -1073741801;
    goto LABEL_100;
  }
  v8 = *(_QWORD *)(a3 + 32);
  if ( !v8 )
  {
LABEL_98:
    v7 = -2147483642;
    goto LABEL_99;
  }
  v9 = *(_QWORD *)(a3 + 32);
  v7 = -1073741675;
  while ( 1 )
  {
    if ( v8 - 1 >= v9
      || ULongLongMult(*(_QWORD *)(a3 + 24), v8 - 1, &pullResult) < 0
      || (v10 = (unsigned __int16 *)(*(_QWORD *)(a3 + 56) + pullResult), (unsigned __int64)v10 < *(_QWORD *)(a3 + 56))
      || !v10 )
    {
      AslLogCallPrintf(1LL);
      v7 = -1073741595;
      goto LABEL_140;
    }
    if ( *((_QWORD *)v10 + 3) )
      break;
    AslLogCallPrintf(1LL);
    v11 = *(_QWORD *)(a3 + 32);
    if ( !v11 )
      goto LABEL_96;
    if ( ULongLongMult(*(_QWORD *)(a3 + 24), v11 - 1, &v70) < 0
      || (v12 = *(_QWORD *)(a3 + 56) + v70, v12 < *(_QWORD *)(a3 + 56))
      || !v12 )
    {
LABEL_42:
      AslLogCallPrintf(1LL);
LABEL_96:
      AslLogCallPrintf(1LL);
      goto LABEL_97;
    }
    AslpPathWildcardFreeMatchNode(*(_QWORD *)(a3 + 56) + v70);
    v13 = *(_QWORD *)(a3 + 32);
    if ( !v13 )
      goto LABEL_97;
    if ( ULongLongMult(*(_QWORD *)(a3 + 24), v13 - 1, &v71) < 0 )
      goto LABEL_97;
    v15 = (char *)(*(_QWORD *)(a3 + 56) + v71);
    if ( (unsigned __int64)v15 < *(_QWORD *)(a3 + 56) )
      goto LABEL_97;
    v16 = *(_QWORD *)(a3 + 32) - v14 - 1;
    Size = v16;
    if ( v16 )
    {
      if ( ULongLongMult(v16, *(_QWORD *)(a3 + 24), &Size) < 0 )
        goto LABEL_97;
      if ( ULongLongMult(*(_QWORD *)(a3 + 24), v17, &v72) < 0 )
        goto LABEL_97;
      v18 = (const void *)(*(_QWORD *)(a3 + 56) + v72);
      if ( (unsigned __int64)v18 < *(_QWORD *)(a3 + 56) )
        goto LABEL_97;
      v16 = Size;
      memmove_0(v15, v18, Size);
    }
    memset_0(&v15[v16], 0, *(_QWORD *)(a3 + 24));
    if ( --*(_QWORD *)(a3 + 32) > 0x10uLL )
    {
      v19 = *(_QWORD *)(a3 + 40);
      if ( v19 * *(_QWORD *)(a3 + 24) >= 0x400 && *(_QWORD *)(a3 + 32) < v19 >> 2 )
      {
        v20 = v19 >> 1;
        if ( ULongLongMult(v19, *(_QWORD *)(a3 + 24), &Size) >= 0 && ULongLongMult(v20, *(_QWORD *)(a3 + 24), &v66) >= 0 )
        {
          v21 = *(void **)(a3 + 56);
          v22 = *(void **)(a3 + 16);
          if ( !v21 )
          {
            Heap = RtlAllocateHeap(v22, 0, v66);
            v24 = Heap;
            if ( Heap )
            {
              v25 = v66;
              goto LABEL_37;
            }
            goto LABEL_40;
          }
          v26 = v66;
          goto LABEL_39;
        }
      }
    }
LABEL_97:
    v8 = *(_QWORD *)(a3 + 32);
    v9 = v8;
    if ( !v8 )
      goto LABEL_98;
  }
  RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v10 + 2));
  v27 = ZwQueryDirectoryFile(
          *((HANDLE *)v10 + 3),
          0LL,
          0LL,
          0LL,
          &IoStatusBlock,
          FileInformation,
          0x268u,
          FileBothDirectoryInformation,
          1u,
          &DestinationString,
          0);
  if ( v27 < 0 )
  {
    if ( v27 != -2147483642 && v27 != -1073741809 )
    {
      AslLogCallPrintf(1LL);
      AslLogCallPrintf(2LL);
    }
    v28 = *(_QWORD *)(a3 + 32);
    if ( !v28 )
      goto LABEL_96;
    if ( ULongLongMult(*(_QWORD *)(a3 + 24), v28 - 1, &v73) < 0 )
      goto LABEL_42;
    v29 = *(_QWORD *)(a3 + 56) + v73;
    if ( v29 < *(_QWORD *)(a3 + 56) || !v29 )
      goto LABEL_42;
    AslpPathWildcardFreeMatchNode(*(_QWORD *)(a3 + 56) + v73);
    v30 = *(_QWORD *)(a3 + 32);
    if ( !v30 )
      goto LABEL_97;
    if ( ULongLongMult(*(_QWORD *)(a3 + 24), v30 - 1, &v74) < 0 )
      goto LABEL_97;
    v32 = (char *)(*(_QWORD *)(a3 + 56) + v74);
    if ( (unsigned __int64)v32 < *(_QWORD *)(a3 + 56) )
      goto LABEL_97;
    v33 = *(_QWORD *)(a3 + 32) - v31 - 1;
    Size = v33;
    if ( v33 )
    {
      if ( ULongLongMult(v33, *(_QWORD *)(a3 + 24), &Size) < 0 )
        goto LABEL_97;
      if ( ULongLongMult(*(_QWORD *)(a3 + 24), v34, &v75) < 0 )
        goto LABEL_97;
      v35 = (const void *)(*(_QWORD *)(a3 + 56) + v75);
      if ( (unsigned __int64)v35 < *(_QWORD *)(a3 + 56) )
        goto LABEL_97;
      v33 = Size;
      memmove_0(v32, v35, Size);
    }
    memset_0(&v32[v33], 0, *(_QWORD *)(a3 + 24));
    if ( --*(_QWORD *)(a3 + 32) > 0x10uLL )
    {
      v36 = *(_QWORD *)(a3 + 40);
      if ( v36 * *(_QWORD *)(a3 + 24) >= 0x400 && *(_QWORD *)(a3 + 32) < v36 >> 2 )
      {
        v20 = v36 >> 1;
        if ( ULongLongMult(v36, *(_QWORD *)(a3 + 24), &Size) >= 0 && ULongLongMult(v20, *(_QWORD *)(a3 + 24), &v67) >= 0 )
        {
          v21 = *(void **)(a3 + 56);
          v22 = *(void **)(a3 + 16);
          if ( !v21 )
          {
            Heap = RtlAllocateHeap(v22, 0, v67);
            v24 = Heap;
            if ( Heap )
            {
              v25 = v67;
LABEL_37:
              memset_0(Heap, 0, v25);
            }
LABEL_40:
            if ( v24 )
            {
              *(_QWORD *)(a3 + 56) = v24;
              *(_QWORD *)(a3 + 40) = v20;
            }
            goto LABEL_97;
          }
          v26 = v67;
LABEL_39:
          v24 = RtlReAllocateHeap(v22, 0, v21, v26);
          goto LABEL_40;
        }
      }
    }
    goto LABEL_97;
  }
  if ( *((_DWORD *)FileInformation + 15) == 4 )
  {
    v37 = (__int64)(FileInformation + 94);
    if ( *((_WORD *)FileInformation + 47) != 46 )
      goto LABEL_72;
    if ( *((_WORD *)FileInformation + 48) == 46 )
      goto LABEL_97;
    goto LABEL_71;
  }
  if ( *((_DWORD *)FileInformation + 15) != 2 )
  {
LABEL_71:
    v37 = (__int64)(FileInformation + 94);
    goto LABEL_72;
  }
  v37 = (__int64)(FileInformation + 94);
  if ( *((_WORD *)FileInformation + 47) == 46 )
    goto LABEL_97;
LABEL_72:
  matched = AslpPathWildcardAllocMatchNode(
              (unsigned int)&v77,
              (_DWORD)v10,
              *((_QWORD *)v10 + 2),
              (*((_DWORD *)FileInformation + 14) >> 4) & 1,
              v37,
              *((_WORD *)FileInformation + 30));
  if ( matched != -1073741197 )
  {
    if ( matched == -1073741565 || matched == -1073741638 )
      goto LABEL_97;
    if ( matched < 0 )
      goto LABEL_96;
    v39 = *(_QWORD *)(a3 + 32);
    if ( v39 >= *(_QWORD *)(a3 + 40) )
    {
      v40 = v39 + 1;
      if ( v39 + 1 <= *(_QWORD *)(a3 + 40) )
      {
        v7 = -1073741811;
        goto LABEL_140;
      }
      v41 = *(_QWORD *)(a3 + 48) - 1LL;
      if ( v41 + v40 < v40 )
        goto LABEL_140;
      v42 = (v41 + v40) & ~v41;
      if ( ULongLongMult(*(_QWORD *)(a3 + 40), *(_QWORD *)(a3 + 24), &Size) < 0
        || ULongLongMult(v42, *(_QWORD *)(a3 + 24), &v68) < 0 )
      {
        goto LABEL_140;
      }
      v43 = *(void **)(a3 + 56);
      v44 = *(void **)(a3 + 16);
      if ( v43 )
      {
        v46 = RtlReAllocateHeap(v44, 0, v43, v68);
      }
      else
      {
        v45 = RtlAllocateHeap(v44, 0, v68);
        v46 = v45;
        if ( v45 )
          memset_0(v45, 0, v68);
      }
      if ( !v46 )
      {
        v7 = -1073741801;
        goto LABEL_140;
      }
      *(_QWORD *)(a3 + 56) = v46;
      *(_QWORD *)(a3 + 40) = v42;
    }
    if ( ULongLongMult(*(_QWORD *)(a3 + 24), v39, &v76) < 0 )
      goto LABEL_140;
    v47 = (_OWORD *)(*(_QWORD *)(a3 + 56) + v76);
    if ( (unsigned __int64)v47 < *(_QWORD *)(a3 + 56) )
      goto LABEL_140;
    *v47 = v77;
    v47[1] = v78;
    ++*(_QWORD *)(a3 + 32);
    goto LABEL_97;
  }
  if ( (int)RtlUShortAdd(*v10, *((_WORD *)FileInformation + 30), (__int16 *)&v63) < 0
    || (int)RtlUShortAdd(v63, 2, (__int16 *)&v63) < 0 )
  {
    goto LABEL_96;
  }
  Path.ByteBuffer.StaticBuffer = (PUCHAR)&Path.ByteBuffer.ReservedForAllocatedSize;
  p_ReservedForAllocatedSize = (WCHAR *)&Path.ByteBuffer.ReservedForAllocatedSize;
  v51 = v48 + v63;
  Path.ByteBuffer.Buffer = (PUCHAR)&Path.ByteBuffer.ReservedForAllocatedSize;
  Path.ByteBuffer.StaticSize = v48;
  LOWORD(Path.ByteBuffer.ReservedForAllocatedSize) = 0;
  Path.String.Buffer = (PWSTR)&Path.ByteBuffer.ReservedForAllocatedSize;
  v52 = v48;
  Path.ByteBuffer.Size = v48;
  *(_DWORD *)&Path.String.Length = 0x20000;
  if ( v51 > 0xFFFE )
  {
    v7 = -1073741562;
    goto LABEL_140;
  }
  if ( v51 > v48 )
  {
    if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v51) < 0 )
    {
      v7 = -1073741801;
      goto LABEL_140;
    }
    v52 = Path.ByteBuffer.Size;
    p_ReservedForAllocatedSize = (WCHAR *)Path.ByteBuffer.Buffer;
  }
  Length = 0;
  Path.String.MaximumLength = Path.ByteBuffer.Size;
  Path.String.Buffer = p_ReservedForAllocatedSize;
  Path.String.Length = 0;
  v54 = *v10 + 2LL;
  if ( v54 > 0xFFFE )
  {
    v7 = -1073741562;
    goto LABEL_140;
  }
  if ( v54 > v52 )
  {
    if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v54) < 0 )
    {
      v7 = -1073741801;
      goto LABEL_140;
    }
    p_ReservedForAllocatedSize = (WCHAR *)Path.ByteBuffer.Buffer;
    Length = Path.String.Length;
  }
  Path.String.Buffer = p_ReservedForAllocatedSize;
  memmove_0(&p_ReservedForAllocatedSize[(unsigned __int64)Length >> 1], *((const void **)v10 + 1), *v10);
  Path.String.MaximumLength = Path.String.Length + *v10 + 2;
  Path.String.Length += *v10;
  Path.String.Buffer[(unsigned __int64)Path.String.Length >> 1] = 0;
  if ( *(_WORD *)(*((_QWORD *)v10 + 1) + 2 * ((unsigned __int64)*v10 >> 1) - 2) != 92 )
  {
    v55 = Path.String.Length;
    v56 = (unsigned int)Path.String.Length + 2 + 2LL;
    if ( v56 > 0xFFFE )
    {
      v7 = -1073741562;
      goto LABEL_140;
    }
    if ( v56 > Path.ByteBuffer.Size )
    {
      if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v56) < 0 )
      {
        v7 = -1073741801;
        goto LABEL_140;
      }
      v55 = Path.String.Length;
    }
    Path.String.Buffer = (PWSTR)Path.ByteBuffer.Buffer;
    *(_WORD *)&Path.ByteBuffer.Buffer[2 * ((unsigned __int64)v55 >> 1)] = asc_1800C6960[0];
    v57 = Path.String.Length + 4;
    Path.String.Length += 2;
    Path.String.MaximumLength = v57;
    Path.String.Buffer[(unsigned __int64)Path.String.Length >> 1] = 0;
  }
  v58 = Path.String.Length;
  Buffer = (PWSTR)(FileInformation + 94);
  DestinationString.Buffer = (PWSTR)(FileInformation + 94);
  DestinationString.Length = *((_WORD *)FileInformation + 30);
  v60 = DestinationString.Length;
  DestinationString.MaximumLength = *((_WORD *)FileInformation + 30);
  v61 = Path.String.Length + (unsigned int)DestinationString.Length + 2LL;
  if ( v61 > 0xFFFE )
  {
    v7 = -1073741562;
    goto LABEL_140;
  }
  if ( v61 > Path.ByteBuffer.Size )
  {
    if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v61) < 0 )
    {
      v7 = -1073741801;
      goto LABEL_140;
    }
    Buffer = DestinationString.Buffer;
    v60 = DestinationString.Length;
    v58 = Path.String.Length;
  }
  Path.String.Buffer = (PWSTR)Path.ByteBuffer.Buffer;
  memmove_0(&Path.ByteBuffer.Buffer[2 * ((unsigned __int64)v58 >> 1)], Buffer, v60);
  v62 = (unsigned __int16)(Path.String.Length + DestinationString.Length);
  Path.String.Length = v62;
  Path.String.MaximumLength = v62 + 2;
  Path.String.Buffer[v62 >> 1] = 0;
  if ( !*(_DWORD *)a3 || (v7 = RtlNtPathNameToDosPathName(0, &Path, 0LL, 0LL), v7 >= 0) )
  {
    v7 = RtlStringCbCopyNW(a1, 0x208uLL, (__int64)Path.String.Buffer, Path.String.Length);
    if ( v7 >= 0 )
    {
      v7 = 0;
      goto LABEL_99;
    }
  }
LABEL_140:
  AslLogCallPrintf(1LL);
LABEL_99:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, FileInformation);
LABEL_100:
  StaticBuffer = Path.ByteBuffer.StaticBuffer;
  if ( Path.ByteBuffer.Buffer && Path.ByteBuffer.Buffer != Path.ByteBuffer.StaticBuffer )
  {
    UnicodeString.Buffer = (PWSTR)Path.ByteBuffer.Buffer;
    RtlFreeUnicodeString(&UnicodeString);
    StaticBuffer = Path.ByteBuffer.StaticBuffer;
  }
  if ( StaticBuffer )
    *(_WORD *)StaticBuffer = 0;
  return (unsigned int)v7;
}
