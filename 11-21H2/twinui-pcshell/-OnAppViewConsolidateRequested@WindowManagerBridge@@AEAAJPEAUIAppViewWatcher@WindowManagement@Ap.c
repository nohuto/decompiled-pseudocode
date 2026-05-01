/*
 * XREFs of ?OnAppViewConsolidateRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewRequestEventArgs@3456@@Z @ 0x18002AA10
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8d2a9e7f431c347a396a254d47f4c32b___ @ 0x18002AA4C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8d2a9e7f431c347a396a254d47f4c32b.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewConsolidateRequested(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewRequestEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewRequestEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6[0] = this;
  v6[1] = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8d2a9e7f431c347a396a254d47f4c32b___(
           v4,
           CurrentThreadId,
           v6);
}
