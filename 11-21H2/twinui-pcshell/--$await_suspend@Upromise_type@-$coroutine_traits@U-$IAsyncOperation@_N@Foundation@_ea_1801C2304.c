/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@@experimental@std@@@Z @ 0x1801C2304
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     ApplicationFlyoutView::Hide$_ResumeCoro$1 @ 0x1801D5250 (ApplicationFlyoutView--Hide$_ResumeCoro$1.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1801D56C0 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x1801DA2F0 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ___await_suspend_Upromise_type___coroutine_traits_U__IAsyncOperation__N_Foundation_Windows_winrt____V_experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_U__IAsyncOperation__N_Foundation_Windows_winrt____V_experimental_std___experimental_std___Z(
        __int64 a1,
        void *a2)
{
  return winrt::impl::resume_background(a2);
}
