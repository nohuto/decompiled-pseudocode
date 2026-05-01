/*
 * XREFs of ?OnUwpWindowSwitchRequested@UwpWindowManagerBridge@@AEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUISwitchRequestedEventArgs@3456@@Z @ 0x1804E0530
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5c081bd799e56ac9909073ef2bb66a39___ @ 0x1804DF26C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_5c081bd799e56ac9909073ef2bb66a39.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowSwitchRequested(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5c081bd799e56ac9909073ef2bb66a39___(
           v4,
           CurrentThreadId,
           &v6);
}
