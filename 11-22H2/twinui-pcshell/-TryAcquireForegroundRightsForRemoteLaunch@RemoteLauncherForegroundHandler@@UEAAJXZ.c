/*
 * XREFs of ?TryAcquireForegroundRightsForRemoteLaunch@RemoteLauncherForegroundHandler@@UEAAJXZ @ 0x180489300
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180012B84 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RemoteLauncherForegroundHandler::TryAcquireForegroundRightsForRemoteLaunch(
        RemoteLauncherForegroundHandler *this)
{
  DWORD ProcessId; // edi
  int CallingProcessHandle; // ebx
  char *v4; // rcx
  __int64 v5; // rdx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE Process; // [rsp+38h] [rbp+10h] BYREF

  ProcessId = 0;
  Process = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle((__int64)this, 0, &Process);
  if ( CallingProcessHandle >= 0 )
    ProcessId = GetProcessId(Process);
  v4 = (char *)Process;
  Process = 0LL;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  if ( CallingProcessHandle < 0 )
  {
    v5 = 31LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\remotelauncherforegroundhandler\\lib\\remotelauncherforegroundhandler.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
    return (unsigned int)CallingProcessHandle;
  }
  CallingProcessHandle = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6));
  if ( CallingProcessHandle < 0 )
  {
    v5 = 32LL;
    goto LABEL_7;
  }
  if ( AllowSetForegroundWindow(ProcessId) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x21,
             (int)"pcshell\\twinui\\remotelauncherforegroundhandler\\lib\\remotelauncherforegroundhandler.cpp",
             v7);
}
