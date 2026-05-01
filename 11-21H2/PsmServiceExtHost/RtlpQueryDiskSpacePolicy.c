/*
 * XREFs of RtlpQueryDiskSpacePolicy @ 0x18009D038
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18004BD30 (RtlQueryResourcePolicy.c)
 * Callees:
 *     StringCbPrintfW @ 0x18002F268 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     NtClose_0 @ 0x18004F224 (NtClose_0.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x18009D1A0 (RtlpQueryDiskSpacePolicyByHandle.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicy(__int64 a1, _DWORD *a2)
{
  NTSTATUS DiskSpacePolicyByHandle; // ebx
  wchar_t *v4; // rax
  __int64 v5; // rcx
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v8; // [rsp+68h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t pszDest[264]; // [rsp+C0h] [rbp-40h] BYREF

  FileHandle = 0LL;
  if ( BYTE2(RtlpUserPolicies) )
  {
    *a2 = BYTE2(RtlpUserPolicies);
    return 0;
  }
  else
  {
    StringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%s", a1);
    v4 = pszDest;
    v8 = 0LL;
    v5 = 0x7FFFLL;
    while ( *v4 )
    {
      ++v4;
      if ( !--v5 )
        goto LABEL_8;
    }
    LOWORD(v8) = -2 - 2 * v5;
    WORD1(v8) = -2 * v5;
    *((_QWORD *)&v8 + 1) = pszDest;
LABEL_8:
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DiskSpacePolicyByHandle = NtCreateFile(
                                &FileHandle,
                                0x100080u,
                                &ObjectAttributes,
                                &IoStatusBlock,
                                0LL,
                                0,
                                7u,
                                1u,
                                0x20u,
                                0LL,
                                0);
    if ( DiskSpacePolicyByHandle >= 0 )
    {
      DiskSpacePolicyByHandle = RtlpQueryDiskSpacePolicyByHandle(FileHandle, a2);
      if ( DiskSpacePolicyByHandle >= 0 )
        DiskSpacePolicyByHandle = 0;
    }
    if ( FileHandle )
      NtClose_0(FileHandle);
  }
  return (unsigned int)DiskSpacePolicyByHandle;
}
