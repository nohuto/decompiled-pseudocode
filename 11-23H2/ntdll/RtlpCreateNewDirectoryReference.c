/*
 * XREFs of RtlpCreateNewDirectoryReference @ 0x18007BF90
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x18007BAE0 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007BE18 (RtlpReferenceCurrentDirectory.c)
 *     RtlpInitCurrentDir @ 0x18007BF24 (RtlpInitCurrentDir.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x18007C158 (RtlDosPathNameToRelativeNtPathName.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenFile @ 0x1800A1510 (NtOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A17D0 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlpCreateNewDirectoryReference(const void **a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rsi
  __int64 result; // rax
  int v7; // r15d
  NTSTATUS v8; // ebx
  _QWORD *Heap; // rax
  _QWORD *v10; // rbx
  int v11; // edx
  unsigned __int64 v12; // rdx
  char FsInformation[4]; // [rsp+40h] [rbp-29h] BYREF
  int v14; // [rsp+44h] [rbp-25h]
  char v15[8]; // [rsp+48h] [rbp-21h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp-19h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = a2;
  result = RtlDosPathNameToRelativeNtPathName(0, a2, (_DWORD)a1, 0, (__int64)v15, 0LL);
  if ( (int)result < 0 )
    return result;
  v7 = MEMORY[0x7FFE02DC];
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v8 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 8u, FileFsDeviceInformation);
  if ( v8 < 0 )
  {
LABEL_12:
    NtClose(FileHandle);
    return (unsigned int)v8;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v4 + 48);
  v10 = Heap;
  if ( !Heap )
  {
    v8 = -1073741801;
    goto LABEL_12;
  }
  v11 = v14;
  Heap[1] = FileHandle;
  Heap[4] = Heap + 6;
  *(_DWORD *)Heap = 1;
  *((_WORD *)Heap + 13) = v4;
  *((_DWORD *)Heap + 4) = v7;
  *((_DWORD *)Heap + 10) = v11;
  memmove(Heap + 6, a1[1], *(unsigned __int16 *)a1);
  *(_WORD *)(v10[4] + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
  *((_WORD *)v10 + 12) = *(_WORD *)a1;
  v12 = (unsigned __int64)*(unsigned __int16 *)a1 >> 1;
  if ( *((_WORD *)a1[1] + v12 - 1) != 92 )
  {
    if ( (unsigned __int64)*(unsigned __int16 *)a1 + 4 > *((unsigned __int16 *)v10 + 13) )
    {
      NtClose(FileHandle);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      return 3221225734LL;
    }
    *(_WORD *)(v10[4] + 2 * v12) = 92;
    *(_WORD *)(v10[4] + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 2) = 0;
    *((_WORD *)v10 + 12) += 2;
  }
  *a3 = v10;
  return 0LL;
}
