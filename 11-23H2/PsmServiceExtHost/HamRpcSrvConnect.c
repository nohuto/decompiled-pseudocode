/*
 * XREFs of HamRpcSrvConnect @ 0x180041CA0
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcQueryClientInformation @ 0x18000520C (CempRpcQueryClientInformation.c)
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012B04 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004C4B8 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@details@wil@@QEAA_NXZ @ 0x18004D274 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@detail.c)
 */

__int64 __fastcall HamRpcSrvConnect(
        void *a1,
        struct _HAM_CLIENT_CONTEXT **a2,
        int a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        struct _HAM_CLIENT_CONTEXT **a8)
{
  int v9; // ebx
  __int64 v10; // rcx
  char IsEnabled; // al
  struct _HAM_CLIENT_CONTEXT *v12; // rbx
  DWORD CurrentProcessId; // eax
  struct _HAM_CLIENT_CONTEXT *v14; // rcx
  __int64 v15; // rax
  struct _HAM_CLIENT_CONTEXT *v16; // rcx
  int v18; // [rsp+28h] [rbp-D8h]
  unsigned int v19; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+70h] [rbp-90h]
  int TokenInformation; // [rsp+74h] [rbp-8Ch] BYREF
  struct _HAM_CLIENT_CONTEXT *v23; // [rsp+78h] [rbp-88h]
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v25[24]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-18h]
  unsigned int *v27; // [rsp+F0h] [rbp-10h]
  int v28; // [rsp+F8h] [rbp-8h]
  int v29; // [rsp+FCh] [rbp-4h]

  v23 = 0LL;
  Handle = 0LL;
  v26 = 0LL;
  v21 = a3;
  *(_QWORD *)v25 = a4;
  *(_OWORD *)&v25[8] = 0LL;
  v9 = CempRpcQueryClientInformation(a1, DestinationSid, &TokenInformation, &v19, 0LL, &Handle);
  if ( v9 >= 0 )
  {
    LOBYTE(v18) = 0;
    v9 = HamSrvConnect((char *)RmSvcGlobals + 2248, v19, DestinationSid, Handle, TokenInformation, v18, v21);
    if ( v9 < 0 )
    {
      v16 = v23;
    }
    else
    {
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerRpcBypass>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ResourceManagerRpcBypass>::GetImpl'::`2'::impl);
      v12 = v23;
      if ( IsEnabled )
      {
        CurrentProcessId = GetCurrentProcessId();
        v14 = 0LL;
        if ( v19 == CurrentProcessId )
          v14 = v12;
        *a8 = v14;
      }
      else
      {
        *a8 = 0LL;
      }
      v15 = *(_QWORD *)&v25[8];
      v16 = 0LL;
      *a2 = v12;
      v9 = 0;
      *a5 = v15;
      *a6 = *(_DWORD *)&v25[16];
      *a7 = v26;
    }
    if ( v16 )
      HamSrvDisconnect(v16);
  }
  else if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v29 = 0;
    v27 = &v19;
    v19 = v9;
    v28 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      v10,
      (unsigned __int8 *)dword_1800C1D84,
      0LL,
      0LL,
      3u,
      (PEVENT_DATA_DESCRIPTOR)v25);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v9;
}
