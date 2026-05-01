/*
 * XREFs of ?GetNavigationLevelForView@UwpWindowManagerBridge@@UEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAW4NavigationLevel@ViewManagerInterop@456@@Z @ 0x180401EB0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_365391053940a4cfa0299527f9e78222___ @ 0x1803FE3F0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_365391053940a4cfa0299527f9e78222.c)
 */

__int64 __fastcall UwpWindowManagerBridge::GetNavigationLevelForView(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *a2,
        enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *v7; // [rsp+48h] [rbp+10h] BYREF
  enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a2;
  *(_DWORD *)a3 = 0;
  *(_QWORD *)&v6 = &v7;
  *((_QWORD *)&v6 + 1) = &v8;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_365391053940a4cfa0299527f9e78222___(
           v4,
           CurrentThreadId,
           &v6);
}
