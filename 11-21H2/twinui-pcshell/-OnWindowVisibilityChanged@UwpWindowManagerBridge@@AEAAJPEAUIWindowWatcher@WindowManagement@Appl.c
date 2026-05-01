/*
 * XREFs of ?OnWindowVisibilityChanged@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowVisibilityChangedEventArgs@3456@@Z @ 0x1804028C0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dc9686741de0074273998f04b9bde05f___ @ 0x1803FEFEC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_dc9686741de0074273998f04b9bde05f.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnWindowVisibilityChanged(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowVisibilityChangedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IWindowVisibilityChangedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dc9686741de0074273998f04b9bde05f___(
           v4,
           CurrentThreadId,
           &v6);
}
