/*
 * XREFs of ?OnAppViewRemoved@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewChangedEventArgs@3456@@Z @ 0x1804D9C30
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d6dda64102a40c6cb4a865a2145574c7___ @ 0x1804D686C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_d6dda64102a40c6cb4a865a2145574c7.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewRemoved(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewChangedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewChangedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *((_QWORD *)&v6 + 1) = this;
  *(_QWORD *)&v6 = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d6dda64102a40c6cb4a865a2145574c7___(
           v4,
           CurrentThreadId,
           &v6);
}
