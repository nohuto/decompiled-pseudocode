/*
 * XREFs of ?CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180026650
 * Callers:
 *     <none>
 * Callees:
 *     ??$call@AEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?AUIInspectable@Foundation@Windows@2@AEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@Z @ 0x1800268D4 (--$call@AEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@-$factory_cache_entry@UExtensionFactory@.c)
 *     ??R_lambda_17915759651d00fc5bcd487b5cca7e74_@@QEBA?AUIInspectable@Foundation@Windows@winrt@@AEBUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@4@@Z @ 0x1800269FC (--R_lambda_17915759651d00fc5bcd487b5cca7e74_@@QEBA-AUIInspectable@Foundation@Windows@winrt@@AEBU.c)
 *     ??$as@UIDashboardExtensionStatics@Dashboard@Shell@UI@WindowsUdk@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIDashboardExtensionStatics@Dashboard@Shell@UI@WindowsUdk@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180026B94 (--$as@UIDashboardExtensionStatics@Dashboard@Shell@UI@WindowsUdk@winrt@@Utype@-$abi@UIUnknown@Fou.c)
 *     ?GetDefault@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtensionStatics@UIDashboardExtensionStatics@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@3@XZ @ 0x180026BFC (-GetDefault@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtensionStatics@UIDashboardExtens.c)
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x18002703C (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x1800CDEAC (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardActivator::CreateInstance(
        winrt::Windows::Internal::Shell::implementation::DashboardActivator *this,
        struct IUnknown *a2,
        struct _EVENT_DATA_DESCRIPTOR *a3,
        void **a4)
{
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  const char *v9; // r9
  ULONG v11; // [rsp+20h] [rbp-D8h]
  int v12; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v17[8]; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v18[4]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v19[32]; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v20[32]; // [rsp+A0h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+C0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v6 = *(_DWORD **)(wil::details::static_lazy<DashboardManagerTelemetry>::get(
                      this,
                      _lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v6 > 5u )
    tlgWriteTransfer_EventWriteTransfer((int)v6, (int)&dword_1806CC303, 0, 0, 2u, &v21);
  *a4 = 0LL;
  v12 = 16;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v20,
    L"WindowsUdk.UI.Shell.Dashboard.DashboardExtension",
    0x30uLL);
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v19,
    L"com.microsoft.windows.extension.dashboard",
    0x29uLL);
  v18[0] = v19;
  v18[1] = v20;
  v18[2] = &v12;
  v18[3] = &qword_1807B4118;
  _InterlockedIncrement64(&qword_1807B4118);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics> )
  {
    _lambda_17915759651d00fc5bcd487b5cca7e74_::operator()(
      v18,
      &v14,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>);
    _InterlockedDecrement64(&qword_1807B4118);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B4118);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::call<_lambda_17915759651d00fc5bcd487b5cca7e74_ &>(
      v7,
      &v14,
      v18);
  }
  v16 = 0LL;
  if ( (unsigned __int8)winrt::Windows::Foundation::operator==(&v14, &v16) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5BD,
      (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)0x80070490LL,
      v11);
  v8 = v14;
  winrt::impl::as<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtensionStatics,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v15,
    v14);
  winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtensionStatics<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtensionStatics>::GetDefault(
    &v15,
    &v13);
  v16 = 0LL;
  if ( (unsigned __int8)winrt::Windows::Foundation::operator==(&v13, &v16) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5C3,
      (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)0x8000FFFFLL,
      v11);
  v21 = *a3;
  v9 = (const char *)*(unsigned int *)winrt::Windows::Foundation::IUnknown::as(&v13, v17, &v21, a4);
  if ( (int)v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5C4,
      (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      v9,
      v11);
  if ( v13 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  if ( v15 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  return 0LL;
}
