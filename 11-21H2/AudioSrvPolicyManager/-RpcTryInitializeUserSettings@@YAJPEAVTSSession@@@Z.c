/*
 * XREFs of ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x18002CBF8
 * Callers:
 *     ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x180011DF0 (-OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001828 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002BBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180006834 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z @ 0x18002C548 (-LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall RpcTryInitializeUserSettings(struct TSSession *a1)
{
  _DWORD *v2; // rcx
  RPC_STATUS v3; // eax
  unsigned int LastError; // ebx
  HANDLE CurrentThread; // rax
  const char *v7; // r9
  PSID *v8; // rsi
  void *v9; // rbx
  DWORD v10; // eax
  void *v11; // rax
  void *v12; // rcx
  const char *v13; // r9
  unsigned int v14; // edi
  void *v15; // rcx
  unsigned int v16; // eax
  DWORD TokenInformationLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-C8h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-C0h] BYREF
  HKEY hKey; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+58h] [rbp-B0h] BYREF
  HKEY *p_phkResult; // [rsp+78h] [rbp-90h]
  int v23; // [rsp+80h] [rbp-88h]
  int v24; // [rsp+84h] [rbp-84h]
  _BYTE TokenInformation[512]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  if ( !*((_BYTE *)a1 + 1092) )
  {
    v2 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *v2 > 4u )
    {
      LODWORD(phkResult) = *(_DWORD *)a1;
      p_phkResult = &phkResult;
      v23 = 4;
      v24 = 0;
      tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_18005151B, 0LL, 0LL, 3u, &v21);
    }
    v3 = RpcImpersonateClient(0LL);
    LastError = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2BD,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v3);
      return LastError;
    }
    TokenHandle = 0LL;
    CurrentThread = GetCurrentThread();
    if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x2C4,
                    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                    v7);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      goto LABEL_30;
    }
    v8 = (PSID *)TokenInformation;
    TokenInformationLength[0] = 512;
    v9 = 0LL;
    if ( !GetTokenInformation(TokenHandle, TokenUser, TokenInformation, 0x200u, TokenInformationLength) )
    {
      v10 = GetLastError();
      if ( v10 == 122 )
      {
        v11 = operator new[](TokenInformationLength[0], (const struct std::nothrow_t *)&std::nothrow);
        v9 = v11;
        if ( !v11 )
        {
          LastError = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2D2,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)0x8007000ELL);
          v12 = TokenHandle;
          if ( (char *)TokenHandle - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
          {
LABEL_30:
            RpcRevertToSelf();
            return LastError;
          }
LABEL_14:
          CloseHandle(v12);
          goto LABEL_30;
        }
        v8 = (PSID *)v11;
        if ( !GetTokenInformation(TokenHandle, TokenUser, v11, TokenInformationLength[0], TokenInformationLength) )
        {
          v14 = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x2D5,
                  (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                  v13);
          operator delete(v9);
          v15 = TokenHandle;
          if ( (char *)TokenHandle - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
          {
LABEL_29:
            LastError = v14;
            goto LABEL_30;
          }
LABEL_28:
          CloseHandle(v15);
          goto LABEL_29;
        }
      }
      else if ( v10 )
      {
        LastError = wil::details::in1diag3::Return_Win32(
                      retaddr,
                      729LL,
                      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                      (const char *)v10);
        v12 = TokenHandle;
        if ( (char *)TokenHandle - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
          goto LABEL_30;
        goto LABEL_14;
      }
    }
    if ( EqualSid(*v8, *((PSID *)a1 + 137)) )
    {
      phkResult = 0LL;
      v16 = RegOpenCurrentUser(0x20019u, &phkResult);
      if ( v16 )
      {
        v14 = wil::details::in1diag3::Return_Win32(
                retaddr,
                740LL,
                (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                (const char *)v16);
        if ( phkResult )
          RegCloseKey(phkResult);
        if ( v9 )
          operator delete(v9);
        v15 = TokenHandle;
        if ( (char *)TokenHandle - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
          goto LABEL_29;
        goto LABEL_28;
      }
      hKey = 0LL;
      if ( RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Multimedia\\Audio", 0, 1u, &hKey) )
      {
        *((_BYTE *)a1 + 1092) = 0;
      }
      else
      {
        *((_BYTE *)a1 + 1092) = 1;
        LoadUserSettings(a1, hKey);
      }
      if ( hKey )
        RegCloseKey(hKey);
      if ( phkResult )
        RegCloseKey(phkResult);
    }
    if ( v9 )
      operator delete(v9);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    RpcRevertToSelf();
  }
  return *((_BYTE *)a1 + 1092) == 0 ? 0x80070490 : 0;
}
