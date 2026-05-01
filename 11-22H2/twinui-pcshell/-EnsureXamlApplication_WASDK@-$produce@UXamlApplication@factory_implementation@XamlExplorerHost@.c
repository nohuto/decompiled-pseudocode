/*
 * XREFs of ?EnsureXamlApplication_WASDK@?$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplicationStatics@34567@@impl@winrt@@UEAAHXZ @ 0x1804F5740
 * Callers:
 *     <none>
 * Callees:
 *     ?Current@?$consume_Windows_Internal_Shell_XamlExplorerHost_WASDK_IXamlApplication_WASDKStatics@UIXamlApplication_WASDKStatics@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18004A3D4 (-Current@-$consume_Windows_Internal_Shell_XamlExplorerHost_WASDK_IXamlApplication_WASDKStatics@U.c)
 *     ??$as@UIXamlApplication_WASDKStatics@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@7@$0A@@impl@winrt@@YA?AUIXamlApplication_WASDKStatics@WASDK@XamlExplorerHost@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18004A448 (--$as@UIXamlApplication_WASDKStatics@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@Utype@.c)
 *     ??$make_factory@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18004A604 (--$make_factory@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Inter.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>::EnsureXamlApplication_WASDK(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v3)(_QWORD, void *, _QWORD **); // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  try
  {
    winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>(&v3);
    winrt::impl::as<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::IXamlApplication_WASDKStatics,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v2,
      v3);
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_WASDK_IXamlApplication_WASDKStatics<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::IXamlApplication_WASDKStatics>::Current(
      &v2,
      &v4);
    if ( v2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v2);
    if ( v3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
    if ( v4 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v2);
  }
  return result;
}
