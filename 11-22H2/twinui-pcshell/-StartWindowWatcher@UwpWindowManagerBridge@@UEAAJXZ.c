/*
 * XREFs of ?StartWindowWatcher@UwpWindowManagerBridge@@UEAAJXZ @ 0x1801997B0
 * Callers:
 *     ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1800A44BC (-RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z.c)
 * Callees:
 *     ?IsBamoEnabled@@YA_NXZ @ 0x1800D2E84 (-IsBamoEnabled@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f991981efcc52a1e7ce38201fb3a674d___ @ 0x18019980C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f991981efcc52a1e7ce38201fb3a674d.c)
 *     ?WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1801998F0 (-WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a6da347bd35d077b27888479a1bad3f8___ @ 0x1804DF61C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_a6da347bd35d077b27888479a1bad3f8.c)
 */

__int64 __fastcall UwpWindowManagerBridge::StartWindowWatcher(RTL_SRWLOCK *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  DWORD v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  if ( IsBamoEnabled() )
  {
    SRWLock = this;
    CurrentThreadId = GetCurrentThreadId();
    v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f991981efcc52a1e7ce38201fb3a674d___(
           v3,
           CurrentThreadId,
           &SRWLock);
    v5 = v4;
    if ( v4 >= 0 )
    {
LABEL_3:
      ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowWatcherStarted();
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C3,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    AcquireSRWLockExclusive(this + 32);
    SRWLock = this + 32;
    *(_QWORD *)v10 = this;
    p_SRWLock = &SRWLock;
    v7 = GetCurrentThreadId();
    v9 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a6da347bd35d077b27888479a1bad3f8___(
           v8,
           v7,
           v10);
    v5 = v9;
    if ( v9 >= 0 )
    {
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      goto LABEL_3;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B0,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v9);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  return v5;
}
