/*
 * XREFs of ??$make_factory@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18004A604
 * Callers:
 *     ?CreateInstance@XamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_KAEBUhstring@7@@Z @ 0x18004A30C (-CreateInstance@XamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@.c)
 *     ?XamlExplorerHost_WASDK_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B3A44 (-XamlExplorerHost_WASDK_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@.c)
 *     ?EnsureXamlApplication_WASDK@?$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplicationStatics@34567@@impl@winrt@@UEAAHXZ @ 0x1804F5740 (-EnsureXamlApplication_WASDK@-$produce@UXamlApplication@factory_implementation@XamlExplorerHost@.c)
 *     ?CreateInstance2@XamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_K0AEBUhstring@7@@Z @ 0x1804F8B78 (-CreateInstance2@XamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell.c)
 *     ?CreateInstance@XamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@67@@Z @ 0x1804FB47C (-CreateInstance@XamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Inter.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?get_static_lifetime_map@impl@winrt@@YA?AU?$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@2@XZ @ 0x1800B41C0 (-get_static_lifetime_map@impl@winrt@@YA-AU-$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@2@XZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>(
        _QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  int v6; // eax
  _QWORD v7[3]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v8; // [rsp+48h] [rbp-1h] BYREF
  _BYTE v9[8]; // [rsp+50h] [rbp+7h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp+Fh] BYREF
  _QWORD v11[4]; // [rsp+60h] [rbp+17h] BYREF

  v10 = a1;
  winrt::impl::get_static_lifetime_map(v7);
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v11,
    L"Windows.Internal.Shell.XamlExplorerHost.WASDK.XamlApplication_WASDK",
    0x43uLL);
  v8 = 0LL;
  v2 = v7[0];
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)v7[0] + 48LL))(v7[0], v11[0], &v8);
  if ( v8 )
  {
    *a1 = v8;
  }
  else
  {
    v4 = operator new(0x30uLL);
    v5 = v4 + 2;
    v4[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK,winrt::Windows::Foundation::IActivationFactory>::`vftable';
    v4[3] = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::IXamlApplication_WASDKStatics>::`vftable';
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    v4[1] = 1LL;
    v4[4] = 0LL;
    v4[5] = 0LL;
    *v4 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>::`vftable';
    v10 = v4 + 2;
    v7[2] = &`winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>'::`7'::lock;
    _Platform_AcquireSRWLockExclusive(&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>'::`7'::lock);
    v2 = v7[0];
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)v7[0] + 48LL))(v7[0], v11[0], &v8);
    if ( v8 )
    {
      *a1 = v8;
      ReleaseSRWLockExclusive_0(&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>'::`7'::lock);
      if ( v5 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, _BYTE *))(*(_QWORD *)v2 + 80LL))(v2, v11[0], v5, v9);
      if ( v6 < 0 )
        winrt::throw_hresult((unsigned int)v6);
      *a1 = v5;
      ReleaseSRWLockExclusive_0(&`winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>'::`7'::lock);
    }
  }
  if ( v2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v7);
  return a1;
}
