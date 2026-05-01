/*
 * XREFs of ?OnUwpWindowActivationRequested@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIUwpWindowActivationRequestedEventArgs@3456@@Z @ 0x180402540
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_477afa667f6320a6ee8b612a1016e3ab___ @ 0x1803FE4DC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_477afa667f6320a6ee8b612a1016e3ab.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowActivationRequested(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *a2,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_477afa667f6320a6ee8b612a1016e3ab___(
           v4,
           CurrentThreadId,
           &v6);
}
