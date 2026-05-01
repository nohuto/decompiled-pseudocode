/*
 * XREFs of ?OnUwpWindowActivating@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIUwpWindowActivatingEventArgs@3456@@Z @ 0x180188540
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c44b5426fa553efd9c3c7553e38f4378___ @ 0x18018857C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_c44b5426fa553efd9c3c7553e38f4378.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowActivating(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *a2,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivatingEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivatingEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6[0] = this;
  v6[1] = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c44b5426fa553efd9c3c7553e38f4378___(
           v4,
           CurrentThreadId,
           v6);
}
