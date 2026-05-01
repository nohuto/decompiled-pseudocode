/*
 * XREFs of ??0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@PEAUHWND__@@AEBUhstring@6@@Z @ 0x1800F536C
 * Callers:
 *     ?CreateWithParent@XamlExplorerHostShellComponent@@UEAAJ_KPEAUHSTRING__@@PEAPEAUIXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@ABI@@@Z @ 0x1800F2930 (-CreateWithParent@XamlExplorerHostShellComponent@@UEAAJ_KPEAUHSTRING__@@PEAPEAUIXamlExplorerHost.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$call@P6A?AUWindow@Xaml@UI@Windows@winrt@@AEBUIWindowStatics@2345@@Z@?$factory_cache_entry@UWindow@Xaml@UI@Windows@winrt@@UIWindowStatics@2345@@impl@winrt@@QEAA?AUWindow@Xaml@UI@Windows@2@$$QEAP6A?AU34562@AEBUIWindowStatics@4562@@Z@Z @ 0x180067148 (--$call@P6A-AUWindow@Xaml@UI@Windows@winrt@@AEBUIWindowStatics@2345@@Z@-$factory_cache_entry@UWi.c)
 *     ??$as@UIWindowPrivate@Xaml@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIWindowPrivate@Xaml@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800F2A5C (--$as@UIWindowPrivate@Xaml@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@i.c)
 *     ??$as@UIDesktopWindowXamlSourceNative2@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIDesktopWindowXamlSourceNative2@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800F2AC4 (--$as@UIDesktopWindowXamlSourceNative2@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@w.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800F2CB4 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1800F3F24 (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Current@?$consume_Windows_UI_Xaml_IWindowStatics@UIWindowStatics@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUWindow@Xaml@UI@Windows@3@XZ @ 0x180170348 (-Current@-$consume_Windows_UI_Xaml_IWindowStatics@UIWindowStatics@Xaml@UI@Windows@winrt@@@impl@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=9
winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::XamlExplorerHostChildWindow(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *this,
        HWND a2,
        winrt::impl **a3)
{
  __int64 *v6; // r14
  struct winrt::impl::hstring_header *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v13; // rdx
  int v14; // eax
  void (__fastcall *v16[3])(__int64, __int64 *); // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+88h] [rbp+50h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, void *, __int64 *); // [rsp+90h] [rbp+58h] BYREF
  __int64 v19; // [rsp+98h] [rbp+60h] BYREF

  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::`vftable';
  *((_QWORD *)this + 3) = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::`vftable';
  winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource((winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *)((char *)this + 32));
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v6 = (__int64 *)((char *)this + 56);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = winrt::impl::duplicate_hstring(*a3, v7);
  *((_QWORD *)this + 10) = a2;
  *((_BYTE *)this + 88) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  winrt::impl::as<IDesktopWindowXamlSourceNative2,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v17,
    *((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 4));
  if ( (__int64 *)((char *)this + 56) == &v17 )
  {
    v9 = v17;
  }
  else
  {
    if ( *v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 7);
    v8 = v17;
    v9 = 0LL;
    v17 = 0LL;
    *v6 = v8;
  }
  if ( v9 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v17);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v6 + 24LL))(*v6, *((_QWORD *)this + 10));
  if ( v10 < 0 )
    winrt::throw_hresult((unsigned int)v10);
  v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v6 + 32LL))(*v6, (char *)this + 64);
  if ( v11 < 0 )
    winrt::throw_hresult((unsigned int)v11);
  v16[1] = (void (__fastcall *)(__int64, __int64 *))&qword_1807B43D8;
  _InterlockedIncrement64(&qword_1807B43D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Window,winrt::Windows::UI::Xaml::IWindowStatics> )
  {
    winrt::impl::consume_Windows_UI_Xaml_IWindowStatics<winrt::Windows::UI::Xaml::IWindowStatics>::Current(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Window,winrt::Windows::UI::Xaml::IWindowStatics>,
      &v18);
    _InterlockedDecrement64(&qword_1807B43D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B43D8);
    v16[0] = (void (__fastcall *)(__int64, __int64 *))&_lambda_43d092c5da9a5068682fa4571a07bb24_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Window,winrt::Windows::UI::Xaml::IWindowStatics>::call<winrt::Windows::UI::Xaml::Window (*)(winrt::Windows::UI::Xaml::IWindowStatics const &)>(
      v12,
      (__int64)&v18,
      v16);
  }
  winrt::impl::as<winrt::Windows::UI::Xaml::IWindowPrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v19,
    v18);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  LOBYTE(v13) = 1;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 56LL))(v19, v13);
  if ( v14 < 0 )
    winrt::throw_hresult((unsigned int)v14);
  ShowWindow(*((HWND *)this + 8), 8);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  return this;
}
