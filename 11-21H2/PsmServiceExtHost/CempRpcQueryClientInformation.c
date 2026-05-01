/*
 * XREFs of CempRpcQueryClientInformation @ 0x18003378C
 * Callers:
 *     HamRpcSrvConnectExtendedExecution @ 0x1800323F0 (HamRpcSrvConnectExtendedExecution.c)
 *     RmgrSrv_RegisterWithServer @ 0x180032510 (RmgrSrv_RegisterWithServer.c)
 *     CrmRpcSrvRegister @ 0x180033590 (CrmRpcSrvRegister.c)
 *     HamRpcSrvConnect @ 0x1800426E0 (HamRpcSrvConnect.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x180046620 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvPlmNotifyNewSession @ 0x180046790 (HamRpcSrvPlmNotifyNewSession.c)
 *     HamRpcSrvConnectDebugging @ 0x180046DB0 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectServicing @ 0x180046ED0 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectSessionState @ 0x180046FD0 (HamRpcSrvConnectSessionState.c)
 *     RmCoreRpcSrvConnectToRmServer @ 0x18004C0C0 (RmCoreRpcSrvConnectToRmServer.c)
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x18004C214 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x18006CEA0 (RmgrSrv_RmSetMemoryUsageLimit.c)
 *     HamRpcSrvConnectFullTrust @ 0x1800733D0 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
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
