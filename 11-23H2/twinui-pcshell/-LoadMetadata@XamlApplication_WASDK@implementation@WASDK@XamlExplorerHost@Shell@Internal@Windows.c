/*
 * XREFs of ?LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002E2C8
 * Callers:
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002F0C4 (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     ??$as@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18002E438 (--$as@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@winrt@@Utype@-$abi@UIUnknown@Foundation@Wi.c)
 *     ??$ActivateInstance@UXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@3@XZ @ 0x18002E4C0 (--$ActivateInstance@UXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@@IAc.c)
 *     ?MicrosoftUIXamlMarkupXamlMetadataProvider@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions4@UXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002E5FC (-MicrosoftUIXamlMarkupXamlMetadataProvider@-$consume_WindowsUdk_ApplicationModel_AppExtensions_I.c)
 *     ??$call@P6A?AUXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@AEBUIActivationFactory@Foundation@Windows@6@@Z@?$factory_cache_entry@UXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@UIActivationFactory@Foundation@Windows@6@@impl@winrt@@QEAA?A_P$$QEAP6A?AUXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x18002E6C8 (--$call@P6A-AUXamlControlsXamlMetaDataProvider@XamlTypeInfo@Xaml@UI@Microsoft@winrt@@AEBUIActiva.c)
 *     ?WinAppSDKCohabitation_RegisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x18002EC98 (-WinAppSDKCohabitation_RegisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ.c)
 *     ?WinAppSDKCohabitation_UnregisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x18002ECE0 (-WinAppSDKCohabitation_UnregisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Current@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensionsStatics@UIXamlExtensionsStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010DE58 (-Current@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensionsStatics@UIXamlExtens.c)
 *     ??$call@P6A?AUXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@AEBUIXamlExtensionsStatics@2345@@Z@?$factory_cache_entry@UXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIXamlExtensionsStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@2@AEBUIXamlExtensionsStatics@4562@@Z@Z @ 0x18010E62C (--$call@P6A-AUXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@AEBUIXamlExtension.c)
 *     ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x1801106AC (-Instance@WinUICohabitationFunctions@@SAPEAV1@XZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::LoadMetadata(
        winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK *this)
{
  _QWORD *v2; // rax
  WinUICohabitationFunctions *v3; // rax
  __int64 v4; // rcx
  WinUICohabitationFunctions *v5; // rax
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  char v7; // [rsp+29h] [rbp-47h]
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 (__fastcall *v10)(const struct winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics *); // [rsp+48h] [rbp-28h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h] BYREF

  v9[1] = &qword_18098E248;
  _InterlockedIncrement64(&qword_18098E248);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions,winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics> )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensionsStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics>::Current(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions,winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics>,
      &v12);
    _InterlockedDecrement64(&qword_18098E248);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E248);
    v10 = _lambda_fbc83b1fe666e9204d492b54b5fecab0_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions,winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics>::call<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions (*)(winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics const &)>(
      this,
      &v12,
      &v10);
  }
  if ( v12 )
  {
    v2 = (_QWORD *)winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions4<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions>::MicrosoftUIXamlMarkupXamlMetadataProvider(
                     &v12,
                     v9);
    winrt::impl::as<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v8,
      *v2);
    winrt::Windows::Foundation::IUnknown::operator=((char *)this + 48, &v8);
    if ( v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
    if ( v9[0] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v9);
  }
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  v3 = WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinAppSDKCohabitation_RegisterWASDKThreadWrapper(v3);
  v7 = 1;
  v11[1] = &qword_18098E848;
  _InterlockedIncrement64(&qword_18098E848);
  if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider>(
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider,winrt::Windows::Foundation::IActivationFactory>,
      &v6);
    _InterlockedDecrement64(&qword_18098E848);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E848);
    v11[0] = _lambda_294131ddbaaaaf7894731207a68c541a_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      v4,
      &v6,
      v11);
  }
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 56, &v6);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  v5 = WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinAppSDKCohabitation_UnregisterWASDKThreadWrapper(v5);
}
