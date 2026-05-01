/*
 * XREFs of ?OnUwpWindowConsolidateRequested@UwpWindowManagerBridge@@AEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIConsolidateRequestedEventArgs@3456@@Z @ 0x180402600
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_774c94b6ef72c21241bb5eed1c6d6fa6___ @ 0x1803FE7A0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_774c94b6ef72c21241bb5eed1c6d6fa6.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowConsolidateRequested(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IConsolidateRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IConsolidateRequestedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_774c94b6ef72c21241bb5eed1c6d6fa6___(
           v4,
           CurrentThreadId,
           &v6);
}
