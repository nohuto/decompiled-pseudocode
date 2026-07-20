/*
 * XREFs of SmpOpenKnownDllsHandles @ 0x140001230
 * Callers:
 *     SmpInitializeKnownDlls @ 0x140008C00 (SmpInitializeKnownDlls.c)
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpExpandKnownDllsPath @ 0x1400015A8 (SmpExpandKnownDllsPath.c)
 */

__int64 __fastcall SmpOpenKnownDllsHandles(
        struct _UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        int a3,
        void **a4,
        void *FileHandle)
{
  _QWORD *v5; // r15
  NTSTATUS v9; // ebx
  signed __int32 v10; // edx
  __int64 v11; // rax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  void *SymbolicLinkHandle; // [rsp+30h] [rbp-51h] BYREF
  struct _UNICODE_STRING Name; // [rsp+38h] [rbp-49h] BYREF
  PVOID BaseAddress[2]; // [rsp+48h] [rbp-39h] BYREF
  int v18; // [rsp+58h] [rbp-29h] BYREF
  const wchar_t *v19; // [rsp+60h] [rbp-21h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-9h] BYREF
  void *DirectoryHandle; // [rsp+F8h] [rbp+77h] BYREF

  v5 = FileHandle;
  *a4 = 0LL;
  DirectoryHandle = 0LL;
  SymbolicLinkHandle = 0LL;
  v19 = L"KnownDllPath";
  *v5 = 0LL;
  v18 = 1703960;
  Name = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  v9 = SmpExpandKnownDllsPath(a2, &Name);
  if ( v9 < 0 )
  {
    Name.Buffer = 0LL;
    v10 = _InterlockedIncrement(SmpGlobalLog) % 64;
    v11 = 2LL * v10;
    SmpGlobalLog[4 * v10 + 2] = 3822;
LABEL_3:
    SmpGlobalLog[2 * v11 + 3] = v9;
    *(_QWORD *)&SmpGlobalLog[2 * v11 + 4] = a1;
    goto LABEL_17;
  }
  v9 = RtlDosPathNameToNtPathName_U_WithStatus(Name.Buffer, BaseAddress, 0LL, 0LL);
  if ( v9 < 0 )
  {
    BaseAddress[1] = 0LL;
    v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v11 + 2] = 3844;
    goto LABEL_3;
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v12 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  v9 = v12;
  if ( v12 >= 0 )
  {
    ObjectAttributes.SecurityDescriptor = SmpKnownDllsDirSecurityDescriptor;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 208;
    ObjectAttributes.ObjectName = a1;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v13 = NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
    v9 = v13;
    if ( v13 != 0x40000000 )
    {
      if ( v13 < 0 )
      {
        DirectoryHandle = 0LL;
        v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
        SmpGlobalLog[2 * v11 + 2] = 3919;
        goto LABEL_3;
      }
      ObjectAttributes.RootDirectory = DirectoryHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
      ObjectAttributes.SecurityDescriptor = SmpKnownDllsSymLinkSecurityDescriptor;
      ObjectAttributes.Attributes = 80;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v9 = NtCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, &Name);
      if ( v9 < 0 )
      {
        SymbolicLinkHandle = 0LL;
        v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
        SmpGlobalLog[2 * v11 + 2] = 3946;
        goto LABEL_3;
      }
    }
    *a4 = DirectoryHandle;
    *v5 = FileHandle;
    DirectoryHandle = 0LL;
  }
  else
  {
    FileHandle = 0LL;
    if ( v12 != -1073741772 || a3 )
    {
      v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v11 + 2] = 3880;
      goto LABEL_3;
    }
  }
  v9 = 0;
LABEL_17:
  if ( BaseAddress[1] )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress[1]);
  if ( Name.Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Name.Buffer);
  if ( SymbolicLinkHandle )
    NtClose(SymbolicLinkHandle);
  if ( DirectoryHandle )
    NtClose(DirectoryHandle);
  return (unsigned int)v9;
}
