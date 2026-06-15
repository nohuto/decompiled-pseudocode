/*
 * XREFs of ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002FF48
 * Callers:
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002D610 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18002E564 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18002F5F8 (-TsSessionIdLogon@@YAJK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001828 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18002C708 (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TsSessionNewPrimaryConsoleAudioSession(struct TSSession *a1)
{
  _QWORD *i; // rax
  unsigned int *v3; // rcx
  unsigned int v4; // ebx
  _DWORD *v5; // rcx
  int v6; // eax
  int v7; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v8; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-58h] BYREF
  unsigned int *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  EnterCriticalSection(&stru_18005C5D8);
  if ( *(_DWORD *)a1 )
  {
    for ( i = *(_QWORD **)qword_18005C6B8; ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)qword_18005C6B8 )
      {
        v4 = -2;
        goto LABEL_13;
      }
      v3 = (unsigned int *)i[3];
      if ( *v3 )
      {
        if ( v3[278] )
          break;
      }
    }
    if ( v3 == (unsigned int *)a1 )
      goto LABEL_18;
    v4 = -2;
    if ( v3 )
    {
      v4 = *v3;
      v3[278] = 0;
      if ( g_MaxSessions <= 1 )
        v3[9] = 1;
    }
LABEL_13:
    *((_DWORD *)a1 + 278) = 1;
    *((_DWORD *)a1 + 9) = 0;
    if ( g_MaxSessions <= 1 )
    {
      v5 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
      if ( *v5 > 4u )
      {
        v7 = *(_DWORD *)a1;
        v8 = v4;
        v13 = &v7;
        v14 = 4;
        v15 = 0;
        v10 = &v8;
        v11 = 4;
        v12 = 0;
        tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_18005146E, 0LL, 0LL, 4u, &v9);
      }
      v6 = QueueSessionMuteUnmute(v4, *(_DWORD *)a1);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x36F,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v6);
    }
LABEL_18:
    LeaveCriticalSection(&stru_18005C5D8);
  }
  else
  {
    LeaveCriticalSection(&stru_18005C5D8);
  }
}
