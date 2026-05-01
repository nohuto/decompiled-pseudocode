/*
 * XREFs of ?OnUwpWindowActivating@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIUwpWindowActivatingEventArgs@3456@@Z @ 0x180402500
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_df0a6be8ab5dbb36f0eb982441659996___ @ 0x1803FF0D8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_df0a6be8ab5dbb36f0eb982441659996.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowActivating(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *a2,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivatingEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivatingEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_df0a6be8ab5dbb36f0eb982441659996___(
           v4,
           CurrentThreadId,
           &v6);
}
