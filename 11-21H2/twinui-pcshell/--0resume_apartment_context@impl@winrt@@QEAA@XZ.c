/*
 * XREFs of ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180101988
 * Callers:
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180022E64 (-await_suspend@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@St.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180022F40 (-await_suspend@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@.c)
 *     ??0XamlLauncher@@QEAA@XZ @ 0x1800650F8 (--0XamlLauncher@@QEAA@XZ.c)
 *     ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x1800FF8FC (--0CActionCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CControlCenterExperienceManager@@QEAA@XZ @ 0x180100A9C (--0CControlCenterExperienceManager@@QEAA@XZ.c)
 *     ??0MiniSearchExperienceManager@@QEAA@XZ @ 0x180101578 (--0MiniSearchExperienceManager@@QEAA@XZ.c)
 *     ??0CMultitaskingViewManager@@QEAA@XZ @ 0x18010178C (--0CMultitaskingViewManager@@QEAA@XZ.c)
 *     ?await_suspend@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180143190 (-await_suspend@-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU-$coro.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1801D8C10 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x18049B518 (-await_suspend@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAA.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x18056E974 (-await_suspend@-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEAAX.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1805D5F84 (-await_suspend@-$await_adapter@U-$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foun.c)
 *     ??0VirtualDesktopSwitcherHost@@QEAA@XZ @ 0x180607820 (--0VirtualDesktopSwitcherHost@@QEAA@XZ.c)
 * Callees:
 *     ?get_apartment_type@impl@winrt@@YA?AU?$pair@HH@std@@XZ @ 0x180101A10 (-get_apartment_type@impl@winrt@@YA-AU-$pair@HH@std@@XZ.c)
 *     WINRT_IMPL_CoGetObjectContext @ 0x18018F6F7 (WINRT_IMPL_CoGetObjectContext.c)
 */

winrt::impl::resume_apartment_context *__fastcall winrt::impl::resume_apartment_context::resume_apartment_context(
        winrt::impl::resume_apartment_context *this)
{
  int v2; // edx
  winrt::impl::resume_apartment_context *result; // rax
  LPVOID ppv; // [rsp+30h] [rbp+8h] BYREF

  ppv = 0LL;
  WINRT_IMPL_CoGetObjectContext(&winrt::impl::guid_v<winrt::impl::IContextCallback>, &ppv);
  *(_QWORD *)this = ppv;
  v2 = *(_DWORD *)winrt::impl::get_apartment_type(&ppv);
  result = this;
  *((_DWORD *)this + 2) = v2;
  return result;
}
