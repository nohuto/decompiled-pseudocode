/*
 * XREFs of RtlpMUIEnumerateFolder @ 0x1800FB648
 * Callers:
 *     RtlGetFileMUIPath @ 0x180009780 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800083B0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlReleaseRelativeName @ 0x18002E980 (RtlReleaseRelativeName.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlReAllocateHeap @ 0x180042320 (RtlReAllocateHeap.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenFile @ 0x18009F450 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x18009F490 (NtQueryDirectoryFile.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpMUIEnumerateFolder(__int64 a1, _QWORD *a2, __int64 *a3)
{
  char v4; // r15
  unsigned int v5; // r13d
  unsigned int *Heap; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  void *v9; // rax
  NTSTATUS v10; // r14d
  __int64 v11; // r12
  unsigned int *i; // r14
  bool v13; // zf
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rax
  int DirectoryFile; // eax
  HANDLE FileHandle; // [rsp+60h] [rbp-59h] BYREF
  __int128 v22; // [rsp+68h] [rbp-51h] BYREF
  __int128 v23; // [rsp+78h] [rbp-41h] BYREF
  void *v24; // [rsp+88h] [rbp-31h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-11h] BYREF
  unsigned int v27; // [rsp+120h] [rbp+67h]
  int v29; // [rsp+138h] [rbp+7Fh] BYREF

  v27 = 0;
  FileHandle = 0LL;
  v4 = 0;
  v5 = 0;
  Heap = 0LL;
  if ( !a1 )
    goto LABEL_45;
  if ( !a3 )
    return v4;
  if ( !a2 )
    goto LABEL_46;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(a1 + 2 * v7) );
  if ( v7 >= 0x104 )
    goto LABEL_46;
  *a3 = 0LL;
  if ( RtlDosPathNameToRelativeNtPathName_U(a1, (int)&v22, 0, (__int64)&v23) )
  {
    v8 = *((_QWORD *)&v22 + 1);
    if ( (_WORD)v23 )
    {
      v9 = v24;
      v22 = v23;
    }
    else
    {
      v9 = 0LL;
      v24 = 0LL;
    }
    ObjectAttributes.RootDirectory = v9;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x21u);
    RtlReleaseRelativeName((__int64)&v23);
    if ( v8 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    if ( v10 >= 0 )
    {
      if ( FileHandle )
      {
        Heap = (unsigned int *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 4096LL);
        if ( !Heap )
          goto LABEL_40;
        v11 = 0LL;
LABEL_36:
        DirectoryFile = NtQueryDirectoryFile();
        if ( DirectoryFile >= 0 )
        {
          if ( Heap[15] || *Heap )
          {
            for ( i = Heap; ; i = (unsigned int *)((char *)i + *i) )
            {
              v13 = (i[14] & 0x10) == 0;
              WORD1(v23) = *((_WORD *)i + 30);
              LOWORD(v23) = WORD1(v23);
              *((_QWORD *)&v23 + 1) = i + 16;
              if ( !v13 && RtlCultureNameToLCID((unsigned __int16 *)&v23, &v29) )
              {
                v14 = *a3;
                ++v11;
                if ( *a3 )
                {
                  v16 = v27;
                }
                else
                {
                  v15 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 520LL);
                  *a3 = v15;
                  v14 = v15;
                  if ( !v15 )
                    goto LABEL_40;
                  v16 = 0;
                  v5 = 520;
                  v27 = 0;
                }
                v17 = i[15];
                if ( (unsigned __int64)(v17 + v16) + 2 > v5 )
                {
                  if ( v17 > 0x208 )
                    v5 += v17 + 2;
                  else
                    v5 += 520;
                  v18 = RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v14, v5);
                  *a3 = v18;
                  if ( !v18 )
                  {
                    *a3 = v14;
                    goto LABEL_40;
                  }
                  v14 = v18;
                }
                memmove((void *)(v14 + v27), i + 16, i[15]);
                v27 += i[15] + 2;
              }
              if ( !*i )
              {
                memset_thunk_772440563353939046(Heap, 0, 0x1000uLL);
                goto LABEL_36;
              }
            }
          }
        }
        else if ( DirectoryFile != -2147483642 )
        {
          goto LABEL_40;
        }
        v4 = 1;
        *a2 = v11;
        goto LABEL_40;
      }
LABEL_46:
      if ( *a3 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a3);
        *a3 = 0LL;
      }
      return v4;
    }
  }
LABEL_40:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  if ( !v4 )
  {
LABEL_45:
    if ( !a3 )
      return v4;
    goto LABEL_46;
  }
  return v4;
}
