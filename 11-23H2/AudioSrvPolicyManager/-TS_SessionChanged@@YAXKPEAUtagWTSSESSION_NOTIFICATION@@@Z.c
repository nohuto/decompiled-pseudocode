/*
 * XREFs of ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180037500
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001520 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18001116C (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?QueueVolumeRefreshForAllTsSessions@@YAXXZ @ 0x180035E4C (-QueueVolumeRefreshForAllTsSessions@@YAXXZ.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180038214 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdDisconnect@@YAXK@Z @ 0x18003847C (-TsSessionIdDisconnect@@YAXK@Z.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x1800388BC (-TsSessionIdLogoff@@YAJK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x180038954 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x180038CD4 (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?UpdateGlobalUserPresenceState@@YAXXZ @ 0x1800399B4 (-UpdateGlobalUserPresenceState@@YAXXZ.c)
 */

void __fastcall TS_SessionChanged(__int64 a1, struct tagWTSSESSION_NOTIFICATION *a2)
{
  DWORD dwSessionId; // edi
  int v3; // ebx
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  DWORD v15; // [rsp+48h] [rbp+10h] BYREF

  dwSessionId = a2->dwSessionId;
  v3 = a1;
  v4 = AudioSrvPolicyManagerTelemetryProvider::Provider(a1);
  if ( *(_DWORD *)v4 > 4u )
  {
    v14 = v3;
    v15 = dwSessionId;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v4,
      byte_180055942,
      v5,
      v6,
      (__int64)&v15,
      (__int64)&v14);
  }
  v7 = v3 - 1;
  if ( !v7 )
    goto LABEL_16;
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_15:
    TsSessionIdDisconnect(dwSessionId);
    return;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_16:
    TsSessionIdConnect(dwSessionId);
    return;
  }
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_15;
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 == 3 )
          TsSessionIdTerminate(dwSessionId);
      }
      else
      {
        QueueVolumeRefreshForAllTsSessions();
      }
    }
    else
    {
      TsSessionIdLogoff(dwSessionId);
    }
  }
  else
  {
    UpdateGlobalUserPresenceState();
    TsSessionIdLogon(dwSessionId);
  }
}
