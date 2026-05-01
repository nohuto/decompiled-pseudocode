/*
 * XREFs of ?OnApplyWindowingEnvironmentSettingsRequested@UwpWindowManagerBridge@@AEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIApplyWindowingEnvironmentSettingsRequestedEventArgs@3456@@Z @ 0x1804E0430
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_aacbfc88f076bcf4687c816dddb7e237___ @ 0x1804DF708 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_aacbfc88f076bcf4687c816dddb7e237.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnApplyWindowingEnvironmentSettingsRequested(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IApplyWindowingEnvironmentSettingsRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IApplyWindowingEnvironmentSettingsRequestedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_aacbfc88f076bcf4687c816dddb7e237___(
           v4,
           CurrentThreadId,
           &v6);
}
