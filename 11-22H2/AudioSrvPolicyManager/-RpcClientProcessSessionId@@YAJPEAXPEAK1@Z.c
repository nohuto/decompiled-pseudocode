/*
 * XREFs of ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180005820
 * Callers:
 *     PbmReportHostedAppStateChange @ 0x1800147F0 (PbmReportHostedAppStateChange.c)
 *     PbmReportAppInteractivityChange @ 0x180014C80 (PbmReportAppInteractivityChange.c)
 *     PbmAllowMediaPlaybackForApp @ 0x180031380 (PbmAllowMediaPlaybackForApp.c)
 *     PbmLaunchBackgroundTask @ 0x1800317E0 (PbmLaunchBackgroundTask.c)
 *     PbmReportAppClosing @ 0x180031AE0 (PbmReportAppClosing.c)
 *     PbmReportApplicationState @ 0x180031B50 (PbmReportApplicationState.c)
 *     PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180031DD0 (PbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 *     TS_RegisterAudioProtocolNotification @ 0x18003BFE0 (TS_RegisterAudioProtocolNotification.c)
 * Callees:
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x180005A50 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18000E360 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001044C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001E1BC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall RpcClientProcessSessionId(RPC_BINDING_HANDLE BindingHandle, unsigned int *a2, unsigned int *a3)
{
  RPC_STATUS v6; // ebx
  RPC_STATUS v7; // ebx
  HANDLE CurrentThread; // rax
  const char *v9; // r9
  unsigned int TokenInformation; // eax
  char *v11; // rcx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int LastError; // ebx
  unsigned int v16; // ebx
  int v17; // [rsp+20h] [rbp-B8h]
  unsigned int v18; // [rsp+20h] [rbp-B8h]
  void *TokenHandle[2]; // [rsp+30h] [rbp-A8h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-98h] BYREF
  __int128 v21; // [rsp+48h] [rbp-90h]
  __int128 v22; // [rsp+58h] [rbp-80h]
  __int128 v23; // [rsp+68h] [rbp-70h]
  __int128 v24; // [rsp+78h] [rbp-60h]
  __int128 v25; // [rsp+88h] [rbp-50h]
  __int128 v26; // [rsp+98h] [rbp-40h]
  __int64 v27; // [rsp+A8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  v6 = RpcServerInqCallAttributesW(BindingHandle, RpcCallAttributes);
  if ( v6 )
  {
    v13 = v6 | 0x80010000;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x123,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)v13,
      v17);
    return v13;
  }
  else
  {
    v7 = RpcImpersonateClient(BindingHandle);
    if ( v7 )
    {
      v14 = v7 | 0x80010000;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x125,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)v14,
        v17);
      return v14;
    }
    else
    {
      TokenHandle[0] = 0LL;
      CurrentThread = GetCurrentThread();
      if ( OpenThreadToken(CurrentThread, 8u, 1, TokenHandle) )
      {
        TokenInformation = GetTokenInformation(TokenHandle[0], 0LL, 0LL, 0LL, a3);
        if ( TokenInformation )
        {
          v16 = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x12B,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                  (const char *)TokenInformation,
                  v18);
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(TokenHandle);
          RpcRevertToSelf();
          return v16;
        }
        else
        {
          v11 = (char *)TokenHandle[0];
          *a2 = DWORD2(v24);
          if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            CloseHandle(v11);
          RpcRevertToSelf();
          return 0LL;
        }
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x129,
                      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                      v9);
        if ( (unsigned __int64)TokenHandle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(TokenHandle[0]);
        RpcRevertToSelf();
        return LastError;
      }
    }
  }
}
