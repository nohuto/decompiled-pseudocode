/*
 * XREFs of ?Initialize@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x1800B0DB8
 * Callers:
 *     ??0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_KAEBUhstring@6@@Z @ 0x1800B160C (--0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     ??0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_K0AEBUhstring@6@@Z @ 0x1804F716C (--0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windo_ea_1804F716C.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$call@P6A?AUWindow@Xaml@UI@Windows@winrt@@AEBUIWindowStatics@2345@@Z@?$factory_cache_entry@UWindow@Xaml@UI@Windows@winrt@@UIWindowStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUWindow@Xaml@UI@Windows@2@AEBUIWindowStatics@4562@@Z@Z @ 0x1800AECA0 (--$call@P6A-AUWindow@Xaml@UI@Windows@winrt@@AEBUIWindowStatics@2345@@Z@-$factory_cache_entry@UWi.c)
 *     ??$as@UIWindowPrivate@Xaml@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIWindowPrivate@Xaml@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800B0F40 (--$as@UIWindowPrivate@Xaml@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@i.c)
 *     ??$as@UIDesktopWindowXamlSourceNative2@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIDesktopWindowXamlSourceNative2@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800B0FC8 (--$as@UIDesktopWindowXamlSourceNative2@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@w.c)
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1800B1050 (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?TransparentBackground@?$consume_Windows_UI_Xaml_IWindowPrivate@UIWindowPrivate@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1800B113C (-TransparentBackground@-$consume_Windows_UI_Xaml_IWindowPrivate@UIWindowPrivate@Xaml@UI@Windows@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?Current@?$consume_Windows_UI_Xaml_IWindowStatics@UIWindowStatics@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801AEDB8 (-Current@-$consume_Windows_UI_Xaml_IWindowStatics@UIWindowStatics@Xaml@UI@Windows@winrt@@@impl@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::Initialize(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  HWND *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF
  __int64 v15; // [rsp+80h] [rbp+30h] BYREF
  __int64 (__fastcall *v16)(const struct winrt::Windows::UI::Xaml::IWindowStatics *); // [rsp+88h] [rbp+38h] BYREF

  v4 = winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource((winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource *)&v15);
  winrt::Windows::Foundation::IUnknown::operator=(a1 + 4, v4);
  if ( v15 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  winrt::impl::as<IDesktopWindowXamlSourceNative2,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v14,
    a1[4]);
  v5 = a1 + 7;
  if ( a1 + 7 == &v14 )
  {
    v7 = v14;
  }
  else
  {
    if ( *v5 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1 + 7);
    v6 = v14;
    v7 = 0LL;
    v14 = 0LL;
    *v5 = v6;
  }
  if ( v7 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v14);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, a1[10]);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  v9 = *v5;
  v10 = *(_QWORD *)*v5;
  v11 = (HWND *)(a1 + 8);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v10 + 32))(v9, a1 + 8);
  if ( v12 < 0 )
    winrt::throw_hresult((unsigned int)v12);
  _InterlockedIncrement64(&qword_18098E748);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Window,winrt::Windows::UI::Xaml::IWindowStatics> )
  {
    winrt::impl::consume_Windows_UI_Xaml_IWindowStatics<winrt::Windows::UI::Xaml::IWindowStatics>::Current(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Window,winrt::Windows::UI::Xaml::IWindowStatics>,
      &v14);
    _InterlockedDecrement64(&qword_18098E748);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E748);
    v16 = _lambda_43d092c5da9a5068682fa4571a07bb24_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Window,winrt::Windows::UI::Xaml::IWindowStatics>::call<winrt::Windows::UI::Xaml::Window (*)(winrt::Windows::UI::Xaml::IWindowStatics const &)>(
      v13,
      (__int64)&v14,
      (void (__fastcall **)(__int64, __int64 *))&v16);
  }
  winrt::impl::as<winrt::Windows::UI::Xaml::IWindowPrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v15,
    v14);
  if ( v14 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  winrt::impl::consume_Windows_UI_Xaml_IWindowPrivate<winrt::Windows::UI::Xaml::IWindowPrivate>::TransparentBackground(&v15);
  if ( *(_BYTE *)(a2 + 8) )
    SetWindowPos(*v11, *(HWND *)a2, 0, 0, 0, 0, 0x213u);
  ShowWindow(*v11, 8);
  if ( v15 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
}
