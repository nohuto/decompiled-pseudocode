/*
 * XREFs of ?OnAppViewActivationShowRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewActivationShowRequestedEventArgs@3456@@Z @ 0x18003C2C0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_15bb8f8d6e6026029f894c06bbc739d7___ @ 0x18003C2FC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_15bb8f8d6e6026029f894c06bbc739d7.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewActivationShowRequested(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6[0] = this;
  v6[1] = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_15bb8f8d6e6026029f894c06bbc739d7___(
           v4,
           CurrentThreadId,
           v6);
}
