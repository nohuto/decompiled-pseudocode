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

char __fastcall RtlpMUIEnumerateFolder(const WCHAR *a1, _QWORD *a2, PVOID *a3)
{
  char v4; // r15
  unsigned int v5; // r13d
  _DWORD *Heap; // rdi
  unsigned __int64 v7; // rax
  wchar_t *Buffer; // rsi
  HANDLE ContainingDirectory; // rax
  NTSTATUS v10; // r14d
  __int64 v11; // r12
  NTSTATUS v12; // eax
  unsigned int *i; // r14
  bool v14; // zf
  char *v15; // rsi
  char *v16; // rax
  int v17; // eax
  unsigned int v18; // edx
  char *v19; // rax
  HANDLE FileHandle; // [rsp+60h] [rbp-59h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+68h] [rbp-51h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+78h] [rbp-41h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-21h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-11h] BYREF
  int v26; // [rsp+120h] [rbp+67h]
  DWORD Lcid; // [rsp+138h] [rbp+7Fh] BYREF

  v26 = 0;
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
  while ( a1[v7] );
  if ( v7 >= 0x104 )
    goto LABEL_46;
  *a3 = 0LL;
  if ( RtlDosPathNameToRelativeNtPathName_U(a1, &NtFileName, 0LL, &RelativeName) )
  {
    Buffer = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = RelativeName.ContainingDirectory;
      NtFileName = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
      RelativeName.ContainingDirectory = 0LL;
    }
    ObjectAttributes.RootDirectory = ContainingDirectory;
    ObjectAttributes.ObjectName = &NtFileName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x21u);
    RtlReleaseRelativeName(&RelativeName);
    if ( Buffer )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    if ( v10 >= 0 )
    {
      if ( FileHandle )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x1000uLL);
        if ( !Heap )
          goto LABEL_40;
        v11 = 0LL;
        v12 = NtQueryDirectoryFile(
                FileHandle,
                0LL,
                0LL,
                0LL,
                &IoStatusBlock,
                Heap,
                0x1000u,
                FileDirectoryInformation,
                0,
                0LL,
                1u);
LABEL_36:
        if ( v12 >= 0 )
        {
          if ( Heap[15] || *Heap )
          {
            for ( i = Heap; ; i = (unsigned int *)((char *)i + *i) )
            {
              v14 = (i[14] & 0x10) == 0;
              RelativeName.RelativeName.MaximumLength = *((_WORD *)i + 30);
              RelativeName.RelativeName.Length = RelativeName.RelativeName.MaximumLength;
              RelativeName.RelativeName.Buffer = (wchar_t *)(i + 16);
              if ( !v14 && RtlCultureNameToLCID(&RelativeName.RelativeName, &Lcid) )
              {
                v15 = (char *)*a3;
                ++v11;
                if ( *a3 )
                {
                  v17 = v26;
                }
                else
                {
                  v16 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
                  *a3 = v16;
                  v15 = v16;
                  if ( !v16 )
                    goto LABEL_40;
                  v17 = 0;
                  v5 = 520;
                  v26 = 0;
                }
                v18 = i[15];
                if ( (unsigned __int64)(v18 + v17) + 2 > v5 )
                {
                  if ( v18 > 0x208 )
                    v5 += v18 + 2;
                  else
                    v5 += 520;
                  v19 = (char *)RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v15, v5);
                  *a3 = v19;
                  if ( !v19 )
                  {
                    *a3 = v15;
                    goto LABEL_40;
                  }
                  v15 = v19;
                }
                memmove(&v15[v26], i + 16, i[15]);
                v26 += i[15] + 2;
              }
              if ( !*i )
              {
                memset_thunk_772440563353939046(Heap, 0, 0x1000uLL);
                v12 = NtQueryDirectoryFile(
                        FileHandle,
                        0LL,
                        0LL,
                        0LL,
                        &IoStatusBlock,
                        Heap,
                        0x1000u,
                        FileDirectoryInformation,
                        0,
                        0LL,
                        0);
                goto LABEL_36;
              }
            }
          }
        }
        else if ( v12 != -2147483642 )
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
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *a3);
        *a3 = 0LL;
      }
      return v4;
    }
  }
LABEL_40:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( !v4 )
  {
LABEL_45:
    if ( !a3 )
      return v4;
    goto LABEL_46;
  }
  return v4;
}
