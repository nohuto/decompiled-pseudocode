/*
 * XREFs of SmpClearTemporaryFiles @ 0x140018FE8
 * Callers:
 *     SmpProcessFileRenames @ 0x14000B13C (SmpProcessFileRenames.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004384 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     SmpForceDeleteTargetFile @ 0x140019708 (SmpForceDeleteTargetFile.c)
 */

char SmpClearTemporaryFiles()
{
  char *Heap; // rbx
  NTSTATUS i; // eax
  _DWORD *v2; // rdi
  __int64 v3; // rdx
  char result; // al
  void *FileHandle; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-88h] BYREF
  struct _UNICODE_STRING v8; // [rsp+90h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  wchar_t pszDest[264]; // [rsp+D8h] [rbp-30h] BYREF

  FileHandle = 0LL;
  Heap = 0LL;
  ObjectAttributes.ObjectName = &SmpTempFilesDir;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x4021u) >= 0 )
  {
    Heap = (char *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, 0x8A8uLL);
    if ( Heap )
    {
      RtlInitUnicodeString(&DestinationString, L"SMSS-PFRO*.tmp");
      for ( i = NtQueryDirectoryFile(
                  FileHandle,
                  0LL,
                  0LL,
                  0LL,
                  &IoStatusBlock,
                  Heap,
                  0x8A8u,
                  FileNamesInformation,
                  0,
                  &DestinationString,
                  1u);
            i >= 0;
            i = NtQueryDirectoryFile(
                  FileHandle,
                  0LL,
                  0LL,
                  0LL,
                  &IoStatusBlock,
                  Heap,
                  0x8A8u,
                  FileNamesInformation,
                  0,
                  &DestinationString,
                  0) )
      {
        v2 = Heap;
        if ( Heap < Heap + 2216 )
        {
          do
          {
            if ( RtlStringCbPrintfW(pszDest, 0x20AuLL, L"%s\\%s", SmpTempFilesDir.Buffer, v2 + 3) >= 0 )
            {
              RtlInitUnicodeString(&v8, pszDest);
              LOBYTE(v3) = 1;
              SmpForceDeleteTargetFile(&v8, v3);
            }
            if ( !*v2 )
              break;
            v2 = (_DWORD *)((char *)v2 + (unsigned int)*v2);
          }
          while ( v2 < (_DWORD *)Heap + 554 );
        }
      }
    }
  }
  result = RtlDeleteRegistryValue(2u, L"Session Manager", L"ClearTempFiles");
  if ( Heap )
    result = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
  if ( FileHandle )
    return NtClose(FileHandle);
  return result;
}
