/*
 * XREFs of ?OnWindowRemoved@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@3456@@Z @ 0x1804D9F10
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2b4d32ff2859258230c5ede45332d9dd___ @ 0x1804D5C7C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_2b4d32ff2859258230c5ede45332d9dd.c)
 */

__int64 __fastcall WindowManagerBridge::OnWindowRemoved(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *((_QWORD *)&v6 + 1) = this;
  *(_QWORD *)&v6 = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2b4d32ff2859258230c5ede45332d9dd___(
           v4,
           CurrentThreadId,
           &v6);
}
