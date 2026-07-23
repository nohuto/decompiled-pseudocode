/*
 * XREFs of RtlpFileIsWin32WithRCManifest @ 0x180007FE4
 * Callers:
 *     RtlGetFileMUIPath @ 0x180009780 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800083B0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023A40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 *     RtlReleaseRelativeName @ 0x18002E980 (RtlReleaseRelativeName.c)
 *     RtlImageNtHeader @ 0x18002EEB0 (RtlImageNtHeader.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 *     ZwCreateFile @ 0x18009F890 (ZwCreateFile.c)
 */

char __fastcall RtlpFileIsWin32WithRCManifest(const WCHAR *a1)
{
  char v1; // di
  char v2; // si
  wchar_t *Buffer; // rbx
  unsigned __int64 ContainingDirectory; // rdx
  NTSTATUS v5; // r14d
  NTSTATUS v6; // ebx
  void *v7; // rbx
  PVOID BaseAddress; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-98h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+78h] [rbp-90h] BYREF
  HANDLE SectionHandle; // [rsp+80h] [rbp-88h] BYREF
  _DWORD *v13; // [rsp+88h] [rbp-80h]
  ULONG_PTR ViewSize; // [rsp+98h] [rbp-70h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-68h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+A8h] [rbp-60h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+B8h] [rbp-50h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp+0h] BYREF
  const wchar_t *v20; // [rsp+118h] [rbp+10h]
  __int64 v21; // [rsp+120h] [rbp+18h]
  __int64 v22; // [rsp+128h] [rbp+20h]

  v1 = 0;
  FileHandle = 0LL;
  v2 = 0;
  BaseAddress = 0LL;
  v13 = 0LL;
  if ( RtlDosPathNameToRelativeNtPathName_U(a1, &NtFileName, 0LL, &RelativeName) )
  {
    Buffer = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = (unsigned __int64)RelativeName.ContainingDirectory;
      NtFileName = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
      RelativeName.ContainingDirectory = 0LL;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.RootDirectory = (HANDLE)(ContainingDirectory & -(__int64)(Buffer != 0LL));
    ObjectAttributes.ObjectName = &NtFileName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
    if ( Buffer )
    {
      RtlReleaseRelativeName(&RelativeName);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    }
    if ( v5 >= 0 )
    {
      v2 = 1;
      if ( NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle) >= 0 )
      {
        SectionOffset.QuadPart = 0LL;
        ViewSize = 0LL;
        v6 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &BaseAddress,
               0LL,
               0LL,
               &SectionOffset,
               &ViewSize,
               ViewShare,
               0,
               8u);
        NtClose(SectionHandle);
        if ( v6 >= 0 )
        {
          if ( RtlImageNtHeader(BaseAddress) )
          {
            v20 = L"MUI";
            v21 = 1LL;
            v7 = (void *)((unsigned __int64)BaseAddress | 1);
            v22 = 0LL;
            if ( (int)LdrpSearchResourceSection_U((PVOID)((unsigned __int64)BaseAddress | 1), (__int64)&v15) >= 0
              && (int)LdrpAccessResourceDataNoMultipleLanguage(v7) >= 0
              && *v13 == -20054323 )
            {
              v1 = 1;
            }
          }
        }
      }
    }
  }
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( v2 )
    NtClose(FileHandle);
  return v1;
}
