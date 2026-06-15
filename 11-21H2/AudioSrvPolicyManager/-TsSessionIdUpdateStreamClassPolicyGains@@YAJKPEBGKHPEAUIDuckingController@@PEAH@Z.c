/*
 * XREFs of ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z @ 0x18002FA9C
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180031D70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180032264 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@PEAH@Z @ 0x180030BB0 (-UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@P.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TsSessionIdUpdateStreamClassPolicyGains(
        DWORD SessionId,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        struct IDuckingController *a5,
        int *a6)
{
  struct TSSession *v10; // rdi
  int v11; // ebp
  int v12; // eax
  unsigned int v13; // ebx
  int updated; // eax
  int v16; // eax
  unsigned int v17; // esi
  int v18; // [rsp+40h] [rbp-38h] BYREF
  struct TSSession *v19[3]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v10 = (CApplicationManager *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v19[1] = v10;
  v11 = 1;
  v12 = TsSessionFromSessionId(SessionId, 1, v19);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67E,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v12);
    if ( v10 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v10);
    return v13;
  }
  v18 = 0;
  updated = UpdatePolicyGainsFromStreamClassPolicyTable(v19[0], a2, a3, 1, a4, a5, &v18);
  v13 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x683,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)updated);
    if ( v10 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v10);
    return v13;
  }
  if ( a6 )
    *a6 = v18;
  v16 = UpdatePolicyGainsFromStreamClassPolicyTable(v19[0], a2, a3, 0, a4, a5, &v18);
  v17 = v16;
  if ( v16 >= 0 )
  {
    if ( a6 )
    {
      if ( !*a6 && !v18 )
        v11 = 0;
      *a6 = v11;
    }
    if ( v10 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68A,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v16);
    if ( v10 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v10);
    return v17;
  }
}
