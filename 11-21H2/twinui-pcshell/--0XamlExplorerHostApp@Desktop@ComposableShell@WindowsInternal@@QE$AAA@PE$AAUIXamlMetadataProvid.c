/*
 * XREFs of ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x180064220
 * Callers:
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x1800633AC (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@UIPrivilegedPresentationOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1800634E4 (--0-$com_ptr_t@UIPrivilegedPresentationOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPr.c)
 *     ??0Application@Xaml@UI@Windows@@QE$AAA@XZ @ 0x180063988 (--0Application@Xaml@UI@Windows@@QE$AAA@XZ.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@@Z @ 0x1800641DC (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@@Z.c)
 *     ??$call@P6A?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@AEBUIWindowsXamlManagerStatics@23456@@Z@?$factory_cache_entry@UWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@UIWindowsXamlManagerStatics@23456@@impl@winrt@@QEAA?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@2@$$QEAP6A?AU345672@AEBUIWindowsXamlManagerStatics@45672@@Z@Z @ 0x180067268 (--$call@P6A-AUWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@AEBUIWindowsXamlManagerStatics@2.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$try_capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@_E$$V@winrt@@YA?AU?$com_ptr@UIContextCallback@impl@winrt@@@0@P6AHAEBUguid@0@PEAPEAX@_E@Z @ 0x1801019D4 (--$try_capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@_E$$V@winrt@@YA-AU-$com_ptr@.c)
 *     ?get_apartment_type@impl@winrt@@YA?AU?$pair@HH@std@@XZ @ 0x180101A10 (-get_apartment_type@impl@winrt@@YA-AU-$pair@HH@std@@XZ.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x180121640 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ?InitializeForCurrentThread@?$consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics@UIWindowsXamlManagerStatics@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@3@XZ @ 0x180176498 (-InitializeForCurrentThread@-$consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics@UIWindo.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  void **v8; // r9
  __int64 v9; // rcx
  void *v11; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[8]; // [rsp+28h] [rbp-30h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  *(_QWORD *)a1 = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `WindowsInternal::ComposableShell::Desktop::__IXamlExplorerHostAppPublicNonVirtuals'};
  *(_QWORD *)(a1 + 16) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Platform::Object's `Windows::UI::Xaml::Application'};
  *(_QWORD *)(a1 + 8) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Windows::UI::Xaml::IApplication'};
  *(_QWORD *)(a1 + 40) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Windows::UI::Xaml::IApplicationOverrides'};
  *(_QWORD *)(a1 + 64) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Windows::UI::Xaml::Markup::IXamlMetadataProvider'};
  *(_QWORD *)(a1 + 72) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 80) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 248);
  ___try_capture_UIContextCallback_impl_winrt__P6AHAEBUguid_3_PEAPEAX__E__V_winrt__YA_AU__com_ptr_UIContextCallback_impl_winrt___0_P6AHAEBUguid_0_PEAPEAX__E_Z(a1 + 88);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)winrt::impl::get_apartment_type(v12);
  wil::com_ptr_t<IPrivilegedPresentationOperations,wil::err_exception_policy>::com_ptr_t<IPrivilegedPresentationOperations,wil::err_exception_policy>(
    (_QWORD *)(a1 + 104),
    a3);
  *(_QWORD *)(a1 + 112) = __abi_winrt_ptr_ctor(a2);
  _Mtx_init_in_situ((_Mtx_t)(a1 + 120), 2);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>();
  *(_QWORD *)(a1 + 240) = 0LL;
  Windows::UI::Xaml::Application::Application(a1 + 8, v6, v7, v8);
  v13 = &qword_1807B43F8;
  _InterlockedIncrement64(&qword_1807B43F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager,winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics> )
  {
    winrt::impl::consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics<winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::InitializeForCurrentThread(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager,winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>,
      &v14);
    _InterlockedDecrement64(&qword_1807B43F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B43F8);
    v11 = &_lambda_55039be7b7b77d56f41928124535a284_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager,winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::call<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager (*)(winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics const &)>(
      v9,
      &v14,
      &v11);
  }
  winrt::Windows::Foundation::IUnknown::operator=(a1 + 240, &v14);
  if ( v14 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  return a1;
}
