/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x1800F91B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     NtWriteFile @ 0x1800A4170 (NtWriteFile.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwCreateFile @ 0x1800A4B10 (ZwCreateFile.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800F94F0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetBootStatusPath @ 0x1800F96C4 (RtlpGetBootStatusPath.c)
 */

NTSTATUS RtlCreateBootStatusDataFile(void)
{
  const WCHAR *v0; // rcx
  const WCHAR *v1; // rdx
  int v2; // ebx
  PVOID Heap; // rax
  void *v4; // rdi
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  char v9; // [rsp+E0h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+6Fh] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+F0h] [rbp+77h] BYREF
  PCWSTR SourceString; // [rsp+F8h] [rbp+7Fh] BYREF

  FileHandle = 0LL;
  SourceString = 0LL;
  v9 = 0;
  if ( v0 )
  {
    v1 = v0;
  }
  else
  {
    RtlpGetBootStatusPath(&SourceString, &v9);
    v1 = SourceString;
  }
  RtlInitUnicodeString(&DestinationString, v1);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ByteOffset.QuadPart = 67584LL;
  v2 = ZwCreateFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, &ByteOffset, 4u, 0, 2u, 0x8020u, 0LL, 0);
  if ( v2 >= 0 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10800uLL);
    v4 = Heap;
    if ( Heap )
    {
      memset(Heap, 254, 0x10800uLL);
      ByteOffset.QuadPart = 0LL;
      v2 = NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v4, 0x10800u, &ByteOffset, 0LL);
      if ( v2 >= 0 )
        v2 = RtlRestoreBootStatusDefaults(FileHandle);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    }
    else
    {
      v2 = -1073741801;
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( v9 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)SourceString);
  return v2;
}
