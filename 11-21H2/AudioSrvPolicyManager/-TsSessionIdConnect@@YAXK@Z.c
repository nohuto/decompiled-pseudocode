/*
 * XREFs of ?TsSessionIdConnect@@YAXK@Z @ 0x18002E564
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002D4C0 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001828 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18002C708 (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002FF48 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800302C8 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x180030AB4 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x1800410E8 (-GetTsAudioProtocol@@YAIK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TsSessionIdConnect(DWORD SessionId)
{
  unsigned int TsAudioProtocol; // esi
  struct TSSession *v3; // rdi
  struct TSSession *v4; // rbx
  _DWORD *v5; // rcx
  int v6; // eax
  _DWORD *v7; // rcx
  int v8; // eax
  struct TSSession *v9[2]; // [rsp+30h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-40h] BYREF
  struct TSSession **v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  TsAudioProtocol = GetTsAudioProtocol(SessionId);
  v3 = (CApplicationManager *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v9[1] = v3;
  if ( (int)TsSessionFromSessionId(SessionId, 1, v9) >= 0 )
  {
    v4 = v9[0];
    TsSessionRefreshSessionInformation(v9[0]);
    TsSessionUpdateAudioProtocol(v4, TsAudioProtocol);
    if ( *((_QWORD *)v4 + 3) == -130LL || !*(_WORD *)(*((_QWORD *)v4 + 3) + 130LL) )
    {
      v5 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
      if ( *v5 > 4u )
      {
        LODWORD(v9[0]) = *(_DWORD *)v4;
        v11 = v9;
        v12 = 4LL;
        tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_18005140F, 0LL, 0LL, 3u, &v10);
      }
      *((_DWORD *)v4 + 9) = 0;
      *((_DWORD *)v4 + 278) = 0;
      v6 = QueueSessionMuteUnmute(0xFFFFFFFF, *(_DWORD *)v4);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5B3,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v6);
    }
    if ( TsAudioProtocol )
    {
      if ( TsAudioProtocol != 0xFFFF )
      {
        v7 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
        if ( *v7 > 4u )
        {
          LODWORD(v9[0]) = *(_DWORD *)v4;
          v11 = v9;
          v12 = 4LL;
          tlgWriteTransfer_EventWriteTransfer((__int64)v7, (unsigned __int8 *)dword_1800513D3, 0LL, 0LL, 3u, &v10);
        }
        *((_DWORD *)v4 + 9) = 0;
        *((_DWORD *)v4 + 278) = 0;
        v8 = QueueSessionMuteUnmute(0xFFFFFFFF, *(_DWORD *)v4);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5D5,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)(unsigned int)v8);
      }
    }
    else if ( *(_QWORD *)(*((_QWORD *)v4 + 3) + 200LL) )
    {
      TsSessionNewPrimaryConsoleAudioSession(v4);
    }
  }
  if ( v3 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v3);
}
