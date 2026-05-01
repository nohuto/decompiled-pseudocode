/*
 * XREFs of ?OnUwpWindowShowRequested@UwpWindowManagerBridge@@AEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIShowRequestedEventArgs@3456@@Z @ 0x1804E04F0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8b1e78640b6eb1b0fa0fb7a4c41b80e4___ @ 0x1804DF530 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8b1e78640b6eb1b0fa0fb7a4c41b80e4.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowShowRequested(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8b1e78640b6eb1b0fa0fb7a4c41b80e4___(
           v4,
           CurrentThreadId,
           &v6);
}
