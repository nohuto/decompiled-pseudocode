/*
 * XREFs of HamRpcSrvConnectStateChangeNotifications @ 0x1800426B0
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

__int64 __fastcall HamRpcSrvConnectStateChangeNotifications(
        void *a1,
        __int64 a2,
        struct _HAM_CLIENT_CONTEXT **a3,
        _QWORD *a4)
{
  int v6; // ebx
  struct _HAM_CLIENT_CONTEXT *v7; // rcx
  __int64 v9; // rcx
  int v10; // [rsp+28h] [rbp-D8h]
  unsigned int v11; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_CLIENT_CONTEXT *v14; // [rsp+78h] [rbp-88h]
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v16[24]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v17; // [rsp+E8h] [rbp-18h]
  unsigned int *v18; // [rsp+F0h] [rbp-10h]
  int v19; // [rsp+F8h] [rbp-8h]
  int v20; // [rsp+FCh] [rbp-4h]

  v14 = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  *(_QWORD *)v16 = a2;
  *(_OWORD *)&v16[8] = 0LL;
  v6 = CempRpcQueryClientInformation(a1, DestinationSid, &TokenInformation, &v11, 0LL, &Handle);
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
    {
      v20 = 0;
      v18 = &v11;
      v11 = v6;
      v19 = 4;
      tlgWriteTransfer_EventWriteTransfer(
        v9,
        (unsigned __int8 *)dword_1800C1DDA,
        0LL,
        0LL,
        3u,
        (PEVENT_DATA_DESCRIPTOR)v16);
    }
  }
  else
  {
    LOBYTE(v10) = 6;
    v6 = HamSrvConnect((char *)RmSvcGlobals + 2248, v11, DestinationSid, Handle, TokenInformation, v10, 0);
    if ( v6 < 0 )
    {
      v7 = v14;
    }
    else
    {
      v7 = 0LL;
      *a3 = v14;
      v6 = 0;
      *a4 = v17;
    }
    if ( v7 )
      HamSrvDisconnect(v7);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v6;
}
