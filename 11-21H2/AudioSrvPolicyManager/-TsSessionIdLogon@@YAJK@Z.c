/*
 * XREFs of ?TsSessionIdLogon@@YAJK@Z @ 0x18002F5F8
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002D4C0 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x18002C84C (-RegisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002FF48 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800302C8 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionIdLogon(DWORD SessionId)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  TSSession *v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TSSession *v8; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v9 = v2;
  v3 = TsSessionFromSessionId(SessionId, 1, &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = v8;
    TsSessionRefreshSessionInformation(v8);
    TSSession::RegisterSessionDisplayNotificationCallback(v6);
    if ( !*((_DWORD *)v6 + 1) )
      TsSessionNewPrimaryConsoleAudioSession(v6);
    g_bIsSystemAsleep = 0;
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5EA,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v3);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v4;
  }
}
