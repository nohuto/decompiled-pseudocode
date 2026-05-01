/*
 * XREFs of HamRpcSrvConnectFullTrust @ 0x1800733D0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18002D6A8 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18002E148 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     CempRpcQueryClientInformation @ 0x18003378C (CempRpcQueryClientInformation.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvConnectFullTrust(void *a1, struct _HAM_CLIENT_CONTEXT **a2, _QWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  struct _HAM_CLIENT_CONTEXT *v7; // rax
  struct _HAM_CLIENT_CONTEXT *v8; // rcx
  __int64 v10; // [rsp+38h] [rbp-C8h]
  __int64 v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_CLIENT_CONTEXT *v15; // [rsp+78h] [rbp-88h] BYREF
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+D0h] [rbp-30h] BYREF
  int *v18; // [rsp+F0h] [rbp-10h]
  int v19; // [rsp+F8h] [rbp-8h]
  int v20; // [rsp+FCh] [rbp-4h]

  v15 = 0LL;
  Handle = 0LL;
  v5 = CempRpcQueryClientInformation(a1, DestinationSid, &TokenInformation, &v12, 0LL, &Handle);
  if ( v5 >= 0 )
  {
    v5 = HamSrvConnect(
           (__int64)RmSvcGlobals + 2248,
           v12,
           (union _RM_SID *)DestinationSid,
           Handle,
           TokenInformation,
           3,
           0,
           v10,
           v11,
           0LL,
           (struct _WNF_STATE_NAME **)&v15);
    if ( v5 < 0 )
    {
      v8 = v15;
    }
    else
    {
      v7 = v15;
      v8 = 0LL;
      *a2 = v15;
      v5 = 0;
      *a3 = *((_QWORD *)v7 + 13);
    }
    if ( v8 )
      HamSrvDisconnect(v8);
  }
  else if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v20 = 0;
    v18 = &v12;
    v12 = v5;
    v19 = 4;
    tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1800BFF18, 0LL, 0LL, 3u, &v17);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v5;
}
