/*
 * XREFs of ?OnAppViewActivationRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewActivationRequestedEventArgs@3456@@Z @ 0x1804D9AA0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_87984a7f013321c2cf24c34ab883f75e___ @ 0x1804D5F40 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_87984a7f013321c2cf24c34ab883f75e.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewActivationRequested(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_87984a7f013321c2cf24c34ab883f75e___(
           v4,
           CurrentThreadId,
           &v6);
}
