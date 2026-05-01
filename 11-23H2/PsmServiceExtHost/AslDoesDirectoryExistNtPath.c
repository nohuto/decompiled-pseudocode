/*
 * XREFs of AslDoesDirectoryExistNtPath @ 0x180098338
 * Callers:
 *     SdbpCheckMatchingDir @ 0x1800948A0 (SdbpCheckMatchingDir.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslDoesDirectoryExistNtPath(PCWSTR SourceString)
{
  unsigned int v1; // esi
  int v3; // eax
  NTSTATUS v4; // eax
  ULONG OpenOptions; // [rsp+28h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+90h] [rbp+10h] BYREF

  v1 = 0;
  DestinationString.Buffer = 0LL;
  if ( _wcsnicmp(SourceString, L"\\SystemRoot\\", 0xCuLL) )
  {
    v3 = RtlDosPathNameToNtPathName_U_WithStatus(SourceString, &DestinationString, 0LL, 0LL);
    if ( v3 < 0 )
    {
      OpenOptions = v3;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslDoesDirectoryExistNtPath",
        478,
        (unsigned int)"RtlDosPathNameToNtPathName_U_WithStatus failed for %S [%x]",
        SourceString,
        OpenOptions);
      goto LABEL_10;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 1u);
  if ( v4 >= 0 )
  {
    ZwClose(FileHandle);
LABEL_9:
    v1 = 1;
    goto LABEL_10;
  }
  if ( v4 == -1073741790 || v4 == -1073741757 )
    goto LABEL_9;
LABEL_10:
  if ( DestinationString.Buffer != SourceString && DestinationString.Buffer )
    RtlFreeUnicodeString(&DestinationString);
  return v1;
}
