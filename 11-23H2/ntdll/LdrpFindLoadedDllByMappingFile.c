/*
 * XREFs of LdrpFindLoadedDllByMappingFile @ 0x18007DAEC
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x18002AECC (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByMapping @ 0x18002DBFC (LdrpFindLoadedDllByMapping.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A13B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x1800A1510 (NtOpenFile.c)
 *     NtCreateSection @ 0x1800A17F0 (NtCreateSection.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingFile(UNICODE_STRING *a1, volatile signed __int32 **a2, _DWORD *a3)
{
  ULONG v4; // eax
  NTSTATUS v6; // eax
  int LoadedDllByMapping; // ebx
  unsigned __int64 v9; // [rsp+50h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-11h] BYREF
  _DWORD *v11; // [rsp+60h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int64 v14; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  v4 = 64;
  if ( !LdrpUseImpersonatedDeviceMap )
    v4 = 2112;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = v4;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  LoadedDllByMapping = v6;
  if ( v6 >= 0
    || v6 != -1073741809
    && (LoadedDllByMapping = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u),
        LoadedDllByMapping >= 0) )
  {
    LoadedDllByMapping = NtCreateSection(&Handle, 4LL, 0LL, 0LL, 2, 285212672, FileHandle);
    if ( LoadedDllByMapping >= 0 )
    {
      v14 = 0LL;
      v9 = 0LL;
      LoadedDllByMapping = ZwMapViewOfSection(Handle, -1LL, &v14, 0LL, 0LL, 0LL, &v9, 1, 0, 2);
      if ( LoadedDllByMapping >= 0 )
      {
        LoadedDllByMapping = RtlImageNtHeaderEx(0, v14, v9, &v11);
        if ( LoadedDllByMapping >= 0 )
          LoadedDllByMapping = LdrpFindLoadedDllByMapping(v14, v11, a2, a3);
        NtUnmapViewOfSection(-1LL);
      }
      NtClose(Handle);
    }
    NtClose(FileHandle);
  }
  return (unsigned int)LoadedDllByMapping;
}
