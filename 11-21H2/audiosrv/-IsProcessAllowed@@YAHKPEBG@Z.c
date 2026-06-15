/*
 * XREFs of ?IsProcessAllowed@@YAHKPEBG@Z @ 0x180025050
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180024820 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1800CF190 (WPP_SF_dd.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall IsProcessAllowed(DWORD dwProcessId, const unsigned __int16 *a2)
{
  unsigned int v4; // edi
  int v5; // r15d
  RPC_STATUS v6; // eax
  signed int v7; // ebx
  unsigned int v8; // eax
  DWORD pSessionId; // [rsp+30h] [rbp-49h] BYREF
  __int64 v11; // [rsp+38h] [rbp-41h] BYREF
  __int64 v12; // [rsp+40h] [rbp-39h] BYREF
  __int64 v13; // [rsp+48h] [rbp-31h] BYREF
  __int64 v14; // [rsp+50h] [rbp-29h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v16; // [rsp+68h] [rbp-11h]
  PROPVARIANT v17[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v18; // [rsp+80h] [rbp+7h]
  DEVPROPGUID fmtid; // [rsp+88h] [rbp+Fh] BYREF
  int v20; // [rsp+98h] [rbp+1Fh]

  v4 = 0;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v5 = 0;
  pSessionId = 0;
  *(_OWORD *)pvar = 0LL;
  v16 = 0LL;
  *(_OWORD *)v17 = 0LL;
  v18 = 0LL;
  v6 = RpcImpersonateClient(0LL);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      v7 = (unsigned __int16)v6 | 0x80070000;
    if ( v7 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("IsProcessAllowed", 0x20Bu, v7);
      PropVariantClear(pvar);
      PropVariantClear(v17);
LABEL_31:
      AudSrvTraceLoggingErrorHelper("IsProcessAllowed", 0x25Du, v7);
      goto LABEL_18;
    }
  }
  if ( !ProcessIdToSessionId(dwProcessId, &pSessionId) )
    pSessionId = 0;
  v7 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
         g_DeviceEnumerator,
         a2,
         &v14);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, &v13);
    if ( v7 >= 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(
              v13,
              &PKEY_Endpoint_Devnode,
              pvar) )
      {
        if ( LOWORD(pvar[0]) == 31 )
        {
          v7 = (*(__int64 (__fastcall **)(LPVOID, PROPVARIANT, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
                 g_DeviceEnumerator,
                 pvar[1],
                 &v11);
          if ( v7 < 0 )
            goto LABEL_16;
          v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, 0LL, &v12);
          if ( v7 < 0 )
            goto LABEL_16;
          fmtid = DEVPKEY_Device_SessionId.fmtid;
          v20 = 6;
          if ( (*(int (__fastcall **)(__int64, DEVPROPGUID *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(v12, &fmtid, v17) >= 0
            && LOWORD(v17[0]) == 19 )
          {
            v5 = (int)v17[1];
          }
        }
        else
        {
          v5 = 0;
        }
      }
      if ( pSessionId && v5 && pSessionId != v5 )
      {
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_dd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            10LL,
            &WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids,
            pSessionId,
            v5);
        }
      }
      else
      {
        v4 = 1;
      }
    }
  }
LABEL_16:
  PropVariantClear(pvar);
  PropVariantClear(v17);
  v8 = RpcRevertToSelf();
  if ( v8
    && WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids, v8);
  }
  if ( v7 < 0 )
    goto LABEL_31;
LABEL_18:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v4;
}
