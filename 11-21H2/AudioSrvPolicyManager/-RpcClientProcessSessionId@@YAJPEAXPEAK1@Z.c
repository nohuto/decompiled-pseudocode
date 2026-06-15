/*
 * XREFs of ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002CA4C
 * Callers:
 *     PbmAllowMediaPlaybackForApp @ 0x1800285B0 (PbmAllowMediaPlaybackForApp.c)
 *     PbmLaunchBackgroundTask @ 0x180028A30 (PbmLaunchBackgroundTask.c)
 *     PbmReportAppClosing @ 0x180028D30 (PbmReportAppClosing.c)
 *     PbmReportAppInteractivityChange @ 0x180028DA0 (PbmReportAppInteractivityChange.c)
 *     PbmReportApplicationState @ 0x180028E20 (PbmReportApplicationState.c)
 *     PbmReportHostedAppStateChange @ 0x180028F70 (PbmReportHostedAppStateChange.c)
 *     PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180029260 (PbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 *     TS_RegisterAudioProtocolNotification @ 0x180031990 (TS_RegisterAudioProtocolNotification.c)
 *     TS_SessionGetAudioProtocol @ 0x180031A40 (TS_SessionGetAudioProtocol.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     memset_0 @ 0x1800034E8 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180006834 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x180020184 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall RpcClientProcessSessionId(RPC_BINDING_HANDLE BindingHandle, unsigned int *a2, unsigned int *a3)
{
  RPC_STATUS v6; // ebx
  __int64 v7; // rdx
  unsigned int LastError; // ebx
  HANDLE CurrentThread; // rax
  const char *v10; // r9
  void *v11; // rcx
  unsigned int TokenInformation; // eax
  void *TokenHandle; // [rsp+30h] [rbp-59h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v16[56]; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v17; // [rsp+80h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  memset_0(v16, 0, 0x68uLL);
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  v6 = RpcServerInqCallAttributesW(BindingHandle, RpcCallAttributes);
  if ( !v6 )
  {
    v6 = RpcImpersonateClient(BindingHandle);
    if ( v6 )
    {
      v7 = 288LL;
      goto LABEL_3;
    }
    TokenHandle = 0LL;
    CurrentThread = GetCurrentThread();
    if ( OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
    {
      TokenInformation = GetTokenInformation(TokenHandle, 0LL, 0LL, 0LL, a3);
      if ( !TokenInformation )
      {
        *a2 = v17;
        if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(TokenHandle);
        LastError = 0;
        goto LABEL_15;
      }
      LastError = wil::details::in1diag3::Return_Win32(
                    retaddr,
                    294LL,
                    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                    (const char *)TokenInformation);
      v11 = TokenHandle;
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_8;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x124,
                    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                    v10);
      v11 = TokenHandle;
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
LABEL_8:
        CloseHandle(v11);
    }
LABEL_15:
    RpcRevertToSelf();
    return LastError;
  }
  v7 = 286LL;
LABEL_3:
  LastError = v6 | 0x80010000;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)LastError);
  return LastError;
}
