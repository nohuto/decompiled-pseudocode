/*
 * XREFs of _lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_ @ 0x18046E12C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_e29b4b5f2e56a6b31b6c15463fc9fe57___::Invoke @ 0x18046E4C0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18046E4C0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Options@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006D9B8 (-Options@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequested.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Context@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D5232 (-Context@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@Win.c)
 *     ?InvocationPoint@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D5284 (-InvocationPoint@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?InvokerWindowId@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D52C8 (-InvokerWindowId@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ??$try_query@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18046E264 (--$try_query@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     ?ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z @ 0x18046E750 (-ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const___(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  _QWORD *v5; // rax
  __int64 v6; // r8
  bool v7; // bl
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]
  __int64 v13; // [rsp+60h] [rbp+28h] BYREF
  __int64 v14; // [rsp+68h] [rbp+30h] BYREF
  __int64 *v15; // [rsp+70h] [rbp+38h]
  volatile signed __int32 *v16; // [rsp+78h] [rbp+40h] BYREF

  v15 = a3;
  v14 = a2;
  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager>(
    a1 + 1,
    &v13);
  if ( v13 )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
      a3,
      &v14);
    v12 = 0LL;
    v11 = *winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InvocationPoint(
             &v14,
             &v16);
    v5 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::Context(
           &v14,
           &v16);
    v7 = winrt::operator==((__int64)v5, (__int64)L"LogonWebHost", v6);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
    if ( v7 )
    {
      *(_BYTE *)(*a1 + 104) = 1;
      v12 = 0x42C8000042C80000LL;
    }
    v8 = *a1;
    v9 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InvokerWindowId(&v14);
    CNetworkExperienceManager::ShowFlyout(v8, &v11, v9);
    if ( v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  if ( *a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a3);
  return 0LL;
}
