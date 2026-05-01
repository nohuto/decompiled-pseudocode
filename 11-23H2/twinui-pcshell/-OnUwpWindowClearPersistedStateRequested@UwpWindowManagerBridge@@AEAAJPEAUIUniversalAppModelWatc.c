/*
 * XREFs of ?OnUwpWindowClearPersistedStateRequested@UwpWindowManagerBridge@@AEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIClearPersistedStateRequestedEventArgs@3456@@Z @ 0x1804E04B0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0c2e9dd4cd84629248a9b88fd097a1ee___ @ 0x1804DEFA8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_0c2e9dd4cd84629248a9b88fd097a1ee.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowClearPersistedStateRequested(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IClearPersistedStateRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IClearPersistedStateRequestedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0c2e9dd4cd84629248a9b88fd097a1ee___(
           v4,
           CurrentThreadId,
           &v6);
}
