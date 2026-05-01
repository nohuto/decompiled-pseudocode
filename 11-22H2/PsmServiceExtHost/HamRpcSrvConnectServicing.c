/*
 * XREFs of HamRpcSrvConnectServicing @ 0x180042E50
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcQueryClientInformation @ 0x18000520C (CempRpcQueryClientInformation.c)
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012B04 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004C584 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 */

__int64 __fastcall HamRpcSrvConnectServicing(void *a1, struct _HAM_CLIENT_CONTEXT **a2)
{
  int v3; // ebx
  struct _HAM_CLIENT_CONTEXT *v4; // rcx
  __int64 v6; // rcx
  int v7; // [rsp+28h] [rbp-41h]
  unsigned int v8; // [rsp+60h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-1h] BYREF
  int TokenInformation; // [rsp+70h] [rbp+7h] BYREF
  struct _HAM_CLIENT_CONTEXT *v11; // [rsp+78h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+80h] [rbp+17h] BYREF
  unsigned int *v13; // [rsp+A0h] [rbp+37h]
  int v14; // [rsp+A8h] [rbp+3Fh]
  int v15; // [rsp+ACh] [rbp+43h]

  v11 = 0LL;
  Handle = 0LL;
  v3 = CempRpcQueryClientInformation(a1, 0LL, &TokenInformation, &v8, 0LL, &Handle);
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
    {
      v15 = 0;
      v13 = &v8;
      v8 = v3;
      v14 = 4;
      tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1800C1DA4, 0LL, 0LL, 3u, &v12);
    }
  }
  else
  {
    LOBYTE(v7) = 4;
    v3 = HamSrvConnect((char *)RmSvcGlobals + 2248, v8, 0LL, Handle, TokenInformation, v7, 0);
    if ( v3 < 0 )
    {
      v4 = v11;
    }
    else
    {
      v4 = 0LL;
      *a2 = v11;
      v3 = 0;
    }
    if ( v4 )
      HamSrvDisconnect(v4);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
