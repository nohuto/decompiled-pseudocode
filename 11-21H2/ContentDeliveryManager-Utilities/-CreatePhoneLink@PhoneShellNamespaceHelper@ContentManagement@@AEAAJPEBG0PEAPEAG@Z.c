/*
 * XREFs of ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x180031028
 * Callers:
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x180040AE0 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800221C0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180022314 (memcpy_0.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180044550 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800445CC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::CreatePhoneLink(
        ContentManagement::PhoneShellNamespaceHelper *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned __int16 **a4)
{
  HRESULT v7; // eax
  unsigned int LastError; // ebx
  int v10; // eax
  PWSTR v11; // rcx
  HANDLE FileW; // rbx
  const char *v13; // r9
  __int64 v14; // rsi
  const char *v15; // r9
  unsigned int v16; // edi
  PWSTR v17; // rcx
  int v18; // esi
  ULONG InputBufferLength; // r13d
  _WORD *v20; // rax
  _WORD *v21; // r14
  unsigned int Length; // eax
  __int64 v23; // rcx
  NTSTATUS v24; // eax
  const char *v25; // r9
  const char *v26; // r9
  unsigned __int16 *v27; // rax
  int dwCreationDisposition; // [rsp+20h] [rbp-79h]
  int dwCreationDispositiona; // [rsp+20h] [rbp-79h]
  int dwCreationDispositionb; // [rsp+20h] [rbp-79h]
  LPVOID pv; // [rsp+50h] [rbp-49h] BYREF
  __int64 v32; // [rsp+58h] [rbp-41h]
  __int64 v33; // [rsp+60h] [rbp-39h]
  PWSTR ppszPath; // [rsp+68h] [rbp-31h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-29h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-19h] BYREF
  _BYTE FileInformation[32]; // [rsp+90h] [rbp-9h] BYREF
  int v38; // [rsp+B0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  *a4 = 0LL;
  ppszPath = 0LL;
  v7 = SHGetKnownFolderPath(&FOLDERID_Profile, 0x1000u, 0LL, &ppszPath);
  LastError = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37D,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v7,
      dwCreationDisposition);
    if ( ppszPath )
      CoTaskMemFree(ppszPath);
    return LastError;
  }
  pv = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          &pv,
          L"%ws\\%ws",
          ppszPath,
          a2);
  LastError = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37F,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v10,
      dwCreationDisposition);
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v32 = 0LL;
    v33 = 0LL;
    v11 = ppszPath;
    if ( !ppszPath )
      return LastError;
    goto LABEL_9;
  }
  CreateDirectoryW((LPCWSTR)pv, 0LL);
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  FileW = CreateFileW((LPCWSTR)pv, 0x40000000u, 1u, 0LL, 3u, 0x2200000u, 0LL);
  v14 = -1LL;
  if ( FileW == (HANDLE)-1LL )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x398,
                  (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                  v13);
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    RemoveDirectoryW((LPCWSTR)pv);
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v32 = 0LL;
    v33 = 0LL;
    v11 = ppszPath;
    if ( !ppszPath )
      return LastError;
LABEL_9:
    CoTaskMemFree(v11);
    return LastError;
  }
  if ( !RtlDosPathNameToNtPathName_U(a3, &UnicodeString, 0LL, 0LL) )
  {
    v16 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x39B,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            v15);
    if ( FileW )
      CloseHandle(FileW);
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    RemoveDirectoryW((LPCWSTR)pv);
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v32 = 0LL;
    v33 = 0LL;
    v17 = ppszPath;
    if ( !ppszPath )
      return v16;
    goto LABEL_25;
  }
  do
    ++v14;
  while ( a3[v14] );
  v18 = 2 * v14;
  InputBufferLength = v18 + UnicodeString.Length + 20;
  v20 = operator new[](InputBufferLength, (const struct std::nothrow_t *)&std::nothrow);
  v21 = v20;
  if ( !v20 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A3,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)0x8007000ELL,
      dwCreationDispositiona);
    if ( FileW )
      CloseHandle(FileW);
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    RemoveDirectoryW((LPCWSTR)pv);
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v32 = 0LL;
    v33 = 0LL;
    if ( ppszPath )
      CoTaskMemFree(ppszPath);
    return 2147942414LL;
  }
  memset_0(v20, 0, InputBufferLength);
  *(_DWORD *)v21 = -1610612733;
  v21[2] = InputBufferLength - 8;
  v21[4] = 0;
  Length = UnicodeString.Length;
  v21[5] = UnicodeString.Length;
  memcpy_0(v21 + 8, UnicodeString.Buffer, Length);
  v23 = (unsigned __int16)v21[5];
  v21[6] = v23 + 2;
  v21[7] = v18;
  memcpy_0((char *)v21 + v23 + 18, a3, (unsigned __int16)v18);
  IoStatusBlock = 0LL;
  v24 = NtFsControlFile(FileW, 0LL, 0LL, 0LL, &IoStatusBlock, 0x900A4u, v21, InputBufferLength, 0LL, 0);
  if ( v24 < 0 )
  {
    v16 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x3C1,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v24,
            dwCreationDispositionb);
    if ( FileW )
      CloseHandle(FileW);
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    operator delete(v21);
    RemoveDirectoryW((LPCWSTR)pv);
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v32 = 0LL;
    v33 = 0LL;
    v17 = ppszPath;
    if ( !ppszPath )
      return v16;
    goto LABEL_25;
  }
  if ( !GetFileInformationByHandleEx(FileW, FileBasicInfo, FileInformation, 0x28u) )
  {
    v16 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x3C5,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            v25);
    if ( FileW )
      CloseHandle(FileW);
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    operator delete(v21);
    RemoveDirectoryW((LPCWSTR)pv);
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v32 = 0LL;
    v33 = 0LL;
    v17 = ppszPath;
    if ( !ppszPath )
      return v16;
    goto LABEL_25;
  }
  v38 |= 7u;
  if ( !SetFileInformationByHandle(FileW, FileBasicInfo, FileInformation, 0x28u) )
  {
    v16 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x3C7,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            v26);
    if ( FileW )
      CloseHandle(FileW);
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    operator delete(v21);
    RemoveDirectoryW((LPCWSTR)pv);
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v32 = 0LL;
    v33 = 0LL;
    v17 = ppszPath;
    if ( !ppszPath )
      return v16;
LABEL_25:
    CoTaskMemFree(v17);
    return v16;
  }
  v27 = (unsigned __int16 *)pv;
  pv = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  *a4 = v27;
  if ( FileW )
    CloseHandle(FileW);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  operator delete(v21);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v32 = 0LL;
  v33 = 0LL;
  if ( ppszPath )
    CoTaskMemFree(ppszPath);
  return 0LL;
}
