/*
 * XREFs of SmpDeleteFile @ 0x1400194A8
 * Callers:
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x140011DE0 (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpGetDumpDestination @ 0x140017DF4 (SmpGetDumpDestination.c)
 * Callees:
 *     SmpSetTargetAttributes @ 0x14001A3EC (SmpSetTargetAttributes.c)
 */

__int64 __fastcall SmpDeleteFile(struct _UNICODE_STRING *a1)
{
  NTSTATUS v2; // ebx
  signed __int32 v3; // ecx
  __int64 v4; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK v7; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char FileInformation; // [rsp+90h] [rbp+10h] BYREF
  void *FileHandle; // [rsp+98h] [rbp+18h] BYREF

  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = NtOpenFile(&FileHandle, 0x10100u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4040u);
  if ( v2 < 0 )
  {
    v3 = _InterlockedIncrement(SmpGlobalLog) % 64;
    v4 = 2LL * v3;
    SmpGlobalLog[4 * v3 + 2] = 11843;
LABEL_3:
    SmpGlobalLog[2 * v4 + 3] = v2;
    *(_QWORD *)&SmpGlobalLog[2 * v4 + 4] = a1;
    goto LABEL_7;
  }
  v2 = SmpSetTargetAttributes(FileHandle, 128LL);
  if ( v2 < 0 )
  {
    v4 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v4 + 2] = 11861;
    goto LABEL_3;
  }
  FileInformation = 1;
  v2 = NtSetInformationFile(FileHandle, &v7, &FileInformation, 1u, FileDispositionInformation);
LABEL_7:
  if ( FileHandle )
    NtClose(FileHandle);
  return (unsigned int)v2;
}
