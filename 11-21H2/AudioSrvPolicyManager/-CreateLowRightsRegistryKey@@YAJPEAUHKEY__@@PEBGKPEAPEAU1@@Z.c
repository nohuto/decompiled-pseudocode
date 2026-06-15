/*
 * XREFs of ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x1800340B4
 * Callers:
 *     ?Commit@CAudioSessionPropertyStore@@UEAAJXZ @ 0x180033B30 (-Commit@CAudioSessionPropertyStore@@UEAAJXZ.c)
 *     ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x180036274 (-OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z.c)
 *     ?OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z @ 0x180036CFC (-OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180006834 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003EB4C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18004006C (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180040564 (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800408C8 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreateLowRightsRegistryKey(HKEY a1, const unsigned __int16 *a2, int a3, HKEY *a4)
{
  int v8; // eax
  unsigned int v9; // r8d
  unsigned __int16 *v10; // r9
  unsigned int v11; // ebx
  int v13; // eax
  int LastError; // edi
  void *lpSecurityDescriptor; // rbx
  HANDLE ProcessHeap; // rax
  HKEY v17; // rcx
  void *v18; // rbx
  HANDLE v19; // rax
  const char *v20; // r9
  int v21; // eax
  HKEY v22; // rax
  void *v23; // rbx
  HANDLE v24; // rax
  unsigned int v25; // [rsp+28h] [rbp-29h]
  unsigned int *v26; // [rsp+48h] [rbp-9h]
  HKEY hKey; // [rsp+58h] [rbp+7h] BYREF
  PSID Sid[2]; // [rsp+60h] [rbp+Fh] BYREF
  char v29; // [rsp+70h] [rbp+1Fh]
  struct _SECURITY_ATTRIBUTES lpMem; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  memset(&lpMem, 0, sizeof(lpMem));
  lpMem.nLength = 24;
  v8 = DetermineLowRightsKeySecurityDescriptor(a1, &lpMem.lpSecurityDescriptor);
  v11 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v8);
    return v11;
  }
  Sid[1] = &lpMem;
  v29 = 1;
  hKey = 0LL;
  v13 = SafeRegCreateKeyEx(a1, a2, v9, v10, v25, a3 | ((a3 & 0x20006) != 0 ? 655360 : 0x20000), &lpMem, &hKey, v26);
  LastError = v13;
  if ( v13 > 0 )
    LastError = (unsigned __int16)v13 | 0x80070000;
  if ( LastError < 0 )
  {
    if ( LastError == -2147024891 )
    {
      if ( hKey )
        RegCloseKey(hKey);
      lpSecurityDescriptor = lpMem.lpSecurityDescriptor;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpSecurityDescriptor);
      return 2147942405LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)LastError);
    v17 = hKey;
    if ( !hKey )
    {
LABEL_12:
      v18 = lpMem.lpSecurityDescriptor;
      v19 = GetProcessHeap();
      HeapFree(v19, 0, v18);
      return (unsigned int)LastError;
    }
LABEL_11:
    RegCloseKey(v17);
    goto LABEL_12;
  }
  Sid[0] = 0LL;
  if ( !ConvertStringSidToSidW(L"LW", Sid) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x9C,
                  (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                  v20);
    v17 = hKey;
    if ( !hKey )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( (int)SetRegistryKeyIntegrityLevel(hKey, Sid[0]) < 0 )
  {
    v21 = SetRegistryHandleIntegrityLevel(hKey, Sid[0]);
    LastError = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA5,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v21);
      LocalFree(Sid[0]);
      v17 = hKey;
      if ( !hKey )
        goto LABEL_12;
      goto LABEL_11;
    }
  }
  v22 = hKey;
  hKey = 0LL;
  *a4 = v22;
  LocalFree(Sid[0]);
  if ( hKey )
    RegCloseKey(hKey);
  v23 = lpMem.lpSecurityDescriptor;
  v24 = GetProcessHeap();
  HeapFree(v24, 0, v23);
  return 0LL;
}
