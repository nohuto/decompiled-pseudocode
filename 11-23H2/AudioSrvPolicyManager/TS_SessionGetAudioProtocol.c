/*
 * XREFs of TS_SessionGetAudioProtocol @ 0x1800053B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x180005A00 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18000E310 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800103FC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001DFCC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180045774 (-GetTsAudioProtocol@@YAIK@Z.c)
 */

__int64 __fastcall TS_SessionGetAudioProtocol(RPC_BINDING_HANDLE BindingHandle, DWORD a2, _DWORD *a3, _DWORD *a4)
{
  RPC_STATUS v9; // ebx
  HANDLE CurrentThread; // rax
  const char *v11; // r9
  unsigned int LastError; // ebx
  unsigned int TokenInformation; // eax
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned int v20; // [rsp+20h] [rbp-D8h]
  void *TokenHandle; // [rsp+30h] [rbp-C8h] BYREF
  DWORD SessionId; // [rsp+38h] [rbp-C0h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+48h] [rbp-B0h]
  __int128 v25; // [rsp+58h] [rbp-A0h]
  __int128 v26; // [rsp+68h] [rbp-90h]
  __int128 v27; // [rsp+78h] [rbp-80h]
  __int128 v28; // [rsp+88h] [rbp-70h]
  __int128 v29; // [rsp+98h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x920,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070057LL,
      v20);
    return 2147942487LL;
  }
  if ( !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x921,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070057LL,
      v20);
    return 2147942487LL;
  }
  *a3 = 0xFFFF;
  v30 = 0LL;
  *a4 = 0;
  v24 = 0LL;
  RpcCallAttributes[0] = 2;
  v25 = 0LL;
  RpcCallAttributes[1] = 16;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v9 = RpcServerInqCallAttributesW(BindingHandle, RpcCallAttributes);
  if ( v9 )
  {
    v19 = 290LL;
    goto LABEL_40;
  }
  v9 = RpcImpersonateClient(BindingHandle);
  if ( v9 )
  {
    v19 = 292LL;
LABEL_40:
    LastError = v9 | 0x80010000;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)LastError,
      v20);
    goto LABEL_41;
  }
  TokenHandle = 0LL;
  CurrentThread = GetCurrentThread();
  if ( OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
  {
    TokenInformation = GetTokenInformation(TokenHandle, 0LL, 0LL, 0LL, &SessionId);
    if ( !TokenInformation )
    {
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      RpcRevertToSelf();
LABEL_17:
      if ( a2 == -1 )
        a2 = SessionId;
      LODWORD(TokenHandle) = a2;
      if ( SessionId && a2 != SessionId )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x933,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)0x80070005LL,
          v20);
        return 2147942405LL;
      }
      if ( a2 )
      {
        *a3 = 0xFFFF;
        EnterCriticalSection(&stru_180061648);
        EnterCriticalSection(&stru_180061648);
        v14 = (_QWORD *)(qword_1800616F8
                       + 16
                       * (qword_180061710 & (0x100000001B3LL
                                           * (BYTE3(TokenHandle) ^ (0x100000001B3LL
                                                                  * (BYTE2(TokenHandle) ^ (0x100000001B3LL
                                                                                         * (BYTE1(TokenHandle) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL))))))))));
        v15 = v14[1];
        if ( v15 == qword_1800616E8 )
        {
LABEL_28:
          v15 = 0LL;
        }
        else
        {
          while ( a2 != *(_DWORD *)(v15 + 16) )
          {
            if ( v15 == *v14 )
              goto LABEL_28;
            v15 = *(_QWORD *)(v15 + 8);
          }
        }
        v16 = qword_1800616E8;
        if ( v15 )
          v16 = v15;
        if ( v16 == qword_1800616E8 )
        {
          LeaveCriticalSection(&stru_180061648);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x46B,
            (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)0x80070490LL,
            v20);
          LeaveCriticalSection(&stru_180061648);
          v17 = -2147023728;
        }
        else
        {
          v18 = *(_QWORD *)(v16 + 24);
          LeaveCriticalSection(&stru_180061648);
          *a3 = *(_DWORD *)(v18 + 4);
          *a4 = *(_DWORD *)(v18 + 8);
          LeaveCriticalSection(&stru_180061648);
          v17 = 0;
        }
        if ( v17 != -2147023728 )
          return 0LL;
        *a3 = GetTsAudioProtocol(a2);
      }
      else
      {
        *a3 = 0;
      }
      *a4 = 0;
      return 0LL;
    }
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x12A,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                  (const char *)TokenInformation,
                  v20);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x128,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                  v11);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
  }
  RpcRevertToSelf();
  if ( (LastError & 0x80000000) == 0 )
    goto LABEL_17;
LABEL_41:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x929,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)LastError,
    v20);
  return LastError;
}
