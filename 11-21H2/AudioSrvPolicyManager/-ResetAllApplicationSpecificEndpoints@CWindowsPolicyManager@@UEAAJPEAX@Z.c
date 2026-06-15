/*
 * XREFs of ?ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z @ 0x18000C350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180006834 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x180020184 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z @ 0x1800225A0 (-ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall CWindowsPolicyManager::ResetAllApplicationSpecificEndpoints(CWindowsPolicyManager *this, void *a2)
{
  unsigned int v3; // eax
  int v4; // eax
  int LastError; // ebx
  LSTATUS v7; // eax
  unsigned int v8; // eax
  HANDLE CurrentThread; // rax
  const char *v10; // r9
  void *v11; // rcx
  unsigned int TokenInformation; // eax
  CApplicationManager *v13; // rcx
  int v14; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-20h]
  unsigned int phkResulta; // [rsp+20h] [rbp-20h]
  unsigned int phkResultb; // [rsp+20h] [rbp-20h]
  HKEY hKey; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  unsigned int v20; // [rsp+60h] [rbp+20h] BYREF
  void *TokenHandle; // [rsp+68h] [rbp+28h] BYREF

  v3 = RpcImpersonateClient(0LL);
  if ( v3 )
  {
    v4 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x4E,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
           (const char *)v3,
           phkResult);
    LastError = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A0,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)v4);
      return LastError;
    }
  }
  else
  {
    hKey = 0LL;
    if ( !RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Multimedia\\Audio\\DefaultEndpoint", 0, 2u, &hKey) )
    {
      v7 = RegDeleteTreeW(hKey, 0LL);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5A,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v7,
          phkResulta);
    }
    if ( hKey )
      RegCloseKey(hKey);
    RpcRevertToSelf();
  }
  v8 = RpcImpersonateClient(a2);
  if ( v8 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x1A3,
             (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             (const char *)v8,
             phkResulta);
  TokenHandle = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1A7,
                  (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                  v10);
    v11 = TokenHandle;
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_18;
    goto LABEL_19;
  }
  v20 = 0;
  TokenInformation = GetTokenInformation(TokenHandle, 0LL, 0LL, 0LL, &v20);
  if ( TokenInformation )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x1AB,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                  (const char *)TokenInformation,
                  phkResultb);
    v11 = TokenHandle;
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
LABEL_18:
      CloseHandle(v11);
LABEL_19:
    RpcRevertToSelf();
    return LastError;
  }
  RpcRevertToSelf();
  v14 = CApplicationManager::ResetAllApplicationSpecificEndpoints(v13, v20);
  LastError = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B0,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v14);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    return LastError;
  }
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TokenHandle);
  return 0;
}
