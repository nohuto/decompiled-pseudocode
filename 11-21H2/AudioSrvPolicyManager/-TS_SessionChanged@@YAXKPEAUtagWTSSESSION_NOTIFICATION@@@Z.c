/*
 * XREFs of ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002D4C0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001828 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18002E564 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x18002F4D8 (-TsSessionIdLogoff@@YAJK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18002F5F8 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x18002F99C (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x180030AB4 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TS_SessionChanged(int a1, struct tagWTSSESSION_NOTIFICATION *a2)
{
  DWORD dwSessionId; // edi
  _DWORD *v4; // rcx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  struct _RTL_CRITICAL_SECTION *v11; // rbx
  struct TSSession *v12; // [rsp+30h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp+7h] BYREF
  struct TSSession **v15; // [rsp+60h] [rbp+27h]
  int v16; // [rsp+68h] [rbp+2Fh]
  int v17; // [rsp+6Ch] [rbp+33h]
  struct _RTL_CRITICAL_SECTION **v18; // [rsp+70h] [rbp+37h]
  int v19; // [rsp+78h] [rbp+3Fh]
  int v20; // [rsp+7Ch] [rbp+43h]

  dwSessionId = a2->dwSessionId;
  v4 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v4 > 4u )
  {
    LODWORD(v13) = a1;
    LODWORD(v12) = dwSessionId;
    v18 = &v13;
    v19 = 4;
    v20 = 0;
    v15 = &v12;
    v16 = 4;
    v17 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_18005120E, 0LL, 0LL, 4u, &v14);
  }
  v5 = a1 - 1;
  if ( !v5 )
    goto LABEL_18;
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_13;
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_18:
    TsSessionIdConnect(dwSessionId);
    return;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 5 )
          TsSessionIdTerminate(dwSessionId);
      }
      else
      {
        TsSessionIdLogoff(dwSessionId);
      }
    }
    else
    {
      TsSessionIdLogon(dwSessionId);
    }
    return;
  }
LABEL_13:
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v13 = v11;
  if ( (int)TsSessionFromSessionId(dwSessionId, 0, &v12) >= 0 && *((_DWORD *)v12 + 1) )
    TsSessionUpdateAudioProtocol(v12, 0xFFFFu);
  if ( v11 )
    LeaveCriticalSection(v11);
}
