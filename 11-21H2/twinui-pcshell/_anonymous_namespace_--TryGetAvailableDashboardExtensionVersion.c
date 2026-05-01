/*
 * XREFs of _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1801CC024
 * Callers:
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x1800FA308 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@9@@Z @ 0x1801C836C (-GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180066424 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800E6350 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1800F5080 (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800F76BC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA?AUIInspectable@Foundation@Windows@3@AEBUhstring@param@3@@Z @ 0x1800F79F0 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     ??$try_as@UIPropertySet@Collections@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUIPropertySet@Collections@123@XZ @ 0x1800F7ACC (--$try_as@UIPropertySet@Collections@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt.c)
 *     ?ExtensionProperties@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUPropertySet@Collections@Foundation@Windows@3@XZ @ 0x1800FB8EC (-ExtensionProperties@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppExte.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800FBCF4 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18017BD80 (-Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x180187B70 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x1801C4268 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     _anonymous_namespace_::TryGetTextFromProperty @ 0x1801CC24C (_anonymous_namespace_--TryGetTextFromProperty.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall anonymous_namespace_::TryGetAvailableDashboardExtensionVersion(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  winrt::Windows::Foundation::IUnknown *v5; // rax
  const unsigned __int16 *v6; // rdi
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r9
  unsigned __int16 *v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  volatile signed __int32 *v17; // [rsp+30h] [rbp-19h] BYREF
  void (__fastcall ***v18)(_QWORD, void *, __int64 *); // [rsp+38h] [rbp-11h] BYREF
  __int64 v19; // [rsp+40h] [rbp-9h] BYREF
  volatile signed __int32 *v20; // [rsp+48h] [rbp-1h] BYREF
  __int64 v21; // [rsp+50h] [rbp+7h] BYREF
  __int64 v22[3]; // [rsp+58h] [rbp+Fh] BYREF
  void *v23[4]; // [rsp+70h] [rbp+27h] BYREF

  v21 = a1;
  LODWORD(v17) = 8;
  v23[0] = *(void **)winrt::hstring::hstring((winrt::hstring *)&v20, L"com.microsoft.windows.extension.dashboard");
  winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
    (const struct winrt::param::hstring *)&v19,
    (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v23,
    (__int64)&v17);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v20, v2, v3, v4);
  if ( !v19 )
    goto LABEL_7;
  winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtension>::ExtensionProperties(
    &v19,
    &v18);
  if ( !v18 )
  {
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v18);
LABEL_7:
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v19);
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  winrt::param::hstring::hstring((winrt::param::hstring *)v23, L"Version");
  v5 = winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
         &v18,
         (winrt::Windows::Foundation::IUnknown *)&v21,
         v23);
  winrt::Windows::Foundation::IUnknown::try_as<winrt::Windows::Foundation::Collections::IPropertySet>(
    (void (__fastcall ****)(_QWORD, void *, __int64 *))v5,
    &v20);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v21);
  anonymous_namespace_::TryGetTextFromProperty((winrt::hstring *)&v17);
  v6 = winrt::hstring::c_str((winrt::hstring *)&v17);
  v8 = DashboardManagerTelemetry::Provider(v7);
  if ( *(_DWORD *)v8 > 5u )
  {
    v21 = (__int64)v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (int)v8,
      (int)&dword_1806CBE2D,
      0,
      v9,
      (const WCHAR **)&v21);
  }
  v10 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&v17);
  std::wstring::wstring(v23, v10);
  v12 = anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion(v22, (__int64)v23, v11);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = *v12;
  *(_QWORD *)(a1 + 8) = v12[1];
  *(_QWORD *)(a1 + 16) = v12[2];
  *v12 = 0LL;
  v12[1] = 0LL;
  v12[2] = 0LL;
  *(_BYTE *)(a1 + 24) = 1;
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)v22);
  std::wstring::~wstring(v23);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v17, v13, v14, v15);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v20);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v18);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v19);
  return a1;
}
