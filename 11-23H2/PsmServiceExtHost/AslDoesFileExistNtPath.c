/*
 * XREFs of AslDoesFileExistNtPath @ 0x180098480
 * Callers:
 *     AslPathWildcardFindFirst @ 0x18009DC7C (AslPathWildcardFindFirst.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslDoesFileExistNtPath(PCWSTR SourceString)
{
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+98h] [rbp+18h] BYREF

  v1 = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v2 >= 0 )
  {
    v1 = 1;
    ZwClose(FileHandle);
  }
  else if ( v2 == -1073741757 || v2 == -1073741790 )
  {
    return 1;
  }
  return v1;
}
