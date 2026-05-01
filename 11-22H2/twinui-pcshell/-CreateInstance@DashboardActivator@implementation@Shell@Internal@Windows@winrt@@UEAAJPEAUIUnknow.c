/*
 * XREFs of ?CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087710
 * Callers:
 *     <none>
 * Callees:
 *     ??1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ @ 0x180085B0C (--1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$as@UIDashboardExtensionStatics@Dashboard@Shell@UI@WindowsUdk@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x180087A80 (--$as@UIDashboardExtensionStatics@Dashboard@Shell@UI@WindowsUdk@winrt@@@IUnknown@Foundation@Wind.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180087AA4 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x180088000 (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     ?GetDefault@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtensionStatics@UIDashboardExtensionStatics@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180088098 (-GetDefault@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtensionStatics@UIDashboardExtens.c)
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0AEBW4AppExtensionOptions@2345@@Z @ 0x180088154 (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@par.c)
 *     ??$?0$00@guid@winrt@@QEAA@AEBU_GUID@@@Z @ 0x18008857C (--$-0$00@guid@winrt@@QEAA@AEBU_GUID@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18008EED8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??1?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FBC (--1-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@wi.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B2564 (-Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _anonymous_namespace_::GetDashboardExtensionName @ 0x18023BFA8 (_anonymous_namespace_--GetDashboardExtensionName.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x18024877C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardActivator::CreateInstance(
        winrt::Windows::Internal::Shell::implementation::DashboardActivator *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  const struct _tlgProvider_t *v6; // rax
  const char *v7; // r9
  _BYTE *v8; // rcx
  const char *v9; // r9
  const char *v10; // r9
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v13[8]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v14[8]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v15[8]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v17[32]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v18[4]; // [rsp+68h] [rbp-40h] BYREF
  _QWORD v19[2]; // [rsp+88h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v6 = DashboardManagerTelemetry::Provider();
  if ( *(_DWORD *)v6 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v6,
      &unk_18087649B,
      0LL);
  *a4 = 0LL;
  try
  {
    v12 = 16;
    v19[1] = 48LL;
    v19[0] = L"WindowsUdk.UI.Shell.Dashboard.DashboardExtension";
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
    {
      winrt::param::hstring::hstring(v17, v19);
      v18[0] = *(_QWORD *)anonymous_namespace_::GetDashboardExtensionName((winrt::hstring *)v16);
      winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
        (const struct winrt::param::hstring *)v14,
        (const struct winrt::param::hstring *)v18,
        (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v17);
      winrt::hstring::~hstring((winrt::hstring *)v16);
      v19[0] = 0LL;
      if ( (unsigned __int8)winrt::Windows::Foundation::operator==(v14, v19) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xA8F,
          (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          (const char *)0x80070490LL,
          v12);
      winrt::Windows::Foundation::IUnknown::as<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtensionStatics>(
        v14,
        v15);
      winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtensionStatics<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtensionStatics>::GetDefault(
        v15,
        v13);
      v19[0] = 0LL;
      if ( (unsigned __int8)winrt::Windows::Foundation::operator==(v13, v19) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xA92,
          (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          (const char *)0x8000FFFFLL,
          v12);
      winrt::guid::guid((winrt::guid *)v19, a3);
      v7 = (const char *)*(unsigned int *)winrt::Windows::Foundation::IUnknown::as(v13, &v12, v19, a4);
      if ( (int)v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xA93,
          (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          v7,
          v12);
      winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>(v13);
      winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection((winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *)v15);
      v8 = v14;
    }
    else
    {
      winrt::param::hstring::hstring(v18, v19);
      winrt::param::hstring::create_string_reference(
        (winrt::param::hstring *)v17,
        L"com.microsoft.windows.extension.dashboard",
        0x29uLL);
      winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
        (const struct winrt::param::hstring *)v13,
        (const struct winrt::param::hstring *)v17,
        (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v18);
      v19[0] = 0LL;
      if ( (unsigned __int8)winrt::Windows::Foundation::operator==(v13, v19) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xA9C,
          (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          (const char *)0x80070490LL,
          v12);
      winrt::Windows::Foundation::IUnknown::as<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtensionStatics>(
        v13,
        v15);
      winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtensionStatics<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtensionStatics>::GetDefault(
        v15,
        v14);
      v19[0] = 0LL;
      if ( (unsigned __int8)winrt::Windows::Foundation::operator==(v14, v19) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xAA2,
          (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          (const char *)0x8000FFFFLL,
          v12);
      winrt::guid::guid((winrt::guid *)v19, a3);
      v9 = (const char *)*(unsigned int *)winrt::Windows::Foundation::IUnknown::as(v14, &v12, v19, a4);
      if ( (int)v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xAA3,
          (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
          v9,
          v12);
      winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>(v14);
      winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection((winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *)v15);
      v8 = v13;
    }
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAA8,
                           (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v10);
  }
  return result;
}
