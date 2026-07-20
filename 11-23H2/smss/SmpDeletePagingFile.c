/*
 * XREFs of SmpDeletePagingFile @ 0x140016FE8
 * Callers:
 *     SmpSaveOldPageFiles @ 0x140006E98 (SmpSaveOldPageFiles.c)
 *     SmpCleanupStalePageFiles @ 0x140007060 (SmpCleanupStalePageFiles.c)
 *     SmpCreatePagefileOnVolume @ 0x14000C86C (SmpCreatePagefileOnVolume.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpDeletePagingFile(struct _UNICODE_STRING *a1)
{
  NTSTATUS v1; // edi
  __int64 v2; // rcx
  int v3; // r11d
  __int64 v4; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  char FileInformation; // [rsp+90h] [rbp+20h] BYREF
  void *FileHandle; // [rsp+98h] [rbp+28h] BYREF

  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = NtOpenFile(&FileHandle, 0x10000u, &ObjectAttributes, &IoStatusBlock, 7u, 0x40u);
  if ( v1 >= 0 )
  {
    FileInformation = 1;
    v1 = NtSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 1u, FileDispositionInformation);
    v3 = 4206;
    v4 = _InterlockedIncrement(SmpGlobalLog) % 64;
    if ( v1 < 0 )
      v3 = 4214;
    *((_DWORD *)&unk_14002C208 + 4 * v4) = v3;
    *((_DWORD *)&unk_14002C20C + 4 * v4) = v1;
    qword_14002C210[2 * v4] = 0LL;
    NtClose(FileHandle);
  }
  else
  {
    v2 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v2 + 2] = 4187;
    SmpGlobalLog[2 * v2 + 3] = v1;
    *(_QWORD *)&SmpGlobalLog[2 * v2 + 4] = 0LL;
  }
  return (unsigned int)v1;
}
