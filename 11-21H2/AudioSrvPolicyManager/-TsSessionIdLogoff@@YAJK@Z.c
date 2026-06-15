/*
 * XREFs of ?TsSessionIdLogoff@@YAJK@Z @ 0x18002F4D8
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002D4C0 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TsSessionIdLogoff(DWORD SessionId)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  struct TSSession *v6; // rbx
  void *v7; // rcx
  void *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct TSSession *v10; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v11 = v2;
  v3 = TsSessionFromSessionId(SessionId, 0, &v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = v10;
    *((_DWORD *)v10 + 268) = 0;
    *((_BYTE *)v6 + 1092) = 0;
    if ( v2 )
      LeaveCriticalSection(v2);
    v7 = (void *)*((_QWORD *)v6 + 128);
    if ( v7 )
    {
      PowerSettingUnregisterNotification(v7);
      *((_QWORD *)v6 + 128) = 0LL;
    }
    v8 = (void *)*((_QWORD *)v6 + 129);
    if ( v8 )
    {
      PowerSettingUnregisterNotification(v8);
      *((_QWORD *)v6 + 129) = 0LL;
    }
    *((_DWORD *)v6 + 253) = 1;
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
      (void *)0x638,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v3);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v4;
  }
}
