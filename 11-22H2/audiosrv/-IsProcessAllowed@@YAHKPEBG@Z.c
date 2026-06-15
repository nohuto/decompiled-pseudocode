/*
 * XREFs of ?IsProcessAllowed@@YAHKPEBG@Z @ 0x18003DD98
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18003D84C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1800E3E38 (WPP_SF_dd.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall IsProcessAllowed(DWORD dwProcessId, const unsigned __int16 *a2)
{
  unsigned int v4; // esi
  int v5; // r14d
  int v6; // edi
  RPC_STATUS v7; // eax
  signed int v8; // ebx
  BOOL v9; // eax
  unsigned int v10; // eax
  DWORD pSessionId; // [rsp+30h] [rbp-49h] BYREF
  __int64 v13; // [rsp+38h] [rbp-41h] BYREF
  __int64 v14; // [rsp+40h] [rbp-39h] BYREF
  __int64 v15; // [rsp+48h] [rbp-31h] BYREF
  __int64 v16; // [rsp+50h] [rbp-29h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v18; // [rsp+68h] [rbp-11h]
  PROPVARIANT v19[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v20; // [rsp+80h] [rbp+7h]
  DEVPROPGUID fmtid; // [rsp+88h] [rbp+Fh] BYREF
  int v22; // [rsp+98h] [rbp+1Fh]

  v4 = 0;
  v5 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v6 = 0;
  pSessionId = 0;
  *(_OWORD *)pvar = 0LL;
  v18 = 0LL;
  *(_OWORD *)v19 = 0LL;
  v20 = 0LL;
  v7 = RpcImpersonateClient(0LL);
  v8 = v7;
  if ( v7 )
  {
    if ( v7 > 0 )
      v8 = (unsigned __int16)v7 | 0x80070000;
    if ( v8 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("IsProcessAllowed", 525, v8);
      goto LABEL_14;
    }
  }
  v5 = 1;
  v9 = ProcessIdToSessionId(dwProcessId, &pSessionId);
  pSessionId &= -v9;
  v8 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         a2,
         &v16);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, 0LL, &v15);
    if ( v8 >= 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
              v15,
              &PKEY_Endpoint_Devnode,
              pvar)
        && LOWORD(pvar[0]) == 31 )
      {
        v8 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, PROPVARIANT, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
               g_DeviceEnumerator,
               pvar[1],
               &v13);
        if ( v8 < 0 )
          goto LABEL_14;
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, 0LL, &v14);
        if ( v8 < 0 )
          goto LABEL_14;
        fmtid = DEVPKEY_Device_SessionId.fmtid;
        v22 = 6;
        if ( (*(int (__fastcall **)(__int64, DEVPROPGUID *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(v14, &fmtid, v19) >= 0
          && LOWORD(v19[0]) == 19 )
        {
          v6 = (int)v19[1];
        }
      }
      if ( pSessionId && v6 && pSessionId != v6 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids);
        }
        v4 = 0;
      }
      else
      {
        v4 = 1;
      }
    }
  }
LABEL_14:
  PropVariantClear(pvar);
  PropVariantClear(v19);
  if ( v5 )
  {
    v10 = RpcRevertToSelf();
    if ( v10 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids, v10);
      }
    }
  }
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("IsProcessAllowed", 607, v8);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v15);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v16);
  return v4;
}
