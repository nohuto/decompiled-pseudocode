/*
 * XREFs of ?CreateInstance2@XamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_K0AEBUhstring@7@@Z @ 0x1804F7688
 * Callers:
 *     ?CreateInstance2@?$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindowFactory@34567@@impl@winrt@@UEAAH_K0PEAXPEAPEAX@Z @ 0x1804F75E0 (-CreateInstance2@-$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@.c)
 * Callees:
 *     ?Current@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlApplicationStatics@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B1790 (-Current@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlApplicationStatics@UIXamlApplica.c)
 *     ??$as@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800B1804 (--$as@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnkn.c)
 *     ??$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1800B44A4 (--$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_K0AEBUhstring@6@@Z @ 0x1804F716C (--0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windo_ea_1804F716C.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow::CreateInstance2(
        winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow *this,
        _QWORD *a2,
        struct winrt::impl::hstring_header *a3,
        const struct winrt::hstring *a4,
        winrt::impl **a5)
{
  __int64 (__fastcall ***v8)(_QWORD, void *, _QWORD **); // rbx
  char *v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, void *, _QWORD **); // [rsp+28h] [rbp-18h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-10h] BYREF

  v13[0] = a2;
  winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication>(&v12);
  v8 = v12;
  winrt::impl::as<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v11,
    v12);
  winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlApplicationStatics<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>::Current(
    &v11,
    v13);
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  v9 = (char *)operator new(0x78uLL);
  v12 = (__int64 (__fastcall ***)(_QWORD, void *, _QWORD **))v9;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::XamlExplorerHostChildWindow(
    (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *)v9,
    a3,
    (__int64)a4,
    a5);
  *(_QWORD *)v9 = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::`vftable';
  *a2 = v9 + 16;
  if ( v13[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v13);
  return a2;
}
