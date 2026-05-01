/*
 * XREFs of ?LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18010DF78
 * Callers:
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18010ED44 (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Current@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensionsStatics@UIXamlExtensionsStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010DE58 (-Current@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensionsStatics@UIXamlExtens.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@45@@impl@winrt@@QEBA@I@Z @ 0x18010E1DC (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UIXamlMetadataProvide.c)
 *     ?DefaultProviders@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA?AU?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@56@XZ @ 0x18010E23C (-DefaultProviders@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA-AU-$IVectorVi.c)
 *     ?XamlMetadataProvider@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions@UIXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010E310 (-XamlMetadataProvider@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions@UIXaml.c)
 *     ??$capture@UIObjMgr@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA?AU?$com_ptr@UIObjMgr@@@0@A6AHAEBUguid@0@PEAXI0PEAPEAX@_E0AEAPEAXAEAI@Z @ 0x18010E384 (--$capture@UIObjMgr@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA-AU-$com_pt.c)
 *     ??$as@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@UIObjMgr@@$0A@@impl@winrt@@YA?AUIXamlMetadataProvider@Markup@Xaml@UI@Windows@1@PEAUIObjMgr@@@Z @ 0x18010E404 (--$as@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@UIObjMgr@@$0A@@impl@winrt@@YA-AUIXaml.c)
 *     ??$call@P6A?AUXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@AEBUIXamlExtensionsStatics@2345@@Z@?$factory_cache_entry@UXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIXamlExtensionsStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@2@AEBUIXamlExtensionsStatics@4562@@Z@Z @ 0x18010E62C (--$call@P6A-AUXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@AEBUIXamlExtension.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::LoadMetadata(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication *this,
        __int64 a2)
{
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  GUID v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10[2]; // [rsp+40h] [rbp-40h] BYREF
  const struct winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics *(__fastcall *v11)(const struct winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics *, __int64); // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp-20h] BYREF
  __int64 v14; // [rsp+68h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp-10h] BYREF

  v9 = CLSID_XamlRuntimeSiteAggregator;
  v11 = 0LL;
  LODWORD(v12) = 1;
  ___capture_UIObjMgr__A6AHAEBUguid_winrt__PEAXI0PEAPEAX__EAEBU23_AEAPEAXAEAI_winrt__YA_AU__com_ptr_UIObjMgr___0_A6AHAEBUguid_0_PEAXI0PEAPEAX__E0AEAPEAXAEAI_Z(
    v10,
    a2,
    &v9,
    &v11,
    &v12);
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::DefaultProviders(&v15);
  v3 = 0;
  LODWORD(v14) = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 56LL))(v15, &v14);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  v6 = v10[0];
  while ( v3 != (_DWORD)v14 )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetAt(
      &v15,
      &v13,
      v3);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, v13);
    if ( v13 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
    ++v3;
  }
  v10[1] = (__int64)&qword_18098E248;
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
    v11 = _lambda_fbc83b1fe666e9204d492b54b5fecab0_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions,winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics>::call<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions (*)(winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics const &)>(
      v5,
      &v12,
      &v11);
  }
  v7 = v10[0];
  if ( v12 )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions<winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensions>::XamlMetadataProvider(
      &v12,
      &v14);
    v8 = v14;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, v14);
    if ( v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  }
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  winrt::impl::as<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,IObjMgr,0>(&v13, v7);
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 64, &v13);
  if ( v13 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  if ( v15 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  if ( v7 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v10);
}
