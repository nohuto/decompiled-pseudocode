/*
 * XREFs of ?OnAppViewRemoved@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewChangedEventArgs@3456@@Z @ 0x1801531E0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d6dda64102a40c6cb4a865a2145574c7___ @ 0x18015321C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_d6dda64102a40c6cb4a865a2145574c7.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewRemoved(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewChangedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewChangedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6[1] = this;
  v6[0] = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d6dda64102a40c6cb4a865a2145574c7___(
           v4,
           CurrentThreadId,
           v6);
}
