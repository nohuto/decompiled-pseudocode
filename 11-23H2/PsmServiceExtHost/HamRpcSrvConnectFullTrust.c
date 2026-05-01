/*
 * XREFs of HamRpcSrvConnectFullTrust @ 0x180074E40
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

__int64 __fastcall HamRpcSrvConnectFullTrust(void *a1, struct _HAM_CLIENT_CONTEXT **a2, _QWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  struct _HAM_CLIENT_CONTEXT *v7; // rcx
  __int64 v9; // [rsp+38h] [rbp-C8h]
  __int64 v10; // [rsp+40h] [rbp-C0h]
  unsigned int v11; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_CLIENT_CONTEXT *v14; // [rsp+78h] [rbp-88h] BYREF
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v17; // [rsp+E0h] [rbp-20h]
  unsigned int *v18; // [rsp+F0h] [rbp-10h]
  int v19; // [rsp+F8h] [rbp-8h]
  int v20; // [rsp+FCh] [rbp-4h]

  v14 = 0LL;
  Handle = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v5 = CempRpcQueryClientInformation(a1, DestinationSid, &TokenInformation, &v11, 0LL, &Handle);
  if ( v5 >= 0 )
  {
    v5 = HamSrvConnect(
           (const unsigned __int16 *)RmSvcGlobals + 1124,
           v11,
           (__int64)DestinationSid,
           (__int64)Handle,
           TokenInformation,
           3,
           0,
           v9,
           v10,
           (const unsigned __int16 **)&v16,
           (__int64)&v14);
    if ( v5 < 0 )
    {
      v7 = v14;
    }
    else
    {
      v7 = 0LL;
      *a2 = v14;
      v5 = 0;
      *a3 = *((_QWORD *)&v17 + 1);
    }
    if ( v7 )
      HamSrvDisconnect(v7);
  }
  else if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v20 = 0;
    v18 = &v11;
    v11 = v5;
    v19 = 4;
    tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1800C1D84, 0LL, 0LL, 3u, &v16);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v5;
}
