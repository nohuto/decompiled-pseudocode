/*
 * XREFs of RtlpMUIEnumerateFolder @ 0x18008F6D4
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800634A0 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180024530 (RtlReAllocateHeap.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlCultureNameToLCID @ 0x18004BE40 (RtlCultureNameToLCID.c)
 *     RtlReleaseRelativeName @ 0x180050860 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800676C0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenFile @ 0x1800A46D0 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x1800A4710 (NtQueryDirectoryFile.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
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
  int v12; // eax
  unsigned int *i; // rsi
  bool v14; // zf
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // edx
  __int64 v20; // rax
  int v21; // [rsp+40h] [rbp-79h]
  int v22; // [rsp+50h] [rbp-69h]
  HANDLE FileHandle; // [rsp+60h] [rbp-59h] BYREF
  __int128 v24; // [rsp+68h] [rbp-51h] BYREF
  __int128 v25; // [rsp+78h] [rbp-41h] BYREF
  void *v26; // [rsp+88h] [rbp-31h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-11h] BYREF
  unsigned int v29; // [rsp+120h] [rbp+67h]
  int v31; // [rsp+138h] [rbp+7Fh] BYREF

  v29 = 0;
  FileHandle = 0LL;
  v4 = 0;
  v5 = 0;
  Heap = 0LL;
  if ( !a1 )
    goto LABEL_48;
  if ( !a3 )
    return v4;
  if ( !a2 )
    goto LABEL_49;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(a1 + 2 * v7) );
  if ( v7 >= 0x104 )
    goto LABEL_49;
  *a3 = 0LL;
  if ( RtlDosPathNameToRelativeNtPathName_U(a1, (int)&v24, 0LL, (__int64)&v25) )
  {
    v8 = *((_QWORD *)&v24 + 1);
    if ( (_WORD)v25 )
    {
      v9 = v26;
      v24 = v25;
    }
    else
    {
      v9 = 0LL;
      v26 = 0LL;
    }
    ObjectAttributes.RootDirectory = v9;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x21u);
    RtlReleaseRelativeName((__int64)&v25);
    if ( v8 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    if ( v10 >= 0 )
    {
      if ( FileHandle )
      {
        Heap = (unsigned int *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 4096LL);
        if ( !Heap )
          goto LABEL_31;
        v11 = 0LL;
        LOBYTE(v22) = 1;
LABEL_16:
        LOBYTE(v21) = 0;
        v12 = NtQueryDirectoryFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Heap, 4096, 1, v21, 0LL, v22);
        if ( v12 < 0 )
        {
          if ( v12 != -2147483642 )
            goto LABEL_31;
        }
        else if ( Heap[15] || *Heap )
        {
          for ( i = Heap; ; i = (unsigned int *)((char *)i + *i) )
          {
            v14 = (i[14] & 0x10) == 0;
            WORD1(v25) = *((_WORD *)i + 30);
            LOWORD(v25) = WORD1(v25);
            *((_QWORD *)&v25 + 1) = i + 16;
            if ( !v14 && RtlCultureNameToLCID((unsigned __int16 *)&v25, &v31) )
            {
              v15 = *a3;
              ++v11;
              if ( *a3 )
              {
                v17 = v29;
              }
              else
              {
                v16 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 520LL);
                *a3 = v16;
                v15 = v16;
                if ( !v16 )
                  goto LABEL_31;
                v17 = 0;
                v5 = 520;
                v29 = 0;
              }
              v18 = i[15];
              if ( (unsigned __int64)(v18 + v17) + 2 > v5 )
              {
                if ( v18 > 0x208 )
                  v5 += v18 + 2;
                else
                  v5 += 520;
                v20 = RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8, v15, v5);
                *a3 = v20;
                if ( !v20 )
                {
                  *a3 = v15;
                  goto LABEL_31;
                }
                v18 = i[15];
                v15 = v20;
              }
              memmove((void *)(v15 + v29), i + 16, v18);
              v29 += i[15] + 2;
            }
            if ( !*i )
            {
              memset(Heap, 0, 0x1000uLL);
              LOBYTE(v22) = 0;
              goto LABEL_16;
            }
          }
        }
        v4 = 1;
        *a2 = v11;
        goto LABEL_31;
      }
LABEL_49:
      if ( *a3 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a3);
        *a3 = 0LL;
      }
      return v4;
    }
  }
LABEL_31:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  if ( !v4 )
  {
LABEL_48:
    if ( !a3 )
      return v4;
    goto LABEL_49;
  }
  return v4;
}
