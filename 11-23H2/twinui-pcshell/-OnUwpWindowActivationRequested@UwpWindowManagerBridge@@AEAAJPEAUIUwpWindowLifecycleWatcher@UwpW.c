/*
 * XREFs of ?OnUwpWindowActivationRequested@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIUwpWindowActivationRequestedEventArgs@3456@@Z @ 0x180188400
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c9523ed7882cd3919598183a66ab281e___ @ 0x18018843C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_c9523ed7882cd3919598183a66ab281e.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowActivationRequested(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *a2,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6[0] = this;
  v6[1] = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c9523ed7882cd3919598183a66ab281e___(
           v4,
           CurrentThreadId,
           v6);
}
