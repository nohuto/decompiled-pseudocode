/*
 * XREFs of ??$try_query@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801756C8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_33df53f0a5c6c2e59bfdad46adf4b238___::Invoke @ 0x180195410 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180195410.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_08276f5f844ba9209a6654755ac22028___::Invoke @ 0x1801954B0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1801954B0.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f9345ade4d310716fee31be19549ce9___::Run @ 0x180195690 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3f9345ade4d310716fee31be19549ce9___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___::Run @ 0x180195720 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___--Run.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IControlCenterExperienceManager>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *a1;
  *a2 = 0LL;
  (*(void (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v3 + 24LL))(
    v3,
    &GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20,
    a2);
  return a2;
}
