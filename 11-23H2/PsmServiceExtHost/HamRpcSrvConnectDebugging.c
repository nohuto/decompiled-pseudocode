/*
 * XREFs of HamRpcSrvConnectDebugging @ 0x180042BA0
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcQueryClientInformation @ 0x18000520C (CempRpcQueryClientInformation.c)
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012B04 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004C4B8 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 */

__int64 __fastcall HamRpcSrvConnectDebugging(void *a1, struct _HAM_CLIENT_CONTEXT **a2, _QWORD *a3)
{
  int v5; // ebx
  struct _HAM_CLIENT_CONTEXT *v6; // rcx
  __int64 v8; // rcx
  int v9; // [rsp+28h] [rbp-D8h]
  unsigned int v10; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_CLIENT_CONTEXT *v13; // [rsp+78h] [rbp-88h]
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v16; // [rsp+E0h] [rbp-20h]
  unsigned int *v17; // [rsp+F0h] [rbp-10h]
  int v18; // [rsp+F8h] [rbp-8h]
  int v19; // [rsp+FCh] [rbp-4h]

  v13 = 0LL;
  Handle = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v5 = CempRpcQueryClientInformation(a1, DestinationSid, &TokenInformation, &v10, 0LL, &Handle);
  if ( v5 < 0 )
  {
    if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
    {
      v19 = 0;
      v17 = &v10;
      v10 = v5;
      v18 = 4;
      tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_1800C1D84, 0LL, 0LL, 3u, &v15);
    }
  }
  else
  {
    LOBYTE(v9) = 1;
    v5 = HamSrvConnect((char *)RmSvcGlobals + 2248, v10, DestinationSid, Handle, TokenInformation, v9, 0);
    if ( v5 < 0 )
    {
      v6 = v13;
    }
    else
    {
      v6 = 0LL;
      *a2 = v13;
      v5 = 0;
      *a3 = *((_QWORD *)&v16 + 1);
    }
    if ( v6 )
      HamSrvDisconnect(v6);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v5;
}
