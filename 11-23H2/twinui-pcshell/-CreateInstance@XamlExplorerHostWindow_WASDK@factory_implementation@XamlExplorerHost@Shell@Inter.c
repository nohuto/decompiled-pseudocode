/*
 * XREFs of ?CreateInstance@XamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@67@@Z @ 0x1804FB47C
 * Callers:
 *     ?CreateInstance@?$produce@UXamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDKFactory@34567@@impl@winrt@@UEAAHIURect@Foundation@Windows@3@PEAPEAX@Z @ 0x1804FB400 (-CreateInstance@-$produce@UXamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@.c)
 * Callees:
 *     ?Current@?$consume_Windows_Internal_Shell_XamlExplorerHost_WASDK_IXamlApplication_WASDKStatics@UIXamlApplication_WASDKStatics@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18004A3D4 (-Current@-$consume_Windows_Internal_Shell_XamlExplorerHost_WASDK_IXamlApplication_WASDKStatics@U.c)
 *     ??$as@UIXamlApplication_WASDKStatics@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@7@$0A@@impl@winrt@@YA?AUIXamlApplication_WASDKStatics@WASDK@XamlExplorerHost@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18004A448 (--$as@UIXamlApplication_WASDKStatics@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@Utype@.c)
 *     ??$make_factory@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18004A604 (--$make_factory@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Inter.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x1804FADE8 (--0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QE.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow_WASDK::CreateInstance(
        winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow_WASDK *this,
        _QWORD *a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        const struct winrt::Windows::Foundation::Rect *a4)
{
  int v5; // esi
  __int64 (__fastcall ***v7)(_QWORD, void *, _QWORD **); // rbx
  char *v8; // rbx
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, void *, _QWORD **); // [rsp+28h] [rbp-18h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-10h] BYREF

  v5 = (int)a3;
  v12[0] = a2;
  winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>(&v11);
  v7 = v11;
  winrt::impl::as<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::IXamlApplication_WASDKStatics,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v10,
    v11);
  winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_WASDK_IXamlApplication_WASDKStatics<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::IXamlApplication_WASDKStatics>::Current(
    &v10,
    v12);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  v8 = (char *)operator new(0x70uLL);
  v11 = (__int64 (__fastcall ***)(_QWORD, void *, _QWORD **))v8;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::XamlExplorerHostWindow_WASDK(
    (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *)v8,
    v5,
    a4,
    136);
  *(_QWORD *)v8 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>>'};
  *((_QWORD *)v8 + 3) = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>'};
  *a2 = v8 + 8;
  if ( v12[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v12);
  return a2;
}
