/*
 * XREFs of ?CreateInstance@XamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_KAEBUhstring@7@@Z @ 0x18004A30C
 * Callers:
 *     ?CreateInstance@?$produce@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDKFactory@34567@@impl@winrt@@UEAAH_KPEAXPEAPEAX@Z @ 0x18004A2A0 (-CreateInstance@-$produce@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorer.c)
 * Callees:
 *     ?Current@?$consume_Windows_Internal_Shell_XamlExplorerHost_WASDK_IXamlApplication_WASDKStatics@UIXamlApplication_WASDKStatics@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18004A3D4 (-Current@-$consume_Windows_Internal_Shell_XamlExplorerHost_WASDK_IXamlApplication_WASDKStatics@U.c)
 *     ??$as@UIXamlApplication_WASDKStatics@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@7@$0A@@impl@winrt@@YA?AUIXamlApplication_WASDKStatics@WASDK@XamlExplorerHost@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18004A448 (--$as@UIXamlApplication_WASDKStatics@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@Utype@.c)
 *     ??0XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_KAEBUhstring@6@@Z @ 0x18004A534 (--0XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winr.c)
 *     ??$make_factory@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18004A604 (--$make_factory@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Inter.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK::CreateInstance(
        winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK *this,
        _QWORD *a2,
        const struct winrt::hstring *a3,
        const struct winrt::hstring *a4)
{
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *v7; // rbx
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *v8; // rbx
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *v11; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-10h] BYREF

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
  v8 = (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *)operator new(0x88uLL);
  v11 = v8;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::XamlExplorerHostChildWindow_WASDK(
    v8,
    (unsigned __int64)a3,
    a4);
  *(_QWORD *)v8 = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::`vftable';
  *a2 = (char *)v8 + 16;
  if ( v12[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v12);
  return a2;
}
