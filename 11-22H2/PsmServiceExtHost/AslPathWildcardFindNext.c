/*
 * XREFs of AslPathWildcardFindNext @ 0x18009E5BC
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x180095CE0 (SdbpCheckMatchingWildcardFiles.c)
 *     AslPathWildcardFindFirst @ 0x18009DFEC (AslPathWildcardFindFirst.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memmove_0 @ 0x1800536EE (memmove_0.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ULongLongMult @ 0x180090010 (ULongLongMult.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     RtlStringCbCopyNW @ 0x1800998F4 (RtlStringCbCopyNW.c)
 *     RtlUShortAdd @ 0x1800999D0 (RtlUShortAdd.c)
 *     AslpPathWildcardAllocMatchNode @ 0x18009F534 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeMatchNode @ 0x18009F85C (AslpPathWildcardFreeMatchNode.c)
 */

__int64 __fastcall AslPathWildcardFindNext(_WORD *a1, __int64 a2, __int64 a3)
{
  char *FileInformation; // r13
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int16 *v10; // rbx
  __int64 v11; // rcx
  int v12; // ebx
  ULONGLONG v13; // rax
  __int64 v14; // r10
  __int64 v15; // r9
  char *v16; // rsi
  __int64 v17; // rbx
  ULONGLONG v18; // r10
  const void *v19; // rdx
  unsigned __int64 v20; // r8
  ULONGLONG v21; // rcx
  ULONGLONG v22; // rdx
  ULONGLONG v23; // rsi
  void *v24; // r8
  void *v25; // rcx
  PVOID Heap; // rax
  PVOID v27; // rbx
  size_t v28; // r8
  SIZE_T v29; // r9
  NTSTATUS v30; // eax
  __int64 v31; // rcx
  ULONGLONG v32; // rax
  __int64 v33; // r10
  __int64 v34; // r9
  char *v35; // rsi
  __int64 v36; // rbx
  ULONGLONG v37; // r10
  const void *v38; // rdx
  unsigned __int64 v39; // r8
  ULONGLONG v40; // rcx
  PWSTR Buffer; // rsi
  int matched; // eax
  ULONGLONG v43; // r14
  ULONGLONG v44; // rcx
  __int64 v45; // rsi
  ULONGLONG v46; // rsi
  void *v47; // r8
  void *v48; // rcx
  PVOID v49; // rax
  PVOID v50; // rbx
  int v51; // eax
  _OWORD *v52; // rdx
  SIZE_T v53; // r9
  PUCHAR StaticBuffer; // rax
  const char *v55; // r9
  int v56; // r8d
  WCHAR *p_ReservedForAllocatedSize; // rcx
  SIZE_T v58; // r8
  SIZE_T v59; // rdx
  USHORT Length; // r9
  SIZE_T v61; // r8
  USHORT v62; // cx
  unsigned __int64 v63; // r8
  USHORT v64; // ax
  USHORT v65; // r9
  USHORT v66; // dx
  unsigned __int64 v67; // r8
  PIO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v69; // [rsp+60h] [rbp-A0h] BYREF
  ULONGLONG Size; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  ULONGLONG v72; // [rsp+80h] [rbp-80h] BYREF
  ULONGLONG v73; // [rsp+88h] [rbp-78h] BYREF
  ULONGLONG v74; // [rsp+90h] [rbp-70h] BYREF
  ULONGLONG pullResult; // [rsp+98h] [rbp-68h] BYREF
  ULONGLONG v76; // [rsp+A0h] [rbp-60h] BYREF
  ULONGLONG v77; // [rsp+A8h] [rbp-58h] BYREF
  ULONGLONG v78; // [rsp+B0h] [rbp-50h] BYREF
  ULONGLONG v79; // [rsp+B8h] [rbp-48h] BYREF
  ULONGLONG v80; // [rsp+C0h] [rbp-40h] BYREF
  ULONGLONG v81; // [rsp+C8h] [rbp-38h] BYREF
  ULONGLONG v82; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v83; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v84; // [rsp+E8h] [rbp-18h]
  struct _IO_STATUS_BLOCK v85; // [rsp+F8h] [rbp-8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+108h] [rbp+8h] BYREF
  _RTL_UNICODE_STRING_BUFFER Path; // [rsp+118h] [rbp+18h] BYREF

  if ( a3 == -1 )
    return 2147483654LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  v69 = 0;
  v85 = 0LL;
  DestinationString = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  memset(&Path, 0, 56);
  FileInformation = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x268uLL);
  if ( !FileInformation )
  {
    v7 = -1073741801;
    goto LABEL_104;
  }
  v8 = *(_QWORD *)(a3 + 32);
  if ( !v8 )
  {
LABEL_102:
    v7 = -2147483642;
    goto LABEL_103;
  }
  v9 = *(_QWORD *)(a3 + 32);
  while ( 1 )
  {
    v10 = 0LL;
    if ( v8 - 1 < v9
      && (ULongLongMult(*(_QWORD *)(a3 + 24), v8 - 1, &pullResult) < 0
       || (v10 = (unsigned __int16 *)(*(_QWORD *)(a3 + 56) + pullResult), (unsigned __int64)v10 < *(_QWORD *)(a3 + 56)))
      || !v10 )
    {
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpPathWildcardPeekNode",
        2083,
        (unsigned int)"RtlArrayGet failed to get the next node");
      v51 = -1073741595;
      v55 = "AslpPathWildcardPeekNode failed [%x]";
      v7 = -1073741595;
      v56 = 2502;
      goto LABEL_150;
    }
    if ( !*((_QWORD *)v10 + 3) )
    {
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslPathWildcardFindNext",
        2507,
        (unsigned int)"Node on the stack with invalid handle.");
      v11 = *(_QWORD *)(a3 + 32);
      if ( !v11 )
        goto LABEL_17;
      if ( ULongLongMult(*(_QWORD *)(a3 + 24), v11 - 1, &v76) < 0
        || (v13 = *(_QWORD *)(a3 + 56) + v76, v13 < *(_QWORD *)(a3 + 56))
        || !v13 )
      {
LABEL_21:
        v12 = -1073741595;
        AslLogCallPrintf(
          1LL,
          (unsigned int)"AslpPathWildcardPeekNode",
          2083,
          (unsigned int)"RtlArrayGet failed to get the next node");
        goto LABEL_22;
      }
      AslpPathWildcardFreeMatchNode(*(_QWORD *)(a3 + 56) + v76);
      v14 = *(_QWORD *)(a3 + 32);
      if ( !v14 )
        goto LABEL_101;
      if ( ULongLongMult(*(_QWORD *)(a3 + 24), v14 - 1, &v77) < 0 )
        goto LABEL_101;
      v16 = (char *)(*(_QWORD *)(a3 + 56) + v77);
      if ( (unsigned __int64)v16 < *(_QWORD *)(a3 + 56) )
        goto LABEL_101;
      v17 = *(_QWORD *)(a3 + 32) - v15 - 1;
      Size = v17;
      if ( v17 )
      {
        if ( ULongLongMult(v17, *(_QWORD *)(a3 + 24), &Size) < 0 )
          goto LABEL_101;
        if ( ULongLongMult(*(_QWORD *)(a3 + 24), v18, &v78) < 0 )
          goto LABEL_101;
        v19 = (const void *)(*(_QWORD *)(a3 + 56) + v78);
        if ( (unsigned __int64)v19 < *(_QWORD *)(a3 + 56) )
          goto LABEL_101;
        v17 = Size;
        memmove_0(v16, v19, Size);
      }
      memset_0(&v16[v17], 0, *(_QWORD *)(a3 + 24));
      v20 = *(_QWORD *)(a3 + 32) - 1LL;
      *(_QWORD *)(a3 + 32) = v20;
      if ( v20 > 0x10 )
      {
        v21 = *(_QWORD *)(a3 + 40);
        v22 = *(_QWORD *)(a3 + 24);
        if ( v22 * v21 >= 0x400 && v20 < v21 >> 2 )
        {
          v23 = v21 >> 1;
          if ( ULongLongMult(v21, v22, &Size) >= 0 && ULongLongMult(v23, *(_QWORD *)(a3 + 24), &v72) >= 0 )
          {
            v24 = *(void **)(a3 + 56);
            v25 = *(void **)(a3 + 16);
            if ( !v24 )
            {
              Heap = RtlAllocateHeap(v25, 0, v72);
              v27 = Heap;
              if ( Heap )
              {
                v28 = v72;
                goto LABEL_39;
              }
              goto LABEL_42;
            }
            v29 = v72;
            goto LABEL_41;
          }
        }
      }
      goto LABEL_101;
    }
    RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v10 + 2));
    v30 = ZwQueryDirectoryFile(
            *((HANDLE *)v10 + 3),
            0LL,
            0LL,
            0LL,
            &v85,
            FileInformation,
            0x268u,
            FileBothDirectoryInformation,
            1u,
            &DestinationString,
            0);
    if ( v30 >= 0 )
      break;
    if ( v30 != -2147483642 && v30 != -1073741809 )
    {
      LODWORD(IoStatusBlock) = v30;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslPathWildcardFindNext",
        2531,
        (unsigned int)"NtQueryDirectoryFile failed to query next file [%x]",
        IoStatusBlock);
      AslLogCallPrintf(
        2LL,
        (unsigned int)"AslPathWildcardFindNext",
        2532,
        (unsigned int)"FilePath: '%ws'  Pattern: '%ws'",
        *((_QWORD *)v10 + 1),
        DestinationString.Buffer);
    }
    v31 = *(_QWORD *)(a3 + 32);
    if ( !v31 )
    {
LABEL_17:
      v12 = -2147483622;
LABEL_22:
      LODWORD(IoStatusBlock) = v12;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpPathWildcardPopNode",
        2110,
        (unsigned int)"AslpPathWildcardPeekNode failed [%x]",
        IoStatusBlock);
      goto LABEL_101;
    }
    if ( ULongLongMult(*(_QWORD *)(a3 + 24), v31 - 1, &v79) < 0 )
      goto LABEL_21;
    v32 = *(_QWORD *)(a3 + 56) + v79;
    if ( v32 < *(_QWORD *)(a3 + 56) || !v32 )
      goto LABEL_21;
    AslpPathWildcardFreeMatchNode(*(_QWORD *)(a3 + 56) + v79);
    v33 = *(_QWORD *)(a3 + 32);
    if ( !v33 )
      goto LABEL_101;
    if ( ULongLongMult(*(_QWORD *)(a3 + 24), v33 - 1, &v80) < 0 )
      goto LABEL_101;
    v35 = (char *)(*(_QWORD *)(a3 + 56) + v80);
    if ( (unsigned __int64)v35 < *(_QWORD *)(a3 + 56) )
      goto LABEL_101;
    v36 = *(_QWORD *)(a3 + 32) - v34 - 1;
    Size = v36;
    if ( v36 )
    {
      if ( ULongLongMult(v36, *(_QWORD *)(a3 + 24), &Size) < 0 )
        goto LABEL_101;
      if ( ULongLongMult(*(_QWORD *)(a3 + 24), v37, &v81) < 0 )
        goto LABEL_101;
      v38 = (const void *)(*(_QWORD *)(a3 + 56) + v81);
      if ( (unsigned __int64)v38 < *(_QWORD *)(a3 + 56) )
        goto LABEL_101;
      v36 = Size;
      memmove_0(v35, v38, Size);
    }
    memset_0(&v35[v36], 0, *(_QWORD *)(a3 + 24));
    v39 = *(_QWORD *)(a3 + 32) - 1LL;
    *(_QWORD *)(a3 + 32) = v39;
    if ( v39 > 0x10 )
    {
      v40 = *(_QWORD *)(a3 + 40);
      if ( v40 * *(_QWORD *)(a3 + 24) >= 0x400 && v39 < v40 >> 2 )
      {
        v23 = v40 >> 1;
        if ( ULongLongMult(v40, *(_QWORD *)(a3 + 24), &Size) >= 0 && ULongLongMult(v23, *(_QWORD *)(a3 + 24), &v73) >= 0 )
        {
          v24 = *(void **)(a3 + 56);
          v25 = *(void **)(a3 + 16);
          if ( !v24 )
          {
            Heap = RtlAllocateHeap(v25, 0, v73);
            v27 = Heap;
            if ( Heap )
            {
              v28 = v73;
LABEL_39:
              memset_0(Heap, 0, v28);
            }
LABEL_42:
            if ( v27 )
            {
              *(_QWORD *)(a3 + 56) = v27;
              *(_QWORD *)(a3 + 40) = v23;
            }
            goto LABEL_101;
          }
          v29 = v73;
LABEL_41:
          v27 = RtlReAllocateHeap(v25, 0, v24, v29);
          goto LABEL_42;
        }
      }
    }
LABEL_101:
    v8 = *(_QWORD *)(a3 + 32);
    v9 = v8;
    if ( !v8 )
      goto LABEL_102;
  }
  Buffer = (PWSTR)(FileInformation + 94);
  if ( *((_DWORD *)FileInformation + 15) == 4 )
  {
    if ( *Buffer == 46 && *((_WORD *)FileInformation + 48) == 46 )
      goto LABEL_101;
  }
  else if ( *((_DWORD *)FileInformation + 15) == 2 && *Buffer == 46 )
  {
    goto LABEL_101;
  }
  matched = AslpPathWildcardAllocMatchNode(
              (unsigned int)&v83,
              (_DWORD)v10,
              *((_QWORD *)v10 + 2),
              (*((_DWORD *)FileInformation + 14) >> 4) & 1,
              (__int64)(FileInformation + 94),
              *((_WORD *)FileInformation + 30));
  if ( matched != -1073741197 )
  {
    if ( matched == -1073741565 || matched == -1073741638 )
      goto LABEL_101;
    if ( matched < 0 )
    {
      LODWORD(IoStatusBlock) = matched;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslPathWildcardFindNext",
        2589,
        (unsigned int)"AslpPathWildcardAllocMatchNode failed [%x]",
        IoStatusBlock);
      goto LABEL_101;
    }
    v43 = *(_QWORD *)(a3 + 32);
    if ( v43 < *(_QWORD *)(a3 + 40) )
    {
LABEL_94:
      if ( ULongLongMult(*(_QWORD *)(a3 + 24), v43, &v82) >= 0 )
      {
        v52 = (_OWORD *)(*(_QWORD *)(a3 + 56) + v82);
        if ( (unsigned __int64)v52 >= *(_QWORD *)(a3 + 56) )
        {
          *v52 = v83;
          v52[1] = v84;
          ++*(_QWORD *)(a3 + 32);
          goto LABEL_101;
        }
      }
LABEL_110:
      v51 = -1073741675;
      v7 = -1073741675;
    }
    else
    {
      v44 = v43 + 1;
      if ( v43 + 1 > *(_QWORD *)(a3 + 40) )
      {
        v45 = *(_QWORD *)(a3 + 48) - 1LL;
        if ( v45 + v44 < v44 )
          goto LABEL_110;
        v46 = (v45 + v44) & ~v45;
        if ( ULongLongMult(*(_QWORD *)(a3 + 40), *(_QWORD *)(a3 + 24), &Size) < 0
          || ULongLongMult(v46, *(_QWORD *)(a3 + 24), &v74) < 0 )
        {
          v7 = -1073741675;
        }
        else
        {
          v47 = *(void **)(a3 + 56);
          v48 = *(void **)(a3 + 16);
          if ( v47 )
          {
            v50 = RtlReAllocateHeap(v48, 0, v47, v74);
          }
          else
          {
            v49 = RtlAllocateHeap(v48, 0, v74);
            v50 = v49;
            if ( v49 )
              memset_0(v49, 0, v74);
          }
          if ( v50 )
          {
            *(_QWORD *)(a3 + 56) = v50;
            v7 = 0;
            *(_QWORD *)(a3 + 40) = v46;
          }
          else
          {
            v7 = -1073741801;
          }
        }
        if ( v7 )
        {
          v51 = v7;
          goto LABEL_111;
        }
        goto LABEL_94;
      }
      v7 = -1073741811;
      v51 = -1073741811;
    }
LABEL_111:
    v55 = "AslpPathWildcardPushNode failed [%x]";
    v56 = 2581;
    goto LABEL_150;
  }
  if ( (int)RtlUShortAdd(*v10, *((_WORD *)FileInformation + 30), (__int16 *)&v69) < 0
    || (int)RtlUShortAdd(v69, 2, (__int16 *)&v69) < 0 )
  {
    LODWORD(IoStatusBlock) = -1073741675;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslPathWildcardFindNext",
      2633,
      (unsigned int)"Failed to compute the path length [%x]",
      IoStatusBlock);
    goto LABEL_101;
  }
  Path.ByteBuffer.StaticBuffer = (PUCHAR)&Path.ByteBuffer.ReservedForAllocatedSize;
  p_ReservedForAllocatedSize = (WCHAR *)&Path.ByteBuffer.ReservedForAllocatedSize;
  v58 = v53 + v69;
  Path.ByteBuffer.Buffer = (PUCHAR)&Path.ByteBuffer.ReservedForAllocatedSize;
  Path.ByteBuffer.StaticSize = v53;
  Path.String.Buffer = (PWSTR)&Path.ByteBuffer.ReservedForAllocatedSize;
  v59 = v53;
  Path.ByteBuffer.Size = v53;
  LOWORD(Path.ByteBuffer.ReservedForAllocatedSize) = 0;
  *(_DWORD *)&Path.String.Length = 0x20000;
  if ( v58 > 0xFFFE )
  {
    v7 = -1073741562;
LABEL_118:
    LODWORD(IoStatusBlock) = v7;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslPathWildcardFindNext",
      2642,
      (unsigned int)"RtlEnsureUnicodeStringBufferSizeBytes failed [%x]",
      IoStatusBlock);
    goto LABEL_103;
  }
  if ( v58 > v53 )
  {
    if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v58) < 0 )
    {
      v7 = -1073741801;
      goto LABEL_118;
    }
    v59 = Path.ByteBuffer.Size;
    p_ReservedForAllocatedSize = (WCHAR *)Path.ByteBuffer.Buffer;
  }
  Length = 0;
  Path.String.MaximumLength = Path.ByteBuffer.Size;
  Path.String.Buffer = p_ReservedForAllocatedSize;
  Path.String.Length = 0;
  v61 = *v10 + 2LL;
  if ( v61 > 0xFFFE )
  {
    v7 = -1073741562;
LABEL_125:
    LODWORD(IoStatusBlock) = v7;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslPathWildcardFindNext",
      2652,
      (unsigned int)"RtlAssignUnicodeStringBuffer failed [%x]",
      IoStatusBlock);
    goto LABEL_103;
  }
  if ( v61 > v59 )
  {
    if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v61) < 0 )
    {
      v7 = -1073741801;
      goto LABEL_125;
    }
    p_ReservedForAllocatedSize = (WCHAR *)Path.ByteBuffer.Buffer;
    Length = Path.String.Length;
  }
  Path.String.Buffer = p_ReservedForAllocatedSize;
  memmove_0(&p_ReservedForAllocatedSize[(unsigned __int64)Length >> 1], *((const void **)v10 + 1), *v10);
  Path.String.MaximumLength = *v10 + Path.String.Length + 2;
  Path.String.Length += *v10;
  Path.String.Buffer[(unsigned __int64)Path.String.Length >> 1] = 0;
  if ( *(_WORD *)(*((_QWORD *)v10 + 1) + 2 * ((unsigned __int64)*v10 >> 1) - 2) != 92 )
  {
    v62 = Path.String.Length;
    v63 = (unsigned int)Path.String.Length + 2 + 2LL;
    if ( v63 > 0xFFFE )
    {
      v7 = -1073741562;
LABEL_133:
      LODWORD(IoStatusBlock) = v7;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslPathWildcardFindNext",
        2659,
        (unsigned int)"RtlAppendUnicodeStringBuffer failed [%x]",
        IoStatusBlock);
      goto LABEL_103;
    }
    if ( v63 > Path.ByteBuffer.Size )
    {
      if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v63) < 0 )
      {
        v7 = -1073741801;
        goto LABEL_133;
      }
      v62 = Path.String.Length;
    }
    Path.String.Buffer = (PWSTR)Path.ByteBuffer.Buffer;
    *(_WORD *)&Path.ByteBuffer.Buffer[2 * ((unsigned __int64)v62 >> 1)] = asc_1800C71D0[0];
    v64 = Path.String.Length + 4;
    Path.String.Length += 2;
    Path.String.MaximumLength = v64;
    Path.String.Buffer[(unsigned __int64)Path.String.Length >> 1] = 0;
  }
  v65 = Path.String.Length;
  DestinationString.Buffer = (PWSTR)(FileInformation + 94);
  DestinationString.Length = *((_WORD *)FileInformation + 30);
  v66 = DestinationString.Length;
  DestinationString.MaximumLength = *((_WORD *)FileInformation + 30);
  v67 = Path.String.Length + (unsigned int)DestinationString.Length + 2LL;
  if ( v67 > 0xFFFE )
  {
    v7 = -1073741562;
LABEL_141:
    LODWORD(IoStatusBlock) = v7;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslPathWildcardFindNext",
      2674,
      (unsigned int)"RtlAppendUnicodeStringBuffer failed [%x]",
      IoStatusBlock);
    goto LABEL_103;
  }
  if ( v67 > Path.ByteBuffer.Size )
  {
    if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v67) < 0 )
    {
      v7 = -1073741801;
      goto LABEL_141;
    }
    Buffer = DestinationString.Buffer;
    v66 = DestinationString.Length;
    v65 = Path.String.Length;
  }
  Path.String.Buffer = (PWSTR)Path.ByteBuffer.Buffer;
  memmove_0(&Path.ByteBuffer.Buffer[2 * ((unsigned __int64)v65 >> 1)], Buffer, v66);
  Path.String.Length += DestinationString.Length;
  Path.String.MaximumLength = Path.String.Length + 2;
  Path.String.Buffer[(unsigned __int64)Path.String.Length >> 1] = 0;
  if ( *(_DWORD *)a3 && (v51 = RtlNtPathNameToDosPathName(0, &Path, 0LL, 0LL), v7 = v51, v51 < 0) )
  {
    v55 = "RtlNtPathNameToDosPathName failed [%x]";
    v56 = 2685;
  }
  else
  {
    v51 = RtlStringCbCopyNW(a1, 0x208uLL, (__int64)Path.String.Buffer, Path.String.Length);
    v7 = v51;
    if ( v51 >= 0 )
    {
      v7 = 0;
      goto LABEL_103;
    }
    v55 = "RtlStringCbCopyNW failed [%x]";
    v56 = 2696;
  }
LABEL_150:
  LODWORD(IoStatusBlock) = v51;
  AslLogCallPrintf(1LL, (unsigned int)"AslPathWildcardFindNext", v56, (_DWORD)v55, IoStatusBlock);
LABEL_103:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, FileInformation);
LABEL_104:
  StaticBuffer = Path.ByteBuffer.StaticBuffer;
  if ( Path.ByteBuffer.Buffer && Path.ByteBuffer.Buffer != Path.ByteBuffer.StaticBuffer )
  {
    UnicodeString.Buffer = (PWSTR)Path.ByteBuffer.Buffer;
    RtlFreeUnicodeString(&UnicodeString);
    StaticBuffer = Path.ByteBuffer.StaticBuffer;
  }
  if ( StaticBuffer )
    *(_WORD *)StaticBuffer = 0;
  return v7;
}
