/*
 * XREFs of ??$try_query@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18046E264
 * Callers:
 *     _lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_ @ 0x18046E12C (_lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_4217e144a03c6a3217c75ef3b58aa59f___::Invoke @ 0x18046E430 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18046E430.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *a1;
  *a2 = 0LL;
  (*(void (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v3 + 24LL))(
    v3,
    &GUID_c9ddc674_b44b_4c67_9d79_2b237d9be05a,
    a2);
  return a2;
}
