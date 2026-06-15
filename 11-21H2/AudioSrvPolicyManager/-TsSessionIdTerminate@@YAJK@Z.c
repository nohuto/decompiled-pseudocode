/*
 * XREFs of ?TsSessionIdTerminate@@YAJK@Z @ 0x18002F99C
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002D4C0 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x180030AB4 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z.c)
 */

__int64 __fastcall TsSessionIdTerminate(DWORD SessionId)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  struct TSSession *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct TSSession *v8; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v9 = v2;
  v3 = TsSessionFromSessionId(SessionId, 0, &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = v8;
    *((_DWORD *)v8 + 8) = 1;
    *((_QWORD *)v6 + 124) = *((_QWORD *)v6 + 123);
    *((_DWORD *)v6 + 252) = 1065353216;
    *((_DWORD *)v6 + 268) = 0;
    *((_BYTE *)v6 + 1092) = 0;
    TsSessionUpdateAudioProtocol(v6, 0xFFFFu);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  else if ( v3 == -2147023728 )
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return 2147943568LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61E,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v3);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v4;
  }
}
