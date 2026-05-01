/*
 * XREFs of CempRpcQueryClientInformation @ 0x18000520C
 * Callers:
 *     HamRpcSrvConnectExtendedExecution @ 0x180004B10 (HamRpcSrvConnectExtendedExecution.c)
 *     RmgrSrv_RegisterWithServer @ 0x180004C40 (RmgrSrv_RegisterWithServer.c)
 *     CrmRpcSrvRegister @ 0x180004E50 (CrmRpcSrvRegister.c)
 *     HamRpcSrvPlmNotifyNewSession @ 0x180041060 (HamRpcSrvPlmNotifyNewSession.c)
 *     HamRpcSrvConnect @ 0x180041D20 (HamRpcSrvConnect.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x1800426B0 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectDebugging @ 0x180042C20 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectSessionState @ 0x180042D50 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectServicing @ 0x180042E50 (HamRpcSrvConnectServicing.c)
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x18006C770 (RmgrSrv_RmSetMemoryUsageLimit.c)
 *     HamRpcSrvConnectFullTrust @ 0x180075060 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

__int64 __fastcall CempRpcQueryClientInformation(
        RPC_BINDING_HANDLE ClientBinding,
        PSID DestinationSid,
        PVOID TokenInformation,
        _DWORD *a4,
        __int64 a5,
        _QWORD *a6)
{
  HANDLE CurrentThread; // rax
  NTSTATUS TokenHostIdAsUlong64; // ebx
  void *v13; // rax
  void *TokenHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v16; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[56]; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+80h] [rbp-80h]
  PSID TokenInformationa[12]; // [rsp+B0h] [rbp-50h] BYREF

  TokenHandle = 0LL;
  if ( RpcImpersonateClient(ClientBinding) )
    goto LABEL_21;
  CurrentThread = GetCurrentThread();
  TokenHostIdAsUlong64 = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
  if ( TokenHostIdAsUlong64 < 0 )
    goto LABEL_23;
  if ( DestinationSid )
  {
    TokenHostIdAsUlong64 = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformationa, 0x58u, &ReturnLength);
    if ( TokenHostIdAsUlong64 >= 0 )
      TokenHostIdAsUlong64 = RtlCopySid(0x44u, DestinationSid, TokenInformationa[0]);
    if ( TokenHostIdAsUlong64 < 0 )
      goto LABEL_23;
  }
  if ( TokenInformation
    && (TokenHostIdAsUlong64 = NtQueryInformationToken(TokenHandle, TokenSessionId, TokenInformation, 4u, &v16),
        TokenHostIdAsUlong64 < 0)
    || a5 && (TokenHostIdAsUlong64 = RtlQueryTokenHostIdAsUlong64(TokenHandle, a5), TokenHostIdAsUlong64 < 0) )
  {
LABEL_23:
    RpcRevertToSelf();
    goto LABEL_16;
  }
  if ( RpcRevertToSelf() )
    goto LABEL_21;
  if ( a4 )
  {
    memset_0(v18, 0, 0x68uLL);
    RpcCallAttributes[0] = 2;
    RpcCallAttributes[1] = 16;
    if ( !RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes) )
    {
      *a4 = v19;
      goto LABEL_13;
    }
LABEL_21:
    TokenHostIdAsUlong64 = -1073741823;
    goto LABEL_16;
  }
LABEL_13:
  if ( a6 )
  {
    v13 = TokenHandle;
    TokenHandle = 0LL;
    *a6 = v13;
  }
  TokenHostIdAsUlong64 = 0;
LABEL_16:
  if ( TokenHandle )
    CloseHandle(TokenHandle);
  return (unsigned int)TokenHostIdAsUlong64;
}
