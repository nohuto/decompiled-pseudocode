/*
 * XREFs of ?OnUwpWindowShowRequested@UwpWindowManagerBridge@@AEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIShowRequestedEventArgs@3456@@Z @ 0x1804026F0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_df42274116ac867365c3e22a046451ef___ @ 0x1803FF1C4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_df42274116ac867365c3e22a046451ef.c)
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
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_df42274116ac867365c3e22a046451ef___(
           v4,
           CurrentThreadId,
           &v6);
}
