/*
 * XREFs of ?CreateInstance@XamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@67@@Z @ 0x1804F99FC
 * Callers:
 *     ?CreateInstance@?$produce@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindowFactory@34567@@impl@winrt@@UEAAHIURect@Foundation@Windows@3@PEAPEAX@Z @ 0x1804F9980 (-CreateInstance@-$produce@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@.c)
 * Callees:
 *     ??$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@@Z @ 0x18007FBD4 (--$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AE.c)
 *     ?Current@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlApplicationStatics@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B1790 (-Current@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlApplicationStatics@UIXamlApplica.c)
 *     ??$as@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800B1804 (--$as@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnkn.c)
 *     ??$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1800B44A4 (--$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow::CreateInstance(
        winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow *this,
        _QWORD *a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        const struct winrt::Windows::Foundation::Rect *a4)
{
  int v5; // esi
  __int64 (__fastcall ***v8)(_QWORD, void *, _QWORD **); // [rsp+20h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF

  v5 = (int)a3;
  v9[0] = a2;
  winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication>(&v8);
  winrt::impl::as<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v10,
    v8);
  winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlApplicationStatics<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>::Current(
    &v10,
    v9);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  LODWORD(v10) = v5;
  winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,unsigned int &,winrt::Windows::Foundation::Rect const &>(
    a2,
    (unsigned int *)&v10,
    a4);
  if ( v9[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v9);
  return a2;
}
