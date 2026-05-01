/*
 * XREFs of HamRpcSrvConnect @ 0x1800426E0
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

__int64 __fastcall HamRpcSrvConnect(void *a1, _QWORD *a2, int a3, _QWORD *a4)
{
  int v7; // ebx
  struct _WNF_STATE_NAME *v8; // rax
  struct _HAM_CLIENT_CONTEXT *v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+38h] [rbp-C8h]
  __int64 v13; // [rsp+40h] [rbp-C0h]
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  struct _WNF_STATE_NAME *v17; // [rsp+78h] [rbp-88h] BYREF
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+D0h] [rbp-30h] BYREF
  int *v20; // [rsp+F0h] [rbp-10h]
  int v21; // [rsp+F8h] [rbp-8h]
  int v22; // [rsp+FCh] [rbp-4h]

  v17 = 0LL;
  Handle = 0LL;
  v7 = CempRpcQueryClientInformation(a1, DestinationSid, &TokenInformation, &v14, 0LL, &Handle);
  if ( v7 < 0 )
  {
    if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
    {
      v22 = 0;
      v20 = &v14;
      v14 = v7;
      v21 = 4;
      tlgWriteTransfer_EventWriteTransfer(v11, (unsigned __int8 *)dword_1800BFF18, 0LL, 0LL, 3u, &v19);
    }
  }
  else
  {
    v7 = HamSrvConnect(
           (__int64)RmSvcGlobals + 2248,
           v14,
           (union _RM_SID *)DestinationSid,
           Handle,
           TokenInformation,
           0,
           a3,
           v12,
           v13,
           0LL,
           &v17);
    if ( v7 < 0 )
    {
      v9 = (struct _HAM_CLIENT_CONTEXT *)v17;
    }
    else
    {
      v8 = v17;
      v9 = 0LL;
      *a2 = v17;
      v7 = 0;
      *a4 = v8[13];
    }
    if ( v9 )
      HamSrvDisconnect(v9);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v7;
}
